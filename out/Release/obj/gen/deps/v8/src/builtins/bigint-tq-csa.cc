#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/../../deps/v8/src/builtins/arguments-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-every-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-find-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-join-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-map-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-some-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/array-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/base-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/bigint-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/boolean-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/collections-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/data-view-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/frames-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/iterator-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/math-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/object-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/proxy-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/reflect-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/regexp-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-html-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/../../deps/v8/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/../../deps/v8/third_party/v8/builtins/array-sort-tq-csa.h"
#include "torque-generated/../../deps/v8/test/torque/test-torque-tq-csa.h"
#include "torque-generated/../../deps/v8/src/objects/intl-objects-tq-csa.h"

namespace v8 {
namespace internal {

compiler::TNode<BigInt> Convert8ATBigInt13MutableBigInt_228(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<BigInt> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 22);
    compiler::TNode<BigInt> tmp1;
    USE(tmp1);
    tmp1 = Convert10BigIntBase13MutableBigInt_1410(state_, compiler::TNode<BigInt>{tmp0});
    compiler::TNode<BigInt> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<BigInt>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<BigInt> tmp3;
    compiler::TNode<BigInt> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 20);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<BigInt> tmp5;
    compiler::TNode<BigInt> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<BigInt>{tmp6};
}

compiler::TNode<Uint32T> kPositiveSign_229(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 27);
    compiler::TNode<Uint32T> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
return compiler::TNode<Uint32T>{tmp0};
}

compiler::TNode<Uint32T> kNegativeSign_230(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 28);
    compiler::TNode<Uint32T> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 1);
return compiler::TNode<Uint32T>{tmp0};
}

compiler::TNode<BoolT> IsCanonicalized_231(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_bigint) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_bigint);

  if (block0.is_used()) {
    compiler::TNode<BigInt> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 51);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 53);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<BigInt> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 54);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp4});
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = kPositiveSign_229(state_);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp6}, compiler::TNode<Uint32T>{tmp7});
    ca_.Goto(&block1, tmp4, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<BigInt> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block3, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 57);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp10}, compiler::TNode<IntPtrT>{tmp11});
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp9}, compiler::TNode<IntPtrT>{tmp12});
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 0);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp13}, compiler::TNode<UintPtrT>{tmp14});
    ca_.Goto(&block1, tmp9, tmp15);
  }

  if (block1.is_used()) {
    compiler::TNode<BigInt> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block1, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 47);
    ca_.Goto(&block4, tmp16, tmp17);
  }

    compiler::TNode<BigInt> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block4, &tmp18, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<Uint32T> InvertSign_232(compiler::CodeAssemblerState* state_, compiler::TNode<Uint32T> p_sign) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_sign);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 61);
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = kPositiveSign_229(state_);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp0}, compiler::TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = kNegativeSign_230(state_);
    ca_.Goto(&block5, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = kPositiveSign_229(state_);
    ca_.Goto(&block4, tmp5, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Uint32T> tmp7;
    compiler::TNode<Uint32T> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp7, tmp8);
  }

  if (block4.is_used()) {
    compiler::TNode<Uint32T> tmp9;
    compiler::TNode<Uint32T> tmp10;
    ca_.Bind(&block4, &tmp9, &tmp10);
    ca_.Goto(&block1, tmp9, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp11;
    compiler::TNode<Uint32T> tmp12;
    ca_.Bind(&block1, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 60);
    ca_.Goto(&block6, tmp11, tmp12);
  }

    compiler::TNode<Uint32T> tmp13;
    compiler::TNode<Uint32T> tmp14;
    ca_.Bind(&block6, &tmp13, &tmp14);
  return compiler::TNode<Uint32T>{tmp14};
}

compiler::TNode<BigInt> AllocateEmptyBigIntNoThrow_233(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_sign, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 66);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr18ATconstexpr_intptr_125(state_, BigInt::kMaxLength);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block3, &block4, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Uint32T> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 67);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Uint32T> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 69);
    compiler::TNode<BigInt> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 71);
    BigIntBuiltinsAssembler(state_).WriteBigIntSignAndLength(compiler::TNode<BigInt>{tmp11}, compiler::TNode<Uint32T>{tmp9}, compiler::TNode<IntPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 72);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Uint32T> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<BigInt> tmp15;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 64);
    ca_.Goto(&block5, tmp12, tmp13, tmp14, tmp15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_BigIntTooBig);
  }

    compiler::TNode<Context> tmp16;
    compiler::TNode<Uint32T> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<BigInt> tmp19;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19);
  return compiler::TNode<BigInt>{tmp19};
}

