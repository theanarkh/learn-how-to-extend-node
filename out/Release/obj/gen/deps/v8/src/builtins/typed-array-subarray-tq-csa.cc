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

TF_BUILTIN(TypedArrayPrototypeSubArray, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 15);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast12JSTypedArray_91(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 16);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp22}, MessageTemplate::kIncompatibleMethodReceiver, "%TypedArray%.prototype.subarray");
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSTypedArray> tmp29;
    ca_.Bind(&block1, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 19);
    compiler::TNode<JSArrayBuffer> tmp30;
    USE(tmp30);
    tmp30 = TypedArrayBuiltinsAssembler(state_).GetBuffer(compiler::TNode<Context>{tmp27}, compiler::TNode<JSTypedArray>{tmp29});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 22);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp31);
    compiler::TNode<UintPtrT>tmp32 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp29, tmp31});
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = Convert8ATintptr9ATuintptr_162(state_, compiler::TNode<UintPtrT>{tmp32});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 28);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp24}, compiler::TNode<RawPtrT>{tmp25}, compiler::TNode<IntPtrT>{tmp26}}, compiler::TNode<IntPtrT>{tmp34});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 30);
    compiler::TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp35}, compiler::TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block5, &block6, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp33, tmp35);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSArrayBuffer> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Object> tmp46;
    ca_.Bind(&block5, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp41}, compiler::TNode<Object>{tmp46}, compiler::TNode<IntPtrT>{tmp45});
    ca_.Goto(&block8, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<JSTypedArray> tmp53;
    compiler::TNode<JSArrayBuffer> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block6, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<IntPtrT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    ca_.Goto(&block7, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<Context> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    compiler::TNode<JSArrayBuffer> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block7, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<JSArrayBuffer> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    ca_.Bind(&block7, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 36);
    compiler::TNode<IntPtrT> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp68}, compiler::TNode<RawPtrT>{tmp69}, compiler::TNode<IntPtrT>{tmp70}}, compiler::TNode<IntPtrT>{tmp78});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 38);
    compiler::TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp79}, compiler::TNode<HeapObject>{tmp80});
    ca_.Branch(tmp81, &block9, &block10, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<JSArrayBuffer> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block9, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    compiler::TNode<IntPtrT> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp85}, compiler::TNode<Object>{tmp92}, compiler::TNode<IntPtrT>{tmp89});
    ca_.Goto(&block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp94;
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<Context> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<JSTypedArray> tmp99;
    compiler::TNode<JSArrayBuffer> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<Object> tmp104;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.Goto(&block11, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp101);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<RawPtrT> tmp106;
    compiler::TNode<IntPtrT> tmp107;
    compiler::TNode<Context> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<JSTypedArray> tmp110;
    compiler::TNode<JSArrayBuffer> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<IntPtrT> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    ca_.Bind(&block12, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block11, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp117;
    compiler::TNode<RawPtrT> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<Context> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<JSArrayBuffer> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    ca_.Bind(&block11, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 41);
    compiler::TNode<IntPtrT> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp128}, compiler::TNode<IntPtrT>{tmp126});
    compiler::TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<IntPtrT> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).IntPtrMax(compiler::TNode<IntPtrT>{tmp129}, compiler::TNode<IntPtrT>{tmp130});
    compiler::TNode<Smi> tmp132;
    USE(tmp132);
    tmp132 = Convert13ATPositiveSmi8ATintptr_163(state_, compiler::TNode<IntPtrT>{tmp131});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 46);
    compiler::TNode<UintPtrT> tmp133;
    USE(tmp133);
    compiler::TNode<Int32T> tmp134;
    USE(tmp134);
    std::tie(tmp133, tmp134) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<JSTypedArray>{tmp122}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 49);
    compiler::TNode<IntPtrT> tmp135 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp135);
    compiler::TNode<UintPtrT>tmp136 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp122, tmp135});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 53);
    compiler::TNode<Smi> tmp137;
    USE(tmp137);
    tmp137 = Convert13ATPositiveSmi8ATintptr_163(state_, compiler::TNode<IntPtrT>{tmp126});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp138;
    USE(tmp138);
    tmp138 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp137});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp139;
    USE(tmp139);
    tmp139 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp138}, compiler::TNode<UintPtrT>{tmp133});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp140;
    USE(tmp140);
    tmp140 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp139}, compiler::TNode<UintPtrT>{tmp133});
    compiler::TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp140}, compiler::TNode<UintPtrT>{tmp138});
    ca_.Branch(tmp141, &block16, &block17, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp132, tmp133, tmp134, tmp136, tmp136, tmp133, tmp134, tmp137, tmp137, tmp138, tmp139);
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp142;
    compiler::TNode<RawPtrT> tmp143;
    compiler::TNode<IntPtrT> tmp144;
    compiler::TNode<Context> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<JSTypedArray> tmp147;
    compiler::TNode<JSArrayBuffer> tmp148;
    compiler::TNode<IntPtrT> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<IntPtrT> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<IntPtrT> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<UintPtrT> tmp155;
    compiler::TNode<Int32T> tmp156;
    compiler::TNode<UintPtrT> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    compiler::TNode<UintPtrT> tmp159;
    compiler::TNode<Int32T> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<UintPtrT> tmp163;
    compiler::TNode<UintPtrT> tmp164;
    ca_.Bind(&block16, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.Goto(&block14, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block17.is_used()) {
    compiler::TNode<RawPtrT> tmp165;
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<IntPtrT> tmp167;
    compiler::TNode<Context> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<JSTypedArray> tmp170;
    compiler::TNode<JSArrayBuffer> tmp171;
    compiler::TNode<IntPtrT> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<UintPtrT> tmp178;
    compiler::TNode<Int32T> tmp179;
    compiler::TNode<UintPtrT> tmp180;
    compiler::TNode<UintPtrT> tmp181;
    compiler::TNode<UintPtrT> tmp182;
    compiler::TNode<Int32T> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<UintPtrT> tmp187;
    ca_.Bind(&block17, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 31);
    ca_.Goto(&block15, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp187);
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp188;
    compiler::TNode<RawPtrT> tmp189;
    compiler::TNode<IntPtrT> tmp190;
    compiler::TNode<Context> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<JSTypedArray> tmp193;
    compiler::TNode<JSArrayBuffer> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<IntPtrT> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<UintPtrT> tmp201;
    compiler::TNode<Int32T> tmp202;
    compiler::TNode<UintPtrT> tmp203;
    compiler::TNode<UintPtrT> tmp204;
    compiler::TNode<UintPtrT> tmp205;
    compiler::TNode<Int32T> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<UintPtrT> tmp209;
    ca_.Bind(&block15, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 53);
    ca_.Goto(&block13, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp209);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp210;
    compiler::TNode<RawPtrT> tmp211;
    compiler::TNode<IntPtrT> tmp212;
    compiler::TNode<Context> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<JSTypedArray> tmp215;
    compiler::TNode<JSArrayBuffer> tmp216;
    compiler::TNode<IntPtrT> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<IntPtrT> tmp219;
    compiler::TNode<Object> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<UintPtrT> tmp223;
    compiler::TNode<Int32T> tmp224;
    compiler::TNode<UintPtrT> tmp225;
    compiler::TNode<UintPtrT> tmp226;
    ca_.Bind(&block14, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 54);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp213}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp227;
    compiler::TNode<RawPtrT> tmp228;
    compiler::TNode<IntPtrT> tmp229;
    compiler::TNode<Context> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<JSTypedArray> tmp232;
    compiler::TNode<JSArrayBuffer> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<IntPtrT> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<UintPtrT> tmp240;
    compiler::TNode<Int32T> tmp241;
    compiler::TNode<UintPtrT> tmp242;
    compiler::TNode<UintPtrT> tmp243;
    compiler::TNode<UintPtrT> tmp244;
    ca_.Bind(&block13, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 52);
    compiler::TNode<UintPtrT> tmp245;
    USE(tmp245);
    tmp245 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp243}, compiler::TNode<UintPtrT>{tmp244});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 57);
    compiler::TNode<Number> tmp246;
    USE(tmp246);
    tmp246 = Convert20UT5ATSmi10HeapNumber9ATuintptr_175(state_, compiler::TNode<UintPtrT>{tmp245});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-subarray.tq", 61);
    compiler::TNode<JSTypedArray> tmp247;
    USE(tmp247);
    tmp247 = TypedArraySpeciesCreate_309(state_, compiler::TNode<Context>{tmp230}, "%TypedArray%.prototype.subarray", 3, compiler::TNode<JSTypedArray>{tmp232}, compiler::TNode<Object>{tmp233}, compiler::TNode<Object>{tmp246}, compiler::TNode<Object>{tmp239});
    arguments.PopAndReturn(tmp247);
  }
}

}  // namespace internal
}  // namespace v8

