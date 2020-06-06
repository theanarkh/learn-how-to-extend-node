#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_BIGINT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_BIGINT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BigInt> Convert8ATBigInt13MutableBigInt_228(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i);
  compiler::TNode<Uint32T> kPositiveSign_229(compiler::CodeAssemblerState* state_);
  compiler::TNode<Uint32T> kNegativeSign_230(compiler::CodeAssemblerState* state_);
compiler::TNode<BoolT> IsCanonicalized_231(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_bigint);
compiler::TNode<Uint32T> InvertSign_232(compiler::CodeAssemblerState* state_, compiler::TNode<Uint32T> p_sign);
compiler::TNode<BigInt> AllocateEmptyBigIntNoThrow_233(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> AllocateEmptyBigInt_234(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length);
compiler::TNode<Int32T> MutableBigIntAbsoluteCompare_235(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y);
compiler::TNode<BigInt> MutableBigIntAbsoluteSub_236(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::TNode<Uint32T> p_resultSign);
compiler::TNode<BigInt> MutableBigIntAbsoluteAdd_237(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_xBigint, compiler::TNode<BigInt> p_yBigint, compiler::TNode<Uint32T> p_resultSign, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> BigIntAddImpl_238(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> Convert10BigIntBase13MutableBigInt_1410(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i);
compiler::TNode<BigInt> Cast8ATBigInt_1411(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_BIGINT_TQ_H_
