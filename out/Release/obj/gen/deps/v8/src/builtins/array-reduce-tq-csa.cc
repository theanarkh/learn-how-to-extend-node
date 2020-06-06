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

TF_BUILTIN(ArrayReducePreLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, HeapObject, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, HeapObject, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 17);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_1365(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp13, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18, &tmp19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 18);
    compiler::TNode<HeapObject> tmp25;
    USE(tmp25);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp25 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<Object>{tmp22}, &label0);
    ca_.Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22, tmp25);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block8, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block6, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<HeapObject> tmp38;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<HeapObject> tmp49;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 19);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast20UT5ATSmi10HeapNumber_81(state_, compiler::TNode<Object>{tmp47}, &label0);
    ca_.Goto(&block11, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<HeapObject> tmp56;
    compiler::TNode<Object> tmp57;
    ca_.Bind(&block12, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block10, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<HeapObject> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Number> tmp65;
    ca_.Bind(&block11, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.Goto(&block9, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<HeapObject> tmp71;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<HeapObject> tmp77;
    compiler::TNode<Number> tmp78;
    ca_.Bind(&block9, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 25);
    compiler::TNode<Oddball> tmp79;
    USE(tmp79);
    tmp79 = TheHole_64(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 24);
    compiler::TNode<Number> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::TNode<Object> tmp81;
    tmp81 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp72, tmp76, tmp77, tmp79, tmp76, tmp80, tmp78);
    USE(tmp81);
    CodeStubAssembler(state_).Return(tmp81);
  }
}

TF_BUILTIN(ArrayReduceLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kAccumulator));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 40);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1365(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 41);
    compiler::TNode<HeapObject> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<HeapObject> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<HeapObject> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 42);
    compiler::TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_81(state_, compiler::TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<HeapObject> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<HeapObject> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<HeapObject> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<HeapObject> tmp103;
    compiler::TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 43);
    compiler::TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_81(state_, compiler::TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<HeapObject> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<HeapObject> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<HeapObject> tmp134;
    compiler::TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<HeapObject> tmp143;
    compiler::TNode<Number> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 45);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, HeapObject, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 57);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1365(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 58);
    compiler::TNode<HeapObject> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<HeapObject> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<HeapObject> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 59);
    compiler::TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_81(state_, compiler::TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<HeapObject> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<HeapObject> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<HeapObject> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<HeapObject> tmp103;
    compiler::TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 60);
    compiler::TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_81(state_, compiler::TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<HeapObject> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<HeapObject> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<HeapObject> tmp134;
    compiler::TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<HeapObject> tmp143;
    compiler::TNode<Number> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 63);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 65);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<HeapObject> parameter2 = UncheckedCast<HeapObject>(Parameter(Descriptor::kCallbackfn));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialAccumulator));
  USE(parameter3);
  compiler::TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kO));
  USE(parameter4);
  compiler::TNode<Number> parameter5 = UncheckedCast<Number>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  compiler::TNode<Number> parameter6 = UncheckedCast<Number>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject, Object, JSReceiver, Number, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 71);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 74);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Number> tmp15;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp15}, compiler::TNode<Number>{tmp13}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp15, tmp13);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp15, tmp13);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<Number> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block1, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Number> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Number> tmp37;
    ca_.Bind(&block6, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<HeapObject> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Number> tmp46;
    ca_.Bind(&block1, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 80);
    compiler::TNode<Oddball> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).HasProperty_Inline(compiler::TNode<Context>{tmp38}, compiler::TNode<JSReceiver>{tmp42}, compiler::TNode<Object>{tmp46});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 83);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = True_67(state_);
    compiler::TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp47}, compiler::TNode<HeapObject>{tmp48});
    ca_.Branch(tmp49, &block7, &block8, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<HeapObject> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Number> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Oddball> tmp59;
    ca_.Bind(&block7, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 85);
    compiler::TNode<Object> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp50}, compiler::TNode<Object>{tmp54}, compiler::TNode<Object>{tmp58});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 87);
    compiler::TNode<Oddball> tmp61;
    USE(tmp61);
    tmp61 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp57}, compiler::TNode<HeapObject>{tmp61});
    ca_.Branch(tmp62, &block9, &block10, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Number> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Oddball> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block9, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 87);
    ca_.Goto(&block11, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp73, tmp71, tmp72, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<HeapObject> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<Oddball> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 94);
    compiler::TNode<Oddball> tmp85;
    USE(tmp85);
    tmp85 = Undefined_66(state_);
    compiler::TNode<Object> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp74}, compiler::TNode<HeapObject>{tmp76}, compiler::TNode<Object>{tmp85}, compiler::TNode<Object>{tmp81}, compiler::TNode<Object>{tmp84}, compiler::TNode<Object>{tmp82}, compiler::TNode<Object>{tmp78});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 93);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 87);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp86, tmp82, tmp83, tmp84);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<HeapObject> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Number> tmp95;
    compiler::TNode<Oddball> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 83);
    ca_.Goto(&block8, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<HeapObject> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Number> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Number> tmp106;
    compiler::TNode<Oddball> tmp107;
    ca_.Bind(&block8, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 74);
    ca_.Goto(&block4, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<HeapObject> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<Number> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Number> tmp116;
    ca_.Bind(&block4, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    compiler::TNode<Number> tmp117;
    USE(tmp117);
    tmp117 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 1);
    compiler::TNode<Number> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp116}, compiler::TNode<Number>{tmp117});
    ca_.Goto(&block3, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp118);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    compiler::TNode<HeapObject> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Number> tmp127;
    ca_.Bind(&block2, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 104);
    compiler::TNode<Oddball> tmp128;
    USE(tmp128);
    tmp128 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp126}, compiler::TNode<HeapObject>{tmp128});
    ca_.Branch(tmp129, &block12, &block13, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<JSReceiver> tmp131;
    compiler::TNode<HeapObject> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<Object> tmp137;
    ca_.Bind(&block12, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 105);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp130}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<HeapObject> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<Number> tmp143;
    compiler::TNode<Number> tmp144;
    compiler::TNode<Object> tmp145;
    ca_.Bind(&block13, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 107);
    CodeStubAssembler(state_).Return(tmp145);
  }
}

