#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> ElementsKindTestHelper1_370(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper2_371(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_372(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_373(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_374(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_375(compiler::CodeAssemblerState* state_);
void TestConstexprIf_376(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_377(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabel_378(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithOneParameter_379(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_380(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_381(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void LabelTestHelper4_382(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
compiler::TNode<BoolT> CallLabelTestHelper4_383(compiler::CodeAssemblerState* state_, bool p_flag);
compiler::TNode<Oddball> TestPartiallyUnusedLabel_384(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_385(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2);
compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_386(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_387(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestFunctionPointers_388(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Oddball> TestVariableRedeclaration_389(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestTernaryOperator_390(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestFunctionPointerToGeneric_391(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
compiler::TNode<BuiltinPtr> TestTypeAlias_392(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x);
compiler::TNode<Oddball> TestUnsafeCast_393(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
void TestHexLiteral_394(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_395(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void TestMultilineAssert_396(compiler::CodeAssemblerState* state_);
void TestNewlineInString_397(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_398(compiler::CodeAssemblerState* state_);
  compiler::TNode<IntPtrT> kIntptrConst_399(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSmiConst_400(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_401(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_402(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestStruct1_403(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_405(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void CallTestStructInLabel_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestForLoop_409(compiler::CodeAssemblerState* state_);
void TestSubtyping_410(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
compiler::TNode<Int32T> TypeswitchExample_411(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
void TestTypeswitch_412(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_413(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
void TestGenericOverload_414(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestEquality_415(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void BoolToBranch_416(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken);
compiler::TNode<BoolT> TestOrAnd1_417(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd2_418(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd3_419(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr1_420(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr2_421(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr3_422(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
void TestLogicalOperators_423(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestCall_424(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_425(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_426(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_427(compiler::CodeAssemblerState* state_);
void TestForwardLabel_428(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_429(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch1_430(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch2Wrapper_431(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch2_432(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch3WrapperWithLabel_433(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
compiler::TNode<Smi> TestCatch3_434(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestIterator_435(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map);
void TestFrame1_436(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestNew_437(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStructConstructor_438(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<InternalClass> NewInternalClass_439(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestInternalClass_440(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestConstInStructs_441(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> TestNewFixedArrayFromSpread_442(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestReferences_443(compiler::CodeAssemblerState* state_);
void TestStaticAssert_444(compiler::CodeAssemblerState* state_);
void TestLoadEliminationFixed_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestLoadEliminationVariable_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantArrayElementCheck_447(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantSmiCheck_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<IntPtrT> TestGenericStruct1_449(compiler::CodeAssemblerState* state_);
TorqueStructTestTuple_Smi__intptr_ TestGenericStruct2_450(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> LoadInternalClassA_1277(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassA_1278(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> LoadInternalClassB_1279(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassB_1280(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
compiler::TNode<Smi> LoadSmiPairA_1281(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairA_1282(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiPairB_1283(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairB_1284(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
CodeStubAssembler::Reference _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this);
compiler::TNode<Smi> LoadSmiBoxValue_1285(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxValue_1286(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiBoxUnrelated_1287(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxUnrelated_1288(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Object> GenericMacroTest5ATSmi_1428(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param);
compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1429(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);
compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1430(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x);
compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1431(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o);
compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1432(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o);
void Swap5ATSmi_1435(compiler::CodeAssemblerState* state_, CodeStubAssembler::Reference p_a, CodeStubAssembler::Reference p_b);
TorqueStructTestTuple_Smi__intptr_ Swap8ATintptr5ATSmi_1436(compiler::CodeAssemblerState* state_, TorqueStructTestTuple_intptr__Smi_ p_tuple);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_TEST_TORQUE_TEST_TORQUE_TQ_H_
