#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSTypedArray> EnsureAttached_329(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached);
TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_330(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array);
compiler::TNode<BuiltinPtr> GetLoadFnForElementsKind_331(compiler::CodeAssemblerState* state_, compiler::TNode<Int32T> p_elementsKind);
ElementsKind KindForArrayType15ATUint8Elements_332(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType14ATInt8Elements_333(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint16Elements_334(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt16Elements_335(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint32Elements_336(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt32Elements_337(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat32Elements_338(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat64Elements_339(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType22ATUint8ClampedElements_340(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType19ATBigUint64Elements_341(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType18ATBigInt64Elements_342(compiler::CodeAssemblerState* state_);
compiler::TNode<Number> CallCompare_343(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b);
void TypedArrayMerge_344(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<FixedArray> p_source, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_middle, compiler::TNode<Smi> p_to, compiler::TNode<FixedArray> p_target);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
