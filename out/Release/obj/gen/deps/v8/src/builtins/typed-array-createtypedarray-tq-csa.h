#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSTypedArray> AllocateTypedArray_301(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_isOnHeap, compiler::TNode<Map> p_map, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_byteOffset, compiler::TNode<UintPtrT> p_byteLength, compiler::TNode<UintPtrT> p_length);
compiler::TNode<JSTypedArray> TypedArrayInitialize_302(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_initialize, compiler::TNode<Map> p_map, compiler::TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor);
compiler::TNode<JSTypedArray> ConstructByLength_303(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
compiler::TNode<JSTypedArray> ConstructByArrayLike_304(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<HeapObject> p_arrayLike, compiler::TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor);
void ConstructByIterable_305(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_iterable, compiler::TNode<HeapObject> p_iteratorFn, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
void ConstructByTypedArray_306(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_srcTypedArray, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
compiler::TNode<JSTypedArray> ConstructByArrayBuffer_307(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<Object> p_byteOffset, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
void ConstructByJSReceiver_308(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_obj, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
compiler::TNode<JSTypedArray> TypedArraySpeciesCreate_309(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Object> p_arg0, compiler::TNode<Object> p_arg1, compiler::TNode<Object> p_arg2);
compiler::TNode<JSTypedArray> TypedArraySpeciesCreateByLength_310(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length);
compiler::TNode<JSArrayBuffer> Cast13JSArrayBuffer_1423(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_