compiler::TNode<Object> FastArrayReduce_27(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<HeapObject> p_callbackfn, compiler::TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, JSArray> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, Object> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Context, HeapObject, Oddball, Object, Object, Smi, JSArray> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object, JSArray, JSArray, JSArray, Map, BoolT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, HeapObject, Object, Object> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_callbackfn, p_initialAccumulator);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<HeapObject> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 115);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 116);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp20);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<HeapObject> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    compiler::TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    ca_.Goto(&block1, tmp27, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<HeapObject> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Smi> tmp34;
    ca_.Bind(&block3, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 118);
    compiler::TNode<JSArray> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast20ATFastJSArrayForRead_112(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<HeapObject>{tmp29}, &label0);
    ca_.Goto(&block9, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<HeapObject> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<HeapObject> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<JSArray> tmp50;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block8, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<Number> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    ca_.Goto(&block1, tmp57, tmp56);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<HeapObject> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSArray> tmp64;
    ca_.Bind(&block7, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 119);
    compiler::TNode<JSArray> tmp65;
    USE(tmp65);
    compiler::TNode<JSArray> tmp66;
    USE(tmp66);
    compiler::TNode<Map> tmp67;
    USE(tmp67);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    std::tie(tmp65, tmp66, tmp67, tmp68) = NewFastJSArrayForReadWitness_212(state_, compiler::TNode<JSArray>{tmp64}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 122);
    compiler::TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block13, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<HeapObject> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<JSArray> tmp76;
    compiler::TNode<JSArray> tmp77;
    compiler::TNode<JSArray> tmp78;
    compiler::TNode<Map> tmp79;
    compiler::TNode<BoolT> tmp80;
    compiler::TNode<Smi> tmp81;
    ca_.Bind(&block13, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp81}, compiler::TNode<Number>{tmp72}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp81, tmp72);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block16, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp81, tmp72);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<HeapObject> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<JSArray> tmp88;
    compiler::TNode<JSArray> tmp89;
    compiler::TNode<JSArray> tmp90;
    compiler::TNode<Map> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Number> tmp95;
    ca_.Bind(&block15, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<HeapObject> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSArray> tmp102;
    compiler::TNode<JSArray> tmp103;
    compiler::TNode<JSArray> tmp104;
    compiler::TNode<Map> tmp105;
    compiler::TNode<BoolT> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Number> tmp109;
    ca_.Bind(&block16, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block12, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSReceiver> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<HeapObject> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<JSArray> tmp116;
    compiler::TNode<JSArray> tmp117;
    compiler::TNode<JSArray> tmp118;
    compiler::TNode<Map> tmp119;
    compiler::TNode<BoolT> tmp120;
    compiler::TNode<Smi> tmp121;
    ca_.Bind(&block11, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2824);
    compiler::TNode<IntPtrT> tmp122 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp122);
    compiler::TNode<Map>tmp123 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp117, tmp122});
    compiler::TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<HeapObject>{tmp123}, compiler::TNode<HeapObject>{tmp119});
    ca_.Branch(tmp124, &block20, &block21, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<Number> tmp127;
    compiler::TNode<HeapObject> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<JSArray> tmp131;
    compiler::TNode<JSArray> tmp132;
    compiler::TNode<JSArray> tmp133;
    compiler::TNode<Map> tmp134;
    compiler::TNode<BoolT> tmp135;
    compiler::TNode<Smi> tmp136;
    ca_.Bind(&block20, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136);
    ca_.Goto(&block18, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<HeapObject> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<JSArray> tmp143;
    compiler::TNode<JSArray> tmp144;
    compiler::TNode<JSArray> tmp145;
    compiler::TNode<Map> tmp146;
    compiler::TNode<BoolT> tmp147;
    compiler::TNode<Smi> tmp148;
    ca_.Bind(&block21, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2831);
    compiler::TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp149, &block22, &block23, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Number> tmp152;
    compiler::TNode<HeapObject> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSArray> tmp156;
    compiler::TNode<JSArray> tmp157;
    compiler::TNode<JSArray> tmp158;
    compiler::TNode<Map> tmp159;
    compiler::TNode<BoolT> tmp160;
    compiler::TNode<Smi> tmp161;
    ca_.Bind(&block22, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.Goto(&block18, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<JSReceiver> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<HeapObject> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<JSArray> tmp168;
    compiler::TNode<JSArray> tmp169;
    compiler::TNode<JSArray> tmp170;
    compiler::TNode<Map> tmp171;
    compiler::TNode<BoolT> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block23, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2832);
    compiler::TNode<JSArray> tmp174;
    USE(tmp174);
    tmp174 = (compiler::TNode<JSArray>{tmp169});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 123);
    ca_.Goto(&block19, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp174, tmp171, tmp172, tmp173);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp175;
    compiler::TNode<JSReceiver> tmp176;
    compiler::TNode<Number> tmp177;
    compiler::TNode<HeapObject> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<JSArray> tmp181;
    compiler::TNode<JSArray> tmp182;
    compiler::TNode<JSArray> tmp183;
    compiler::TNode<Map> tmp184;
    compiler::TNode<BoolT> tmp185;
    compiler::TNode<Smi> tmp186;
    ca_.Bind(&block19, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.Goto(&block17, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Number> tmp189;
    compiler::TNode<HeapObject> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<JSArray> tmp193;
    compiler::TNode<JSArray> tmp194;
    compiler::TNode<JSArray> tmp195;
    compiler::TNode<Map> tmp196;
    compiler::TNode<BoolT> tmp197;
    compiler::TNode<Smi> tmp198;
    ca_.Bind(&block18, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.Goto(&block1, tmp198, tmp192);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp199;
    compiler::TNode<JSReceiver> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<HeapObject> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<JSArray> tmp205;
    compiler::TNode<JSArray> tmp206;
    compiler::TNode<JSArray> tmp207;
    compiler::TNode<Map> tmp208;
    compiler::TNode<BoolT> tmp209;
    compiler::TNode<Smi> tmp210;
    ca_.Bind(&block17, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 126);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2820);
    ca_.Goto(&block26, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp210, tmp207);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Number> tmp213;
    compiler::TNode<HeapObject> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<Object> tmp216;
    compiler::TNode<JSArray> tmp217;
    compiler::TNode<JSArray> tmp218;
    compiler::TNode<JSArray> tmp219;
    compiler::TNode<Map> tmp220;
    compiler::TNode<BoolT> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<JSArray> tmp224;
    ca_.Bind(&block26, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 126);
    compiler::TNode<IntPtrT> tmp225 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp225);
    compiler::TNode<Number>tmp226 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp224, tmp225});
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThanOrEqual(compiler::TNode<Number>{tmp223}, compiler::TNode<Number>{tmp226}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block27, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp226);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block28, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp226);
    }
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<JSReceiver> tmp228;
    compiler::TNode<Number> tmp229;
    compiler::TNode<HeapObject> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<Object> tmp232;
    compiler::TNode<JSArray> tmp233;
    compiler::TNode<JSArray> tmp234;
    compiler::TNode<JSArray> tmp235;
    compiler::TNode<Map> tmp236;
    compiler::TNode<BoolT> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<Number> tmp240;
    ca_.Bind(&block27, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240);
    ca_.Goto(&block24, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<HeapObject> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<JSArray> tmp247;
    compiler::TNode<JSArray> tmp248;
    compiler::TNode<JSArray> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Smi> tmp253;
    compiler::TNode<Number> tmp254;
    ca_.Bind(&block28, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254);
    ca_.Goto(&block25, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp255;
    compiler::TNode<JSReceiver> tmp256;
    compiler::TNode<Number> tmp257;
    compiler::TNode<HeapObject> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<JSArray> tmp261;
    compiler::TNode<JSArray> tmp262;
    compiler::TNode<JSArray> tmp263;
    compiler::TNode<Map> tmp264;
    compiler::TNode<BoolT> tmp265;
    compiler::TNode<Smi> tmp266;
    ca_.Bind(&block24, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266);
    ca_.Goto(&block1, tmp266, tmp260);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp267;
    compiler::TNode<JSReceiver> tmp268;
    compiler::TNode<Number> tmp269;
    compiler::TNode<HeapObject> tmp270;
    compiler::TNode<Object> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<JSArray> tmp273;
    compiler::TNode<JSArray> tmp274;
    compiler::TNode<JSArray> tmp275;
    compiler::TNode<Map> tmp276;
    compiler::TNode<BoolT> tmp277;
    compiler::TNode<Smi> tmp278;
    ca_.Bind(&block25, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 128);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2837);
    ca_.Branch(tmp277, &block32, &block33, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp278, tmp267, tmp278);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp279;
    compiler::TNode<JSReceiver> tmp280;
    compiler::TNode<Number> tmp281;
    compiler::TNode<HeapObject> tmp282;
    compiler::TNode<Object> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<JSArray> tmp285;
    compiler::TNode<JSArray> tmp286;
    compiler::TNode<JSArray> tmp287;
    compiler::TNode<Map> tmp288;
    compiler::TNode<BoolT> tmp289;
    compiler::TNode<Smi> tmp290;
    compiler::TNode<Smi> tmp291;
    compiler::TNode<Context> tmp292;
    compiler::TNode<Smi> tmp293;
    ca_.Bind(&block32, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2838);
    compiler::TNode<Object> tmp294;
    USE(tmp294);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp294 = LoadElementNoHole16FixedDoubleArray_210(state_, compiler::TNode<Context>{tmp292}, compiler::TNode<JSArray>{tmp287}, compiler::TNode<Smi>{tmp293}, &label0);
    ca_.Goto(&block35, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp287, tmp293, tmp294);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block36, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp287, tmp293);
    }
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp295;
    compiler::TNode<JSReceiver> tmp296;
    compiler::TNode<Number> tmp297;
    compiler::TNode<HeapObject> tmp298;
    compiler::TNode<Object> tmp299;
    compiler::TNode<Object> tmp300;
    compiler::TNode<JSArray> tmp301;
    compiler::TNode<JSArray> tmp302;
    compiler::TNode<JSArray> tmp303;
    compiler::TNode<Map> tmp304;
    compiler::TNode<BoolT> tmp305;
    compiler::TNode<Smi> tmp306;
    compiler::TNode<Smi> tmp307;
    compiler::TNode<Context> tmp308;
    compiler::TNode<Smi> tmp309;
    compiler::TNode<JSArray> tmp310;
    compiler::TNode<Smi> tmp311;
    ca_.Bind(&block36, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311);
    ca_.Goto(&block30, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp312;
    compiler::TNode<JSReceiver> tmp313;
    compiler::TNode<Number> tmp314;
    compiler::TNode<HeapObject> tmp315;
    compiler::TNode<Object> tmp316;
    compiler::TNode<Object> tmp317;
    compiler::TNode<JSArray> tmp318;
    compiler::TNode<JSArray> tmp319;
    compiler::TNode<JSArray> tmp320;
    compiler::TNode<Map> tmp321;
    compiler::TNode<BoolT> tmp322;
    compiler::TNode<Smi> tmp323;
    compiler::TNode<Smi> tmp324;
    compiler::TNode<Context> tmp325;
    compiler::TNode<Smi> tmp326;
    compiler::TNode<JSArray> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<Object> tmp329;
    ca_.Bind(&block35, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329);
    ca_.Goto(&block31, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp329);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp330;
    compiler::TNode<JSReceiver> tmp331;
    compiler::TNode<Number> tmp332;
    compiler::TNode<HeapObject> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<Object> tmp335;
    compiler::TNode<JSArray> tmp336;
    compiler::TNode<JSArray> tmp337;
    compiler::TNode<JSArray> tmp338;
    compiler::TNode<Map> tmp339;
    compiler::TNode<BoolT> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<Smi> tmp342;
    compiler::TNode<Context> tmp343;
    compiler::TNode<Smi> tmp344;
    ca_.Bind(&block33, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2841);
    compiler::TNode<Object> tmp345;
    USE(tmp345);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp345 = LoadElementNoHole10FixedArray_209(state_, compiler::TNode<Context>{tmp343}, compiler::TNode<JSArray>{tmp338}, compiler::TNode<Smi>{tmp344}, &label0);
    ca_.Goto(&block37, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp338, tmp344, tmp345);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp338, tmp344);
    }
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp346;
    compiler::TNode<JSReceiver> tmp347;
    compiler::TNode<Number> tmp348;
    compiler::TNode<HeapObject> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<JSArray> tmp352;
    compiler::TNode<JSArray> tmp353;
    compiler::TNode<JSArray> tmp354;
    compiler::TNode<Map> tmp355;
    compiler::TNode<BoolT> tmp356;
    compiler::TNode<Smi> tmp357;
    compiler::TNode<Smi> tmp358;
    compiler::TNode<Context> tmp359;
    compiler::TNode<Smi> tmp360;
    compiler::TNode<JSArray> tmp361;
    compiler::TNode<Smi> tmp362;
    ca_.Bind(&block38, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362);
    ca_.Goto(&block30, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp363;
    compiler::TNode<JSReceiver> tmp364;
    compiler::TNode<Number> tmp365;
    compiler::TNode<HeapObject> tmp366;
    compiler::TNode<Object> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<JSArray> tmp369;
    compiler::TNode<JSArray> tmp370;
    compiler::TNode<JSArray> tmp371;
    compiler::TNode<Map> tmp372;
    compiler::TNode<BoolT> tmp373;
    compiler::TNode<Smi> tmp374;
    compiler::TNode<Smi> tmp375;
    compiler::TNode<Context> tmp376;
    compiler::TNode<Smi> tmp377;
    compiler::TNode<JSArray> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<Object> tmp380;
    ca_.Bind(&block37, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380);
    ca_.Goto(&block31, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp380);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp381;
    compiler::TNode<JSReceiver> tmp382;
    compiler::TNode<Number> tmp383;
    compiler::TNode<HeapObject> tmp384;
    compiler::TNode<Object> tmp385;
    compiler::TNode<Object> tmp386;
    compiler::TNode<JSArray> tmp387;
    compiler::TNode<JSArray> tmp388;
    compiler::TNode<JSArray> tmp389;
    compiler::TNode<Map> tmp390;
    compiler::TNode<BoolT> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<Smi> tmp393;
    compiler::TNode<Context> tmp394;
    compiler::TNode<Smi> tmp395;
    compiler::TNode<Object> tmp396;
    ca_.Bind(&block31, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 128);
    ca_.Goto(&block29, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp396);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp397;
    compiler::TNode<JSReceiver> tmp398;
    compiler::TNode<Number> tmp399;
    compiler::TNode<HeapObject> tmp400;
    compiler::TNode<Object> tmp401;
    compiler::TNode<Object> tmp402;
    compiler::TNode<JSArray> tmp403;
    compiler::TNode<JSArray> tmp404;
    compiler::TNode<JSArray> tmp405;
    compiler::TNode<Map> tmp406;
    compiler::TNode<BoolT> tmp407;
    compiler::TNode<Smi> tmp408;
    ca_.Bind(&block30, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408);
    ca_.Goto(&block14, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp409;
    compiler::TNode<JSReceiver> tmp410;
    compiler::TNode<Number> tmp411;
    compiler::TNode<HeapObject> tmp412;
    compiler::TNode<Object> tmp413;
    compiler::TNode<Object> tmp414;
    compiler::TNode<JSArray> tmp415;
    compiler::TNode<JSArray> tmp416;
    compiler::TNode<JSArray> tmp417;
    compiler::TNode<Map> tmp418;
    compiler::TNode<BoolT> tmp419;
    compiler::TNode<Smi> tmp420;
    compiler::TNode<Object> tmp421;
    ca_.Bind(&block29, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 129);
    compiler::TNode<Oddball> tmp422;
    USE(tmp422);
    tmp422 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp423;
    USE(tmp423);
    tmp423 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp414}, compiler::TNode<HeapObject>{tmp422});
    ca_.Branch(tmp423, &block39, &block40, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp424;
    compiler::TNode<JSReceiver> tmp425;
    compiler::TNode<Number> tmp426;
    compiler::TNode<HeapObject> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    compiler::TNode<JSArray> tmp430;
    compiler::TNode<JSArray> tmp431;
    compiler::TNode<JSArray> tmp432;
    compiler::TNode<Map> tmp433;
    compiler::TNode<BoolT> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<Object> tmp436;
    ca_.Bind(&block39, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 130);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 129);
    ca_.Goto(&block41, tmp424, tmp425, tmp426, tmp427, tmp428, tmp436, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp437;
    compiler::TNode<JSReceiver> tmp438;
    compiler::TNode<Number> tmp439;
    compiler::TNode<HeapObject> tmp440;
    compiler::TNode<Object> tmp441;
    compiler::TNode<Object> tmp442;
    compiler::TNode<JSArray> tmp443;
    compiler::TNode<JSArray> tmp444;
    compiler::TNode<JSArray> tmp445;
    compiler::TNode<Map> tmp446;
    compiler::TNode<BoolT> tmp447;
    compiler::TNode<Smi> tmp448;
    compiler::TNode<Object> tmp449;
    ca_.Bind(&block40, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 133);
    compiler::TNode<Oddball> tmp450;
    USE(tmp450);
    tmp450 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2820);
    ca_.Goto(&block42, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp437, tmp440, tmp450, tmp442, tmp449, tmp448, tmp445);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp451;
    compiler::TNode<JSReceiver> tmp452;
    compiler::TNode<Number> tmp453;
    compiler::TNode<HeapObject> tmp454;
    compiler::TNode<Object> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<JSArray> tmp457;
    compiler::TNode<JSArray> tmp458;
    compiler::TNode<JSArray> tmp459;
    compiler::TNode<Map> tmp460;
    compiler::TNode<BoolT> tmp461;
    compiler::TNode<Smi> tmp462;
    compiler::TNode<Object> tmp463;
    compiler::TNode<Context> tmp464;
    compiler::TNode<HeapObject> tmp465;
    compiler::TNode<Oddball> tmp466;
    compiler::TNode<Object> tmp467;
    compiler::TNode<Object> tmp468;
    compiler::TNode<Smi> tmp469;
    compiler::TNode<JSArray> tmp470;
    ca_.Bind(&block42, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 132);
    compiler::TNode<Object> tmp471;
    USE(tmp471);
    tmp471 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp464}, compiler::TNode<HeapObject>{tmp465}, compiler::TNode<Object>{tmp466}, compiler::TNode<Object>{tmp467}, compiler::TNode<Object>{tmp468}, compiler::TNode<Object>{tmp469}, compiler::TNode<Object>{tmp470});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 129);
    ca_.Goto(&block41, tmp451, tmp452, tmp453, tmp454, tmp455, tmp471, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp472;
    compiler::TNode<JSReceiver> tmp473;
    compiler::TNode<Number> tmp474;
    compiler::TNode<HeapObject> tmp475;
    compiler::TNode<Object> tmp476;
    compiler::TNode<Object> tmp477;
    compiler::TNode<JSArray> tmp478;
    compiler::TNode<JSArray> tmp479;
    compiler::TNode<JSArray> tmp480;
    compiler::TNode<Map> tmp481;
    compiler::TNode<BoolT> tmp482;
    compiler::TNode<Smi> tmp483;
    compiler::TNode<Object> tmp484;
    ca_.Bind(&block41, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 122);
    ca_.Goto(&block14, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp485;
    compiler::TNode<JSReceiver> tmp486;
    compiler::TNode<Number> tmp487;
    compiler::TNode<HeapObject> tmp488;
    compiler::TNode<Object> tmp489;
    compiler::TNode<Object> tmp490;
    compiler::TNode<JSArray> tmp491;
    compiler::TNode<JSArray> tmp492;
    compiler::TNode<JSArray> tmp493;
    compiler::TNode<Map> tmp494;
    compiler::TNode<BoolT> tmp495;
    compiler::TNode<Smi> tmp496;
    ca_.Bind(&block14, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496);
    compiler::TNode<Smi> tmp497;
    USE(tmp497);
    tmp497 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp498;
    USE(tmp498);
    tmp498 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp496}, compiler::TNode<Smi>{tmp497});
    ca_.Goto(&block13, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp498);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp499;
    compiler::TNode<JSReceiver> tmp500;
    compiler::TNode<Number> tmp501;
    compiler::TNode<HeapObject> tmp502;
    compiler::TNode<Object> tmp503;
    compiler::TNode<Object> tmp504;
    compiler::TNode<JSArray> tmp505;
    compiler::TNode<JSArray> tmp506;
    compiler::TNode<JSArray> tmp507;
    compiler::TNode<Map> tmp508;
    compiler::TNode<BoolT> tmp509;
    compiler::TNode<Smi> tmp510;
    ca_.Bind(&block12, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 137);
    compiler::TNode<Oddball> tmp511;
    USE(tmp511);
    tmp511 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp512;
    USE(tmp512);
    tmp512 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp504}, compiler::TNode<HeapObject>{tmp511});
    ca_.Branch(tmp512, &block43, &block44, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp513;
    compiler::TNode<JSReceiver> tmp514;
    compiler::TNode<Number> tmp515;
    compiler::TNode<HeapObject> tmp516;
    compiler::TNode<Object> tmp517;
    compiler::TNode<Object> tmp518;
    compiler::TNode<JSArray> tmp519;
    compiler::TNode<JSArray> tmp520;
    compiler::TNode<JSArray> tmp521;
    compiler::TNode<Map> tmp522;
    compiler::TNode<BoolT> tmp523;
    ca_.Bind(&block43, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 138);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp513}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp524;
    compiler::TNode<JSReceiver> tmp525;
    compiler::TNode<Number> tmp526;
    compiler::TNode<HeapObject> tmp527;
    compiler::TNode<Object> tmp528;
    compiler::TNode<Object> tmp529;
    compiler::TNode<JSArray> tmp530;
    compiler::TNode<JSArray> tmp531;
    compiler::TNode<JSArray> tmp532;
    compiler::TNode<Map> tmp533;
    compiler::TNode<BoolT> tmp534;
    ca_.Bind(&block44, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 140);
    ca_.Goto(&block2, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp535;
    compiler::TNode<JSReceiver> tmp536;
    compiler::TNode<Number> tmp537;
    compiler::TNode<HeapObject> tmp538;
    compiler::TNode<Object> tmp539;
    compiler::TNode<Object> tmp540;
    ca_.Bind(&block2, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 110);
    ca_.Goto(&block45, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp541;
    compiler::TNode<Object> tmp542;
    ca_.Bind(&block1, &tmp541, &tmp542);
    *label_Bailout_parameter_1 = tmp542;
    *label_Bailout_parameter_0 = tmp541;
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp543;
    compiler::TNode<JSReceiver> tmp544;
    compiler::TNode<Number> tmp545;
    compiler::TNode<HeapObject> tmp546;
    compiler::TNode<Object> tmp547;
    compiler::TNode<Object> tmp548;
    ca_.Bind(&block45, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548);
  return compiler::TNode<Object>{tmp548};
}

TF_BUILTIN(ArrayReduce, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject, Object, JSReceiver, Number, HeapObject, Object, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject, Object, JSReceiver, Number, HeapObject, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, HeapObject, Object, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 148);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    tmp5 = RequireObjectCoercible_215(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, "Array.prototype.reduce");
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 151);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 154);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = GetLengthProperty_217(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 157);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 158);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 160);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp17}, compiler::TNode<RawPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}}, compiler::TNode<IntPtrT>{tmp24});
    compiler::TNode<HeapObject> tmp26;
    USE(tmp26);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp26 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block6, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<HeapObject> tmp43;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 167);
    compiler::TNode<IntPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp37}, compiler::TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp45, &block7, &block8, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<Number> tmp52;
    compiler::TNode<HeapObject> tmp53;
    ca_.Bind(&block7, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp46}, compiler::TNode<RawPtrT>{tmp47}, compiler::TNode<IntPtrT>{tmp48}}, compiler::TNode<IntPtrT>{tmp54});
    ca_.Goto(&block10, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<HeapObject> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    compiler::TNode<Oddball> tmp64;
    USE(tmp64);
    tmp64 = TheHole_64(state_);
    ca_.Goto(&block9, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<HeapObject> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block9, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<HeapObject> tmp81;
    compiler::TNode<Object> tmp82;
    ca_.Bind(&block9, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 166);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 170);
    compiler::TNode<Object> tmp83;
    USE(tmp83);
    compiler::TypedCodeAssemblerVariable<Number> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = FastArrayReduce_27(state_, compiler::TNode<Context>{tmp77}, compiler::TNode<JSReceiver>{tmp79}, compiler::TNode<Number>{tmp80}, compiler::TNode<HeapObject>{tmp81}, compiler::TNode<Object>{tmp82}, &label0, &result_0_0, &result_0_1);
    ca_.Goto(&block13, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, result_0_0.value(), result_0_1.value());
    }
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<HeapObject> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<HeapObject> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Number> tmp97;
    compiler::TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block12, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp97, tmp98);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Number> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSReceiver> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<HeapObject> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    ca_.Bind(&block13, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    arguments.PopAndReturn(tmp112);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp113;
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<HeapObject> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Object> tmp123;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 175);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 174);
    compiler::TNode<Object> tmp124;
    tmp124 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp116, tmp118, tmp120, tmp123, tmp118, tmp122, tmp119);
    USE(tmp124);
    arguments.PopAndReturn(tmp124);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp125;
    compiler::TNode<RawPtrT> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<Context> tmp128;
    compiler::TNode<Object> tmp129;
    ca_.Bind(&block2, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-reduce.tq", 179);
    compiler::TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp125}, compiler::TNode<RawPtrT>{tmp126}, compiler::TNode<IntPtrT>{tmp127}}, compiler::TNode<IntPtrT>{tmp130});
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp128}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp131});
  }
}

}  // namespace internal
}  // namespace v8

