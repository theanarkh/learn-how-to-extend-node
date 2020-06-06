#ifndef V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_DATA_VIEW_TQ_H_
#define V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_DATA_VIEW_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<String> MakeDataViewGetterNameString_241(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
compiler::TNode<String> MakeDataViewSetterNameString_242(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
compiler::TNode<BoolT> WasNeutered_243(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBufferView> p_view);
compiler::TNode<JSDataView> ValidateDataView_244(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<String> p_method);
compiler::TNode<Smi> LoadDataView8_245(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, bool p_signed);
compiler::TNode<Number> LoadDataView16_246(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed);
compiler::TNode<Number> LoadDataView32_247(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind);
compiler::TNode<Number> LoadDataViewFloat64_248(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian);
  int31_t kZeroDigitBigInt_249(compiler::CodeAssemblerState* state_);
  int31_t kOneDigitBigInt_250(compiler::CodeAssemblerState* state_);
  int31_t kTwoDigitBigInt_251(compiler::CodeAssemblerState* state_);
compiler::TNode<BigInt> MakeBigIntOn64Bit_252(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed);
compiler::TNode<BigInt> MakeBigIntOn32Bit_253(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed);
compiler::TNode<BigInt> MakeBigInt_254(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed);
compiler::TNode<BigInt> LoadDataViewBigInt_255(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed);
compiler::TNode<Numeric> DataViewGet_256(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);
void StoreDataView8_257(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value);
void StoreDataView16_258(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian);
void StoreDataView32_259(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian);
void StoreDataView64_260(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, compiler::TNode<BoolT> p_requestedLittleEndian);
void StoreDataViewBigInt_261(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BigInt> p_bigIntValue, compiler::TNode<BoolT> p_requestedLittleEndian);
compiler::TNode<Object> DataViewSet_262(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_value, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);
compiler::TNode<JSDataView> Cast10JSDataView_1414(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_______DEPS_V8_SRC_BUILTINS_DATA_VIEW_TQ_H_
