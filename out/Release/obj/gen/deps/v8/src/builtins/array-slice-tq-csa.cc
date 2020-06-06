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

compiler::TNode<JSArray> HandleSimpleArgumentsSlice_38(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 11);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, FixedArray::kMaxRegularLength);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 15);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp15);
    compiler::TNode<FixedArrayBase>tmp16 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp15});
    compiler::TNode<FixedArray> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10FixedArray_84(state_, compiler::TNode<HeapObject>{tmp16}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSArgumentsObjectWithLength> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSArgumentsObjectWithLength> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    compiler::TNode<FixedArrayBase> tmp29;
    compiler::TNode<FixedArray> tmp30;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 16);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp31);
    compiler::TNode<Smi>tmp32 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp30, tmp31});
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp32});
    ca_.Branch(tmp33, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSArgumentsObjectWithLength> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSArgumentsObjectWithLength> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<FixedArray> tmp45;
    ca_.Bind(&block8, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 18);
    compiler::TNode<Map> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 20);
    compiler::TNode<JSArray> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp46}, compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp43});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 19);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 22);
    compiler::TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp48);
    compiler::TNode<FixedArrayBase>tmp49 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp47, tmp48});
    compiler::TNode<FixedArray> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast10FixedArray_84(state_, compiler::TNode<HeapObject>{tmp49}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSArgumentsObjectWithLength> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<FixedArray> tmp56;
    compiler::TNode<Map> tmp57;
    compiler::TNode<JSArray> tmp58;
    compiler::TNode<FixedArrayBase> tmp59;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSArgumentsObjectWithLength> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Map> tmp66;
    compiler::TNode<JSArray> tmp67;
    compiler::TNode<FixedArrayBase> tmp68;
    compiler::TNode<FixedArray> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 24);
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp62});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 25);
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp63});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 23);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp69}, compiler::TNode<IntPtrT>{tmp72}, compiler::TNode<FixedArrayBase>{tmp65}, compiler::TNode<IntPtrT>{tmp70}, compiler::TNode<IntPtrT>{tmp71});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 26);
    ca_.Goto(&block2, tmp60, tmp61, tmp62, tmp63, tmp67);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<JSArgumentsObjectWithLength> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<JSArray> tmp77;
    ca_.Bind(&block2, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 6);
    ca_.Goto(&block11, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp78;
    compiler::TNode<JSArgumentsObjectWithLength> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<JSArray> tmp82;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
  return compiler::TNode<JSArray>{tmp82};
}

