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

TF_BUILTIN(MathAcos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 11);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 12);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Acos(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAcosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 20);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 21);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Acosh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAsin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 29);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 30);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Asin(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAsinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 38);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 39);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Asinh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAtan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 47);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 48);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Atan(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAtan2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 56);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 57);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3});
    compiler::TNode<Float64T> tmp7;
    USE(tmp7);
    tmp7 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 58);
    compiler::TNode<Float64T> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).Float64Atan2(compiler::TNode<Float64T>{tmp5}, compiler::TNode<Float64T>{tmp7});
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(MathAtanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 66);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 67);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Atanh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathCbrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 75);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 76);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Cbrt(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathClz32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 84);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 88);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Int32T>(), tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Int32T>(), tmp3, tmp3);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Smi> tmp19;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 89);
    compiler::TNode<Int32T> tmp20;
    USE(tmp20);
    tmp20 = Convert7ATint325ATSmi_166(state_, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp12, tmp13, tmp14, tmp15, tmp20, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 91);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 92);
    compiler::TNode<Int32T> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).TruncateHeapNumberValueToWord32(compiler::TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp26)});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp24, tmp27, tmp26);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 96);
    compiler::TNode<Int32T> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Word32Clz(compiler::TNode<Int32T>{tmp32});
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = Convert20UT5ATSmi10HeapNumber7ATint32_147(state_, compiler::TNode<Int32T>{tmp34});
    CodeStubAssembler(state_).Return(tmp35);
  }
}

TF_BUILTIN(MathCos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 104);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 105);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Cos(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathCosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 113);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 114);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Cosh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathExp, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 122);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 123);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Exp(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathExpm1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 131);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 132);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Expm1(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathFround, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 138);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float32T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat3220UT5ATSmi10HeapNumber_172(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 139);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = Convert9ATfloat649ATfloat32_170(state_, compiler::TNode<Float32T>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 140);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 148);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 149);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Log(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog1p, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 157);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 158);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Log1p(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog10, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 166);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 167);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Log10(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 175);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 176);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Log2(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 184);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 185);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Sin(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSign, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 191);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 192);
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 194);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Float64LessThan(compiler::TNode<Float64T>{tmp4}, compiler::TNode<Float64T>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Float64T> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 195);
    compiler::TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, -1);
    CodeStubAssembler(state_).Return(tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Float64T> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 196);
    compiler::TNode<Float64T> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, 0);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp17}, compiler::TNode<Float64T>{tmp18});
    ca_.Branch(tmp19, &block4, &block5, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Float64T> tmp24;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 197);
    compiler::TNode<Number> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 1);
    CodeStubAssembler(state_).Return(tmp25);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Float64T> tmp30;
    ca_.Bind(&block5, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 199);
    CodeStubAssembler(state_).Return(tmp29);
  }
}

TF_BUILTIN(MathSinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 208);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 209);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Sinh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSqrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 217);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 218);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Sqrt(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathTan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 226);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 227);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Tan(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathTanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 235);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/math.tq", 236);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64Tanh(compiler::TNode<Float64T>{tmp4});
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

}  // namespace internal
}  // namespace v8

