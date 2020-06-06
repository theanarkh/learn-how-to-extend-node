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

TF_BUILTIN(ProxyDeleteProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::TNode<Smi> parameter3 = UncheckedCast<Smi>(Parameter(Descriptor::kLanguageMode));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, HeapObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 26);
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
    compiler::TNode<Name> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<HeapObject> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<JSProxy> tmp13;
    compiler::TNode<Name> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 29);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp18);
    compiler::TNode<HeapObject>tmp19 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp13, tmp18});
    compiler::TNode<JSReceiver> tmp20;
    USE(tmp20);
    tmp20 = UnsafeCast10JSReceiver_1412(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 33);
    compiler::TNode<HeapObject> tmp21;
    USE(tmp21);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp21 = GetMethod_218(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp17}, "deleteProperty", &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp17, tmp20, tmp17, tmp21);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp17, tmp20, tmp17);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSProxy> tmp23;
    compiler::TNode<Name> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    ca_.Bind(&block10, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block8, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSProxy> tmp30;
    compiler::TNode<Name> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<HeapObject> tmp36;
    ca_.Bind(&block9, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block7, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp36);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSProxy> tmp38;
    compiler::TNode<Name> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 34);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSProxy> tmp44;
    compiler::TNode<Name> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<HeapObject> tmp49;
    ca_.Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 38);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp43}, compiler::TNode<HeapObject>{tmp49}, compiler::TNode<Object>{tmp47}, compiler::TNode<Object>{tmp48}, compiler::TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 41);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsFalse(compiler::TNode<Object>{tmp50}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp50);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block14, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp50);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSProxy> tmp52;
    compiler::TNode<Name> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    ca_.Bind(&block13, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block11, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSProxy> tmp61;
    compiler::TNode<Name> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<HeapObject> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    ca_.Bind(&block14, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<JSProxy> tmp70;
    compiler::TNode<Name> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    compiler::TNode<HeapObject> tmp75;
    compiler::TNode<Object> tmp76;
    ca_.Bind(&block11, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 42);
    compiler::TNode<Smi> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).SmiConstant(LanguageMode::kStrict);
    compiler::TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp72}, compiler::TNode<Smi>{tmp77});
    ca_.Branch(tmp78, &block15, &block16, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<JSProxy> tmp80;
    compiler::TNode<Name> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<HeapObject> tmp85;
    compiler::TNode<Object> tmp86;
    ca_.Bind(&block15, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 43);
    compiler::TNode<Object> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_143(state_, "deleteProperty");
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp79}, MessageTemplate::kProxyTrapReturnedFalsishFor, compiler::TNode<Object>{tmp87}, compiler::TNode<Object>{tmp81});
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<JSProxy> tmp89;
    compiler::TNode<Name> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<HeapObject> tmp94;
    compiler::TNode<Object> tmp95;
    ca_.Bind(&block16, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 45);
    compiler::TNode<Oddball> tmp96;
    USE(tmp96);
    tmp96 = False_68(state_);
    CodeStubAssembler(state_).Return(tmp96);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSProxy> tmp98;
    compiler::TNode<Name> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<JSReceiver> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<HeapObject> tmp103;
    compiler::TNode<Object> tmp104;
    ca_.Bind(&block12, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 54);
    ProxiesCodeStubAssembler(state_).CheckDeleteTrapResult(compiler::TNode<Context>{tmp97}, compiler::TNode<JSReceiver>{tmp102}, compiler::TNode<JSProxy>{tmp98}, compiler::TNode<Name>{tmp99});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 57);
    compiler::TNode<Oddball> tmp105;
    USE(tmp105);
    tmp105 = True_67(state_);
    CodeStubAssembler(state_).Return(tmp105);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<JSProxy> tmp107;
    compiler::TNode<Name> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Object> tmp110;
    ca_.Bind(&block4, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 61);
    compiler::TNode<Object> tmp111;
    tmp111 = CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp106, tmp110, tmp108, tmp109);
    USE(tmp111);
    CodeStubAssembler(state_).Return(tmp111);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp112;
    compiler::TNode<JSProxy> tmp113;
    compiler::TNode<Name> tmp114;
    compiler::TNode<Smi> tmp115;
    ca_.Bind(&block2, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/proxy-delete-property.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp112}, MessageTemplate::kProxyRevoked, "deleteProperty");
  }
}

}  // namespace internal
}  // namespace v8

