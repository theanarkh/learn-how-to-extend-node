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

void RegExpReplaceCallableNoExplicitCaptures_292(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<HeapObject> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object, HeapObject, String> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, HeapObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 35);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 36);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<HeapObject> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp13}, compiler::TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<String> tmp18;
    compiler::TNode<HeapObject> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 37);
    compiler::TNode<Object> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp16}, compiler::TNode<IntPtrT>{tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 39);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp23 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp22}, &label0);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp22, tmp23);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp22);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<String> tmp27;
    compiler::TNode<HeapObject> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    ca_.Bind(&block9, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block7, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<FixedArray> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<String> tmp36;
    compiler::TNode<HeapObject> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 43);
    compiler::TNode<Smi> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp42}, compiler::TNode<Smi>{tmp43});
    ca_.Branch(tmp44, &block10, &block11, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<FixedArray> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<String> tmp48;
    compiler::TNode<HeapObject> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Smi> tmp53;
    ca_.Bind(&block10, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 47);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp53});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 48);
    compiler::TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 11);
    compiler::TNode<IntPtrT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).WordSar(compiler::TNode<IntPtrT>{tmp54}, compiler::TNode<IntPtrT>{tmp55});
    compiler::TNode<IntPtrT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0x7FF);
    compiler::TNode<IntPtrT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).WordAnd(compiler::TNode<IntPtrT>{tmp54}, compiler::TNode<IntPtrT>{tmp57});
    compiler::TNode<IntPtrT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp56}, compiler::TNode<IntPtrT>{tmp58});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 49);
    compiler::TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = Convert5ATSmi8ATintptr_158(state_, compiler::TNode<IntPtrT>{tmp59});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 43);
    ca_.Goto(&block12, tmp45, tmp46, tmp47, tmp48, tmp49, tmp60, tmp51, tmp52, tmp53);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<String> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Smi> tmp69;
    ca_.Bind(&block11, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 53);
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp67}, compiler::TNode<IntPtrT>{tmp70});
    compiler::TNode<Object> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp62}, compiler::TNode<IntPtrT>{tmp71});
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = UnsafeCast5ATSmi_1371(state_, compiler::TNode<Context>{tmp61}, compiler::TNode<Object>{tmp72});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 54);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp69});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 43);
    ca_.Goto(&block12, tmp61, tmp62, tmp63, tmp64, tmp65, tmp74, tmp71, tmp68, tmp69);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<String> tmp78;
    compiler::TNode<HeapObject> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Smi> tmp83;
    ca_.Bind(&block12, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block6, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<FixedArray> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<String> tmp87;
    compiler::TNode<HeapObject> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<IntPtrT> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block7, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 59);
    compiler::TNode<String> tmp92;
    USE(tmp92);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp92 = Cast6String_99(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp91)}, &label0);
    ca_.Goto(&block15, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, ca_.UncheckedCast<HeapObject>(tmp91), tmp92);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, ca_.UncheckedCast<HeapObject>(tmp91));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<String> tmp96;
    compiler::TNode<HeapObject> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<HeapObject> tmp101;
    ca_.Bind(&block16, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block14, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<FixedArray> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    compiler::TNode<String> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<HeapObject> tmp110;
    compiler::TNode<String> tmp111;
    ca_.Bind(&block15, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 61);
    compiler::TNode<Oddball> tmp112;
    USE(tmp112);
    tmp112 = Undefined_66(state_);
    compiler::TNode<Object> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp102}, compiler::TNode<HeapObject>{tmp106}, compiler::TNode<Object>{tmp112}, compiler::TNode<Object>{tmp111}, compiler::TNode<Object>{tmp107}, compiler::TNode<Object>{tmp105});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 60);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 62);
    compiler::TNode<String> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp102}, compiler::TNode<Object>{tmp113});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 63);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp103}, compiler::TNode<IntPtrT>{tmp108}, compiler::TNode<HeapObject>{tmp114});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 64);
    compiler::TNode<Smi> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp111});
    compiler::TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp107}, compiler::TNode<Smi>{tmp115});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 59);
    ca_.Goto(&block13, tmp102, tmp103, tmp104, tmp105, tmp106, tmp116, tmp108, tmp109);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<String> tmp120;
    compiler::TNode<HeapObject> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<IntPtrT> tmp123;
    compiler::TNode<Object> tmp124;
    ca_.Bind(&block14, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 67);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<FixedArray> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<String> tmp128;
    compiler::TNode<HeapObject> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<IntPtrT> tmp131;
    compiler::TNode<Object> tmp132;
    ca_.Bind(&block13, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block6, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp133;
    compiler::TNode<FixedArray> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<String> tmp136;
    compiler::TNode<HeapObject> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<Object> tmp140;
    ca_.Bind(&block6, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 36);
    ca_.Goto(&block5, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp141;
    compiler::TNode<FixedArray> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<String> tmp144;
    compiler::TNode<HeapObject> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    ca_.Bind(&block5, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    compiler::TNode<IntPtrT> tmp148;
    USE(tmp148);
    tmp148 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp147}, compiler::TNode<IntPtrT>{tmp148});
    ca_.Goto(&block4, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp149);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<FixedArray> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<String> tmp153;
    compiler::TNode<HeapObject> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    ca_.Bind(&block3, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 31);
    ca_.Goto(&block1, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp157;
    compiler::TNode<FixedArray> tmp158;
    compiler::TNode<IntPtrT> tmp159;
    compiler::TNode<String> tmp160;
    compiler::TNode<HeapObject> tmp161;
    ca_.Bind(&block1, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.Goto(&block17, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

    compiler::TNode<Context> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<IntPtrT> tmp164;
    compiler::TNode<String> tmp165;
    compiler::TNode<HeapObject> tmp166;
    ca_.Bind(&block17, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166);
}

void RegExpReplaceCallableWithExplicitCaptures_293(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<HeapObject> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT, Object, JSArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 76);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp9}, compiler::TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp10, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<HeapObject> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 78);
    compiler::TNode<Object> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp12}, compiler::TNode<IntPtrT>{tmp15});
    compiler::TNode<JSArray> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast7JSArray_1395(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<Object>{tmp16}, &label0);
    ca_.Goto(&block8, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<FixedArray> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<HeapObject> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block7, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<HeapObject> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSArray> tmp30;
    ca_.Bind(&block8, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block6, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<FixedArray> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<HeapObject> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    ca_.Bind(&block7, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block5, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<FixedArray> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<HeapObject> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<JSArray> tmp41;
    ca_.Bind(&block6, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 83);
    compiler::TNode<HeapObject> tmp42;
    USE(tmp42);
    tmp42 = GetReflectApply_202(state_, compiler::TNode<Context>{tmp36});
    compiler::TNode<Oddball> tmp43;
    USE(tmp43);
    tmp43 = Undefined_66(state_);
    compiler::TNode<Oddball> tmp44;
    USE(tmp44);
    tmp44 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 82);
    compiler::TNode<Object> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp36}, compiler::TNode<HeapObject>{tmp42}, compiler::TNode<Object>{tmp43}, compiler::TNode<Object>{tmp39}, compiler::TNode<Object>{tmp44}, compiler::TNode<Object>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 87);
    compiler::TNode<String> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp45});
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp37}, compiler::TNode<IntPtrT>{tmp40}, compiler::TNode<HeapObject>{tmp46});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 76);
    ca_.Goto(&block5, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<FixedArray> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<HeapObject> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    ca_.Bind(&block5, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    compiler::TNode<IntPtrT> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp51}, compiler::TNode<IntPtrT>{tmp52});
    ca_.Goto(&block4, tmp47, tmp48, tmp49, tmp50, tmp53);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<FixedArray> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    ca_.Bind(&block3, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 73);
    ca_.Goto(&block1, tmp54, tmp55, tmp56, tmp57);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<FixedArray> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<HeapObject> tmp62;
    ca_.Bind(&block1, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block10, tmp59, tmp60, tmp61, tmp62);
  }

    compiler::TNode<Context> tmp63;
    compiler::TNode<FixedArray> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<HeapObject> tmp66;
    ca_.Bind(&block10, &tmp63, &tmp64, &tmp65, &tmp66);
}

