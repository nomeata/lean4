/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Grind.Lemmas
import Lean.Meta.Tactic.Assert
import Lean.Meta.Tactic.Grind.Simp
import Lean.Meta.Tactic.Grind.Types
import Lean.Meta.Tactic.Grind.Cases
import Lean.Meta.Tactic.Grind.CasesMatch
import Lean.Meta.Tactic.Grind.Injection
import Lean.Meta.Tactic.Grind.Core
import Lean.Meta.Tactic.Grind.Combinators

namespace Lean.Meta.Grind

private inductive IntroResult where
  | done (goal : Goal)
  | newHyp (fvarId : FVarId) (goal : Goal)
  | newDepHyp (goal : Goal)
  | newLocal (fvarId : FVarId) (goal : Goal)
  deriving Inhabited

/--
Returns `true` if `e` is marked with the `alreadyNorm` gadget.
See `alreadyNorm` documentation for additional details
-/
private def isAlreadyNorm? (e : Expr) : Option Expr :=
  let_expr Lean.Grind.alreadyNorm c := e | none
  some c

/--
Similar to `Grind.preprocess`, but does not simplify `e` if
`isMatchCondCandidate` (aka `Simp.isEqnThmHypothesis`) is `true`.
We added this feature because it may be coming from external sources
(e.g., manually applying an function induction principle before invoking `grind`).
-/
private def preprocessHypothesis (e : Expr) : GoalM Simp.Result := do
  if isMatchCondCandidate e then
    preprocess (markAsPreMatchCond e)
  else if let some c := isAlreadyNorm? e then
    let c ← shareCommon (← canon c)
    return { expr := c }
  else
    preprocess e

/--
Helper function for `mkCleanName`.
It ensures base name is a simple `Name` and does not have a `_<idx>` suffix
-/
private def mkBaseName (name : Name) (type : Expr) : MetaM Name := do
  if let .str _ s := name then
    let pos := s.find (· == '_')
    unless pos < s.endPos do
      return Name.mkSimple s
    let suffix := s.extract (pos+'_') s.endPos
    unless suffix.isNat do
      return Name.mkSimple s
    let s := s.extract ⟨0⟩ pos
    unless s == "" do
      return Name.mkSimple s
  if (← isProp type) then return `h else return `x

