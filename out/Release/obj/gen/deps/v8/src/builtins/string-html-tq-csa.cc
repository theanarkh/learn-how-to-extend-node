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

TF_BUILTIN(CreateHTML, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kMethodName));
  USE(parameter2);
  compiler::TNode<String> parameter3 = UncheckedCast<String>(Parameter(Descriptor::kTagName));
  USE(parameter3);
  compiler::TNode<String> parameter4 = UncheckedCast<String>(Parameter(Descriptor::kAttr));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kAttrValue));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object, String, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<String> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 12);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 13);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "<");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = StringAdd_78(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<String>{tmp7}, compiler::TNode<String>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 14);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = kEmptyString_69(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp4}, compiler::TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<String> tmp14;
    compiler::TNode<String> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<String> tmp17;
    compiler::TNode<String> tmp18;
    ca_.Bind(&block1, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 16);
    compiler::TNode<String> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp11}, compiler::TNode<Object>{tmp16});
    compiler::TNode<String> tmp20;
    tmp20 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringEscapeQuotes, tmp11, tmp19)); 
    USE(tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 17);
    compiler::TNode<String> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6String18ATconstexpr_string_129(state_, " ");
    compiler::TNode<String> tmp22;
    USE(tmp22);
    tmp22 = StringAdd_78(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp18}, compiler::TNode<String>{tmp21});
    compiler::TNode<String> tmp23;
    USE(tmp23);
    tmp23 = StringAdd_78(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp22}, compiler::TNode<String>{tmp15});
    compiler::TNode<String> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr6String18ATconstexpr_string_129(state_, "=\"");
    compiler::TNode<String> tmp25;
    USE(tmp25);
    tmp25 = StringAdd_78(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp23}, compiler::TNode<String>{tmp24});
    compiler::TNode<String> tmp26;
    USE(tmp26);
    tmp26 = StringAdd_78(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp25}, compiler::TNode<String>{tmp20});
    compiler::TNode<String> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6String18ATconstexpr_string_129(state_, "\"");
    compiler::TNode<String> tmp28;
    USE(tmp28);
    tmp28 = StringAdd_78(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp26}, compiler::TNode<String>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 14);
    ca_.Goto(&block2, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp28);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<String> tmp35;
    compiler::TNode<String> tmp36;
    ca_.Bind(&block2, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 20);
    compiler::TNode<String> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6String18ATconstexpr_string_129(state_, ">");
    compiler::TNode<String> tmp38;
    USE(tmp38);
    tmp38 = StringAdd_78(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp36}, compiler::TNode<String>{tmp37});
    compiler::TNode<String> tmp39;
    USE(tmp39);
    tmp39 = StringAdd_78(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp38}, compiler::TNode<String>{tmp35});
    compiler::TNode<String> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6String18ATconstexpr_string_129(state_, "</");
    compiler::TNode<String> tmp41;
    USE(tmp41);
    tmp41 = StringAdd_78(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp39}, compiler::TNode<String>{tmp40});
    compiler::TNode<String> tmp42;
    USE(tmp42);
    tmp42 = StringAdd_78(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp41}, compiler::TNode<String>{tmp32});
    compiler::TNode<String> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr6String18ATconstexpr_string_129(state_, ">");
    compiler::TNode<String> tmp44;
    USE(tmp44);
    tmp44 = StringAdd_78(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp42}, compiler::TNode<String>{tmp43});
    CodeStubAssembler(state_).Return(tmp44);
  }
}

TF_BUILTIN(StringPrototypeAnchor, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 27);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 26);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.anchor");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "a");
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "name");
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeBig, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 35);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 34);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.big");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "big");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeBlink, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 43);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 44);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 42);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.blink");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "blink");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeBold, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 52);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 51);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.bold");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "b");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeFontcolor, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 60);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 59);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.fontcolor");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "font");
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "color");
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeFontsize, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 68);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 67);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.fontsize");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "font");
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "size");
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeFixed, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 76);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 75);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.fixed");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "tt");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeItalics, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 84);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 83);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.italics");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "i");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeLink, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 92);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 91);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.link");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "a");
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "href");
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeSmall, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 100);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 101);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 99);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.small");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "small");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeStrike, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 109);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 110);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 108);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.strike");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "strike");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeSub, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 118);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 117);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.sub");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "sub");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeSup, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 126);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_69(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_69(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/string-html.tq", 125);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "String.prototype.sup");
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "sup");
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp3, tmp4, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

}  // namespace internal
}  // namespace v8