compiler::TNode<BigInt> AllocateEmptyBigInt_234(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, Uint32T, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, Uint32T, IntPtrT, BigInt> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, IntPtrT, BigInt> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_sign, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 78);
    compiler::TNode<BigInt> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = AllocateEmptyBigIntNoThrow_233(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Uint32T>{tmp1}, compiler::TNode<IntPtrT>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<Uint32T> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Uint32T> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<Uint32T> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<BigInt> tmp14;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block1, tmp9, tmp10, tmp11, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 81);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp15}, MessageTemplate::kBigIntTooBig);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Uint32T> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<BigInt> tmp21;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 75);
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<BigInt> tmp25;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24, &tmp25);
  return compiler::TNode<BigInt>{tmp25};
}

compiler::TNode<Int32T> MutableBigIntAbsoluteCompare_235(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<BigInt> tmp0;
    compiler::TNode<BigInt> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 86);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = BigIntBuiltinsAssembler(state_).CppAbsoluteCompare(compiler::TNode<BigInt>{tmp0}, compiler::TNode<BigInt>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<BigInt> tmp3;
    compiler::TNode<BigInt> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 85);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<BigInt> tmp6;
    compiler::TNode<BigInt> tmp7;
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Int32T>{tmp8};
}

compiler::TNode<BigInt> MutableBigIntAbsoluteSub_236(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::TNode<Uint32T> p_resultSign) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T, BigInt> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T, BigInt> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_x, p_y, p_resultSign);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<BigInt> tmp1;
    compiler::TNode<BigInt> tmp2;
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 91);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 92);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 93);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 96);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<BigInt> tmp10;
    compiler::TNode<BigInt> tmp11;
    compiler::TNode<Uint32T> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Uint32T> tmp15;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 98);
    ca_.Goto(&block1, tmp9, tmp10, tmp11, tmp12, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<BigInt> tmp17;
    compiler::TNode<BigInt> tmp18;
    compiler::TNode<Uint32T> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<Uint32T> tmp22;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 101);
    compiler::TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp21}, compiler::TNode<IntPtrT>{tmp23});
    ca_.Branch(tmp24, &block4, &block5, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<BigInt> tmp26;
    compiler::TNode<BigInt> tmp27;
    compiler::TNode<Uint32T> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<Uint32T> tmp31;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 102);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp28}, compiler::TNode<Uint32T>{tmp31});
    ca_.Branch(tmp32, &block6, &block7, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<BigInt> tmp34;
    compiler::TNode<BigInt> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<Uint32T> tmp39;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block9, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp34);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<BigInt> tmp41;
    compiler::TNode<BigInt> tmp42;
    compiler::TNode<Uint32T> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Uint32T> tmp46;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<BigInt> tmp47;
    tmp47 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kBigIntUnaryMinus, tmp40, tmp41));
    USE(tmp47);
    ca_.Goto(&block8, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<BigInt> tmp49;
    compiler::TNode<BigInt> tmp50;
    compiler::TNode<Uint32T> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<BigInt> tmp55;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block8, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<BigInt> tmp57;
    compiler::TNode<BigInt> tmp58;
    compiler::TNode<Uint32T> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<BigInt> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block1, tmp56, tmp57, tmp58, tmp59, tmp63);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<BigInt> tmp65;
    compiler::TNode<BigInt> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<Uint32T> tmp70;
    ca_.Bind(&block5, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 105);
    compiler::TNode<BigInt> tmp71;
    USE(tmp71);
    tmp71 = AllocateEmptyBigInt_234(state_, compiler::TNode<Context>{tmp64}, compiler::TNode<Uint32T>{tmp67}, compiler::TNode<IntPtrT>{tmp68});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 106);
    BigIntBuiltinsAssembler(state_).CppAbsoluteSubAndCanonicalize(compiler::TNode<BigInt>{tmp71}, compiler::TNode<BigInt>{tmp65}, compiler::TNode<BigInt>{tmp66});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 107);
    compiler::TNode<BigInt> tmp72;
    USE(tmp72);
    tmp72 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp71});
    ca_.Goto(&block1, tmp64, tmp65, tmp66, tmp67, tmp72);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<BigInt> tmp74;
    compiler::TNode<BigInt> tmp75;
    compiler::TNode<Uint32T> tmp76;
    compiler::TNode<BigInt> tmp77;
    ca_.Bind(&block1, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 89);
    ca_.Goto(&block10, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

    compiler::TNode<Context> tmp78;
    compiler::TNode<BigInt> tmp79;
    compiler::TNode<BigInt> tmp80;
    compiler::TNode<Uint32T> tmp81;
    compiler::TNode<BigInt> tmp82;
    ca_.Bind(&block10, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
  return compiler::TNode<BigInt>{tmp82};
}

compiler::TNode<BigInt> MutableBigIntAbsoluteAdd_237(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_xBigint, compiler::TNode<BigInt> p_yBigint, compiler::TNode<Uint32T> p_resultSign, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt, BigInt> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt, BigInt> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt, Uint32T, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, IntPtrT, IntPtrT, BigInt, BigInt, Uint32T, IntPtrT, BigInt> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, BigInt> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_xBigint, p_yBigint, p_resultSign);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<BigInt> tmp1;
    compiler::TNode<BigInt> tmp2;
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 113);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 114);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 116);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 118);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<BigInt> tmp8;
    compiler::TNode<BigInt> tmp9;
    compiler::TNode<Uint32T> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<BigInt> tmp13;
    compiler::TNode<BigInt> tmp14;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 120);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 121);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 122);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 123);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 124);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 118);
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp12, tmp11, tmp9, tmp8);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BigInt> tmp16;
    compiler::TNode<BigInt> tmp17;
    compiler::TNode<Uint32T> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<BigInt> tmp21;
    compiler::TNode<BigInt> tmp22;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 128);
    compiler::TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp19}, compiler::TNode<IntPtrT>{tmp23});
    ca_.Branch(tmp24, &block5, &block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<BigInt> tmp26;
    compiler::TNode<BigInt> tmp27;
    compiler::TNode<Uint32T> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<BigInt> tmp31;
    compiler::TNode<BigInt> tmp32;
    ca_.Bind(&block5, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 130);
    ca_.Goto(&block2, tmp25, tmp26, tmp27, tmp28, tmp31);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<BigInt> tmp34;
    compiler::TNode<BigInt> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<BigInt> tmp39;
    compiler::TNode<BigInt> tmp40;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 134);
    compiler::TNode<IntPtrT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp41});
    ca_.Branch(tmp42, &block7, &block8, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<BigInt> tmp44;
    compiler::TNode<BigInt> tmp45;
    compiler::TNode<Uint32T> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<BigInt> tmp49;
    compiler::TNode<BigInt> tmp50;
    ca_.Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 135);
    compiler::TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp49});
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp46}, compiler::TNode<Uint32T>{tmp51});
    ca_.Branch(tmp52, &block9, &block10, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<BigInt> tmp54;
    compiler::TNode<BigInt> tmp55;
    compiler::TNode<Uint32T> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<BigInt> tmp59;
    compiler::TNode<BigInt> tmp60;
    ca_.Bind(&block9, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.Goto(&block12, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp59);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<BigInt> tmp62;
    compiler::TNode<BigInt> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<BigInt> tmp67;
    compiler::TNode<BigInt> tmp68;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    compiler::TNode<BigInt> tmp69;
    tmp69 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kBigIntUnaryMinus, tmp61, tmp67));
    USE(tmp69);
    ca_.Goto(&block11, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<BigInt> tmp71;
    compiler::TNode<BigInt> tmp72;
    compiler::TNode<Uint32T> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<BigInt> tmp76;
    compiler::TNode<BigInt> tmp77;
    compiler::TNode<BigInt> tmp78;
    ca_.Bind(&block12, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<BigInt> tmp80;
    compiler::TNode<BigInt> tmp81;
    compiler::TNode<Uint32T> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<BigInt> tmp85;
    compiler::TNode<BigInt> tmp86;
    compiler::TNode<BigInt> tmp87;
    ca_.Bind(&block11, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block2, tmp79, tmp80, tmp81, tmp82, tmp87);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<BigInt> tmp89;
    compiler::TNode<BigInt> tmp90;
    compiler::TNode<Uint32T> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<BigInt> tmp94;
    compiler::TNode<BigInt> tmp95;
    ca_.Bind(&block8, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 139);
    compiler::TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp92}, compiler::TNode<IntPtrT>{tmp96});
    compiler::TNode<BigInt> tmp98;
    USE(tmp98);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp98 = AllocateEmptyBigIntNoThrow_233(state_, compiler::TNode<Context>{tmp88}, compiler::TNode<Uint32T>{tmp91}, compiler::TNode<IntPtrT>{tmp97}, &label0);
    ca_.Goto(&block13, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp91, tmp97, tmp98);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp91, tmp97);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp99;
    compiler::TNode<BigInt> tmp100;
    compiler::TNode<BigInt> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    compiler::TNode<BigInt> tmp105;
    compiler::TNode<BigInt> tmp106;
    compiler::TNode<Uint32T> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    ca_.Bind(&block14, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<BigInt> tmp110;
    compiler::TNode<BigInt> tmp111;
    compiler::TNode<Uint32T> tmp112;
    compiler::TNode<IntPtrT> tmp113;
    compiler::TNode<IntPtrT> tmp114;
    compiler::TNode<BigInt> tmp115;
    compiler::TNode<BigInt> tmp116;
    compiler::TNode<Uint32T> tmp117;
    compiler::TNode<IntPtrT> tmp118;
    compiler::TNode<BigInt> tmp119;
    ca_.Bind(&block13, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 141);
    BigIntBuiltinsAssembler(state_).CppAbsoluteAddAndCanonicalize(compiler::TNode<BigInt>{tmp119}, compiler::TNode<BigInt>{tmp115}, compiler::TNode<BigInt>{tmp116});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 142);
    compiler::TNode<BigInt> tmp120;
    USE(tmp120);
    tmp120 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp119});
    ca_.Goto(&block2, tmp109, tmp110, tmp111, tmp112, tmp120);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<BigInt> tmp122;
    compiler::TNode<BigInt> tmp123;
    compiler::TNode<Uint32T> tmp124;
    compiler::TNode<BigInt> tmp125;
    ca_.Bind(&block2, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 110);
    ca_.Goto(&block15, tmp121, tmp122, tmp123, tmp124, tmp125);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_BigIntTooBig);
  }

    compiler::TNode<Context> tmp126;
    compiler::TNode<BigInt> tmp127;
    compiler::TNode<BigInt> tmp128;
    compiler::TNode<Uint32T> tmp129;
    compiler::TNode<BigInt> tmp130;
    ca_.Bind(&block15, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
  return compiler::TNode<BigInt>{tmp130};
}

