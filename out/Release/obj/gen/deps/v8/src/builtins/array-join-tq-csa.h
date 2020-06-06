#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_JOIN_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void CannotUseSameArrayAccessor7JSArray_8(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_originalMap, compiler::TNode<Number> p_originalLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
void CannotUseSameArrayAccessor12JSTypedArray_9(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p__loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p__initialMap, compiler::TNode<Number> p__initialLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
compiler::TNode<IntPtrT> AddStringLength_10(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<IntPtrT> p_lenA, compiler::TNode<IntPtrT> p_lenB);
TorqueStructBuffer NewBuffer_11(compiler::CodeAssemblerState* state_, compiler::TNode<UintPtrT> p_len, compiler::TNode<String> p_sep);
compiler::TNode<String> BufferJoin_12(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructBuffer p_buffer, compiler::TNode<String> p_sep);
compiler::TNode<Object> ArrayJoin7JSArray_13(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> ArrayJoin12JSTypedArray_14(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<FixedArray> LoadJoinStack_15(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized);
void SetJoinStack_16(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_stack);
void JoinStackPushInline_17(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::CodeAssemblerLabel* label_ReceiverAdded, compiler::CodeAssemblerLabel* label_ReceiverNotAdded);
void JoinStackPopInline_18(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver);
compiler::TNode<FixedArray> StoreAndGrowFixedArray5ATSmi_1363(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<Smi> p_element);
compiler::TNode<FixedArray> StoreAndGrowFixedArray6String_1364(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<String> p_element);
compiler::TNode<JSArray> UnsafeCast7JSArray_1368(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<NumberDictionary> UnsafeCast18ATNumberDictionary_1369(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedArray> UnsafeCast10FixedArray_1370(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<Smi> UnsafeCast5ATSmi_1371(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedDoubleArray> UnsafeCast16FixedDoubleArray_1372(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<JSTypedArray> UnsafeCast12JSTypedArray_1373(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<String> Cast6String_1374(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<String> ArrayJoinImpl7JSArray_1375(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<String> ArrayJoinImpl12JSTypedArray_1376(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<HeapObject> UnsafeCast10HeapObject_1377(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedArray> StoreAndGrowFixedArray10JSReceiver_1378(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<JSReceiver> p_element);
compiler::TNode<Object> CycleProtectedArrayJoin7JSArray_1379(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> CycleProtectedArrayJoin12JSTypedArray_1380(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