compiler::TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice_39(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 34);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, FixedArray::kMaxRegularLength);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 37);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp14);
    compiler::TNode<FixedArrayBase>tmp15 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp14});
    compiler::TNode<FixedArray> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast25ATSloppyArgumentsElements_86(state_, compiler::TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArgumentsObjectWithLength> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<FixedArrayBase> tmp21;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<FixedArrayBase> tmp26;
    compiler::TNode<FixedArray> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 38);
    compiler::TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp28);
    compiler::TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp28});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 40);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, SloppyArgumentsElements::kParameterMapStart);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 44);
    compiler::TNode<Smi> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 46);
    compiler::TNode<Object> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp27}, SloppyArgumentsElements::kArgumentsIndex);
    compiler::TNode<FixedArray> tmp34;
    USE(tmp34);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp34 = Cast10FixedArray_1389(state_, compiler::TNode<Context>{tmp22}, compiler::TNode<Object>{tmp33}, &label0);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp33, tmp34);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp33);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSArgumentsObjectWithLength> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSArgumentsObjectWithLength> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<FixedArray> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<FixedArray> tmp53;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 48);
    compiler::TNode<IntPtrT> tmp54 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp54);
    compiler::TNode<Smi>tmp55 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp53, tmp54});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 49);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp55});
    ca_.Branch(tmp56, &block9, &block10, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp53, tmp55);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSArgumentsObjectWithLength> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<FixedArray> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Smi> tmp66;
    ca_.Bind(&block9, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<JSArgumentsObjectWithLength> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<FixedArray> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<FixedArray> tmp75;
    compiler::TNode<Smi> tmp76;
    ca_.Bind(&block10, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 52);
    compiler::TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp71}, SloppyArgumentsElements::kContextIndex);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 51);
    compiler::TNode<Context> tmp78;
    USE(tmp78);
    tmp78 = UnsafeCast7Context_1390(state_, compiler::TNode<Context>{tmp67}, compiler::TNode<Object>{tmp77});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 54);
    compiler::TNode<Map> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp67});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 56);
    compiler::TNode<JSArray> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp79}, compiler::TNode<Smi>{tmp70}, compiler::TNode<Smi>{tmp70});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 55);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 58);
    compiler::TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 59);
    compiler::TNode<IntPtrT> tmp82 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp82);
    compiler::TNode<FixedArrayBase>tmp83 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp80, tmp82});
    compiler::TNode<FixedArray> tmp84;
    USE(tmp84);
    tmp84 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp67}, compiler::TNode<Object>{tmp83});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 60);
    compiler::TNode<Smi> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block13, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78, tmp79, tmp80, tmp81, tmp84, tmp85, tmp69);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSArgumentsObjectWithLength> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Context> tmp96;
    compiler::TNode<Map> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<FixedArray> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Smi> tmp102;
    ca_.Bind(&block13, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    compiler::TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp102}, compiler::TNode<Smi>{tmp101});
    ca_.Branch(tmp103, &block11, &block12, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<JSArgumentsObjectWithLength> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<FixedArray> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<Context> tmp114;
    compiler::TNode<Map> tmp115;
    compiler::TNode<JSArray> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block11, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 65);
    compiler::TNode<Smi> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, SloppyArgumentsElements::kParameterMapStart);
    compiler::TNode<Smi> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp120}, compiler::TNode<Smi>{tmp121});
    compiler::TNode<Object> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp108}, compiler::TNode<Smi>{tmp122});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 66);
    compiler::TNode<Oddball> tmp124;
    USE(tmp124);
    tmp124 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp123}, compiler::TNode<HeapObject>{tmp124});
    ca_.Branch(tmp125, &block15, &block16, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp123);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<JSArgumentsObjectWithLength> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<FixedArray> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<FixedArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Context> tmp136;
    compiler::TNode<Map> tmp137;
    compiler::TNode<JSArray> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<FixedArray> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Object> tmp143;
    ca_.Bind(&block15, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 67);
    compiler::TNode<Smi> tmp144;
    USE(tmp144);
    tmp144 = UnsafeCast5ATSmi_1371(state_, compiler::TNode<Context>{tmp126}, compiler::TNode<Object>{tmp143});
    compiler::TNode<Object> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp136}, compiler::TNode<Smi>{tmp144});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block18, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<JSArgumentsObjectWithLength> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<FixedArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<FixedArray> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Context> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<JSArray> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<FixedArray> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<Object> tmp163;
    ca_.Bind(&block16, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 68);
    compiler::TNode<Object> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp154}, compiler::TNode<Smi>{tmp162});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block17, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<JSArgumentsObjectWithLength> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<FixedArray> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<FixedArray> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Context> tmp175;
    compiler::TNode<Map> tmp176;
    compiler::TNode<JSArray> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<FixedArray> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    ca_.Bind(&block18, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.Goto(&block17, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<JSArgumentsObjectWithLength> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<FixedArray> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<FixedArray> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<Context> tmp194;
    compiler::TNode<Map> tmp195;
    compiler::TNode<JSArray> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<FixedArray> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<Object> tmp202;
    ca_.Bind(&block17, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 74);
    compiler::TNode<Smi> tmp203;
    USE(tmp203);
    tmp203 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp204;
    USE(tmp204);
    tmp204 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp197}, compiler::TNode<Smi>{tmp203});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 73);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp198}, compiler::TNode<Smi>{tmp197}, compiler::TNode<Object>{tmp202}, UNSAFE_SKIP_WRITE_BARRIER);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block14, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp204, tmp198, tmp199, tmp200);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<JSArgumentsObjectWithLength> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<FixedArray> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<FixedArray> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Context> tmp215;
    compiler::TNode<Map> tmp216;
    compiler::TNode<JSArray> tmp217;
    compiler::TNode<Smi> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    ca_.Bind(&block14, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    compiler::TNode<Smi> tmp222;
    USE(tmp222);
    tmp222 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp223;
    USE(tmp223);
    tmp223 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp221}, compiler::TNode<Smi>{tmp222});
    ca_.Goto(&block13, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp223);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp224;
    compiler::TNode<JSArgumentsObjectWithLength> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<FixedArray> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<FixedArray> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<Context> tmp234;
    compiler::TNode<Map> tmp235;
    compiler::TNode<JSArray> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<FixedArray> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<Smi> tmp240;
    ca_.Bind(&block12, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 79);
    compiler::TNode<Smi> tmp241;
    USE(tmp241);
    tmp241 = CodeStubAssembler(state_).SmiMax(compiler::TNode<Smi>{tmp230}, compiler::TNode<Smi>{tmp226});
    compiler::TNode<Smi> tmp242;
    USE(tmp242);
    tmp242 = CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp241}, compiler::TNode<Smi>{tmp231});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 80);
    compiler::TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp231}, compiler::TNode<Smi>{tmp242});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 82);
    compiler::TNode<IntPtrT> tmp244;
    USE(tmp244);
    tmp244 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp237});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 83);
    compiler::TNode<IntPtrT> tmp245;
    USE(tmp245);
    tmp245 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp242});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 84);
    compiler::TNode<IntPtrT> tmp246;
    USE(tmp246);
    tmp246 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp243});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 81);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp238}, compiler::TNode<IntPtrT>{tmp244}, compiler::TNode<FixedArrayBase>{tmp232}, compiler::TNode<IntPtrT>{tmp245}, compiler::TNode<IntPtrT>{tmp246});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 85);
    ca_.Goto(&block2, tmp224, tmp225, tmp226, tmp227, tmp236);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp247;
    compiler::TNode<JSArgumentsObjectWithLength> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<JSArray> tmp251;
    ca_.Bind(&block2, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 29);
    ca_.Goto(&block19, tmp247, tmp248, tmp249, tmp250, tmp251);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp252;
    compiler::TNode<JSArgumentsObjectWithLength> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Smi> tmp255;
    compiler::TNode<JSArray> tmp256;
    ca_.Bind(&block19, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
  return compiler::TNode<JSArray>{tmp256};
}