compiler::TNode<BigInt> BigIntAddImpl_238(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T, BigInt, BigInt, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T, BigInt, BigInt, Uint32T, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, BigInt> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<BigInt> tmp1;
    compiler::TNode<BigInt> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 147);
    compiler::TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 148);
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 149);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<BigInt> tmp7;
    compiler::TNode<BigInt> tmp8;
    compiler::TNode<Uint32T> tmp9;
    compiler::TNode<Uint32T> tmp10;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 152);
    compiler::TNode<BigInt> tmp11;
    USE(tmp11);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp11 = MutableBigIntAbsoluteAdd_237(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<BigInt>{tmp7}, compiler::TNode<BigInt>{tmp8}, compiler::TNode<Uint32T>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp7, tmp8, tmp9, tmp11);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp8, tmp9, tmp10, tmp7, tmp8, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<BigInt> tmp13;
    compiler::TNode<BigInt> tmp14;
    compiler::TNode<Uint32T> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<BigInt> tmp17;
    compiler::TNode<BigInt> tmp18;
    compiler::TNode<Uint32T> tmp19;
    ca_.Bind(&block6, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<BigInt> tmp21;
    compiler::TNode<BigInt> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<Uint32T> tmp24;
    compiler::TNode<BigInt> tmp25;
    compiler::TNode<BigInt> tmp26;
    compiler::TNode<Uint32T> tmp27;
    compiler::TNode<BigInt> tmp28;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block2, tmp20, tmp21, tmp22, tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<BigInt> tmp30;
    compiler::TNode<BigInt> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<Uint32T> tmp33;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 157);
    compiler::TNode<Int32T> tmp34;
    USE(tmp34);
    tmp34 = MutableBigIntAbsoluteCompare_235(state_, compiler::TNode<BigInt>{tmp30}, compiler::TNode<BigInt>{tmp31});
    compiler::TNode<Int32T> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).Int32GreaterThanOrEqual(compiler::TNode<Int32T>{tmp34}, compiler::TNode<Int32T>{tmp35});
    ca_.Branch(tmp36, &block7, &block8, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<BigInt> tmp38;
    compiler::TNode<BigInt> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    ca_.Bind(&block7, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 158);
    compiler::TNode<BigInt> tmp42;
    USE(tmp42);
    tmp42 = MutableBigIntAbsoluteSub_236(state_, compiler::TNode<Context>{tmp37}, compiler::TNode<BigInt>{tmp38}, compiler::TNode<BigInt>{tmp39}, compiler::TNode<Uint32T>{tmp40});
    ca_.Goto(&block2, tmp37, tmp38, tmp39, tmp42);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<BigInt> tmp44;
    compiler::TNode<BigInt> tmp45;
    compiler::TNode<Uint32T> tmp46;
    compiler::TNode<Uint32T> tmp47;
    ca_.Bind(&block8, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 160);
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = InvertSign_232(state_, compiler::TNode<Uint32T>{tmp46});
    compiler::TNode<BigInt> tmp49;
    USE(tmp49);
    tmp49 = MutableBigIntAbsoluteSub_236(state_, compiler::TNode<Context>{tmp43}, compiler::TNode<BigInt>{tmp45}, compiler::TNode<BigInt>{tmp44}, compiler::TNode<Uint32T>{tmp48});
    ca_.Goto(&block2, tmp43, tmp44, tmp45, tmp49);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<BigInt> tmp51;
    compiler::TNode<BigInt> tmp52;
    compiler::TNode<BigInt> tmp53;
    ca_.Bind(&block2, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 145);
    ca_.Goto(&block9, tmp50, tmp51, tmp52, tmp53);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_BigIntTooBig);
  }

    compiler::TNode<Context> tmp54;
    compiler::TNode<BigInt> tmp55;
    compiler::TNode<BigInt> tmp56;
    compiler::TNode<BigInt> tmp57;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57);
  return compiler::TNode<BigInt>{tmp57};
}

