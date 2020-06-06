#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void EnsureWriteableFastElements_51(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array);
compiler::TNode<BoolT> IsJSArray_52(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<Object> LoadElementOrUndefined_53(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i);
compiler::TNode<Object> LoadElementOrUndefined_54(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i);
void StoreArrayHole_55(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_k);
void StoreArrayHole_56(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_k);
compiler::TNode<JSArray> Cast7JSArray_1395(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_ARRAY_TQ_H_
