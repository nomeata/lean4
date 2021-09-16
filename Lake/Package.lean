/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich, Mac Malone
-/
import Lean.Data.Name
import Lean.Elab.Import
import Std.Data.HashMap
import Lake.LeanVersion
import Lake.BuildTarget

open Std System
open Lean (Name)

namespace Lake

/-- The default setting for a `PackageConfig`'s `buildDir` option. -/
def defaultBuildDir : FilePath := "build"

/-- The default setting for a `PackageConfig`'s `binDir` option. -/
def defaultBinDir : FilePath := "bin"

/-- The default setting for a `PackageConfig`'s `libDir` option. -/
def defaultLibDir : FilePath := "lib"

/-- The default setting for a `PackageConfig`'s `oleanDir` option. -/
def defaultOleanDir : FilePath := "lib"

/-- The default setting for a `PackageConfig`'s `irDir` option. -/
def defaultIrDir : FilePath := "ir"

/-- The default setting for a `PackageConfig`'s `depsDir` option. -/
def defaultDepsDir : FilePath := "lean_packages"

/--
  The `src` of a `Dependency`.

  In Lake, dependency sources currently come into flavors:
  * Local `path`s relative to the package's directory.
  * Remote `git` repositories that are download from a given `url`
    into the packages's `depsDir`.
-/
inductive Source where
| path (dir : FilePath) : Source
| git (url rev : String) (branch : Option String) : Source
deriving Inhabited, Repr

/-- A `Dependency` of a package. -/
structure Dependency where
  /--
    A name for the dependency.
    The names of a package's dependencies cannot clash.
  -/
  name : String
  /--
    The source of a dependency.
    See the documentation of `Source` for more information.
  -/
  src  : Source
  /--
    The subdirectory of the dependency's source where
    the dependency's package configuration is located.
  -/
  dir  : FilePath := "."
  /--
    Arguments to pass to the dependency's package configuration.
  -/
  args : List String := []

deriving Inhabited, Repr

/--
  A package `Script` is an arbitrary function that is
  indexed by a `String` key and can be be run by `lake run <key> [-- <args>]`.
-/
abbrev Script := (args : List String) → IO PUnit

