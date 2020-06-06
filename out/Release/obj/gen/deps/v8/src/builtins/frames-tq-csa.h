#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_FRAMES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_FRAMES_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Smi> FromConstexpr11ATFrameType21ATconstexpr_FrameType_263(compiler::CodeAssemblerState* state_, StackFrame::Type p_t);
compiler::TNode<Smi> Cast11ATFrameType_264(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> LoadObjectFromFrame_265(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<RawPtrT> LoadPointerFromFrame_266(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<Smi> LoadSmiFromFrame_267(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<JSFunction> LoadFunctionFromFrame_268(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f);
compiler::TNode<RawPtrT> LoadCallerFromFrame_269(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f);
compiler::TNode<Object> Cast23UT11ATFrameType7Context_270(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> LoadContextOrFrameTypeFromFrame_271(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f);
compiler::TNode<Smi> LoadLengthFromAdapterFrame_272(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f);
compiler::TNode<BoolT> FrameTypeEquals_273(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_f1, compiler::TNode<Smi> p_f2);
compiler::TNode<RawPtrT> Cast15ATStandardFrame_274(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<RawPtrT> Cast23ATArgumentsAdaptorFrame_275(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<JSFunction> LoadTargetFromFrame_276(compiler::CodeAssemblerState* state_);
compiler::TNode<Context> Cast7Context_1415(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> UnsafeCast23UT11ATFrameType7Context_1416(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_FRAMES_TQ_H_
