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

TF_BUILTIN(ProxySetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kProto));
  USE(parameter2);
  compiler::TNode<Oddball> parameter3 = UncheckedCast<Oddball>(Parameter(Descriptor::kDoThrow));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, JSReceiver, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object, Object, Object, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object, Object, Object, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball, Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object, Oddball> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Oddball> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 14);
    CodeStubAssembler(state_).PerformStackCheck(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 25);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp4);
    compiler::TNode<HeapObject>tmp5 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp4});
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_116(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSProxy> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Oddball> tmp10;
    compiler::TNode<HeapObject> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<JSProxy> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Oddball> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 28);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp18);
    compiler::TNode<HeapObject>tmp19 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp13, tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 32);
    compiler::TNode<HeapObject> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = GetMethod_218(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp17}, "setPrototypeOf", &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp17, tmp19, tmp17, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp17, tmp19, tmp17);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSProxy> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Oddball> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    compiler::TNode<HeapObject> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSProxy> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Oddball> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<HeapObject> tmp35;
    ca_.Bind(&block9, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSProxy> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Oddball> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<HeapObject> tmp41;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 33);
    ca_.Goto(&block4, tmp36, tmp37, tmp38, tmp39, tmp41, tmp38);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSProxy> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Oddball> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<HeapObject> tmp48;
    ca_.Bind(&block7, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 37);
    compiler::TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp42}, compiler::TNode<HeapObject>{tmp48}, compiler::TNode<Object>{tmp46}, compiler::TNode<Object>{tmp47}, compiler::TNode<Object>{tmp44});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 40);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsFalse(compiler::TNode<Object>{tmp49}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp49);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block14, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp49);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<JSProxy> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Oddball> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<HeapObject> tmp55;
    compiler::TNode<HeapObject> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    ca_.Bind(&block13, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block11, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSProxy> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Oddball> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<HeapObject> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    ca_.Bind(&block14, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block12, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSProxy> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Oddball> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<HeapObject> tmp73;
    compiler::TNode<HeapObject> tmp74;
    compiler::TNode<Object> tmp75;
    ca_.Bind(&block11, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 41);
    compiler::TNode<Oddball> tmp76;
    USE(tmp76);
    tmp76 = True_67(state_);
    compiler::TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp71}, compiler::TNode<HeapObject>{tmp76});
    ca_.Branch(tmp77, &block15, &block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<JSProxy> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Oddball> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<HeapObject> tmp83;
    compiler::TNode<HeapObject> tmp84;
    compiler::TNode<Object> tmp85;
    ca_.Bind(&block15, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 42);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp78}, MessageTemplate::kProxyTrapReturnedFalsishFor, "setPrototypeOf");
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSProxy> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Oddball> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<HeapObject> tmp91;
    compiler::TNode<HeapObject> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block16, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 44);
    compiler::TNode<Oddball> tmp94;
    USE(tmp94);
    tmp94 = False_68(state_);
    CodeStubAssembler(state_).Return(tmp94);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<JSProxy> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Oddball> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<HeapObject> tmp100;
    compiler::TNode<HeapObject> tmp101;
    compiler::TNode<Object> tmp102;
    ca_.Bind(&block12, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 49);
    compiler::TNode<Object> tmp103;
    USE(tmp103);
    tmp103 = ObjectIsExtensible_283(state_, compiler::TNode<Context>{tmp95}, compiler::TNode<Object>{tmp100});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 51);
    compiler::TNode<Oddball> tmp104;
    USE(tmp104);
    tmp104 = True_67(state_);
    compiler::TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp103}, compiler::TNode<HeapObject>{tmp104});
    ca_.Branch(tmp105, &block17, &block18, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<JSProxy> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Oddball> tmp109;
    compiler::TNode<JSReceiver> tmp110;
    compiler::TNode<HeapObject> tmp111;
    compiler::TNode<HeapObject> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    ca_.Bind(&block17, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 52);
    compiler::TNode<Oddball> tmp115;
    USE(tmp115);
    tmp115 = True_67(state_);
    CodeStubAssembler(state_).Return(tmp115);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<JSProxy> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Oddball> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    compiler::TNode<HeapObject> tmp121;
    compiler::TNode<HeapObject> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    ca_.Bind(&block18, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 56);
    compiler::TNode<Object> tmp125;
    USE(tmp125);
    tmp125 = ObjectGetPrototypeOf_286(state_, compiler::TNode<Context>{tmp116}, compiler::TNode<Object>{tmp121});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 61);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfSameValue(compiler::TNode<Object>{tmp118}, compiler::TNode<Object>{tmp125}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp118, tmp125);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block22, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp118, tmp125);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<JSProxy> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Oddball> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<HeapObject> tmp131;
    compiler::TNode<HeapObject> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Object> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Object> tmp137;
    ca_.Bind(&block21, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.Goto(&block19, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<JSProxy> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Oddball> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<HeapObject> tmp143;
    compiler::TNode<HeapObject> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Object> tmp149;
    ca_.Bind(&block22, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    ca_.Goto(&block20, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<JSProxy> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Oddball> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<HeapObject> tmp155;
    compiler::TNode<HeapObject> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<Object> tmp159;
    ca_.Bind(&block19, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 62);
    compiler::TNode<Oddball> tmp160;
    USE(tmp160);
    tmp160 = True_67(state_);
    CodeStubAssembler(state_).Return(tmp160);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp161;
    compiler::TNode<JSProxy> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Oddball> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    compiler::TNode<HeapObject> tmp166;
    compiler::TNode<HeapObject> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    ca_.Bind(&block20, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp161}, MessageTemplate::kProxySetPrototypeOfNonExtensible);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp171;
    compiler::TNode<JSProxy> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Oddball> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Object> tmp176;
    ca_.Bind(&block4, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 68);
    compiler::TNode<Oddball> tmp177;
    USE(tmp177);
    tmp177 = True_67(state_);
    compiler::TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp174}, compiler::TNode<HeapObject>{tmp177});
    ca_.Branch(tmp178, &block23, &block24, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp179;
    compiler::TNode<JSProxy> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<Oddball> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Object> tmp184;
    ca_.Bind(&block23, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 69);
    compiler::TNode<Object> tmp185;
    USE(tmp185);
    tmp185 = ObjectSetPrototypeOfThrow_288(state_, compiler::TNode<Context>{tmp179}, compiler::TNode<Object>{tmp183}, compiler::TNode<Object>{tmp184});
    CodeStubAssembler(state_).Return(tmp185);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSProxy> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Oddball> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    ca_.Bind(&block24, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 71);
    compiler::TNode<Object> tmp192;
    USE(tmp192);
    tmp192 = ObjectSetPrototypeOfDontThrow_289(state_, compiler::TNode<Context>{tmp186}, compiler::TNode<Object>{tmp190}, compiler::TNode<Object>{tmp191});
    CodeStubAssembler(state_).Return(tmp192);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp193;
    compiler::TNode<JSProxy> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<Oddball> tmp196;
    ca_.Bind(&block2, &tmp193, &tmp194, &tmp195, &tmp196);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-set-prototype-of.tq", 74);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp193}, MessageTemplate::kProxyRevoked, "setPrototypeOf");
  }
}

}  // namespace internal
}  // namespace v8