TF_BUILTIN(BigIntAddNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<BigInt> parameter1 = UncheckedCast<BigInt>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::TNode<BigInt> parameter2 = UncheckedCast<BigInt>(Parameter(Descriptor::kY));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, BigInt, BigInt> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt, BigInt, BigInt, BigInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<BigInt> tmp1;
    compiler::TNode<BigInt> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 166);
    compiler::TNode<BigInt> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BigIntAddImpl_238(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<BigInt>{tmp1}, compiler::TNode<BigInt>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<BigInt> tmp5;
    compiler::TNode<BigInt> tmp6;
    compiler::TNode<BigInt> tmp7;
    compiler::TNode<BigInt> tmp8;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<BigInt> tmp10;
    compiler::TNode<BigInt> tmp11;
    compiler::TNode<BigInt> tmp12;
    compiler::TNode<BigInt> tmp13;
    compiler::TNode<BigInt> tmp14;
    ca_.Bind(&block3, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    CodeStubAssembler(state_).Return(tmp14);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BigInt> tmp16;
    compiler::TNode<BigInt> tmp17;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 170);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = Convert5ATSmi17ATconstexpr_int31_1367(state_, 0);
    CodeStubAssembler(state_).Return(tmp18);
  }
}

TF_BUILTIN(BigIntAdd, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Numeric> parameter1 = UncheckedCast<Numeric>(Parameter(Descriptor::kXNum));
  USE(parameter1);
  compiler::TNode<Numeric> parameter2 = UncheckedCast<Numeric>(Parameter(Descriptor::kYNum));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, Numeric> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, Numeric, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, BigInt, Numeric> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, BigInt, Numeric, BigInt> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, BigInt, BigInt, BigInt, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric, BigInt, BigInt, BigInt, BigInt, BigInt> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Numeric, Numeric> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Numeric> tmp1;
    compiler::TNode<Numeric> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 177);
    compiler::TNode<BigInt> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast8ATBigInt_1411(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Numeric> tmp5;
    compiler::TNode<Numeric> tmp6;
    compiler::TNode<Numeric> tmp7;
    ca_.Bind(&block6, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block4, tmp4, tmp5, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Numeric> tmp9;
    compiler::TNode<Numeric> tmp10;
    compiler::TNode<Numeric> tmp11;
    compiler::TNode<BigInt> tmp12;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 178);
    compiler::TNode<BigInt> tmp13;
    USE(tmp13);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp13 = Cast8ATBigInt_1411(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp10}, &label0);
    ca_.Goto(&block7, tmp8, tmp9, tmp10, tmp12, tmp10, tmp13);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp8, tmp9, tmp10, tmp12, tmp10);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Numeric> tmp15;
    compiler::TNode<Numeric> tmp16;
    compiler::TNode<BigInt> tmp17;
    compiler::TNode<Numeric> tmp18;
    ca_.Bind(&block8, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block4, tmp14, tmp15, tmp16);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Numeric> tmp20;
    compiler::TNode<Numeric> tmp21;
    compiler::TNode<BigInt> tmp22;
    compiler::TNode<Numeric> tmp23;
    compiler::TNode<BigInt> tmp24;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 180);
    compiler::TNode<BigInt> tmp25;
    USE(tmp25);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp25 = BigIntAddImpl_238(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<BigInt>{tmp22}, compiler::TNode<BigInt>{tmp24}, &label0);
    ca_.Goto(&block9, tmp19, tmp20, tmp21, tmp22, tmp24, tmp22, tmp24, tmp25);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp19, tmp20, tmp21, tmp22, tmp24, tmp22, tmp24);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Numeric> tmp27;
    compiler::TNode<Numeric> tmp28;
    compiler::TNode<BigInt> tmp29;
    compiler::TNode<BigInt> tmp30;
    compiler::TNode<BigInt> tmp31;
    compiler::TNode<BigInt> tmp32;
    ca_.Bind(&block10, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block2, tmp26, tmp27, tmp28);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<Numeric> tmp34;
    compiler::TNode<Numeric> tmp35;
    compiler::TNode<BigInt> tmp36;
    compiler::TNode<BigInt> tmp37;
    compiler::TNode<BigInt> tmp38;
    compiler::TNode<BigInt> tmp39;
    compiler::TNode<BigInt> tmp40;
    ca_.Bind(&block9, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    CodeStubAssembler(state_).Return(tmp40);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Numeric> tmp42;
    compiler::TNode<Numeric> tmp43;
    ca_.Bind(&block4, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 183);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp41}, MessageTemplate::kBigIntMixedTypes);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Numeric> tmp45;
    compiler::TNode<Numeric> tmp46;
    ca_.Bind(&block2, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 186);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp44}, MessageTemplate::kBigIntTooBig);
  }
}