compiler::TNode<String> RegExpReplaceFastGlobalCallable_294(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<HeapObject> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, HeapObject, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 94);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 96);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 97);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 99);
    compiler::TNode<RegExpMatchInfo> tmp7;
    USE(tmp7);
    tmp7 = GetRegExpLastMatchInfo_203(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 101);
    compiler::TNode<Map> tmp8;
    USE(tmp8);
    tmp8 = GetFastPackedElementsJSArrayMap_197(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 102);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 100);
    compiler::TNode<JSArray> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, compiler::TNode<Map>{tmp8}, compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 98);
    compiler::TNode<HeapObject> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpExecMultiple, tmp0, tmp1, tmp2, tmp7, tmp9)); 
    USE(tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 104);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 107);
    compiler::TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = Null_65(state_);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp10}, compiler::TNode<HeapObject>{tmp12});
    ca_.Branch(tmp13, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp10);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSRegExp> tmp15;
    compiler::TNode<String> tmp16;
    compiler::TNode<HeapObject> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSRegExp> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<HeapObject> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<HeapObject> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 109);
    compiler::TNode<JSArray> tmp28;
    USE(tmp28);
    tmp28 = UnsafeCast7JSArray_1368(state_, compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 110);
    compiler::TNode<IntPtrT> tmp29 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp29);
    compiler::TNode<Number>tmp30 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp28, tmp29});
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSRegExp> tmp33;
    compiler::TNode<String> tmp34;
    compiler::TNode<HeapObject> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<JSArray> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSRegExp> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<HeapObject> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<JSArray> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Smi> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSRegExp> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSRegExp> tmp60;
    compiler::TNode<String> tmp61;
    compiler::TNode<HeapObject> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<JSArray> tmp66;
    compiler::TNode<Smi> tmp67;
    ca_.Bind(&block4, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 111);
    compiler::TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = Convert8ATintptr5ATSmi_160(state_, compiler::TNode<Smi>{tmp67});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 113);
    compiler::TNode<IntPtrT> tmp69 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp69);
    compiler::TNode<FixedArrayBase>tmp70 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp69});
    compiler::TNode<FixedArray> tmp71;
    USE(tmp71);
    tmp71 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp70});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 112);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 116);
    compiler::TNode<RegExpMatchInfo> tmp72;
    USE(tmp72);
    tmp72 = GetRegExpLastMatchInfo_203(state_, compiler::TNode<Context>{tmp59});
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = _method_RegExpMatchInfo_NumberOfCaptures(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<RegExpMatchInfo>{tmp72});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 121);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block8, &block9, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71, tmp73);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSRegExp> tmp77;
    compiler::TNode<String> tmp78;
    compiler::TNode<HeapObject> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<HeapObject> tmp82;
    compiler::TNode<JSArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 123);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 122);
    RegExpReplaceCallableNoExplicitCaptures_292(state_, compiler::TNode<Context>{tmp76}, compiler::TNode<FixedArray>{tmp86}, compiler::TNode<IntPtrT>{tmp85}, compiler::TNode<String>{tmp78}, compiler::TNode<HeapObject>{tmp79});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 121);
    ca_.Goto(&block10, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<JSRegExp> tmp89;
    compiler::TNode<String> tmp90;
    compiler::TNode<HeapObject> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<HeapObject> tmp94;
    compiler::TNode<JSArray> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block9, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 126);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 125);
    RegExpReplaceCallableWithExplicitCaptures_293(state_, compiler::TNode<Context>{tmp88}, compiler::TNode<FixedArray>{tmp98}, compiler::TNode<IntPtrT>{tmp97}, compiler::TNode<HeapObject>{tmp91});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 121);
    ca_.Goto(&block10, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSRegExp> tmp101;
    compiler::TNode<String> tmp102;
    compiler::TNode<HeapObject> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<FixedArray> tmp110;
    compiler::TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 129);
    compiler::TNode<String> tmp112;
    tmp112 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringBuilderConcat, tmp100, tmp107, tmp108, tmp102)); 
    USE(tmp112);
    ca_.Goto(&block1, tmp100, tmp101, tmp102, tmp103, tmp112);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<JSRegExp> tmp114;
    compiler::TNode<String> tmp115;
    compiler::TNode<HeapObject> tmp116;
    compiler::TNode<String> tmp117;
    ca_.Bind(&block1, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 91);
    ca_.Goto(&block11, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

    compiler::TNode<Context> tmp118;
    compiler::TNode<JSRegExp> tmp119;
    compiler::TNode<String> tmp120;
    compiler::TNode<HeapObject> tmp121;
    compiler::TNode<String> tmp122;
    ca_.Bind(&block11, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
  return compiler::TNode<String>{tmp122};
}

compiler::TNode<String> RegExpReplaceFastString_295(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<String> p_replaceString) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String, RegExpMatchInfo> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceString);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<String> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 137);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 138);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 139);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 140);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 141);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 143);
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSRegExp> tmp10;
    compiler::TNode<String> tmp11;
    compiler::TNode<String> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 144);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterUnicode(compiler::TNode<JSRegExp>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 145);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp10}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 143);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp18, tmp16, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSRegExp> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<String> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<BoolT> tmp28;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 148);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSRegExp> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<BoolT> tmp37;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Branch(tmp38, &block4, &block5, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSRegExp> tmp40;
    compiler::TNode<String> tmp41;
    compiler::TNode<String> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<BoolT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<BoolT> tmp47;
    ca_.Bind(&block4, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 150);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 149);
    compiler::TNode<RegExpMatchInfo> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp48 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(compiler::TNode<Context>{tmp39}, compiler::TNode<JSReceiver>{tmp40}, compiler::TNode<String>{tmp41}, &label0);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSRegExp> tmp50;
    compiler::TNode<String> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<BoolT> tmp57;
    compiler::TNode<JSRegExp> tmp58;
    compiler::TNode<String> tmp59;
    ca_.Bind(&block10, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block8, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSRegExp> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<String> tmp63;
    compiler::TNode<String> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<BoolT> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<RegExpMatchInfo> tmp71;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSRegExp> tmp73;
    compiler::TNode<String> tmp74;
    compiler::TNode<String> tmp75;
    compiler::TNode<String> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<BoolT> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<BoolT> tmp80;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 150);
    ca_.Goto(&block5, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<JSRegExp> tmp82;
    compiler::TNode<String> tmp83;
    compiler::TNode<String> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<BoolT> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<BoolT> tmp89;
    compiler::TNode<RegExpMatchInfo> tmp90;
    ca_.Bind(&block7, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 149);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 151);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = _method_RegExpMatchInfo_GetStartOfCapture(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 152);
    compiler::TNode<Smi> tmp92;
    USE(tmp92);
    tmp92 = _method_RegExpMatchInfo_GetEndOfCapture(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 156);
    compiler::TNode<String> tmp93;
    tmp93 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp81, tmp83, tmp86, tmp91));
    USE(tmp93);
    compiler::TNode<String> tmp94;
    USE(tmp94);
    tmp94 = StringAdd_78(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<String>{tmp85}, compiler::TNode<String>{tmp93});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 157);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 159);
    compiler::TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp88}, compiler::TNode<Smi>{tmp95});
    ca_.Branch(tmp96, &block11, &block12, tmp81, tmp82, tmp83, tmp84, tmp94, tmp92, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSRegExp> tmp98;
    compiler::TNode<String> tmp99;
    compiler::TNode<String> tmp100;
    compiler::TNode<String> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<BoolT> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<BoolT> tmp105;
    compiler::TNode<RegExpMatchInfo> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    ca_.Bind(&block11, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    compiler::TNode<String> tmp109;
    USE(tmp109);
    tmp109 = StringAdd_78(state_, compiler::TNode<Context>{tmp97}, compiler::TNode<String>{tmp101}, compiler::TNode<String>{tmp100});
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp109, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSRegExp> tmp111;
    compiler::TNode<String> tmp112;
    compiler::TNode<String> tmp113;
    compiler::TNode<String> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<BoolT> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<RegExpMatchInfo> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 162);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp118});
    ca_.Branch(tmp122, &block13, &block14, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<JSRegExp> tmp124;
    compiler::TNode<String> tmp125;
    compiler::TNode<String> tmp126;
    compiler::TNode<String> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<BoolT> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<BoolT> tmp131;
    compiler::TNode<RegExpMatchInfo> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block5, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSRegExp> tmp136;
    compiler::TNode<String> tmp137;
    compiler::TNode<String> tmp138;
    compiler::TNode<String> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<BoolT> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<BoolT> tmp143;
    compiler::TNode<RegExpMatchInfo> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Smi> tmp146;
    ca_.Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 165);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp146}, compiler::TNode<Smi>{tmp145});
    ca_.Branch(tmp147, &block15, &block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSRegExp> tmp149;
    compiler::TNode<String> tmp150;
    compiler::TNode<String> tmp151;
    compiler::TNode<String> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<BoolT> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<BoolT> tmp156;
    compiler::TNode<RegExpMatchInfo> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 166);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 167);
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(compiler::TNode<JSRegExp>{tmp149});
    compiler::TNode<Smi> tmp161;
    USE(tmp161);
    tmp161 = RegExpBuiltinsAssembler(state_).AdvanceStringIndexFast(compiler::TNode<String>{tmp150}, compiler::TNode<Smi>{tmp160}, compiler::TNode<BoolT>{tmp154});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 166);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp149}, compiler::TNode<Smi>{tmp161});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 165);
    ca_.Goto(&block16, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<JSRegExp> tmp163;
    compiler::TNode<String> tmp164;
    compiler::TNode<String> tmp165;
    compiler::TNode<String> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<BoolT> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<RegExpMatchInfo> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 148);
    ca_.Goto(&block6, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<JSRegExp> tmp175;
    compiler::TNode<String> tmp176;
    compiler::TNode<String> tmp177;
    compiler::TNode<String> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<BoolT> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<BoolT> tmp182;
    ca_.Bind(&block5, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 171);
    compiler::TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp176});
    compiler::TNode<String> tmp184;
    tmp184 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp174, tmp176, tmp179, tmp183));
    USE(tmp184);
    compiler::TNode<String> tmp185;
    USE(tmp185);
    tmp185 = StringAdd_78(state_, compiler::TNode<Context>{tmp174}, compiler::TNode<String>{tmp178}, compiler::TNode<String>{tmp184});
    ca_.Goto(&block1, tmp174, tmp175, tmp176, tmp177, tmp185);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSRegExp> tmp187;
    compiler::TNode<String> tmp188;
    compiler::TNode<String> tmp189;
    compiler::TNode<String> tmp190;
    ca_.Bind(&block1, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 132);
    ca_.Goto(&block17, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

    compiler::TNode<Context> tmp191;
    compiler::TNode<JSRegExp> tmp192;
    compiler::TNode<String> tmp193;
    compiler::TNode<String> tmp194;
    compiler::TNode<String> tmp195;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
  return compiler::TNode<String>{tmp195};
}

