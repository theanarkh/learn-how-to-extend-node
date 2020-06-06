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

TF_BUILTIN(ProxyPreventExtensions, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Oddball> parameter2 = UncheckedCast<Oddball>(Parameter(Descriptor::kDoThrow));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, HeapObject, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Oddball> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 14);
    CodeStubAssembler(state_).PerformStackCheck(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 22);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp3);
    compiler::TNode<HeapObject>tmp4 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp3});
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast10JSReceiver_116(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp4}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp4);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSProxy> tmp7;
    compiler::TNode<Oddball> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSProxy> tmp11;
    compiler::TNode<Oddball> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 25);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp15);
    compiler::TNode<HeapObject>tmp16 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp11, tmp15});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 29);
    compiler::TNode<HeapObject> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = GetMethod_218(state_, compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp14}, "preventExtensions", &label0);
    ca_.Goto(&block9, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSProxy> tmp19;
    compiler::TNode<Oddball> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<HeapObject> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block10, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block8, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSProxy> tmp25;
    compiler::TNode<Oddball> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<HeapObject> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<HeapObject> tmp30;
    ca_.Bind(&block9, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block7, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSProxy> tmp32;
    compiler::TNode<Oddball> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<HeapObject> tmp35;
    ca_.Bind(&block8, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 30);
    ca_.Goto(&block4, tmp31, tmp32, tmp33, tmp35);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSProxy> tmp37;
    compiler::TNode<Oddball> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<HeapObject> tmp40;
    compiler::TNode<HeapObject> tmp41;
    ca_.Bind(&block7, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 34);
    compiler::TNode<Object> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp36}, compiler::TNode<HeapObject>{tmp41}, compiler::TNode<Object>{tmp39}, compiler::TNode<Object>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 39);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsTrue(compiler::TNode<Object>{tmp42}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp42);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block14, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp42);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSProxy> tmp44;
    compiler::TNode<Oddball> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<HeapObject> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block13, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block11, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSProxy> tmp52;
    compiler::TNode<Oddball> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<HeapObject> tmp55;
    compiler::TNode<HeapObject> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    ca_.Bind(&block14, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block12, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSProxy> tmp60;
    compiler::TNode<Oddball> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<HeapObject> tmp63;
    compiler::TNode<HeapObject> tmp64;
    compiler::TNode<Object> tmp65;
    ca_.Bind(&block11, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 40);
    compiler::TNode<Object> tmp66;
    USE(tmp66);
    tmp66 = ObjectIsExtensible_283(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp63});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 42);
    compiler::TNode<Oddball> tmp67;
    USE(tmp67);
    tmp67 = True_67(state_);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp66}, compiler::TNode<HeapObject>{tmp67});
    ca_.Branch(tmp68, &block16, &block17, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<JSProxy> tmp70;
    compiler::TNode<Oddball> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<HeapObject> tmp73;
    compiler::TNode<HeapObject> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    ca_.Bind(&block16, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 43);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp69}, MessageTemplate::kProxyPreventExtensionsExtensible);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<JSProxy> tmp78;
    compiler::TNode<Oddball> tmp79;
    compiler::TNode<JSReceiver> tmp80;
    compiler::TNode<HeapObject> tmp81;
    compiler::TNode<HeapObject> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block17, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 39);
    ca_.Goto(&block15, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSProxy> tmp86;
    compiler::TNode<Oddball> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<HeapObject> tmp89;
    compiler::TNode<HeapObject> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block12, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 46);
    compiler::TNode<Oddball> tmp92;
    USE(tmp92);
    tmp92 = True_67(state_);
    compiler::TNode<BoolT> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp87}, compiler::TNode<HeapObject>{tmp92});
    ca_.Branch(tmp93, &block18, &block19, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<JSProxy> tmp95;
    compiler::TNode<Oddball> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<HeapObject> tmp98;
    compiler::TNode<HeapObject> tmp99;
    compiler::TNode<Object> tmp100;
    ca_.Bind(&block18, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 47);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp94}, MessageTemplate::kProxyTrapReturnedFalsish, "preventExtensions");
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp101;
    compiler::TNode<JSProxy> tmp102;
    compiler::TNode<Oddball> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<HeapObject> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<Object> tmp107;
    ca_.Bind(&block19, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 49);
    compiler::TNode<Oddball> tmp108;
    USE(tmp108);
    tmp108 = False_68(state_);
    CodeStubAssembler(state_).Return(tmp108);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<JSProxy> tmp110;
    compiler::TNode<Oddball> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<HeapObject> tmp113;
    compiler::TNode<HeapObject> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block15, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 53);
    compiler::TNode<Oddball> tmp116;
    USE(tmp116);
    tmp116 = True_67(state_);
    CodeStubAssembler(state_).Return(tmp116);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<JSProxy> tmp118;
    compiler::TNode<Oddball> tmp119;
    compiler::TNode<Object> tmp120;
    ca_.Bind(&block4, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 57);
    compiler::TNode<Oddball> tmp121;
    USE(tmp121);
    tmp121 = True_67(state_);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp119}, compiler::TNode<HeapObject>{tmp121});
    ca_.Branch(tmp122, &block20, &block21, tmp117, tmp118, tmp119, tmp120);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<JSProxy> tmp124;
    compiler::TNode<Oddball> tmp125;
    compiler::TNode<Object> tmp126;
    ca_.Bind(&block20, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 58);
    compiler::TNode<Object> tmp127;
    USE(tmp127);
    tmp127 = ObjectPreventExtensionsThrow_284(state_, compiler::TNode<Context>{tmp123}, compiler::TNode<Object>{tmp126});
    CodeStubAssembler(state_).Return(tmp127);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<JSProxy> tmp129;
    compiler::TNode<Oddball> tmp130;
    compiler::TNode<Object> tmp131;
    ca_.Bind(&block21, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 60);
    compiler::TNode<Object> tmp132;
    USE(tmp132);
    tmp132 = ObjectPreventExtensionsDontThrow_285(state_, compiler::TNode<Context>{tmp128}, compiler::TNode<Object>{tmp131});
    CodeStubAssembler(state_).Return(tmp132);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp133;
    compiler::TNode<JSProxy> tmp134;
    compiler::TNode<Oddball> tmp135;
    ca_.Bind(&block2, &tmp133, &tmp134, &tmp135);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-prevent-extensions.tq", 63);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp133}, MessageTemplate::kProxyRevoked, "preventExtensions");
  }
}

}  // namespace internal
}  // namespace v8