private def mkCleanName (name : Name) (type : Expr) : GoalM Name := do
  unless (← getConfig).clean do
    return name
  let mut name := name
  if name.hasMacroScopes then
    name := name.eraseMacroScopes
    if name == `x || name == `a then
      if (← isProp type) then
        name := `h
  if (← get).clean.used.contains name then
    let base ← mkBaseName name type
    let mut i := if let some i := (← get).clean.next.find? base then i else 1
    repeat
      name := base.appendIndexAfter i
      i := i + 1
      unless (← get).clean.used.contains name do
        break
    modify fun s => { s with clean.next := s.clean.next.insert base i }
  modify fun s => { s with clean.used := s.clean.used.insert name }
  return name

private def intro1 : GoalM FVarId := do
  let target ← (← get).mvarId.getType
  let (name, type) ← match target with
    | .forallE n d .. => pure (n, d)
    | .letE n d .. => pure (n, d)
    | _ =>
      let some (n, d, _) := target.letFun? |
        throwError "`grind` internal error, binder expected"
      pure (n, d)
  let name ← mkCleanName name type
  let (fvarId, mvarId) ← (← get).mvarId.intro name
  modify fun s => { s with mvarId }
  return fvarId

private partial def introNext (goal : Goal) (generation : Nat) : GrindM IntroResult := do
  Prod.fst <$> GoalM.run goal do
    let target ← (← get).mvarId.getType
    if target.isForall then
      let p := target.bindingDomain!
      if !(← isProp p) then
        let fvarId ← intro1
        return .newLocal fvarId (← get)
      else
        let mvarId := (← get).mvarId
        let tag ← mvarId.getTag
        let qBase := target.bindingBody!
        let fvarId ← mkFreshFVarId
        let fvar := mkFVar fvarId
        let r ← preprocessHypothesis p
        let lctx := (← getLCtx).mkLocalDecl fvarId (← mkCleanName target.bindingName! r.expr) r.expr target.bindingInfo!
        let mut localInsts ← getLocalInstances
        if let some className ← isClass? r.expr then
          localInsts := localInsts.push { className, fvar }
        match r.proof? with
        | some he =>
          if target.isArrow then
            let q := qBase
            let u ← getLevel q
            let mvarNew ← mkFreshExprMVarAt lctx localInsts q .syntheticOpaque tag
            let mvarIdNew := mvarNew.mvarId!
            mvarIdNew.withContext do
              let h ← mkLambdaFVars #[fvar] mvarNew
              let hNew := mkAppN (mkConst ``Lean.Grind.intro_with_eq [u]) #[p, r.expr, q, he, h]
              mvarId.assign hNew
              return .newHyp fvarId { (← get) with mvarId := mvarIdNew }
          else
            let q := mkLambda target.bindingName! target.bindingInfo! p qBase
            let q' := qBase.instantiate1 (mkApp4 (mkConst ``Eq.mpr_prop) p r.expr he fvar)
            let u ← getLevel q'
            let mvarNew ← mkFreshExprMVarAt lctx localInsts q' .syntheticOpaque tag
            let mvarIdNew := mvarNew.mvarId!
            mvarIdNew.withContext do
              let h ← mkLambdaFVars #[fvar] mvarNew
              let hNew := mkAppN (mkConst ``Lean.Grind.intro_with_eq' [u]) #[p, r.expr, q, he, h]
              mvarId.assign hNew
              return .newHyp fvarId { (← get) with mvarId := mvarIdNew }
        | none =>
          -- `p` and `p'` are definitionally equal
          let q := if target.isArrow then qBase else qBase.instantiate1 (mkFVar fvarId)
          let mvarNew ← mkFreshExprMVarAt lctx localInsts q .syntheticOpaque tag
          let mvarIdNew := mvarNew.mvarId!
          mvarIdNew.withContext do
            let h ← mkLambdaFVars #[mkFVar fvarId] mvarNew
            mvarId.assign h
            return .newHyp fvarId { (← get) with mvarId := mvarIdNew }
    else if target.isLet || target.isLetFun then
      if (← getConfig).zetaDelta then
        let targetNew := expandLet target #[]
        let mvarId := (← get).mvarId
        mvarId.withContext do
          let mvarNew ← mkFreshExprSyntheticOpaqueMVar targetNew (← mvarId.getTag)
          mvarId.assign mvarNew
          introNext { (← get) with mvarId := mvarNew.mvarId! } generation
      else
        let fvarId ← intro1
        (← get).mvarId.withContext do
          let localDecl ← fvarId.getDecl
          if (← isProp localDecl.type) then
            -- Add a non-dependent copy
            let mvarId ← (← get).mvarId.assert (← mkCleanName `h localDecl.type) localDecl.type (mkFVar fvarId)
            return .newDepHyp { (← get) with mvarId }
          else
            let v := (← fvarId.getDecl).value
            let r ← preprocessHypothesis v
            let x ← shareCommon (mkFVar fvarId)
            addNewEq x r.expr (← r.getProof) generation
            return .newLocal fvarId (← get)
    else
      return .done goal

private def isEagerCasesCandidate (goal : Goal) (type : Expr) : Bool := Id.run do
  let .const declName _ := type.getAppFn | return false
  return goal.split.casesTypes.isEagerSplit declName

/-- Returns `true` if `type` is an inductive type with at most one constructor. -/
private def isCheapInductive (type : Expr) : CoreM Bool := do
  let .const declName _ := type.getAppFn | return false
  let .inductInfo info ← getConstInfo declName | return false
  return info.numCtors <= 1

private def applyCases? (goal : Goal) (fvarId : FVarId) : GrindM (Option (List Goal)) := goal.mvarId.withContext do
  /-
  Remark: we used to use `whnfD`. This was a mistake, we don't want to unfold user-defined abstractions.
  Example: `a ∣ b` is defined as `∃ x, b = a * x`
  -/
  let type ← whnf (← fvarId.getType)
  if isEagerCasesCandidate goal type then
    if (← cheapCasesOnly) then
      unless (← isCheapInductive type) do
        return none
    if let .const declName _ := type.getAppFn then
      saveCases declName true
    let mvarIds ← cases goal.mvarId (mkFVar fvarId)
    return mvarIds.map fun mvarId => { goal with mvarId }
  else
    return none

private def applyInjection? (goal : Goal) (fvarId : FVarId) : MetaM (Option Goal) := do
  if let some mvarId ← injection? goal.mvarId fvarId then
    return some { goal with mvarId }
  else
    return none

private def exfalsoIfNotProp (goal : Goal) : MetaM Goal := goal.mvarId.withContext do
  if (← isProp (← goal.mvarId.getType)) then
    return goal
  else
    return { goal with mvarId := (← goal.mvarId.exfalso) }

/-- Introduce new hypotheses (and apply `by_contra`) until goal is of the form `... ⊢ False` -/
partial def intros (generation : Nat) : GrindTactic' := fun goal => do
  let rec go (goal : Goal) : StateRefT (Array Goal) GrindM Unit := do
    if goal.inconsistent then
      return ()
    match (← introNext goal generation) with
    | .done goal =>
      let goal ← exfalsoIfNotProp goal
      if let some mvarId ← goal.mvarId.byContra? then
        go { goal with mvarId }
      else
        modify fun s => s.push goal
    | .newHyp fvarId goal =>
      if let some goals ← applyCases? goal fvarId then
        goals.forM go
      else if let some goal ← applyInjection? goal fvarId then
        go goal
      else
        go (← GoalM.run' goal <| addHypothesis fvarId generation)
    | .newDepHyp goal =>
      go goal
    | .newLocal fvarId goal =>
      if let some goals ← applyCases? goal fvarId then
        goals.forM go
      else
        go goal
  let (_, goals) ← (go goal).run #[]
  return goals.toList

/-- Asserts a new fact `prop` with proof `proof` to the given `goal`. -/
def assertAt (proof : Expr) (prop : Expr) (generation : Nat) : GrindTactic' := fun goal => do
  if isEagerCasesCandidate goal prop then
    let mvarId ← goal.mvarId.assert (← mkFreshUserName `h) prop proof
    let goal := { goal with mvarId }
    intros generation goal
  else
    let goal ← GoalM.run' goal do
      let r ← preprocess prop
      let prop' := r.expr
      let proof' := mkApp4 (mkConst ``Eq.mp [levelZero]) prop r.expr (← r.getProof) proof
      add prop' proof' generation
    if goal.inconsistent then return [] else return [goal]

/-- Asserts next fact in the `goal` fact queue. -/
def assertNext : GrindTactic := fun goal => do
  let some (fact, newRawFacts) := goal.newRawFacts.dequeue?
    | return none
  assertAt fact.proof fact.prop fact.generation { goal with newRawFacts }

/-- Asserts all facts in the `goal` fact queue. -/
partial def assertAll : GrindTactic := fun goal =>
  if goal.newRawFacts.isEmpty then
    return none
  else
    assertNext.iterate goal

end Lean.Meta.Grind