/-- A package's declarative configuration. -/
structure PackageConfig where

  /--
    The name of the package.
  -/
  name : String

  /--
    The version string of the package.
  -/
  version : String

  /-
    The root module of the package.

    Imports relative to this root (e.g., `Pkg.Foo`) are considered part of the package.
    Defaults to the package's uppercase `name`.
  -/
  moduleRoot : Name := name.capitalize

  /-
    A `List` of the package's dependencies.
    See the documentation of `Dependency` for more information.
  -/
  dependencies : List Dependency := []

  /--
    The directory to which Lake should download dependencies.
    Defaults to `defaultDepsDir` (i.e., `lean_packages`).
  -/
  depsDir : FilePath := defaultDepsDir

  /--
    An extra `OpaqueTarget` that should be built before the package.

    `OpaqueTarget.collectList/collectArray` can be used combine multiple
    targets into a single `extraDepTarget`.
  -/
  extraDepTarget : OpaqueTarget := Target.nil

  /--
    The root directory of the package.
    Defaults to the package's directory.

    The package's Lean sources must be children of this directory
      (or its subdirectories).
    This is the `-R` argument of `lean`.
  -/
  rootDir : FilePath := "."

  /--
    Additional arguments to pass to `lean` while compiling Lean source files.
  -/
  leanArgs : Array String := #[]

  /--
    The directory containing the package's Lean source files.
    Defaults to the value of `rootDir`.
  -/
  srcDir : FilePath := rootDir

  /--
    The directory to which Lake should output the package's build results.
    Defaults to `defaultBuildDir` (i.e., `build`).
  -/
  buildDir : FilePath := defaultBuildDir

  /--
    The build subdirectory to which Lake should output the package's `.olean` files.
    Defaults to  `defaultOleanDir` (i.e., `lib`).
  -/
  oleanDir : FilePath := defaultOleanDir

  /--
    A `HashMap` of scripts for the package.

    A `Script` is an arbitrary `(args : List String) → IO PUnit` function that
    is indexed by a `String` key and can be be run by `lake run <key> [-- <args>]`.
  -/
  scripts : HashMap String Script := HashMap.empty

  /--
    Additional arguments to pass to `leanc`
    while compiling the C source files generated by `lean`.
  -/
  leancArgs : Array String := #[]

  /--
    The build subdirectory to which Lake should output
    the package's intermediary results (e.g., `.c` and `.o` files).
    Defaults to `defaultIrDir` (i.e., `ir`).
  -/
  irDir : FilePath := defaultIrDir

  /--
    The name of the package's static library.
    Defaults to the string representation of the package's `moduleRoot`.
  -/
  libName : String := moduleRoot.toString (escape := false)

  /--
    The build subdirectory to which Lake should output the package's static library.
    Defaults to `defaultLibDir` (i.e., `lib`).
  -/
  libDir : FilePath := defaultLibDir

  /--
    The name of the package's binary executable.
    Defaults to the package's `name`.
  -/
  binName : String := name

  /--
    The name of the package's binary executable.
    Defaults to the package's `name`.
  -/
  binDir : FilePath := defaultBinDir

  /--
    The root module of the package's binary executable.
    Defaults to the package's `moduleRoot`.

    This setting is most useful for packages that are distributing both a
    library and a binary (like Lake itself). In such cases, it is common for
    there to be code (e.g., `main`) that is needed for the binary but should
    not be included in the library proper.
  -/
  binRoot : Name := moduleRoot

  /--
    Additional library `FileTarget`s
      (beyond the package's and its dependencies' libraries)
    to build and link to the package's binary executable
      (and/or to dependent package's executables).
  -/
  moreLibTargets : Array FileTarget := #[]

  /--
    Additional arguments to pass to `leanc`
      while compiling the package's binary executable.
    These will come *after* the paths of libraries built with `moreLibTargets`.
  -/
  linkArgs : Array String := #[]

deriving Inhabited

/-- A Lake package -- its location plus its configuration. -/
structure Package where
  /-- The path to the package's directory. -/
  dir : FilePath
  /-- The package's configuration. -/
  config : PackageConfig
  deriving Inhabited

/--
  An alternate signature for package configurations
  that permits more dynamic configurations.
-/
def Packager := (pkgDir : FilePath) → (args : List String) → IO PackageConfig

namespace Package

/-- The package's `name` configuration. -/
def name (self : Package) : String :=
  self.config.name

/-- The package's `version` configuration. -/
def version (self : Package) : String :=
  self.config.version

/-- The package's `scripts` configuration. -/
def scripts (self : Package) : HashMap String Script :=
  self.config.scripts

/-- The package's `moduleRoot` configuration. -/
def moduleRoot (self : Package) : Name :=
  self.config.moduleRoot

/-- The string representation of `moduleRoot`. -/
def moduleRootName (self : Package) : String :=
  self.config.moduleRoot.toString (escape := false)

/-- The package's `dependencies` configuration. -/
def dependencies (self : Package) : List Dependency :=
  self.config.dependencies

/-- The package's `extraDepTarget` configuration. -/
def extraDepTarget (self : Package) : OpaqueTarget :=
  self.config.extraDepTarget

/-- The package's `leanArgs` configuration. -/
def leanArgs (self : Package) : Array String :=
  self.config.leanArgs

/-- The package's `leancArgs` configuration. -/
def leancArgs (self : Package) : Array String :=
  self.config.leancArgs

/-- The package's `linkArgs` configuration. -/
def linkArgs (self : Package) : Array String :=
  self.config.linkArgs

/-- The package's `dir` joined with its configuration's `depsDir`. -/
def depsDir (self : Package) : FilePath :=
  self.dir / self.config.depsDir

/-- The package's `dir` joined with its configuration's `rootDir`. -/
def rootDir (self : Package) : FilePath :=
  self.dir / self.config.rootDir

/-- The package's `dir` joined with its configuration's `srcDir`. -/
def srcDir (self : Package) : FilePath :=
  self.dir / self.config.srcDir

/-- The path to a module's `.lean` source file within the package. -/
def modToSrc (mod : Name) (self : Package) : FilePath :=
  Lean.modToFilePath self.srcDir mod "lean"

/-- The path to `.lean` source file of the package's `moduleRoot`. -/
def srcRoot (self : Package) : FilePath :=
  self.modToSrc self.moduleRoot

/-- The package's `dir` joined with its configuration's `buildDir`. -/
def buildDir (self : Package) : FilePath :=
  self.dir / self.config.buildDir

/-- The package's `buildDir` joined with its configuration's `oleanDir`. -/
def oleanDir (self : Package) : FilePath :=
  self.buildDir / self.config.oleanDir

/-- The path to a module's `.olean` file within the package. -/
def modToOlean (mod : Name) (self : Package) : FilePath :=
  Lean.modToFilePath self.oleanDir mod "olean"

/-- The path to `.olean` file of the package's `moduleRoot`. -/
def oleanRoot (self : Package) : FilePath :=
  self.modToOlean self.moduleRoot

/-- The path to module's `.hash` file within the package. -/
def modToHashFile (mod : Name) (self : Package) : FilePath :=
  Lean.modToFilePath self.oleanDir mod "hash"

/-- The package's `buildDir` joined with its configuration's `irDir`. -/
def irDir (self : Package) : FilePath :=
  self.buildDir / self.config.irDir

/-- To which Lake should output the package's `.c` files (.e., `irDir`). -/
def cDir (self : Package) : FilePath :=
  self.irDir

/-- The path to a module's `.c` file within the package. -/
def modToC (mod : Name) (self : Package) : FilePath :=
  Lean.modToFilePath self.cDir mod "c"

/-- To which Lake should output the package's `.o` files (.e., `irDir`). -/
def oDir (self : Package) : FilePath :=
  self.irDir

/-- The path to a module's `.o` file within the package. -/
def modToO (mod : Name) (self : Package) : FilePath :=
  Lean.modToFilePath self.oDir mod "o"

/-- The package's `binRoot` configuration. -/
def binRoot (self : Package) : Name :=
  self.config.binRoot

/-- The package's `buildDir` joined with its configuration's `binDir`. -/
def binDir (self : Package) : FilePath :=
  self.buildDir / self.config.binDir

/-- The package's `binName` configuration. -/
def binName (self : Package) : FilePath :=
  self.config.binName

/--
  The file name of package's binary executable
  (i.e., `binName` plus the platform's `exeExtension`).
-/
def binFileName (self : Package) : FilePath :=
  FilePath.withExtension self.binName FilePath.exeExtension

/-- The path to the package's executable. -/
def binFile (self : Package) : FilePath :=
  self.binDir / self.binFileName

/-- The package's `buildDir` joined with its configuration's `libDir`. -/
def libDir (self : Package) : FilePath :=
  self.buildDir / self.config.libDir

/-- The package's `libName` configuration. -/
def staticLibName (self : Package) : FilePath :=
  self.config.libName

/-- The file name of package's static library (i.e., `lib{staticLibName}.a`) -/
def staticLibFileName (self : Package) : FilePath :=
  s!"lib{self.staticLibName}.a"

/-- The path to the package's static library. -/
def staticLibFile (self : Package) : FilePath :=
  self.libDir / self.staticLibFileName

/-- The package's `moreLibTargets` configuration. -/
def moreLibTargets (self : Package) : Array FileTarget :=
  self.config.moreLibTargets