compiler::TNode<JSArray> HandleFastSlice_40(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArgumentsObjectWithLength> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_startNumber, p_countNumber);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 92);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 93);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp13}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 97);
    compiler::TNode<JSArray> tmp30;
    USE(tmp30);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp30 = Cast20ATFastJSArrayForCopy_1391(state_, compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp24}, &label0);
    ca_.Goto(&block9, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24, tmp30);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    ca_.Bind(&block10, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSArray> tmp47;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 104);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp44});
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp47});
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp48}, compiler::TNode<Smi>{tmp49});
    ca_.Branch(tmp50, &block11, &block12, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSArray> tmp66;
    ca_.Bind(&block12, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 105);
    compiler::TNode<JSArray> tmp67;
    tmp67 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp59, tmp66, tmp63, tmp64));
    USE(tmp67);
    ca_.Goto(&block2, tmp59, tmp60, tmp61, tmp62, tmp67);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 107);
    compiler::TNode<JSArgumentsObjectWithLength> tmp75;
    USE(tmp75);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp75 = Cast27JSArgumentsObjectWithLength_1392(state_, compiler::TNode<Context>{tmp68}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp74)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74), tmp75);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Number> tmp86;
    compiler::TNode<Number> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSArgumentsObjectWithLength> tmp92;
    ca_.Bind(&block15, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 108);
    compiler::TNode<IntPtrT> tmp93 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp93);
    compiler::TNode<Map>tmp94 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp92, tmp93});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 109);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp84}, compiler::TNode<Map>{tmp94});
    ca_.Branch(tmp95, &block17, &block18, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp92, tmp94);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSArgumentsObjectWithLength> tmp103;
    compiler::TNode<Map> tmp104;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 110);
    compiler::TNode<JSArray> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = HandleFastAliasedSloppyArgumentsSlice_39(state_, compiler::TNode<Context>{tmp96}, compiler::TNode<JSArgumentsObjectWithLength>{tmp103}, compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101}, &label0);
    ca_.Goto(&block20, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<JSArgumentsObjectWithLength> tmp113;
    compiler::TNode<Map> tmp114;
    compiler::TNode<Context> tmp115;
    compiler::TNode<JSArgumentsObjectWithLength> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Smi> tmp118;
    ca_.Bind(&block21, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Number> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<JSArgumentsObjectWithLength> tmp126;
    compiler::TNode<Map> tmp127;
    compiler::TNode<Context> tmp128;
    compiler::TNode<JSArgumentsObjectWithLength> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<JSArray> tmp132;
    ca_.Bind(&block20, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.Goto(&block2, tmp119, tmp120, tmp121, tmp122, tmp132);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<JSArgumentsObjectWithLength> tmp140;
    compiler::TNode<Map> tmp141;
    ca_.Bind(&block18, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 112);
    compiler::TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp133}, compiler::TNode<Map>{tmp141});
    ca_.Branch(tmp142, &block22, &block24, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Number> tmp145;
    compiler::TNode<Number> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<JSArgumentsObjectWithLength> tmp150;
    compiler::TNode<Map> tmp151;
    ca_.Bind(&block24, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    compiler::TNode<BoolT> tmp152;
    USE(tmp152);
    tmp152 = CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp143}, compiler::TNode<Map>{tmp151});
    ca_.Branch(tmp152, &block22, &block23, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Number> tmp155;
    compiler::TNode<Number> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<JSArgumentsObjectWithLength> tmp160;
    compiler::TNode<Map> tmp161;
    ca_.Bind(&block22, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 113);
    compiler::TNode<JSArray> tmp162;
    USE(tmp162);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp162 = HandleSimpleArgumentsSlice_38(state_, compiler::TNode<Context>{tmp153}, compiler::TNode<JSArgumentsObjectWithLength>{tmp160}, compiler::TNode<Smi>{tmp157}, compiler::TNode<Smi>{tmp158}, &label0);
    ca_.Goto(&block25, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp153, tmp160, tmp157, tmp158, tmp162);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp153, tmp160, tmp157, tmp158);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<Number> tmp165;
    compiler::TNode<Number> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<JSArgumentsObjectWithLength> tmp170;
    compiler::TNode<Map> tmp171;
    compiler::TNode<Context> tmp172;
    compiler::TNode<JSArgumentsObjectWithLength> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Smi> tmp175;
    ca_.Bind(&block26, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.Goto(&block1);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Number> tmp178;
    compiler::TNode<Number> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<JSArgumentsObjectWithLength> tmp183;
    compiler::TNode<Map> tmp184;
    compiler::TNode<Context> tmp185;
    compiler::TNode<JSArgumentsObjectWithLength> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<JSArray> tmp189;
    ca_.Bind(&block25, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189);
    ca_.Goto(&block2, tmp176, tmp177, tmp178, tmp179, tmp189);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Number> tmp192;
    compiler::TNode<Number> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<JSArgumentsObjectWithLength> tmp197;
    compiler::TNode<Map> tmp198;
    ca_.Bind(&block23, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 109);
    ca_.Goto(&block19, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Number> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<JSArgumentsObjectWithLength> tmp206;
    compiler::TNode<Map> tmp207;
    ca_.Bind(&block19, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<Number> tmp210;
    compiler::TNode<Number> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Object> tmp214;
    ca_.Bind(&block14, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp215;
    compiler::TNode<Object> tmp216;
    compiler::TNode<Number> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Object> tmp221;
    ca_.Bind(&block13, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Number> tmp224;
    compiler::TNode<Number> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Object> tmp228;
    ca_.Bind(&block7, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 120);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Number> tmp232;
    compiler::TNode<JSArray> tmp233;
    ca_.Bind(&block2, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 88);
    ca_.Goto(&block27, tmp229, tmp230, tmp231, tmp232, tmp233);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<Number> tmp236;
    compiler::TNode<Number> tmp237;
    compiler::TNode<JSArray> tmp238;
    ca_.Bind(&block27, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238);
  return compiler::TNode<JSArray>{tmp238};
}

TF_BUILTIN(ArrayPrototypeSlice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number, JSArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 128);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 130);
    compiler::TNode<JSArray> tmp12;
    USE(tmp12);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp12 = Cast20ATFastJSArrayForCopy_1391(state_, compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp11}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11, tmp12);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSArray> tmp27;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 131);
    compiler::TNode<JSArray> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCloneFastJSArray, tmp23, tmp27));
    USE(tmp28);
    arguments.PopAndReturn(tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 133);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 130);
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block3, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 128);
    ca_.Goto(&block2, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    ca_.Bind(&block2, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 139);
    compiler::TNode<JSReceiver> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 142);
    compiler::TNode<Number> tmp47;
    USE(tmp47);
    tmp47 = GetLengthProperty_217(state_, compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp46});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 145);
    compiler::TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp41}, compiler::TNode<RawPtrT>{tmp42}, compiler::TNode<IntPtrT>{tmp43}}, compiler::TNode<IntPtrT>{tmp48});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 146);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp49});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 150);
    compiler::TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp50}, compiler::TNode<Number>{tmp51}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50, tmp50);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50, tmp50);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    ca_.Bind(&block11, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.Goto(&block7, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp62;
    compiler::TNode<RawPtrT> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    ca_.Bind(&block12, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block8, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp72;
    compiler::TNode<RawPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<Context> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Number> tmp80;
    ca_.Bind(&block7, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Number> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp78}, compiler::TNode<Number>{tmp80});
    compiler::TNode<Number> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = Max_77(state_, compiler::TNode<Number>{tmp81}, compiler::TNode<Number>{tmp82});
    ca_.Goto(&block10, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp83);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Number> tmp92;
    ca_.Bind(&block8, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 151);
    compiler::TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = Min_76(state_, compiler::TNode<Number>{tmp92}, compiler::TNode<Number>{tmp90});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 150);
    ca_.Goto(&block9, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp94;
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<Context> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.Goto(&block9, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp104;
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<Number> tmp113;
    ca_.Bind(&block9, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 155);
    compiler::TNode<IntPtrT> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp104}, compiler::TNode<RawPtrT>{tmp105}, compiler::TNode<IntPtrT>{tmp106}}, compiler::TNode<IntPtrT>{tmp114});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 157);
    compiler::TNode<Oddball> tmp116;
    USE(tmp116);
    tmp116 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp115}, compiler::TNode<HeapObject>{tmp116});
    ca_.Branch(tmp117, &block13, &block14, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp115);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<Context> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    compiler::TNode<Number> tmp127;
    compiler::TNode<Object> tmp128;
    ca_.Bind(&block13, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.Goto(&block16, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp124);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp129;
    compiler::TNode<RawPtrT> tmp130;
    compiler::TNode<IntPtrT> tmp131;
    compiler::TNode<Context> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Object> tmp139;
    ca_.Bind(&block14, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139);
    compiler::TNode<Number> tmp140;
    USE(tmp140);
    tmp140 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp132}, compiler::TNode<Object>{tmp139});
    ca_.Goto(&block15, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp141;
    compiler::TNode<RawPtrT> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<Context> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<JSReceiver> tmp146;
    compiler::TNode<Number> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Number> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Number> tmp152;
    ca_.Bind(&block16, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.Goto(&block15, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp153;
    compiler::TNode<RawPtrT> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<Context> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Number> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Number> tmp161;
    compiler::TNode<Number> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Number> tmp164;
    ca_.Bind(&block15, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 156);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 162);
    compiler::TNode<Number> tmp165;
    USE(tmp165);
    tmp165 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp164}, compiler::TNode<Number>{tmp165}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp164);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block22, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp164);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<RawPtrT> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<Context> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Number> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Number> tmp177;
    compiler::TNode<Number> tmp178;
    ca_.Bind(&block21, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178);
    ca_.Goto(&block17, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
  }

  if (block22.is_used()) {
    compiler::TNode<RawPtrT> tmp179;
    compiler::TNode<RawPtrT> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<Context> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<JSReceiver> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<Number> tmp191;
    ca_.Bind(&block22, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.Goto(&block18, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block17.is_used()) {
    compiler::TNode<RawPtrT> tmp192;
    compiler::TNode<RawPtrT> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<Context> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Number> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<Number> tmp203;
    ca_.Bind(&block17, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    compiler::TNode<Number> tmp204;
    USE(tmp204);
    tmp204 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp198}, compiler::TNode<Number>{tmp203});
    compiler::TNode<Number> tmp205;
    USE(tmp205);
    tmp205 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::TNode<Number> tmp206;
    USE(tmp206);
    tmp206 = Max_77(state_, compiler::TNode<Number>{tmp204}, compiler::TNode<Number>{tmp205});
    ca_.Goto(&block20, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp206);
  }

  if (block18.is_used()) {
    compiler::TNode<RawPtrT> tmp207;
    compiler::TNode<RawPtrT> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<Context> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Number> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Number> tmp218;
    ca_.Bind(&block18, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    compiler::TNode<Number> tmp219;
    USE(tmp219);
    tmp219 = Min_76(state_, compiler::TNode<Number>{tmp218}, compiler::TNode<Number>{tmp213});
    ca_.Goto(&block19, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219);
  }

  if (block20.is_used()) {
    compiler::TNode<RawPtrT> tmp220;
    compiler::TNode<RawPtrT> tmp221;
    compiler::TNode<IntPtrT> tmp222;
    compiler::TNode<Context> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Number> tmp228;
    compiler::TNode<Number> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Number> tmp232;
    ca_.Bind(&block20, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.Goto(&block19, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block19.is_used()) {
    compiler::TNode<RawPtrT> tmp233;
    compiler::TNode<RawPtrT> tmp234;
    compiler::TNode<IntPtrT> tmp235;
    compiler::TNode<Context> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<JSReceiver> tmp238;
    compiler::TNode<Number> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<Number> tmp244;
    compiler::TNode<Number> tmp245;
    ca_.Bind(&block19, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 161);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 165);
    compiler::TNode<Number> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp245}, compiler::TNode<Number>{tmp242});
    compiler::TNode<Number> tmp247;
    USE(tmp247);
    tmp247 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    compiler::TNode<Number> tmp248;
    USE(tmp248);
    tmp248 = Max_77(state_, compiler::TNode<Number>{tmp246}, compiler::TNode<Number>{tmp247});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 175);
    compiler::TNode<JSArray> tmp249;
    USE(tmp249);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp249 = HandleFastSlice_40(state_, compiler::TNode<Context>{tmp236}, compiler::TNode<Object>{tmp238}, compiler::TNode<Number>{tmp242}, compiler::TNode<Number>{tmp248}, &label0);
    ca_.Goto(&block25, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp248, tmp236, tmp238, tmp242, tmp248, tmp249);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp248, tmp236, tmp238, tmp242, tmp248);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<RawPtrT> tmp250;
    compiler::TNode<RawPtrT> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    compiler::TNode<Context> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<JSReceiver> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Number> tmp258;
    compiler::TNode<Number> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<Number> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<Number> tmp263;
    compiler::TNode<Context> tmp264;
    compiler::TNode<JSReceiver> tmp265;
    compiler::TNode<Number> tmp266;
    compiler::TNode<Number> tmp267;
    ca_.Bind(&block26, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    ca_.Goto(&block24, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263);
  }

  if (block25.is_used()) {
    compiler::TNode<RawPtrT> tmp268;
    compiler::TNode<RawPtrT> tmp269;
    compiler::TNode<IntPtrT> tmp270;
    compiler::TNode<Context> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<JSReceiver> tmp273;
    compiler::TNode<Number> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Number> tmp276;
    compiler::TNode<Number> tmp277;
    compiler::TNode<Object> tmp278;
    compiler::TNode<Number> tmp279;
    compiler::TNode<Number> tmp280;
    compiler::TNode<Number> tmp281;
    compiler::TNode<Context> tmp282;
    compiler::TNode<JSReceiver> tmp283;
    compiler::TNode<Number> tmp284;
    compiler::TNode<Number> tmp285;
    compiler::TNode<JSArray> tmp286;
    ca_.Bind(&block25, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286);
    arguments.PopAndReturn(tmp286);
  }

  if (block24.is_used()) {
    compiler::TNode<RawPtrT> tmp287;
    compiler::TNode<RawPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    compiler::TNode<Context> tmp290;
    compiler::TNode<Object> tmp291;
    compiler::TNode<JSReceiver> tmp292;
    compiler::TNode<Number> tmp293;
    compiler::TNode<Object> tmp294;
    compiler::TNode<Number> tmp295;
    compiler::TNode<Number> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<Number> tmp298;
    compiler::TNode<Number> tmp299;
    compiler::TNode<Number> tmp300;
    ca_.Bind(&block24, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 174);
    ca_.Goto(&block23, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300);
  }

  if (block23.is_used()) {
    compiler::TNode<RawPtrT> tmp301;
    compiler::TNode<RawPtrT> tmp302;
    compiler::TNode<IntPtrT> tmp303;
    compiler::TNode<Context> tmp304;
    compiler::TNode<Object> tmp305;
    compiler::TNode<JSReceiver> tmp306;
    compiler::TNode<Number> tmp307;
    compiler::TNode<Object> tmp308;
    compiler::TNode<Number> tmp309;
    compiler::TNode<Number> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Number> tmp312;
    compiler::TNode<Number> tmp313;
    compiler::TNode<Number> tmp314;
    ca_.Bind(&block23, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 180);
    compiler::TNode<JSReceiver> tmp315;
    USE(tmp315);
    tmp315 = CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp304}, compiler::TNode<Object>{tmp306}, compiler::TNode<Number>{tmp314});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 183);
    compiler::TNode<Number> tmp316;
    USE(tmp316);
    tmp316 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 186);
    ca_.Goto(&block29, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316);
  }

  if (block29.is_used()) {
    compiler::TNode<RawPtrT> tmp317;
    compiler::TNode<RawPtrT> tmp318;
    compiler::TNode<IntPtrT> tmp319;
    compiler::TNode<Context> tmp320;
    compiler::TNode<Object> tmp321;
    compiler::TNode<JSReceiver> tmp322;
    compiler::TNode<Number> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<Number> tmp325;
    compiler::TNode<Number> tmp326;
    compiler::TNode<Object> tmp327;
    compiler::TNode<Number> tmp328;
    compiler::TNode<Number> tmp329;
    compiler::TNode<Number> tmp330;
    compiler::TNode<JSReceiver> tmp331;
    compiler::TNode<Number> tmp332;
    ca_.Bind(&block29, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp326}, compiler::TNode<Number>{tmp329}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block30, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp326, tmp329);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block31, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp326, tmp329);
    }
  }

  if (block30.is_used()) {
    compiler::TNode<RawPtrT> tmp333;
    compiler::TNode<RawPtrT> tmp334;
    compiler::TNode<IntPtrT> tmp335;
    compiler::TNode<Context> tmp336;
    compiler::TNode<Object> tmp337;
    compiler::TNode<JSReceiver> tmp338;
    compiler::TNode<Number> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<Number> tmp341;
    compiler::TNode<Number> tmp342;
    compiler::TNode<Object> tmp343;
    compiler::TNode<Number> tmp344;
    compiler::TNode<Number> tmp345;
    compiler::TNode<Number> tmp346;
    compiler::TNode<JSReceiver> tmp347;
    compiler::TNode<Number> tmp348;
    compiler::TNode<Number> tmp349;
    compiler::TNode<Number> tmp350;
    ca_.Bind(&block30, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350);
    ca_.Goto(&block27, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348);
  }

  if (block31.is_used()) {
    compiler::TNode<RawPtrT> tmp351;
    compiler::TNode<RawPtrT> tmp352;
    compiler::TNode<IntPtrT> tmp353;
    compiler::TNode<Context> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<JSReceiver> tmp356;
    compiler::TNode<Number> tmp357;
    compiler::TNode<Object> tmp358;
    compiler::TNode<Number> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<Object> tmp361;
    compiler::TNode<Number> tmp362;
    compiler::TNode<Number> tmp363;
    compiler::TNode<Number> tmp364;
    compiler::TNode<JSReceiver> tmp365;
    compiler::TNode<Number> tmp366;
    compiler::TNode<Number> tmp367;
    compiler::TNode<Number> tmp368;
    ca_.Bind(&block31, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368);
    ca_.Goto(&block28, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366);
  }

  if (block27.is_used()) {
    compiler::TNode<RawPtrT> tmp369;
    compiler::TNode<RawPtrT> tmp370;
    compiler::TNode<IntPtrT> tmp371;
    compiler::TNode<Context> tmp372;
    compiler::TNode<Object> tmp373;
    compiler::TNode<JSReceiver> tmp374;
    compiler::TNode<Number> tmp375;
    compiler::TNode<Object> tmp376;
    compiler::TNode<Number> tmp377;
    compiler::TNode<Number> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<Number> tmp380;
    compiler::TNode<Number> tmp381;
    compiler::TNode<Number> tmp382;
    compiler::TNode<JSReceiver> tmp383;
    compiler::TNode<Number> tmp384;
    ca_.Bind(&block27, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 188);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 191);
    compiler::TNode<Oddball> tmp385;
    tmp385 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp372, tmp374, tmp378));
    USE(tmp385);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 194);
    compiler::TNode<Oddball> tmp386;
    USE(tmp386);
    tmp386 = True_67(state_);
    compiler::TNode<BoolT> tmp387;
    USE(tmp387);
    tmp387 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp385}, compiler::TNode<HeapObject>{tmp386});
    ca_.Branch(tmp387, &block32, &block33, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp378, tmp385);
  }

  if (block32.is_used()) {
    compiler::TNode<RawPtrT> tmp388;
    compiler::TNode<RawPtrT> tmp389;
    compiler::TNode<IntPtrT> tmp390;
    compiler::TNode<Context> tmp391;
    compiler::TNode<Object> tmp392;
    compiler::TNode<JSReceiver> tmp393;
    compiler::TNode<Number> tmp394;
    compiler::TNode<Object> tmp395;
    compiler::TNode<Number> tmp396;
    compiler::TNode<Number> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Number> tmp399;
    compiler::TNode<Number> tmp400;
    compiler::TNode<Number> tmp401;
    compiler::TNode<JSReceiver> tmp402;
    compiler::TNode<Number> tmp403;
    compiler::TNode<Number> tmp404;
    compiler::TNode<Oddball> tmp405;
    ca_.Bind(&block32, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 196);
    compiler::TNode<Object> tmp406;
    USE(tmp406);
    tmp406 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp391}, compiler::TNode<Object>{tmp393}, compiler::TNode<Object>{tmp404});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 199);
    compiler::TNode<Object> tmp407;
    tmp407 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp391, tmp402, tmp403, tmp406);
    USE(tmp407);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 194);
    ca_.Goto(&block33, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405);
  }

  if (block33.is_used()) {
    compiler::TNode<RawPtrT> tmp408;
    compiler::TNode<RawPtrT> tmp409;
    compiler::TNode<IntPtrT> tmp410;
    compiler::TNode<Context> tmp411;
    compiler::TNode<Object> tmp412;
    compiler::TNode<JSReceiver> tmp413;
    compiler::TNode<Number> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<Number> tmp416;
    compiler::TNode<Number> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<Number> tmp419;
    compiler::TNode<Number> tmp420;
    compiler::TNode<Number> tmp421;
    compiler::TNode<JSReceiver> tmp422;
    compiler::TNode<Number> tmp423;
    compiler::TNode<Number> tmp424;
    compiler::TNode<Oddball> tmp425;
    ca_.Bind(&block33, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 203);
    compiler::TNode<Number> tmp426;
    USE(tmp426);
    tmp426 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 1);
    compiler::TNode<Number> tmp427;
    USE(tmp427);
    tmp427 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp417}, compiler::TNode<Number>{tmp426});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 206);
    compiler::TNode<Number> tmp428;
    USE(tmp428);
    tmp428 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 1);
    compiler::TNode<Number> tmp429;
    USE(tmp429);
    tmp429 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp423}, compiler::TNode<Number>{tmp428});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 186);
    ca_.Goto(&block29, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp427, tmp418, tmp419, tmp420, tmp421, tmp422, tmp429);
  }

  if (block28.is_used()) {
    compiler::TNode<RawPtrT> tmp430;
    compiler::TNode<RawPtrT> tmp431;
    compiler::TNode<IntPtrT> tmp432;
    compiler::TNode<Context> tmp433;
    compiler::TNode<Object> tmp434;
    compiler::TNode<JSReceiver> tmp435;
    compiler::TNode<Number> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<Number> tmp438;
    compiler::TNode<Number> tmp439;
    compiler::TNode<Object> tmp440;
    compiler::TNode<Number> tmp441;
    compiler::TNode<Number> tmp442;
    compiler::TNode<Number> tmp443;
    compiler::TNode<JSReceiver> tmp444;
    compiler::TNode<Number> tmp445;
    ca_.Bind(&block28, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 210);
    compiler::TNode<String> tmp446;
    USE(tmp446);
    tmp446 = kLengthString_70(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp433, tmp444, tmp446, tmp445);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 213);
    arguments.PopAndReturn(tmp444);
  }
}

compiler::TNode<FixedArray> Cast10FixedArray_1389(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast10FixedArray_84(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
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
    compiler::TNode<FixedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<FixedArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 46);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<FixedArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<FixedArray>{tmp23};
}

compiler::TNode<Context> UnsafeCast7Context_1390(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 2405);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 51);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Context>{tmp8};
}

compiler::TNode<JSArray> Cast20ATFastJSArrayForCopy_1391(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast20ATFastJSArrayForCopy_113(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
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
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<JSArgumentsObjectWithLength> Cast27JSArgumentsObjectWithLength_1392(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArgumentsObjectWithLength> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<JSArgumentsObjectWithLength> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast27JSArgumentsObjectWithLength_109(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
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
    compiler::TNode<JSArgumentsObjectWithLength> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArgumentsObjectWithLength> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/array-slice.tq", 107);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp23};
}

}  // namespace internal
}  // namespace v8