TF_BUILTIN(BigIntUnaryMinus, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<BigInt> parameter1 = UncheckedCast<BigInt>(Parameter(Descriptor::kBigint));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT, BigInt, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT, BigInt, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT, BigInt, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BigInt, IntPtrT, BigInt, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<BigInt> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 191);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(compiler::TNode<BigInt>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 194);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<BigInt> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 195);
    CodeStubAssembler(state_).Return(tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<BigInt> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 199);
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(compiler::TNode<BigInt>{tmp9});
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = InvertSign_232(state_, compiler::TNode<Uint32T>{tmp11});
    compiler::TNode<BigInt> tmp13;
    USE(tmp13);
    tmp13 = AllocateEmptyBigInt_234(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Uint32T>{tmp12}, compiler::TNode<IntPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 200);
    compiler::TNode<IntPtrT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp13, tmp14);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BigInt> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<BigInt> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp19}, compiler::TNode<IntPtrT>{tmp17});
    ca_.Branch(tmp20, &block3, &block4, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<BigInt> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<BigInt> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 201);
    compiler::TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp22}, compiler::TNode<IntPtrT>{tmp25});
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp24}, compiler::TNode<IntPtrT>{tmp25}, compiler::TNode<UintPtrT>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 200);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<BigInt> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<BigInt> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    ca_.Bind(&block6, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp31}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Goto(&block5, tmp27, tmp28, tmp29, tmp30, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<BigInt> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<BigInt> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 203);
    compiler::TNode<BigInt> tmp39;
    USE(tmp39);
    tmp39 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp37});
    CodeStubAssembler(state_).Return(tmp39);
  }
}

compiler::TNode<BigInt> Convert10BigIntBase13MutableBigInt_1410(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<BigInt> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2254);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<BigInt> tmp1;
    compiler::TNode<BigInt> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 22);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<BigInt> tmp3;
    compiler::TNode<BigInt> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<BigInt>{tmp4};
}

compiler::TNode<BigInt> Cast8ATBigInt_1411(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BigInt> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 1829);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<BigInt> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast8ATBigInt_105(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<BigInt> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<BigInt> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/bigint.tq", 177);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<BigInt> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<BigInt>{tmp23};
}

}  // namespace internal
}  // namespace v8