TF_BUILTIN(RegExpReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReplaceValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, HeapObject, String> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, HeapObject, String> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp, JSRegExp> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 181);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 182);
    compiler::TNode<HeapObject> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSRegExp> tmp6;
    compiler::TNode<String> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSRegExp> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<HeapObject> tmp17;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 183);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp12});
    ca_.Branch(tmp18, &block5, &block6, tmp11, tmp12, tmp13, tmp14, tmp15, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSRegExp> tmp20;
    compiler::TNode<String> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<HeapObject> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 184);
    compiler::TNode<String> tmp25;
    USE(tmp25);
    tmp25 = RegExpReplaceFastGlobalCallable_294(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<JSRegExp>{tmp20}, compiler::TNode<String>{tmp21}, compiler::TNode<HeapObject>{tmp24});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 183);
    ca_.Goto(&block8, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSRegExp> tmp27;
    compiler::TNode<String> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<HeapObject> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 185);
    compiler::TNode<String> tmp32;
    tmp32 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringReplaceNonGlobalRegExpWithFunction, tmp26, tmp28, tmp27, tmp31)); 
    USE(tmp32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 183);
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSRegExp> tmp34;
    compiler::TNode<String> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<String> tmp39;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block7, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSRegExp> tmp41;
    compiler::TNode<String> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<HeapObject> tmp45;
    compiler::TNode<String> tmp46;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    CodeStubAssembler(state_).Return(tmp46);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<JSRegExp> tmp48;
    compiler::TNode<String> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 187);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 188);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 189);
    compiler::TNode<String> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp47}, compiler::TNode<Object>{tmp50});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 195);
    compiler::TNode<JSRegExp> tmp53;
    USE(tmp53);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp53 = Cast14ATFastJSRegExp_110(state_, compiler::TNode<Context>{tmp47}, compiler::TNode<HeapObject>{tmp48}, &label0);
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48, tmp53);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSRegExp> tmp55;
    compiler::TNode<String> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSRegExp> tmp60;
    compiler::TNode<String> tmp61;
    compiler::TNode<JSRegExp> tmp62;
    ca_.Bind(&block12, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block10, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    compiler::TNode<String> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<JSRegExp> tmp71;
    compiler::TNode<JSRegExp> tmp72;
    ca_.Bind(&block11, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 197);
    compiler::TNode<String> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).SingleCharacterStringConstant("$");
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 196);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Smi> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringIndexOf, tmp63, tmp70, tmp73, tmp74));
    USE(tmp75);
    compiler::TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, -1);
    compiler::TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp75}, compiler::TNode<Smi>{tmp76});
    ca_.Branch(tmp77, &block13, &block14, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp72);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<JSRegExp> tmp79;
    compiler::TNode<String> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSRegExp> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<JSRegExp> tmp86;
    ca_.Bind(&block13, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 198);
    ca_.Goto(&block10, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<JSRegExp> tmp88;
    compiler::TNode<String> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSRegExp> tmp93;
    compiler::TNode<String> tmp94;
    compiler::TNode<JSRegExp> tmp95;
    ca_.Bind(&block14, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 201);
    compiler::TNode<String> tmp96;
    USE(tmp96);
    tmp96 = RegExpReplaceFastString_295(state_, compiler::TNode<Context>{tmp87}, compiler::TNode<JSRegExp>{tmp95}, compiler::TNode<String>{tmp89}, compiler::TNode<String>{tmp94});
    CodeStubAssembler(state_).Return(tmp96);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSRegExp> tmp98;
    compiler::TNode<String> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSRegExp> tmp103;
    compiler::TNode<String> tmp104;
    ca_.Bind(&block10, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 204);
    compiler::TNode<String> tmp105;
    tmp105 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp97, tmp103, tmp99, tmp104)); 
    USE(tmp105);
    CodeStubAssembler(state_).Return(tmp105);
  }
}

TF_BUILTIN(RegExpPrototypeReplace, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 232);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 233);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 237);
    compiler::TNode<JSReceiver> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast10JSReceiver_1365(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 238);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp30}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@replace");
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    ca_.Bind(&block1, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 241);
    compiler::TNode<String> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp37}, compiler::TNode<Object>{tmp39});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 245);
    compiler::TNode<JSRegExp> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast14ATFastJSRegExp_110(state_, compiler::TNode<Context>{tmp37}, compiler::TNode<HeapObject>{tmp41}, &label0);
    ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    ca_.Bind(&block7, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 246);
    compiler::TNode<String> tmp65;
    tmp65 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpReplace, tmp57, tmp64, tmp62, tmp60));
    USE(tmp65);
    arguments.PopAndReturn(tmp65);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<String> tmp74;
    ca_.Bind(&block6, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/regexp-replace.tq", 249);
    compiler::TNode<String> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp69, tmp73, tmp74, tmp72)); 
    USE(tmp75);
    arguments.PopAndReturn(tmp75);
  }
}

}  // namespace internal
}  // namespace v8

