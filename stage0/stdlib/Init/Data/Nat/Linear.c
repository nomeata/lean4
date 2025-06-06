// Lean compiler output
// Module: Init.Data.Nat.Linear
// Imports: Init.ByCases Init.Data.Prod Init.Data.RArray
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t l_Nat_blt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_monomialToExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toNormPoly(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_hugeFuel;
LEAN_EXPORT uint8_t l_Nat_Linear_Poly_isNonZero(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_denote_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RArray_getImpl___rarg(lean_object*, lean_object*);
static lean_object* l_Nat_Linear_Poly_isNum_x3f___closed__1;
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_denote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNum_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_denote___boxed(lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_norm(lean_object*);
LEAN_EXPORT uint8_t l_Nat_Linear_PolyCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_cancel(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Var_denote___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly_go(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_Linear_instInhabitedExpr___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_toPoly_go_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_toExpr(lean_object*);
LEAN_EXPORT uint8_t l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_denote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_fixedVar;
LEAN_EXPORT lean_object* l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_norm_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_toExpr_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_isValid___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_cancelAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Var_denote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNonZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_denote_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__1_splitter(lean_object*);
LEAN_EXPORT uint8_t l_Nat_Linear_Poly_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_norm(lean_object*);
LEAN_EXPORT uint8_t l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_elimOffset___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_toExpr(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_ExprCnstr_toPoly(lean_object*);
static lean_object* l_Nat_Linear_instBEqPolyCnstr___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_instBEqExpr;
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toNormPoly___boxed(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_toPoly_go_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_Linear_Expr_inc___closed__1;
LEAN_EXPORT lean_object* l_Nat_elimOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Nat_Linear_PolyCnstr_isValid(lean_object*);
static lean_object* l_Nat_Linear_instBEqExpr___closed__1;
LEAN_EXPORT lean_object* l_Nat_Linear_instBEqPolyCnstr;
LEAN_EXPORT uint8_t l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_denote___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNum_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_ExprCnstr_toNormPoly(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_inc(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_elimOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Nat_Linear_fixedVar() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(100000000u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Var_denote(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Nat_Linear_fixedVar;
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_RArray_getImpl___rarg(x_1, x_2);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_unsigned_to_nat(1u);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Var_denote___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_Linear_Var_denote(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_Linear_instInhabitedExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_Linear_instInhabitedExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_Linear_instInhabitedExpr___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_nat_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_nat_dec_eq(x_7, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121_(x_11, x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
else
{
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
else
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
}
case 3:
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_nat_dec_eq(x_19, x_21);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = 0;
return x_24;
}
else
{
x_1 = x_20;
x_2 = x_22;
goto _start;
}
}
else
{
uint8_t x_26; 
x_26 = 0;
return x_26;
}
}
default: 
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = lean_ctor_get(x_1, 1);
x_29 = lean_ctor_get(x_2, 0);
x_30 = lean_ctor_get(x_2, 1);
x_31 = l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121_(x_27, x_29);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = 0;
return x_32;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_eq(x_28, x_30);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = 0;
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_Linear_instBEqExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Linear_beqExpr____x40_Init_Data_Nat_Linear___hyg_121____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Linear_instBEqExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_Linear_instBEqExpr___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_denote(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Nat_Linear_Var_denote(x_1, x_4);
return x_5;
}
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Nat_Linear_Expr_denote(x_1, x_6);
x_9 = l_Nat_Linear_Expr_denote(x_1, x_7);
x_10 = lean_nat_add(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
case 3:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
x_13 = l_Nat_Linear_Expr_denote(x_1, x_12);
x_14 = lean_nat_mul(x_11, x_13);
lean_dec(x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
x_17 = l_Nat_Linear_Expr_denote(x_1, x_15);
x_18 = lean_nat_mul(x_17, x_16);
lean_dec(x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_denote___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_Linear_Expr_denote(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_denote(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Nat_Linear_Var_denote(x_1, x_7);
x_9 = lean_nat_mul(x_6, x_8);
lean_dec(x_8);
x_10 = l_Nat_Linear_Poly_denote(x_1, x_5);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_denote___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_Linear_Poly_denote(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_insert(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_8, 1);
x_13 = l_Nat_blt(x_2, x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_2, x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Nat_Linear_Poly_insert(x_1, x_2, x_10);
lean_ctor_set(x_3, 1, x_15);
return x_3;
}
else
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_nat_add(x_1, x_11);
lean_dec(x_11);
lean_dec(x_1);
lean_ctor_set(x_8, 0, x_16);
return x_3;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 0, x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_3, 0, x_17);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_3, 1);
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_22 = l_Nat_blt(x_2, x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_nat_dec_eq(x_2, x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_21);
x_25 = l_Nat_Linear_Poly_insert(x_1, x_2, x_19);
lean_ctor_set(x_3, 1, x_25);
lean_ctor_set(x_3, 0, x_24);
return x_3;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_2);
x_26 = lean_nat_add(x_1, x_20);
lean_dec(x_20);
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_3, 0, x_27);
return x_3;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_3, 0, x_29);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_ctor_get(x_3, 0);
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_3);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_35 = x_31;
} else {
 lean_dec_ref(x_31);
 x_35 = lean_box(0);
}
x_36 = l_Nat_blt(x_2, x_34);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = lean_nat_dec_eq(x_2, x_34);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
if (lean_is_scalar(x_35)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_35;
}
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
x_39 = l_Nat_Linear_Poly_insert(x_1, x_2, x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_2);
x_41 = lean_nat_add(x_1, x_33);
lean_dec(x_33);
lean_dec(x_1);
if (lean_is_scalar(x_35)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_35;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_34);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_32);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
if (lean_is_scalar(x_35)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_35;
}
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_2);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_33);
lean_ctor_set(x_45, 1, x_34);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_32);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_norm_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Nat_Linear_Poly_insert(x_5, x_6, x_2);
x_1 = x_4;
x_2 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_norm(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Nat_Linear_Poly_norm_go(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_cancelAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_List_reverse___rarg(x_4);
x_9 = l_List_appendTR___rarg(x_8, x_3);
x_10 = l_List_reverse___rarg(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_List_reverse___rarg(x_4);
x_13 = l_List_reverse___rarg(x_5);
x_14 = l_List_appendTR___rarg(x_13, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_1, x_18);
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_20; 
lean_dec(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_16, 0);
lean_dec(x_22);
x_23 = l_List_reverse___rarg(x_4);
x_24 = l_List_appendTR___rarg(x_23, x_2);
x_25 = l_List_reverse___rarg(x_5);
lean_ctor_set(x_16, 1, x_25);
lean_ctor_set(x_16, 0, x_24);
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_16);
x_26 = l_List_reverse___rarg(x_4);
x_27 = l_List_appendTR___rarg(x_26, x_2);
x_28 = l_List_reverse___rarg(x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_2);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_2, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_2, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
x_34 = !lean_is_exclusive(x_16);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_3);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = lean_ctor_get(x_16, 1);
x_38 = lean_ctor_get(x_3, 1);
x_39 = lean_ctor_get(x_3, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_33);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_33, 0);
x_42 = lean_ctor_get(x_33, 1);
x_43 = l_Nat_blt(x_37, x_42);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = l_Nat_blt(x_42, x_37);
if (x_44 == 0)
{
uint8_t x_45; 
lean_dec(x_42);
lean_free_object(x_16);
lean_free_object(x_2);
x_45 = l_Nat_blt(x_36, x_41);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = l_Nat_blt(x_41, x_36);
if (x_46 == 0)
{
lean_free_object(x_33);
lean_dec(x_41);
lean_free_object(x_3);
lean_dec(x_37);
lean_dec(x_36);
x_1 = x_19;
x_2 = x_17;
x_3 = x_38;
goto _start;
}
else
{
lean_object* x_48; 
x_48 = lean_nat_sub(x_36, x_41);
lean_dec(x_41);
lean_dec(x_36);
lean_ctor_set(x_33, 1, x_37);
lean_ctor_set(x_33, 0, x_48);
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_3 = x_3;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_50; 
x_50 = lean_nat_sub(x_41, x_36);
lean_dec(x_36);
lean_dec(x_41);
lean_ctor_set(x_33, 1, x_37);
lean_ctor_set(x_33, 0, x_50);
lean_ctor_set(x_3, 1, x_5);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_4 = x_3;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_ctor_set(x_33, 1, x_37);
lean_ctor_set(x_33, 0, x_36);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_16, 1, x_42);
lean_ctor_set(x_16, 0, x_41);
lean_ctor_set(x_2, 1, x_5);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_3;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_4 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_ctor_set(x_2, 1, x_4);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_3 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_33, 0);
x_55 = lean_ctor_get(x_33, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_33);
x_56 = l_Nat_blt(x_37, x_55);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = l_Nat_blt(x_55, x_37);
if (x_57 == 0)
{
uint8_t x_58; 
lean_dec(x_55);
lean_free_object(x_16);
lean_free_object(x_2);
x_58 = l_Nat_blt(x_36, x_54);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = l_Nat_blt(x_54, x_36);
if (x_59 == 0)
{
lean_dec(x_54);
lean_free_object(x_3);
lean_dec(x_37);
lean_dec(x_36);
x_1 = x_19;
x_2 = x_17;
x_3 = x_38;
goto _start;
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_nat_sub(x_36, x_54);
lean_dec(x_54);
lean_dec(x_36);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_37);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_62);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_3 = x_3;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_nat_sub(x_54, x_36);
lean_dec(x_36);
lean_dec(x_54);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_37);
lean_ctor_set(x_3, 1, x_5);
lean_ctor_set(x_3, 0, x_65);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_4 = x_3;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_67; 
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_36);
lean_ctor_set(x_67, 1, x_37);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_3, 0, x_67);
lean_ctor_set(x_16, 1, x_55);
lean_ctor_set(x_16, 0, x_54);
lean_ctor_set(x_2, 1, x_5);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_3;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_4 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_69; 
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_54);
lean_ctor_set(x_69, 1, x_55);
lean_ctor_set(x_3, 0, x_69);
lean_ctor_set(x_2, 1, x_4);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_3 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_16, 0);
x_72 = lean_ctor_get(x_16, 1);
x_73 = lean_ctor_get(x_3, 1);
lean_inc(x_73);
lean_dec(x_3);
x_74 = lean_ctor_get(x_33, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_33, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_76 = x_33;
} else {
 lean_dec_ref(x_33);
 x_76 = lean_box(0);
}
x_77 = l_Nat_blt(x_72, x_75);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = l_Nat_blt(x_75, x_72);
if (x_78 == 0)
{
uint8_t x_79; 
lean_dec(x_75);
lean_free_object(x_16);
lean_free_object(x_2);
x_79 = l_Nat_blt(x_71, x_74);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = l_Nat_blt(x_74, x_71);
if (x_80 == 0)
{
lean_dec(x_76);
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_71);
x_1 = x_19;
x_2 = x_17;
x_3 = x_73;
goto _start;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_nat_sub(x_71, x_74);
lean_dec(x_74);
lean_dec(x_71);
if (lean_is_scalar(x_76)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_76;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_72);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_4);
x_1 = x_19;
x_2 = x_17;
x_3 = x_73;
x_4 = x_84;
goto _start;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_nat_sub(x_74, x_71);
lean_dec(x_71);
lean_dec(x_74);
if (lean_is_scalar(x_76)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_76;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_72);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_5);
x_1 = x_19;
x_2 = x_17;
x_3 = x_73;
x_5 = x_88;
goto _start;
}
}
else
{
lean_object* x_90; lean_object* x_91; 
if (lean_is_scalar(x_76)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_76;
}
lean_ctor_set(x_90, 0, x_71);
lean_ctor_set(x_90, 1, x_72);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_17);
lean_ctor_set(x_16, 1, x_75);
lean_ctor_set(x_16, 0, x_74);
lean_ctor_set(x_2, 1, x_5);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_91;
lean_object* _tmp_2 = x_73;
lean_object* _tmp_4 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_93; lean_object* x_94; 
if (lean_is_scalar(x_76)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_76;
}
lean_ctor_set(x_93, 0, x_74);
lean_ctor_set(x_93, 1, x_75);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_73);
lean_ctor_set(x_2, 1, x_4);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_94;
lean_object* _tmp_3 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_96 = lean_ctor_get(x_16, 0);
x_97 = lean_ctor_get(x_16, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_16);
x_98 = lean_ctor_get(x_3, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_99 = x_3;
} else {
 lean_dec_ref(x_3);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_33, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_33, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_102 = x_33;
} else {
 lean_dec_ref(x_33);
 x_102 = lean_box(0);
}
x_103 = l_Nat_blt(x_97, x_101);
if (x_103 == 0)
{
uint8_t x_104; 
x_104 = l_Nat_blt(x_101, x_97);
if (x_104 == 0)
{
uint8_t x_105; 
lean_dec(x_101);
lean_free_object(x_2);
x_105 = l_Nat_blt(x_96, x_100);
if (x_105 == 0)
{
uint8_t x_106; 
x_106 = l_Nat_blt(x_100, x_96);
if (x_106 == 0)
{
lean_dec(x_102);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_97);
lean_dec(x_96);
x_1 = x_19;
x_2 = x_17;
x_3 = x_98;
goto _start;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_nat_sub(x_96, x_100);
lean_dec(x_100);
lean_dec(x_96);
if (lean_is_scalar(x_102)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_102;
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_97);
if (lean_is_scalar(x_99)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_99;
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_4);
x_1 = x_19;
x_2 = x_17;
x_3 = x_98;
x_4 = x_110;
goto _start;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_nat_sub(x_100, x_96);
lean_dec(x_96);
lean_dec(x_100);
if (lean_is_scalar(x_102)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_102;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_97);
if (lean_is_scalar(x_99)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_99;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_5);
x_1 = x_19;
x_2 = x_17;
x_3 = x_98;
x_5 = x_114;
goto _start;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
if (lean_is_scalar(x_102)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_102;
}
lean_ctor_set(x_116, 0, x_96);
lean_ctor_set(x_116, 1, x_97);
if (lean_is_scalar(x_99)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_99;
}
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_17);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_100);
lean_ctor_set(x_118, 1, x_101);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, x_118);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_117;
lean_object* _tmp_2 = x_98;
lean_object* _tmp_4 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
if (lean_is_scalar(x_102)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_102;
}
lean_ctor_set(x_120, 0, x_100);
lean_ctor_set(x_120, 1, x_101);
if (lean_is_scalar(x_99)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_99;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_98);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_96);
lean_ctor_set(x_122, 1, x_97);
lean_ctor_set(x_2, 1, x_4);
lean_ctor_set(x_2, 0, x_122);
{
lean_object* _tmp_0 = x_19;
lean_object* _tmp_1 = x_17;
lean_object* _tmp_2 = x_121;
lean_object* _tmp_3 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
lean_dec(x_2);
x_124 = lean_ctor_get(x_3, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_16, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_16, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_127 = x_16;
} else {
 lean_dec_ref(x_16);
 x_127 = lean_box(0);
}
x_128 = lean_ctor_get(x_3, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_129 = x_3;
} else {
 lean_dec_ref(x_3);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_124, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_124, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_132 = x_124;
} else {
 lean_dec_ref(x_124);
 x_132 = lean_box(0);
}
x_133 = l_Nat_blt(x_126, x_131);
if (x_133 == 0)
{
uint8_t x_134; 
x_134 = l_Nat_blt(x_131, x_126);
if (x_134 == 0)
{
uint8_t x_135; 
lean_dec(x_131);
lean_dec(x_127);
x_135 = l_Nat_blt(x_125, x_130);
if (x_135 == 0)
{
uint8_t x_136; 
x_136 = l_Nat_blt(x_130, x_125);
if (x_136 == 0)
{
lean_dec(x_132);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_126);
lean_dec(x_125);
x_1 = x_19;
x_2 = x_17;
x_3 = x_128;
goto _start;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_nat_sub(x_125, x_130);
lean_dec(x_130);
lean_dec(x_125);
if (lean_is_scalar(x_132)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_132;
}
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_126);
if (lean_is_scalar(x_129)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_129;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_4);
x_1 = x_19;
x_2 = x_17;
x_3 = x_128;
x_4 = x_140;
goto _start;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_nat_sub(x_130, x_125);
lean_dec(x_125);
lean_dec(x_130);
if (lean_is_scalar(x_132)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_132;
}
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_126);
if (lean_is_scalar(x_129)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_129;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_5);
x_1 = x_19;
x_2 = x_17;
x_3 = x_128;
x_5 = x_144;
goto _start;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
if (lean_is_scalar(x_132)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_132;
}
lean_ctor_set(x_146, 0, x_125);
lean_ctor_set(x_146, 1, x_126);
if (lean_is_scalar(x_129)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_129;
}
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_17);
if (lean_is_scalar(x_127)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_127;
}
lean_ctor_set(x_148, 0, x_130);
lean_ctor_set(x_148, 1, x_131);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_5);
x_1 = x_19;
x_2 = x_147;
x_3 = x_128;
x_5 = x_149;
goto _start;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
if (lean_is_scalar(x_132)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_132;
}
lean_ctor_set(x_151, 0, x_130);
lean_ctor_set(x_151, 1, x_131);
if (lean_is_scalar(x_129)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_129;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_128);
if (lean_is_scalar(x_127)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_127;
}
lean_ctor_set(x_153, 0, x_125);
lean_ctor_set(x_153, 1, x_126);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_4);
x_1 = x_19;
x_2 = x_17;
x_3 = x_152;
x_4 = x_154;
goto _start;
}
}
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_1);
x_156 = l_List_reverse___rarg(x_4);
x_157 = l_List_appendTR___rarg(x_156, x_2);
x_158 = l_List_reverse___rarg(x_5);
x_159 = l_List_appendTR___rarg(x_158, x_3);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
static lean_object* _init_l_Nat_Linear_hugeFuel() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1000000u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_cancel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_Nat_Linear_hugeFuel;
x_5 = l_Nat_Linear_Poly_cancelAux(x_4, x_1, x_2, x_3, x_3);
return x_5;
}
}
static lean_object* _init_l_Nat_Linear_Poly_isNum_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNum_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Nat_Linear_Poly_isNum_x3f___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = l_Nat_Linear_fixedVar;
x_8 = lean_nat_dec_eq(x_6, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; 
lean_inc(x_5);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_5);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = lean_box(0);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNum_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Linear_Poly_isNum_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_Poly_isZero(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_Poly_isZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_Poly_isNonZero(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_Nat_Linear_fixedVar;
x_8 = lean_nat_dec_eq(x_6, x_7);
if (x_8 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_5);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_isNonZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_Poly_isNonZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly_go(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_nat_mul(x_1, x_4);
lean_dec(x_1);
x_8 = l_Nat_Linear_fixedVar;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_dec(x_1);
return x_3;
}
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_16 = l_Nat_Linear_Expr_toPoly_go(x_1, x_15, x_3);
x_2 = x_14;
x_3 = x_16;
goto _start;
}
case 3:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_18, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_nat_mul(x_1, x_18);
lean_dec(x_1);
x_1 = x_22;
x_2 = x_19;
goto _start;
}
else
{
lean_dec(x_1);
return x_3;
}
}
default: 
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_2, 0);
x_25 = lean_ctor_get(x_2, 1);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_eq(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_nat_mul(x_1, x_25);
lean_dec(x_1);
x_1 = x_28;
x_2 = x_24;
goto _start;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_Linear_Expr_toPoly_go(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Nat_Linear_Expr_toPoly_go(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toPoly___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Linear_Expr_toPoly(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toNormPoly(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_Expr_toPoly(x_1);
x_3 = l_Nat_Linear_Poly_norm(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_toNormPoly___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_Linear_Expr_toNormPoly(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_Linear_Expr_inc___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Expr_inc(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_Expr_inc___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_nat_dec_eq(x_10, x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_eq(x_11, x_13);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
else
{
x_1 = x_8;
x_2 = x_9;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326_(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
if (x_3 == 0)
{
if (x_6 == 0)
{
uint8_t x_15; 
x_15 = 1;
x_9 = x_15;
goto block_14;
}
else
{
uint8_t x_16; 
x_16 = 0;
x_9 = x_16;
goto block_14;
}
}
else
{
if (x_6 == 0)
{
uint8_t x_17; 
x_17 = 0;
x_9 = x_17;
goto block_14;
}
else
{
uint8_t x_18; 
x_18 = 1;
x_9 = x_18;
goto block_14;
}
}
block_14:
{
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1(x_4, x_7);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1(x_5, x_8);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_beq___at_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_Linear_instBEqPolyCnstr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Linear_beqPolyCnstr____x40_Init_Data_Nat_Linear___hyg_1326____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_Linear_instBEqPolyCnstr() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_Linear_instBEqPolyCnstr___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_norm(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Nat_Linear_Poly_norm(x_3);
x_6 = l_Nat_Linear_Poly_norm(x_4);
x_7 = l_Nat_Linear_Poly_cancel(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_Nat_Linear_Poly_norm(x_11);
x_14 = l_Nat_Linear_Poly_norm(x_12);
x_15 = l_Nat_Linear_Poly_cancel(x_13, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_10);
return x_18;
}
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_PolyCnstr_isUnsat(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Nat_Linear_Poly_isNonZero(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Nat_Linear_Poly_isZero(x_6);
return x_7;
}
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_Nat_Linear_Poly_isZero(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Nat_Linear_Poly_isNonZero(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_Nat_Linear_Poly_isZero(x_12);
return x_13;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_1, 1);
x_15 = l_Nat_Linear_Poly_isNonZero(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Nat_Linear_Poly_isNonZero(x_8);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
else
{
uint8_t x_18; 
x_18 = l_Nat_Linear_Poly_isZero(x_14);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = 1;
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_isUnsat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_PolyCnstr_isUnsat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Nat_Linear_PolyCnstr_isValid(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Nat_Linear_Poly_isZero(x_3);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Nat_Linear_Poly_isZero(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Nat_Linear_Poly_isZero(x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_isValid___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_Linear_PolyCnstr_isValid(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_ExprCnstr_toPoly(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Nat_Linear_Expr_toPoly(x_3);
lean_dec(x_3);
x_6 = l_Nat_Linear_Expr_toPoly(x_4);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Nat_Linear_Expr_toPoly(x_8);
lean_dec(x_8);
x_11 = l_Nat_Linear_Expr_toPoly(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_ExprCnstr_toNormPoly(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Nat_Linear_Expr_toNormPoly(x_3);
lean_dec(x_3);
x_6 = l_Nat_Linear_Expr_toNormPoly(x_4);
lean_dec(x_4);
x_7 = l_Nat_Linear_Poly_cancel(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_Nat_Linear_Expr_toNormPoly(x_11);
lean_dec(x_11);
x_14 = l_Nat_Linear_Expr_toNormPoly(x_12);
lean_dec(x_12);
x_15 = l_Nat_Linear_Poly_cancel(x_13, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_10);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_monomialToExpr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Nat_Linear_fixedVar;
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_2);
x_8 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_toExpr_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Nat_Linear_monomialToExpr(x_6, x_7);
lean_ctor_set_tag(x_3, 2);
lean_ctor_set(x_3, 1, x_8);
lean_ctor_set(x_3, 0, x_1);
x_1 = x_3;
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = l_Nat_Linear_monomialToExpr(x_10, x_11);
x_13 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
x_1 = x_13;
x_2 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_Poly_toExpr(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_Nat_Linear_instInhabitedExpr___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Nat_Linear_monomialToExpr(x_5, x_6);
x_8 = l_Nat_Linear_Poly_toExpr_go(x_7, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Linear_PolyCnstr_toExpr(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Nat_Linear_Poly_toExpr(x_3);
x_6 = l_Nat_Linear_Poly_toExpr(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Nat_Linear_Poly_toExpr(x_8);
x_11 = l_Nat_Linear_Poly_toExpr(x_9);
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_apply_3(x_3, x_6, x_7, x_5);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_denote_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_denote_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_5, x_14, x_15);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_6, x_17, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_denote_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_denote_match__1_splitter___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__3_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_2, lean_box(0));
return x_7;
}
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_8);
lean_dec(x_5);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_apply_6(x_5, x_12, x_13, x_11, x_15, x_16, x_14);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_cancelAux_match__1_splitter___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_toPoly_go_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_5, x_14, x_15);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_6, x_17, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_toPoly_go_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Expr_toPoly_go_match__1_splitter___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, lean_box(0));
return x_4;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Nat_Linear_0__Nat_Linear_Poly_isZero_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_elimOffset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_apply_1(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_elimOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Nat_elimOffset___rarg), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_elimOffset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_elimOffset(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init_ByCases(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_RArray(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Nat_Linear(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_ByCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_RArray(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_Linear_fixedVar = _init_l_Nat_Linear_fixedVar();
lean_mark_persistent(l_Nat_Linear_fixedVar);
l_Nat_Linear_instInhabitedExpr___closed__1 = _init_l_Nat_Linear_instInhabitedExpr___closed__1();
lean_mark_persistent(l_Nat_Linear_instInhabitedExpr___closed__1);
l_Nat_Linear_instInhabitedExpr = _init_l_Nat_Linear_instInhabitedExpr();
lean_mark_persistent(l_Nat_Linear_instInhabitedExpr);
l_Nat_Linear_instBEqExpr___closed__1 = _init_l_Nat_Linear_instBEqExpr___closed__1();
lean_mark_persistent(l_Nat_Linear_instBEqExpr___closed__1);
l_Nat_Linear_instBEqExpr = _init_l_Nat_Linear_instBEqExpr();
lean_mark_persistent(l_Nat_Linear_instBEqExpr);
l_Nat_Linear_hugeFuel = _init_l_Nat_Linear_hugeFuel();
lean_mark_persistent(l_Nat_Linear_hugeFuel);
l_Nat_Linear_Poly_isNum_x3f___closed__1 = _init_l_Nat_Linear_Poly_isNum_x3f___closed__1();
lean_mark_persistent(l_Nat_Linear_Poly_isNum_x3f___closed__1);
l_Nat_Linear_Expr_inc___closed__1 = _init_l_Nat_Linear_Expr_inc___closed__1();
lean_mark_persistent(l_Nat_Linear_Expr_inc___closed__1);
l_Nat_Linear_instBEqPolyCnstr___closed__1 = _init_l_Nat_Linear_instBEqPolyCnstr___closed__1();
lean_mark_persistent(l_Nat_Linear_instBEqPolyCnstr___closed__1);
l_Nat_Linear_instBEqPolyCnstr = _init_l_Nat_Linear_instBEqPolyCnstr();
lean_mark_persistent(l_Nat_Linear_instBEqPolyCnstr);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
