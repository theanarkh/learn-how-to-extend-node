#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<IntPtrT> CalculateWorkArrayLength_345(compiler::CodeAssemblerState* state_, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_initialReceiverLength);
compiler::TNode<SortState> NewSortState_346(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Number> p_initialReceiverLength);
  compiler::TNode<Smi> kSuccess_347(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_348(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_349(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSortStateTempSize_350(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> GetPendingRunsSize_351(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
compiler::TNode<Smi> GetPendingRunBase_352(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunBase_353(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
compiler::TNode<Smi> GetPendingRunLength_354(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunLength_355(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
void PushRun_356(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
compiler::TNode<FixedArray> GetTempArray_357(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_requestedSize);
void BinaryInsertionSort_358(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_low, compiler::TNode<Smi> p_startArg, compiler::TNode<Smi> p_high);
compiler::TNode<Smi> CountAndMakeRun_359(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high);
void ReverseRange_360(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void MergeLow_361(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
void MergeHigh_362(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
compiler::TNode<Smi> ComputeMinRunLength_363(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_nArg);
compiler::TNode<BoolT> RunInvariantEstablished_364(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
void MergeCollapse_365(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void MergeForceCollapse_366(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void ArrayTimSortImpl_367(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_length);
compiler::TNode<Smi> CompactReceiverElementsIntoWorkArray_368(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void CopyWorkArrayToReceiver_369(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_numberOfNonUndefined);
compiler::TNode<JSReceiver> LoadSortStateReceiver_1245(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateReceiver_1246(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<JSReceiver> p_v);
compiler::TNode<Map> LoadSortStateInitialReceiverMap_1247(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverMap_1248(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Map> p_v);
compiler::TNode<Number> LoadSortStateInitialReceiverLength_1249(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverLength_1250(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Number> p_v);
compiler::TNode<HeapObject> LoadSortStateUserCmpFn_1251(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateUserCmpFn_1252(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateSortComparePtr_1253(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortComparePtr_1254(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateLoadFn_1255(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateLoadFn_1256(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateStoreFn_1257(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateStoreFn_1258(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateDeleteFn_1259(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateDeleteFn_1260(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1261(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateCanUseSameAccessorFn_1262(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<Smi> LoadSortStateMinGallop_1263(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateMinGallop_1264(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStatePendingRunsSize_1265(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRunsSize_1266(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<FixedArray> LoadSortStatePendingRuns_1267(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRuns_1268(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateWorkArray_1269(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateWorkArray_1270(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateTempArray_1271(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateTempArray_1272(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<Smi> LoadSortStateSortLength_1273(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortLength_1274(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStateNumberOfUndefined_1275(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateNumberOfUndefined_1276(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_this);
compiler::TNode<IntPtrT> Convert8ATintptr17ATconstexpr_int31_1424(compiler::CodeAssemblerState* state_, int31_t p_i);
compiler::TNode<JSObject> UnsafeCast8JSObject_1425(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapNumber> UnsafeCast10HeapNumber_1426(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapObject> Cast84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction_1427(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
