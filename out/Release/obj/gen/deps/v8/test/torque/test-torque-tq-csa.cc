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

compiler::TNode<BoolT> ElementsKindTestHelper1_370(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 7);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 8);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 10);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 6);
    ca_.Goto(&block6, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block6, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

bool ElementsKindTestHelper2_371(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 15);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 14);
    ca_.Goto(&block3);
  }

    ca_.Bind(&block3);
  return ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)));
}

void LabelTestHelper1_372(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 20);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 18);
    ca_.Goto(label_Label1);
  }
}

void LabelTestHelper2_373(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 25);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 42);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 23);
    *label_Label2_parameter_0 = tmp1;
    ca_.Goto(label_Label2);
  }
}

void LabelTestHelper3_374(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 30);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_65(state_);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 28);
    *label_Label3_parameter_1 = tmp3;
    *label_Label3_parameter_0 = tmp2;
    ca_.Goto(label_Label3);
  }
}

void TestConstexpr1_375(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 35);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (CodeStubAssembler(state_).IsFastElementsKind(PACKED_SMI_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed", "../../deps/v8/test/torque/test-torque.tq", 35);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 33);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

void TestConstexprIf_376(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 40);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = ElementsKindTestHelper1_370(state_, UINT8_ELEMENTS);
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed", "../../deps/v8/test/torque/test-torque.tq", 40);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 41);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ElementsKindTestHelper1_370(state_, UINT16_ELEMENTS);
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed", "../../deps/v8/test/torque/test-torque.tq", 41);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 42);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ElementsKindTestHelper1_370(state_, UINT32_ELEMENTS);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed", "../../deps/v8/test/torque/test-torque.tq", 42);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 38);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestConstexprReturn_377(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 47);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (ElementsKindTestHelper2_371(state_, UINT8_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT8_ELEMENTS))' failed", "../../deps/v8/test/torque/test-torque.tq", 47);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 48);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (ElementsKindTestHelper2_371(state_, UINT16_ELEMENTS)));
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT16_ELEMENTS))' failed", "../../deps/v8/test/torque/test-torque.tq", 48);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 49);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (ElementsKindTestHelper2_371(state_, UINT32_ELEMENTS)));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!FromConstexpr<bool>(ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "../../deps/v8/test/torque/test-torque.tq", 49);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 50);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (CodeStubAssembler(state_).ConstexprBoolNot((ElementsKindTestHelper2_371(state_, UINT32_ELEMENTS)))));
    ca_.Branch(tmp4, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(!ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "../../deps/v8/test/torque/test-torque.tq", 50);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 45);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

compiler::TNode<Oddball> TestGotoLabel_378(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 56);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper1_372(state_, &label0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 59);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = True_67(state_);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 53);
    ca_.Goto(&block5, tmp1);
  }

    compiler::TNode<Oddball> tmp2;
    ca_.Bind(&block5, &tmp2);
  return compiler::TNode<Oddball>{tmp2};
}

compiler::TNode<Oddball> TestGotoLabelWithOneParameter_379(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 66);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_0(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper2_373(state_, &label0, &result_0_0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value());
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block4, &tmp0);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 69);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 42);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block5, &block6, tmp1);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block6, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 42' failed", "../../deps/v8/test/torque/test-torque.tq", 69);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 70);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = True_67(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp7;
    ca_.Bind(&block1, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 63);
    ca_.Goto(&block7, tmp7);
  }

    compiler::TNode<Oddball> tmp8;
    ca_.Bind(&block7, &tmp8);
  return compiler::TNode<Oddball>{tmp8};
}

compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_380(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 77);
    compiler::TypedCodeAssemblerVariable<Oddball> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper3_374(state_, &label0, &result_0_0, &result_0_1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value(), result_0_1.value());
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Oddball> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block4, &tmp0, &tmp1);
    ca_.Goto(&block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Oddball> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 80);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Null_65(state_);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp2}, compiler::TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block5, &block6, tmp2, tmp3);
  }

  if (block6.is_used()) {
    compiler::TNode<Oddball> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 80);
  }

  if (block5.is_used()) {
    compiler::TNode<Oddball> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 81);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block7, &block8, tmp8, tmp9);
  }

  if (block8.is_used()) {
    compiler::TNode<Oddball> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block8, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 81);
  }

  if (block7.is_used()) {
    compiler::TNode<Oddball> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 82);
    compiler::TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True_67(state_);
    ca_.Goto(&block1, tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp17;
    ca_.Bind(&block1, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 74);
    ca_.Goto(&block9, tmp17);
  }

    compiler::TNode<Oddball> tmp18;
    ca_.Bind(&block9, &tmp18);
  return compiler::TNode<Oddball>{tmp18};
}

TF_BUILTIN(GenericBuiltinTest20UT5ATSmi10HeapObject, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 91);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

void TestBuiltinSpecialization_381(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 96);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Object> tmp2;
    tmp2 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp0, tmp1);
    USE(tmp2);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_65(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 96);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 97);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Object> tmp8;
    tmp8 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp6, tmp7);
    USE(tmp8);
    compiler::TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Null_65(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp8}, compiler::TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block4, &block5, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 97);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    ca_.Bind(&block4, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 98);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_66(state_);
    compiler::TNode<Object> tmp14;
    tmp14 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest20UT5ATSmi10HeapObject, tmp12, tmp13);
    USE(tmp14);
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 98);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 99);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    compiler::TNode<Object> tmp20;
    tmp20 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest20UT5ATSmi10HeapObject, tmp18, tmp19);
    USE(tmp20);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp20}, compiler::TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block8, &block9, tmp18);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp23;
    ca_.Bind(&block9, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 99);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp24;
    ca_.Bind(&block8, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 94);
    ca_.Goto(&block1, tmp24);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp25;
    ca_.Bind(&block1, &tmp25);
    ca_.Goto(&block10, tmp25);
  }

    compiler::TNode<Context> tmp26;
    ca_.Bind(&block10, &tmp26);
}

void LabelTestHelper4_382(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 104);
    if ((p_flag)) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 105);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 107);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 102);
    ca_.Goto(label_Label4);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_Label5);
  }
}

compiler::TNode<BoolT> CallLabelTestHelper4_383(compiler::CodeAssemblerState* state_, bool p_flag) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 113);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    LabelTestHelper4_382(state_, p_flag, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block5);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block3);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 116);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 119);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 111);
    ca_.Goto(&block8, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block8, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

compiler::TNode<Oddball> TestPartiallyUnusedLabel_384(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 125);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = CallLabelTestHelper4_383(state_, true);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 126);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CallLabelTestHelper4_383(state_, false);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 128);
    ca_.Branch(tmp0, &block4, &block3, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 129);
    compiler::TNode<Oddball> tmp7;
    USE(tmp7);
    tmp7 = True_67(state_);
    ca_.Goto(&block1, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block3, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 131);
    compiler::TNode<Oddball> tmp10;
    USE(tmp10);
    tmp10 = False_68(state_);
    ca_.Goto(&block1, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp11;
    ca_.Bind(&block1, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 123);
    ca_.Goto(&block6, tmp11);
  }

    compiler::TNode<Oddball> tmp12;
    ca_.Bind(&block6, &tmp12);
  return compiler::TNode<Oddball>{tmp12};
}

compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_385(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 140);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 139);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_386(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 150);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 148);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Y);
  }

    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<Object>{tmp10};
}

void TestMacroSpecialization_387(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 156);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 157);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = GenericMacroTest5ATSmi_1428(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block4, &block5, tmp0);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(0) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 157);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 158);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = GenericMacroTest5ATSmi_1428(state_, compiler::TNode<Smi>{tmp7});
    compiler::TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp8}, compiler::TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block6, &block7, tmp6);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block7, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(1) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 158);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block6, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 159);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_65(state_);
    compiler::TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = GenericMacroTest20UT5ATSmi10HeapObject_385(state_, compiler::TNode<Object>{tmp13});
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Null_65(state_);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block8, &block9, tmp12);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block9, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(Null) == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 159);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block8, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 160);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False_68(state_);
    compiler::TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = GenericMacroTest20UT5ATSmi10HeapObject_385(state_, compiler::TNode<Object>{tmp19});
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = False_68(state_);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp20}, compiler::TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block10, &block11, tmp18);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block11, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(False) == False' failed", "../../deps/v8/test/torque/test-torque.tq", 160);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block10, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 161);
    compiler::TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True_67(state_);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = GenericMacroTest20UT5ATSmi10HeapObject_385(state_, compiler::TNode<Object>{tmp25});
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_67(state_);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp26}, compiler::TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block12, &block13, tmp24);
  }

  if (block13.is_used()) {
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block13, &tmp29);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(True) == True' failed", "../../deps/v8/test/torque/test-torque.tq", 161);
  }

  if (block12.is_used()) {
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block12, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 162);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Object> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = GenericMacroTestWithLabels5ATSmi_1429(state_, compiler::TNode<Smi>{tmp31}, &label0);
    ca_.Goto(&block16, tmp30, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp30);
    }
  }

  if (block17.is_used()) {
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block17, &tmp33);
    ca_.Goto(&block3);
  }

  if (block16.is_used()) {
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block16, &tmp34, &tmp35);
    compiler::TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp35}, compiler::TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block14, &block15, tmp34);
  }

  if (block15.is_used()) {
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block15, &tmp38);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 162);
  }

  if (block14.is_used()) {
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block14, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 163);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = GenericMacroTestWithLabels5ATSmi_1429(state_, compiler::TNode<Smi>{tmp40}, &label0);
    ca_.Goto(&block20, tmp39, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp39);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block21, &tmp42);
    ca_.Goto(&block3);
  }

  if (block20.is_used()) {
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block20, &tmp43, &tmp44);
    compiler::TNode<Oddball> tmp45;
    USE(tmp45);
    tmp45 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp44}, compiler::TNode<HeapObject>{tmp45});
    ca_.Branch(tmp46, &block18, &block19, tmp43);
  }

  if (block19.is_used()) {
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block19, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 163);
  }

  if (block18.is_used()) {
    compiler::TNode<Smi> tmp48;
    ca_.Bind(&block18, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 165);
    compiler::TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = False_68(state_);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = GenericMacroTestWithLabels20UT5ATSmi10HeapObject_386(state_, compiler::TNode<Object>{tmp49}, &label0);
    ca_.Goto(&block24, tmp48, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp48, tmp49);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Oddball> tmp52;
    ca_.Bind(&block25, &tmp51, &tmp52);
    ca_.Goto(&block23, tmp51);
  }

  if (block24.is_used()) {
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Oddball> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block24, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 167);
    ca_.Goto(&block22, tmp53);
  }

  if (block23.is_used()) {
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block23, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 164);
    ca_.Goto(&block22, tmp56);
  }

  if (block22.is_used()) {
    compiler::TNode<Smi> tmp57;
    ca_.Bind(&block22, &tmp57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 155);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 169);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 170);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 153);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block26);
  }

    ca_.Bind(&block26);
}

TF_BUILTIN(TestHelperPlus1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 175);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(TestHelperPlus2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 178);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

compiler::TNode<Oddball> TestFunctionPointers_388(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 183);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 184);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 42);
    compiler::TNode<Smi> tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)), tmp0, tmp1)); 
    USE(tmp2);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 43);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)));
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block3, &tmp5, &tmp6);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 43' failed", "../../deps/v8/test/torque/test-torque.tq", 184);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<BuiltinPtr> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 185);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 186);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 42);
    compiler::TNode<Smi> tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)), tmp7, tmp9)); 
    USE(tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 44);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp7, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)));
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<BuiltinPtr> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 44' failed", "../../deps/v8/test/torque/test-torque.tq", 186);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BuiltinPtr> tmp16;
    ca_.Bind(&block4, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 187);
    compiler::TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = True_67(state_);
    ca_.Goto(&block1, tmp15, tmp17);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Oddball> tmp19;
    ca_.Bind(&block1, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 181);
    ca_.Goto(&block6, tmp18, tmp19);
  }

    compiler::TNode<Context> tmp20;
    compiler::TNode<Oddball> tmp21;
    ca_.Bind(&block6, &tmp20, &tmp21);
  return compiler::TNode<Oddball>{tmp21};
}

compiler::TNode<Oddball> TestVariableRedeclaration_389(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 192);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.Goto(&block5, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block3, &tmp3);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3117ATconstexpr_int31_120(state_, 1);
    ca_.Goto(&block4, tmp3, tmp4);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block5, &tmp5);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr7ATint3117ATconstexpr_int31_120(state_, 0);
    ca_.Goto(&block4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block4, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 193);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp9, &block6, &block7, tmp7, tmp8);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    ca_.Goto(&block9, tmp10, tmp11);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block7, &tmp12, &tmp13);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3117ATconstexpr_int31_120(state_, 0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block9, &tmp15, &tmp16);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3117ATconstexpr_int31_120(state_, 1);
    ca_.Goto(&block8, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Int32T> tmp19;
    compiler::TNode<Int32T> tmp20;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 194);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True_67(state_);
    ca_.Goto(&block1, tmp18, tmp21);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Oddball> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 190);
    ca_.Goto(&block10, tmp22, tmp23);
  }

    compiler::TNode<Context> tmp24;
    compiler::TNode<Oddball> tmp25;
    ca_.Bind(&block10, &tmp24, &tmp25);
  return compiler::TNode<Oddball>{tmp25};
}

compiler::TNode<Smi> TestTernaryOperator_390(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 199);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.Goto(&block5, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block3, &tmp4);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp6, tmp7);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block4, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 200);
    ca_.Branch(tmp9, &block6, &block7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp10;
    compiler::TNode<BoolT> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp12});
    ca_.Goto(&block9, tmp10, tmp11, tmp13);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp14;
    compiler::TNode<BoolT> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 100);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp14}, compiler::TNode<Smi>{tmp16});
    ca_.Goto(&block8, tmp14, tmp15, tmp17);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<BoolT> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block8, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<BoolT> tmp22;
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1, tmp21, tmp23);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block1, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 197);
    ca_.Goto(&block10, tmp24, tmp25);
  }

    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block10, &tmp26, &tmp27);
  return compiler::TNode<Smi>{tmp27};
}

void TestFunctionPointerToGeneric_391(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 205);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 207);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 206);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 209);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<Object> tmp2 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), tmp0, tmp1); 
    USE(tmp2);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_65(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest20UT5ATSmi10HeapObject)));
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    compiler::TNode<BuiltinPtr> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 0) == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 209);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<BuiltinPtr> tmp9;
    compiler::TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 210);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Object> tmp12 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), tmp9, tmp8, tmp11); 
    USE(tmp12);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_65(state_);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BuiltinPtr> tmp16;
    compiler::TNode<BuiltinPtr> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 1) == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 210);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<BuiltinPtr> tmp19;
    compiler::TNode<BuiltinPtr> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 211);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_66(state_);
    compiler::TNode<Object> tmp22 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(8)).descriptor(), tmp20, tmp18, tmp21); 
    USE(tmp22);
    compiler::TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp22}, compiler::TNode<HeapObject>{tmp23});
    ca_.Branch(tmp24, &block6, &block7, tmp18, tmp19, tmp20);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<BuiltinPtr> tmp26;
    compiler::TNode<BuiltinPtr> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 211);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<BuiltinPtr> tmp29;
    compiler::TNode<BuiltinPtr> tmp30;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 212);
    compiler::TNode<Oddball> tmp31;
    USE(tmp31);
    tmp31 = Undefined_66(state_);
    compiler::TNode<Object> tmp32 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(8)).descriptor(), tmp30, tmp28, tmp31); 
    USE(tmp32);
    compiler::TNode<Oddball> tmp33;
    USE(tmp33);
    tmp33 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp32}, compiler::TNode<HeapObject>{tmp33});
    ca_.Branch(tmp34, &block8, &block9, tmp28, tmp29, tmp30);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<BuiltinPtr> tmp36;
    compiler::TNode<BuiltinPtr> tmp37;
    ca_.Bind(&block9, &tmp35, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "../../deps/v8/test/torque/test-torque.tq", 212);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<BuiltinPtr> tmp39;
    compiler::TNode<BuiltinPtr> tmp40;
    ca_.Bind(&block8, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 204);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 203);
    ca_.Goto(&block1, tmp38);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp41;
    ca_.Bind(&block1, &tmp41);
    ca_.Goto(&block10, tmp41);
  }

    compiler::TNode<Context> tmp42;
    ca_.Bind(&block10, &tmp42);
}

compiler::TNode<BuiltinPtr> TestTypeAlias_392(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<BuiltinPtr> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 218);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<BuiltinPtr> tmp1;
    compiler::TNode<BuiltinPtr> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 216);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<BuiltinPtr> tmp3;
    compiler::TNode<BuiltinPtr> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<BuiltinPtr>{tmp4};
}

compiler::TNode<Oddball> TestUnsafeCast_393(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_n);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 223);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).TaggedIsSmi(compiler::TNode<Object>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 224);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = UnsafeCast5ATSmi_1371(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 226);
    compiler::TNode<Smi> tmp6;
    tmp6 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTestHelperPlus1, tmp3, tmp5));
    USE(tmp6);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 11);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block4, &block5, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestHelperPlus1(context, m) == 11' failed", "../../deps/v8/test/torque/test-torque.tq", 226);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 227);
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = True_67(state_);
    ca_.Goto(&block1, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 229);
    compiler::TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = False_68(state_);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Oddball> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 221);
    ca_.Goto(&block6, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Oddball> tmp24;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<Oddball>{tmp24};
}

void TestHexLiteral_394(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 234);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = Convert8ATintptr17ATconstexpr_int31_1424(state_, 0xffff);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp1});
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0x10000);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(0xffff) + 1 == 0x10000' failed", "../../deps/v8/test/torque/test-torque.tq", 234);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 235);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr17ATconstexpr_int31_1424(state_, -0xffff);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, -65535);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<IntPtrT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(-0xffff) == -65535' failed", "../../deps/v8/test/torque/test-torque.tq", 235);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 232);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestLargeIntegerLiterals_395(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 240);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int32_122(state_, 0x40000000);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 241);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int32_122(state_, 0x7fffffff);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 239);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 238);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp3);
    ca_.Goto(&block2, tmp3);
  }

    compiler::TNode<Context> tmp4;
    ca_.Bind(&block2, &tmp4);
}

void TestMultilineAssert_396(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 246);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 248);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block4, &block3, tmp0);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 249);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 248);
    ca_.Branch(tmp5, &block2, &block3, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 247);
    CodeStubAssembler(state_).FailAssert("Torque assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed", "../../deps/v8/test/torque/test-torque.tq", 247);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 245);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 244);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

void TestNewlineInString_397(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 254);
    CodeStubAssembler(state_).Print("Hello, World!\n");
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 252);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

int31_t kConstexprConst_398(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 5;
}

compiler::TNode<IntPtrT> kIntptrConst_399(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 258);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 4);
return compiler::TNode<IntPtrT>{tmp0};
}

compiler::TNode<Smi> kSmiConst_400(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 259);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
return compiler::TNode<Smi>{tmp0};
}

void TestModuleConstBindings_401(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 263);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).Int32Constant(5);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, kConstexprConst_398(state_));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp1}, compiler::TNode<Int32T>{tmp0});
    ca_.Branch(tmp2, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kConstexprConst == Int32Constant(5)' failed", "../../deps/v8/test/torque/test-torque.tq", 263);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 264);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = kIntptrConst_399(state_);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 4);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kIntptrConst == 4' failed", "../../deps/v8/test/torque/test-torque.tq", 264);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 265);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = kSmiConst_400(state_);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kSmiConst == 3' failed", "../../deps/v8/test/torque/test-torque.tq", 265);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 261);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestLocalConstBindings_402(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 271);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 273);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 274);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp4});
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi + 1' failed", "../../deps/v8/test/torque/test-torque.tq", 274);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 275);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 276);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp9, tmp10, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "../../deps/v8/test/torque/test-torque.tq", 276);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 277);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 4);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == 4' failed", "../../deps/v8/test/torque/test-torque.tq", 277);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 272);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 279);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp23}, compiler::TNode<Smi>{tmp26});
    ca_.Branch(tmp27, &block8, &block9, tmp23);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block9, &tmp28);
    CodeStubAssembler(state_).FailAssert("Torque assert 'xSmi == 3' failed", "../../deps/v8/test/torque/test-torque.tq", 279);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block8, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 280);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp29});
    ca_.Branch(tmp31, &block10, &block11, tmp29);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp32;
    ca_.Bind(&block11, &tmp32);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "../../deps/v8/test/torque/test-torque.tq", 280);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block10, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 269);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 268);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
}

compiler::TNode<Smi> TestStruct1_403(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i.indexes, p_i.i, p_i.k);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 296);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 294);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    compiler::TNode<FixedArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return compiler::TNode<Smi>{tmp10};
}

TorqueStructTestStructA TestStruct2_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 302);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_187(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 301);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 27);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 31);
    ca_.Goto(&block1, tmp0, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 299);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Number> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
  return TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp10}, compiler::TNode<Smi>{tmp11}, compiler::TNode<Number>{tmp12}};
}

TorqueStructTestStructA TestStruct3_405(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 311);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_187(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 13);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 310);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 312);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 313);
    compiler::TNode<FixedArray> tmp5;
    USE(tmp5);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    std::tie(tmp5, tmp6, tmp7) = TestStruct2_404(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 314);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = TestStruct1_403(state_, TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp5}, compiler::TNode<Smi>{tmp6}, compiler::TNode<Number>{tmp7}});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 315);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 316);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 317);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 318);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 319);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 321);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    tmp10 = kEmptyFixedArray_187(state_);
    compiler::TNode<FixedArray> tmp11;
    USE(tmp11);
    tmp11 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 320);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 27);
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 325);
    compiler::TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    std::tie(tmp14, tmp15, tmp16) = TestStruct2_404(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 326);
    ca_.Goto(&block1, tmp0, tmp2, tmp8, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 308);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Number> tmp24;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24);
  return TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp22}, compiler::TNode<Smi>{tmp23}, compiler::TNode<Number>{tmp24}};
}

TorqueStructTestStructC TestStruct4_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 336);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_404(state_, compiler::TNode<Context>{tmp0}).Flatten();
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = TestStruct2_404(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 334);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
  return TorqueStructTestStructC{TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp15}, compiler::TNode<Smi>{tmp16}, compiler::TNode<Number>{tmp17}}, TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp18}, compiler::TNode<Smi>{tmp19}, compiler::TNode<Number>{tmp20}}};
}

void CallTestStructInLabel_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 346);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 341);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_404(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<FixedArray> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Number> tmp7;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 345);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<FixedArray> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 343);
    ca_.Goto(&block1, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp12;
    ca_.Bind(&block1, &tmp12);
    ca_.Goto(&block4, tmp12);
  }

    compiler::TNode<Context> tmp13;
    ca_.Bind(&block4, &tmp13);
}

void TestForLoop_409(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 355);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 356);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Goto(&block5, tmp8, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Goto(&block4, tmp9, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block3, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 357);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp13}, compiler::TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp13);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 357);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 359);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 360);
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 361);
    ca_.Goto(&block10, tmp19, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block10, &tmp21, &tmp22);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp22}, compiler::TNode<Smi>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp21, tmp22);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    ca_.Bind(&block8, &tmp25, &tmp26);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp25}, compiler::TNode<Smi>{tmp26});
    ca_.Goto(&block11, tmp27, tmp26);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block11, &tmp28, &tmp29);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.Goto(&block10, tmp28, tmp31);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp32;
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block9, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 362);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp32}, compiler::TNode<Smi>{tmp34});
    ca_.Branch(tmp35, &block12, &block13, tmp32, tmp33);
  }

  if (block13.is_used()) {
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    ca_.Bind(&block13, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 362);
  }

  if (block12.is_used()) {
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block12, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 364);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 365);
    compiler::TNode<Smi> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 366);
    ca_.Goto(&block16, tmp40, tmp41);
  }

  if (block16.is_used()) {
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    ca_.Bind(&block16, &tmp42, &tmp43);
    compiler::TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp44});
    ca_.Branch(tmp45, &block14, &block15, tmp42, tmp43);
  }

  if (block14.is_used()) {
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block14, &tmp46, &tmp47);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp47}, compiler::TNode<Smi>{tmp48});
    compiler::TNode<Smi> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp46}, compiler::TNode<Smi>{tmp47});
    ca_.Goto(&block16, tmp50, tmp49);
  }

  if (block15.is_used()) {
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    ca_.Bind(&block15, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 367);
    compiler::TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp53});
    ca_.Branch(tmp54, &block17, &block18, tmp51, tmp52);
  }

  if (block18.is_used()) {
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block18, &tmp55, &tmp56);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 367);
  }

  if (block17.is_used()) {
    compiler::TNode<Smi> tmp57;
    compiler::TNode<Smi> tmp58;
    ca_.Bind(&block17, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 370);
    compiler::TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 371);
    compiler::TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block21, tmp59, tmp58, tmp60);
  }

  if (block21.is_used()) {
    compiler::TNode<Smi> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    ca_.Bind(&block21, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block19, tmp61, tmp62, tmp63);
  }

  if (block19.is_used()) {
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    ca_.Bind(&block19, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 372);
    compiler::TNode<Smi> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp66}, compiler::TNode<Smi>{tmp67});
    ca_.Branch(tmp68, &block23, &block24, tmp64, tmp65, tmp66);
  }

  if (block23.is_used()) {
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    ca_.Bind(&block23, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block20, tmp69, tmp70, tmp71);
  }

  if (block24.is_used()) {
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Smi> tmp74;
    ca_.Bind(&block24, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 373);
    compiler::TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp72}, compiler::TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 371);
    ca_.Goto(&block22, tmp75, tmp73, tmp74);
  }

  if (block22.is_used()) {
    compiler::TNode<Smi> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    ca_.Bind(&block22, &tmp76, &tmp77, &tmp78);
    compiler::TNode<Smi> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp78}, compiler::TNode<Smi>{tmp79});
    ca_.Goto(&block21, tmp76, tmp77, tmp80);
  }

  if (block20.is_used()) {
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    ca_.Bind(&block20, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 375);
    compiler::TNode<Smi> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp81}, compiler::TNode<Smi>{tmp84});
    ca_.Branch(tmp85, &block25, &block26, tmp81, tmp82);
  }

  if (block26.is_used()) {
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block26, &tmp86, &tmp87);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 375);
  }

  if (block25.is_used()) {
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    ca_.Bind(&block25, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 377);
    compiler::TNode<Smi> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 378);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 379);
    ca_.Goto(&block29, tmp90, tmp91);
  }

  if (block29.is_used()) {
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    ca_.Bind(&block29, &tmp92, &tmp93);
    ca_.Goto(&block27, tmp92, tmp93);
  }

  if (block27.is_used()) {
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block27, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 380);
    compiler::TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp95}, compiler::TNode<Smi>{tmp96});
    ca_.Branch(tmp97, &block30, &block31, tmp94, tmp95);
  }

  if (block30.is_used()) {
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block30, &tmp98, &tmp99);
    ca_.Goto(&block28, tmp98, tmp99);
  }

  if (block31.is_used()) {
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block31, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 381);
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 382);
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp101}, compiler::TNode<Smi>{tmp103});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 379);
    ca_.Goto(&block29, tmp102, tmp104);
  }

  if (block28.is_used()) {
    compiler::TNode<Smi> tmp105;
    compiler::TNode<Smi> tmp106;
    ca_.Bind(&block28, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 384);
    compiler::TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp105}, compiler::TNode<Smi>{tmp107});
    ca_.Branch(tmp108, &block32, &block33, tmp105, tmp106);
  }

  if (block33.is_used()) {
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    ca_.Bind(&block33, &tmp109, &tmp110);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 384);
  }

  if (block32.is_used()) {
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Smi> tmp112;
    ca_.Bind(&block32, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 388);
    compiler::TNode<Smi> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 389);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block36, tmp113, tmp112, tmp114);
  }

  if (block36.is_used()) {
    compiler::TNode<Smi> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Smi> tmp117;
    ca_.Bind(&block36, &tmp115, &tmp116, &tmp117);
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp117}, compiler::TNode<Smi>{tmp118});
    ca_.Branch(tmp119, &block34, &block35, tmp115, tmp116, tmp117);
  }

  if (block34.is_used()) {
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    ca_.Bind(&block34, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 390);
    compiler::TNode<Smi> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp122}, compiler::TNode<Smi>{tmp123});
    ca_.Branch(tmp124, &block38, &block39, tmp120, tmp121, tmp122);
  }

  if (block38.is_used()) {
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    ca_.Bind(&block38, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block37, tmp125, tmp126, tmp127);
  }

  if (block39.is_used()) {
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<Smi> tmp130;
    ca_.Bind(&block39, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 391);
    compiler::TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp128}, compiler::TNode<Smi>{tmp130});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 389);
    ca_.Goto(&block37, tmp131, tmp129, tmp130);
  }

  if (block37.is_used()) {
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block37, &tmp132, &tmp133, &tmp134);
    compiler::TNode<Smi> tmp135;
    USE(tmp135);
    tmp135 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp134}, compiler::TNode<Smi>{tmp135});
    ca_.Goto(&block36, tmp132, tmp133, tmp136);
  }

  if (block35.is_used()) {
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    ca_.Bind(&block35, &tmp137, &tmp138, &tmp139);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 393);
    compiler::TNode<Smi> tmp140;
    USE(tmp140);
    tmp140 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp137}, compiler::TNode<Smi>{tmp140});
    ca_.Branch(tmp141, &block40, &block41, tmp137, tmp138);
  }

  if (block41.is_used()) {
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    ca_.Bind(&block41, &tmp142, &tmp143);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 393);
  }

  if (block40.is_used()) {
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    ca_.Bind(&block40, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 395);
    compiler::TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 396);
    compiler::TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 397);
    ca_.Goto(&block44, tmp146, tmp147);
  }

  if (block44.is_used()) {
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    ca_.Bind(&block44, &tmp148, &tmp149);
    compiler::TNode<Smi> tmp150;
    USE(tmp150);
    tmp150 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp149}, compiler::TNode<Smi>{tmp150});
    ca_.Branch(tmp151, &block42, &block43, tmp148, tmp149);
  }

  if (block42.is_used()) {
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    ca_.Bind(&block42, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 398);
    compiler::TNode<Smi> tmp154;
    USE(tmp154);
    tmp154 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp153}, compiler::TNode<Smi>{tmp154});
    ca_.Branch(tmp155, &block46, &block47, tmp152, tmp153);
  }

  if (block46.is_used()) {
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Smi> tmp157;
    ca_.Bind(&block46, &tmp156, &tmp157);
    ca_.Goto(&block45, tmp156, tmp157);
  }

  if (block47.is_used()) {
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block47, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 399);
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp158}, compiler::TNode<Smi>{tmp159});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 397);
    ca_.Goto(&block45, tmp160, tmp159);
  }

  if (block45.is_used()) {
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    ca_.Bind(&block45, &tmp161, &tmp162);
    compiler::TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp162}, compiler::TNode<Smi>{tmp163});
    ca_.Goto(&block44, tmp161, tmp164);
  }

  if (block43.is_used()) {
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    ca_.Bind(&block43, &tmp165, &tmp166);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 401);
    compiler::TNode<Smi> tmp167;
    USE(tmp167);
    tmp167 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp165}, compiler::TNode<Smi>{tmp167});
    ca_.Branch(tmp168, &block48, &block49, tmp165, tmp166);
  }

  if (block49.is_used()) {
    compiler::TNode<Smi> tmp169;
    compiler::TNode<Smi> tmp170;
    ca_.Bind(&block49, &tmp169, &tmp170);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 401);
  }

  if (block48.is_used()) {
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    ca_.Bind(&block48, &tmp171, &tmp172);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 403);
    compiler::TNode<Smi> tmp173;
    USE(tmp173);
    tmp173 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 404);
    compiler::TNode<Smi> tmp174;
    USE(tmp174);
    tmp174 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 405);
    ca_.Goto(&block52, tmp173, tmp174);
  }

  if (block52.is_used()) {
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Smi> tmp176;
    ca_.Bind(&block52, &tmp175, &tmp176);
    compiler::TNode<Smi> tmp177;
    USE(tmp177);
    tmp177 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp176}, compiler::TNode<Smi>{tmp177});
    ca_.Branch(tmp178, &block50, &block51, tmp175, tmp176);
  }

  if (block50.is_used()) {
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    ca_.Bind(&block50, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 406);
    compiler::TNode<Smi> tmp181;
    USE(tmp181);
    tmp181 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp180}, compiler::TNode<Smi>{tmp181});
    ca_.Branch(tmp182, &block53, &block54, tmp179, tmp180);
  }

  if (block53.is_used()) {
    compiler::TNode<Smi> tmp183;
    compiler::TNode<Smi> tmp184;
    ca_.Bind(&block53, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 407);
    compiler::TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp184}, compiler::TNode<Smi>{tmp185});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 408);
    ca_.Goto(&block52, tmp183, tmp186);
  }

  if (block54.is_used()) {
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    ca_.Bind(&block54, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 410);
    compiler::TNode<Smi> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp187}, compiler::TNode<Smi>{tmp188});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 411);
    compiler::TNode<Smi> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp191;
    USE(tmp191);
    tmp191 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp188}, compiler::TNode<Smi>{tmp190});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 405);
    ca_.Goto(&block52, tmp189, tmp191);
  }

  if (block51.is_used()) {
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Smi> tmp193;
    ca_.Bind(&block51, &tmp192, &tmp193);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 413);
    compiler::TNode<Smi> tmp194;
    USE(tmp194);
    tmp194 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp192}, compiler::TNode<Smi>{tmp194});
    ca_.Branch(tmp195, &block55, &block56, tmp192, tmp193);
  }

  if (block56.is_used()) {
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block56, &tmp196, &tmp197);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 413);
  }

  if (block55.is_used()) {
    compiler::TNode<Smi> tmp198;
    compiler::TNode<Smi> tmp199;
    ca_.Bind(&block55, &tmp198, &tmp199);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 415);
    compiler::TNode<Smi> tmp200;
    USE(tmp200);
    tmp200 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 416);
    compiler::TNode<Smi> tmp201;
    USE(tmp201);
    tmp201 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block59, tmp200, tmp199, tmp201);
  }

  if (block59.is_used()) {
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    ca_.Bind(&block59, &tmp202, &tmp203, &tmp204);
    ca_.Goto(&block57, tmp202, tmp203, tmp204);
  }

  if (block57.is_used()) {
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    ca_.Bind(&block57, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 417);
    compiler::TNode<Smi> tmp208;
    USE(tmp208);
    tmp208 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp207}, compiler::TNode<Smi>{tmp208});
    ca_.Branch(tmp209, &block61, &block62, tmp205, tmp206, tmp207);
  }

  if (block61.is_used()) {
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    ca_.Bind(&block61, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block60, tmp210, tmp211, tmp212);
  }

  if (block62.is_used()) {
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Smi> tmp215;
    ca_.Bind(&block62, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 418);
    compiler::TNode<Smi> tmp216;
    USE(tmp216);
    tmp216 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp217;
    USE(tmp217);
    tmp217 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp215}, compiler::TNode<Smi>{tmp216});
    ca_.Branch(tmp217, &block63, &block64, tmp213, tmp214, tmp215);
  }

  if (block63.is_used()) {
    compiler::TNode<Smi> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<Smi> tmp220;
    ca_.Bind(&block63, &tmp218, &tmp219, &tmp220);
    ca_.Goto(&block58, tmp218, tmp219, tmp220);
  }

  if (block64.is_used()) {
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    ca_.Bind(&block64, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 419);
    compiler::TNode<Smi> tmp224;
    USE(tmp224);
    tmp224 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp221}, compiler::TNode<Smi>{tmp223});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 416);
    ca_.Goto(&block60, tmp224, tmp222, tmp223);
  }

  if (block60.is_used()) {
    compiler::TNode<Smi> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    ca_.Bind(&block60, &tmp225, &tmp226, &tmp227);
    compiler::TNode<Smi> tmp228;
    USE(tmp228);
    tmp228 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp229;
    USE(tmp229);
    tmp229 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp227}, compiler::TNode<Smi>{tmp228});
    ca_.Goto(&block59, tmp225, tmp226, tmp229);
  }

  if (block58.is_used()) {
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<Smi> tmp232;
    ca_.Bind(&block58, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 421);
    compiler::TNode<Smi> tmp233;
    USE(tmp233);
    tmp233 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp234;
    USE(tmp234);
    tmp234 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp230}, compiler::TNode<Smi>{tmp233});
    ca_.Branch(tmp234, &block65, &block66, tmp230, tmp231);
  }

  if (block66.is_used()) {
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    ca_.Bind(&block66, &tmp235, &tmp236);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 421);
  }

  if (block65.is_used()) {
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    ca_.Bind(&block65, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 423);
    compiler::TNode<Smi> tmp239;
    USE(tmp239);
    tmp239 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 424);
    compiler::TNode<Smi> tmp240;
    USE(tmp240);
    tmp240 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 425);
    ca_.Goto(&block69, tmp239, tmp240);
  }

  if (block69.is_used()) {
    compiler::TNode<Smi> tmp241;
    compiler::TNode<Smi> tmp242;
    ca_.Bind(&block69, &tmp241, &tmp242);
    ca_.Goto(&block67, tmp241, tmp242);
  }

  if (block67.is_used()) {
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Smi> tmp244;
    ca_.Bind(&block67, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 426);
    compiler::TNode<Smi> tmp245;
    USE(tmp245);
    tmp245 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<BoolT> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp244}, compiler::TNode<Smi>{tmp245});
    ca_.Branch(tmp246, &block70, &block71, tmp243, tmp244);
  }

  if (block70.is_used()) {
    compiler::TNode<Smi> tmp247;
    compiler::TNode<Smi> tmp248;
    ca_.Bind(&block70, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 427);
    compiler::TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp250;
    USE(tmp250);
    tmp250 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp248}, compiler::TNode<Smi>{tmp249});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 428);
    ca_.Goto(&block69, tmp247, tmp250);
  }

  if (block71.is_used()) {
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    ca_.Bind(&block71, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 431);
    compiler::TNode<Smi> tmp253;
    USE(tmp253);
    tmp253 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp252}, compiler::TNode<Smi>{tmp253});
    ca_.Branch(tmp254, &block72, &block73, tmp251, tmp252);
  }

  if (block72.is_used()) {
    compiler::TNode<Smi> tmp255;
    compiler::TNode<Smi> tmp256;
    ca_.Bind(&block72, &tmp255, &tmp256);
    ca_.Goto(&block68, tmp255, tmp256);
  }

  if (block73.is_used()) {
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Smi> tmp258;
    ca_.Bind(&block73, &tmp257, &tmp258);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 432);
    compiler::TNode<Smi> tmp259;
    USE(tmp259);
    tmp259 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp257}, compiler::TNode<Smi>{tmp258});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 433);
    compiler::TNode<Smi> tmp260;
    USE(tmp260);
    tmp260 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp261;
    USE(tmp261);
    tmp261 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp258}, compiler::TNode<Smi>{tmp260});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 425);
    ca_.Goto(&block69, tmp259, tmp261);
  }

  if (block68.is_used()) {
    compiler::TNode<Smi> tmp262;
    compiler::TNode<Smi> tmp263;
    ca_.Bind(&block68, &tmp262, &tmp263);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 435);
    compiler::TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    compiler::TNode<BoolT> tmp265;
    USE(tmp265);
    tmp265 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp262}, compiler::TNode<Smi>{tmp264});
    ca_.Branch(tmp265, &block74, &block75, tmp262, tmp263);
  }

  if (block75.is_used()) {
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    ca_.Bind(&block75, &tmp266, &tmp267);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 435);
  }

  if (block74.is_used()) {
    compiler::TNode<Smi> tmp268;
    compiler::TNode<Smi> tmp269;
    ca_.Bind(&block74, &tmp268, &tmp269);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 437);
    compiler::TNode<Smi> tmp270;
    USE(tmp270);
    tmp270 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 439);
    ca_.Goto(&block80, tmp268, tmp270);
  }

  if (block80.is_used()) {
    compiler::TNode<Smi> tmp271;
    compiler::TNode<Smi> tmp272;
    ca_.Bind(&block80, &tmp271, &tmp272);
    ca_.Goto(&block78, tmp271, tmp272);
  }

  if (block78.is_used()) {
    compiler::TNode<Smi> tmp273;
    compiler::TNode<Smi> tmp274;
    ca_.Bind(&block78, &tmp273, &tmp274);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 440);
    compiler::TNode<Smi> tmp275;
    USE(tmp275);
    tmp275 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp276;
    USE(tmp276);
    tmp276 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp274}, compiler::TNode<Smi>{tmp275});
    compiler::TNode<Smi> tmp277;
    USE(tmp277);
    tmp277 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp278;
    USE(tmp278);
    tmp278 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp276}, compiler::TNode<Smi>{tmp277});
    ca_.Branch(tmp278, &block81, &block82, tmp273, tmp276);
  }

  if (block81.is_used()) {
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Smi> tmp280;
    ca_.Bind(&block81, &tmp279, &tmp280);
    ca_.Goto(&block77, tmp279, tmp280);
  }

  if (block82.is_used()) {
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Smi> tmp282;
    ca_.Bind(&block82, &tmp281, &tmp282);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 439);
    ca_.Goto(&block80, tmp281, tmp282);
  }

  if (block79.is_used()) {
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    ca_.Bind(&block79, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 443);
    ca_.Goto(&block76, tmp283, tmp284);
  }

  if (block77.is_used()) {
    compiler::TNode<Smi> tmp285;
    compiler::TNode<Smi> tmp286;
    ca_.Bind(&block77, &tmp285, &tmp286);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 444);
    compiler::TNode<Smi> tmp287;
    USE(tmp287);
    tmp287 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp288;
    USE(tmp288);
    tmp288 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp286}, compiler::TNode<Smi>{tmp287});
    ca_.Branch(tmp288, &block83, &block84, tmp285, tmp286);
  }

  if (block84.is_used()) {
    compiler::TNode<Smi> tmp289;
    compiler::TNode<Smi> tmp290;
    ca_.Bind(&block84, &tmp289, &tmp290);
    CodeStubAssembler(state_).FailAssert("Torque assert 'j == 10' failed", "../../deps/v8/test/torque/test-torque.tq", 444);
  }

  if (block83.is_used()) {
    compiler::TNode<Smi> tmp291;
    compiler::TNode<Smi> tmp292;
    ca_.Bind(&block83, &tmp291, &tmp292);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 438);
    ca_.Goto(&block76, tmp291, tmp292);
  }

  if (block76.is_used()) {
    compiler::TNode<Smi> tmp293;
    compiler::TNode<Smi> tmp294;
    ca_.Bind(&block76, &tmp293, &tmp294);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 448);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 449);
    compiler::TNode<Smi> tmp295;
    USE(tmp295);
    tmp295 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block87, tmp293, tmp294, ca_.Uninitialized<Smi>(), tmp295);
  }

  if (block87.is_used()) {
    compiler::TNode<Smi> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Smi> tmp298;
    compiler::TNode<Smi> tmp299;
    ca_.Bind(&block87, &tmp296, &tmp297, &tmp298, &tmp299);
    compiler::TNode<Smi> tmp300;
    USE(tmp300);
    tmp300 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp301;
    USE(tmp301);
    tmp301 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp299}, compiler::TNode<Smi>{tmp300});
    ca_.Branch(tmp301, &block85, &block86, tmp296, tmp297, tmp298, tmp299);
  }

  if (block85.is_used()) {
    compiler::TNode<Smi> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    ca_.Bind(&block85, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.Goto(&block88, tmp302, tmp303, tmp304, tmp305);
  }

  if (block88.is_used()) {
    compiler::TNode<Smi> tmp306;
    compiler::TNode<Smi> tmp307;
    compiler::TNode<Smi> tmp308;
    compiler::TNode<Smi> tmp309;
    ca_.Bind(&block88, &tmp306, &tmp307, &tmp308, &tmp309);
    compiler::TNode<Smi> tmp310;
    USE(tmp310);
    tmp310 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp311;
    USE(tmp311);
    tmp311 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp309}, compiler::TNode<Smi>{tmp310});
    ca_.Goto(&block87, tmp306, tmp307, tmp308, tmp311);
  }

  if (block86.is_used()) {
    compiler::TNode<Smi> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Smi> tmp315;
    ca_.Bind(&block86, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 354);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 353);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block89);
  }

    ca_.Bind(&block89);
}

void TestSubtyping_410(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 455);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 454);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 453);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
}

compiler::TNode<Int32T> TypeswitchExample_411(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_x);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 472);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 473);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1430(state_, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 474);
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10FixedArray_1389(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp3);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Int32T> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block3, tmp5, tmp6, tmp7, tmp8);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Int32T> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 475);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp12}, compiler::TNode<Int32T>{tmp16});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 474);
    ca_.Goto(&block2, tmp10, tmp11, tmp17, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 477);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 478);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 2);
    compiler::TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp20}, compiler::TNode<Int32T>{tmp22});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 474);
    ca_.Goto(&block2, tmp18, tmp19, tmp23, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 473);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 482);
    compiler::TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 10);
    compiler::TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).Int32Mul(compiler::TNode<Int32T>{tmp26}, compiler::TNode<Int32T>{tmp28});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 484);
    compiler::TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1430(state_, compiler::TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 485);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block8, tmp24, tmp25, tmp29, tmp30, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp24, tmp25, tmp29, tmp30, tmp30);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Int32T> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    ca_.Bind(&block9, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 486);
    compiler::TNode<Int32T> tmp43;
    USE(tmp43);
    tmp43 = Convert7ATint325ATSmi_166(state_, compiler::TNode<Smi>{tmp42});
    compiler::TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp39}, compiler::TNode<Int32T>{tmp43});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 485);
    ca_.Goto(&block6, tmp37, tmp38, tmp44, tmp40);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<Object> tmp48;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 488);
    compiler::TNode<FixedArray> tmp49;
    USE(tmp49);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp49 = Cast10FixedArray_84(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp48)}, &label0);
    ca_.Goto(&block12, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48), tmp49);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Int32T> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<HeapObject> tmp54;
    ca_.Bind(&block13, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block11, tmp50, tmp51, tmp52, tmp53);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<HeapObject> tmp59;
    compiler::TNode<FixedArray> tmp60;
    ca_.Bind(&block12, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 489);
    compiler::TNode<IntPtrT> tmp61 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp61);
    compiler::TNode<Smi>tmp62 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp60, tmp61});
    compiler::TNode<Int32T> tmp63;
    USE(tmp63);
    tmp63 = Convert7ATint325ATSmi_166(state_, compiler::TNode<Smi>{tmp62});
    compiler::TNode<Int32T> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp57}, compiler::TNode<Int32T>{tmp63});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 488);
    ca_.Goto(&block10, tmp55, tmp56, tmp64, tmp58);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<Object> tmp68;
    ca_.Bind(&block11, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 491);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 492);
    compiler::TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 7);
    compiler::TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp67}, compiler::TNode<Int32T>{tmp69});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 488);
    ca_.Goto(&block10, tmp65, tmp66, tmp70, tmp68);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Int32T> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block10, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 485);
    ca_.Goto(&block6, tmp71, tmp72, tmp73, tmp74);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<Object> tmp78;
    ca_.Bind(&block6, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 484);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 496);
    ca_.Goto(&block1, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Int32T> tmp81;
    ca_.Bind(&block1, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 470);
    ca_.Goto(&block14, tmp79, tmp80, tmp81);
  }

    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Int32T> tmp84;
    ca_.Bind(&block14, &tmp82, &tmp83, &tmp84);
  return compiler::TNode<Int32T>{tmp84};
}

void TestTypeswitch_412(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 501);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = TypeswitchExample_411(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 26);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp2}, compiler::TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Smi>(5)) == 26' failed", "../../deps/v8/test/torque/test-torque.tq", 501);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 502);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 3);
    compiler::TNode<FixedArray> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 503);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = TypeswitchExample_411(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<Object>{tmp8});
    compiler::TNode<Int32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 13);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp9}, compiler::TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp6, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(a) == 13' failed", "../../deps/v8/test/torque/test-torque.tq", 503);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 504);
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_132(state_, 0.5);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = TypeswitchExample_411(state_, compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp16});
    compiler::TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 27);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp17}, compiler::TNode<Int32T>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp14, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<FixedArray> tmp21;
    ca_.Bind(&block7, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27' failed", "../../deps/v8/test/torque/test-torque.tq", 504);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<FixedArray> tmp23;
    ca_.Bind(&block6, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 500);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 499);
    ca_.Goto(&block1, tmp22);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp24;
    ca_.Bind(&block1, &tmp24);
    ca_.Goto(&block8, tmp24);
  }

    compiler::TNode<Context> tmp25;
    ca_.Bind(&block8, &tmp25);
}

void TestTypeswitchAsanLsanFailure_413(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_obj);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 509);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 510);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 512);
    compiler::TNode<JSTypedArray> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast12JSTypedArray_90(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp14)}, &label0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14));
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<HeapObject> tmp19;
    ca_.Bind(&block9, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<HeapObject> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    ca_.Bind(&block8, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 514);
    compiler::TNode<JSReceiver> tmp28;
    USE(tmp28);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp28 = Cast10JSReceiver_116(state_, compiler::TNode<Context>{tmp25}, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp27)}, &label0);
    ca_.Goto(&block12, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27), tmp28);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<HeapObject> tmp32;
    ca_.Bind(&block13, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block11, tmp29, tmp30, tmp31);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    ca_.Bind(&block12, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block10, tmp33, tmp34, tmp35);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block11, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 516);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 514);
    ca_.Goto(&block10, tmp38, tmp39, tmp40);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 512);
    ca_.Goto(&block6, tmp41, tmp42, tmp43);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 510);
    ca_.Goto(&block2, tmp44, tmp45, tmp46);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 509);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 507);
    ca_.Goto(&block1, tmp47, tmp48);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block1, &tmp50, &tmp51);
    ca_.Goto(&block14, tmp50, tmp51);
  }

    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block14, &tmp52, &tmp53);
}

void TestGenericOverload_414(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 530);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 531);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 532);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ExampleGenericOverload5ATSmi_1431(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 6);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ExampleGenericOverload<Smi>(xSmi) == 6' failed", "../../deps/v8/test/torque/test-torque.tq", 532);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 533);
    compiler::TNode<Object> tmp11;
    USE(tmp11);
    tmp11 = ExampleGenericOverload20UT5ATSmi10HeapObject_1432(state_, compiler::TNode<Object>{tmp10});
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UnsafeCast5ATSmi_1371(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp11});
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5' failed", "../../deps/v8/test/torque/test-torque.tq", 533);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 529);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 528);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp21;
    ca_.Bind(&block1, &tmp21);
    ca_.Goto(&block6, tmp21);
  }

    compiler::TNode<Context> tmp22;
    ca_.Bind(&block6, &tmp22);
}

void TestEquality_415(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 539);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr9ATfloat6419ATconstexpr_float64_139(state_, 0.5);
    compiler::TNode<HeapNumber> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp1});
    compiler::TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr9ATfloat6419ATconstexpr_float64_139(state_, 0.5);
    compiler::TNode<HeapNumber> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp3});
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsNumberNotEqual_75(state_, compiler::TNode<Number>{tmp2}, compiler::TNode<Number>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 538);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 540);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert '!notEqual' failed", "../../deps/v8/test/torque/test-torque.tq", 540);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 542);
    compiler::TNode<Float64T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr9ATfloat6419ATconstexpr_float64_139(state_, 0.5);
    compiler::TNode<HeapNumber> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp11});
    compiler::TNode<Float64T> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr9ATfloat6419ATconstexpr_float64_139(state_, 0.5);
    compiler::TNode<HeapNumber> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp13});
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = IsNumberEqual_74(state_, compiler::TNode<Number>{tmp12}, compiler::TNode<Number>{tmp14});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 541);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 543);
    ca_.Branch(tmp15, &block4, &block5, tmp9, tmp10, tmp15);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'equal' failed", "../../deps/v8/test/torque/test-torque.tq", 543);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 537);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 536);
    ca_.Goto(&block1, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    ca_.Bind(&block1, &tmp22);
    ca_.Goto(&block6, tmp22);
  }

    compiler::TNode<Context> tmp23;
    ca_.Bind(&block6, &tmp23);
}

void BoolToBranch_416(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 548);
    ca_.Branch(tmp0, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 549);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block4, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 551);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 546);
    ca_.Goto(label_Taken);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_NotTaken);
  }
}

compiler::TNode<BoolT> TestOrAnd1_417(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 557);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp0);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block8, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block6, tmp7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Branch(tmp12, &block9, &block3, tmp11, tmp12, tmp13);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block9, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 555);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

compiler::TNode<BoolT> TestOrAnd2_418(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 562);
    ca_.Branch(tmp0, &block2, &block6, tmp0, tmp1, tmp2);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp3, tmp4, tmp5, tmp4);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block7, tmp6, tmp7, tmp8);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    ca_.Bind(&block9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block3, tmp10, tmp11, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block7, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 560);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

compiler::TNode<BoolT> TestOrAnd3_419(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 567);
    ca_.Branch(tmp0, &block2, &block6, tmp0, tmp1, tmp2);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5);
    ca_.Branch(tmp4, &block7, &block3, tmp3, tmp4, tmp5);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block7, &tmp6, &tmp7, &tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp8}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp6, tmp7, tmp8, tmp8);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp6, tmp7, tmp8, tmp8);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    ca_.Bind(&block8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp9, tmp10, tmp11);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block9, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block3, tmp13, tmp14, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 565);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

compiler::TNode<BoolT> TestAndOr1_420(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 572);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp0, tmp1, tmp2, tmp0);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block8, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block7, tmp3, tmp4, tmp5);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block9, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block6, tmp7, tmp8, tmp9);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    ca_.Bind(&block7, &tmp11, &tmp12, &tmp13);
    ca_.Branch(tmp12, &block2, &block6, tmp11, tmp12, tmp13);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 570);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

compiler::TNode<BoolT> TestAndOr2_421(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 577);
    ca_.Branch(tmp0, &block7, &block6, tmp0, tmp1, tmp2);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp3, tmp4, tmp5, tmp4);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    ca_.Bind(&block9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block6, tmp10, tmp11, tmp12);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 575);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

compiler::TNode<BoolT> TestAndOr3_422(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 582);
    ca_.Branch(tmp0, &block7, &block6, tmp0, tmp1, tmp2);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Branch(tmp4, &block2, &block6, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BoolToBranch_416(state_, compiler::TNode<BoolT>{tmp8}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp6, tmp7, tmp8, tmp8);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp6, tmp7, tmp8, tmp8);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    ca_.Bind(&block8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp9, tmp10, tmp11);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block9, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block3, tmp13, tmp14, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.Goto(&block4, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 580);
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35);
  }

    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<BoolT>{tmp39};
}

void TestLogicalOperators_423(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block59(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block63(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block65(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block67(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block69(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block71(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block73(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block77(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block79(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block81(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block83(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block85(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block89(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block91(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block93(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block95(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block97(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 587);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp0}, compiler::TNode<BoolT>{tmp1}, compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr1(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 587);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 588);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp4}, compiler::TNode<BoolT>{tmp5}, compiler::TNode<BoolT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr2(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 588);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 589);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp8}, compiler::TNode<BoolT>{tmp9}, compiler::TNode<BoolT>{tmp10});
    ca_.Branch(tmp11, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr3(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 589);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 590);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp12}, compiler::TNode<BoolT>{tmp13}, compiler::TNode<BoolT>{tmp14});
    ca_.Branch(tmp15, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr1(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 590);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 591);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp16}, compiler::TNode<BoolT>{tmp17}, compiler::TNode<BoolT>{tmp18});
    ca_.Branch(tmp19, &block10, &block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr2(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 591);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 592);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp20}, compiler::TNode<BoolT>{tmp21}, compiler::TNode<BoolT>{tmp22});
    ca_.Branch(tmp23, &block12, &block13);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr3(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 592);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 593);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp24}, compiler::TNode<BoolT>{tmp25}, compiler::TNode<BoolT>{tmp26});
    ca_.Branch(tmp27, &block14, &block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr1(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 593);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 594);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp28}, compiler::TNode<BoolT>{tmp29}, compiler::TNode<BoolT>{tmp30});
    ca_.Branch(tmp31, &block16, &block17);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr2(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 594);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 595);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp32}, compiler::TNode<BoolT>{tmp33}, compiler::TNode<BoolT>{tmp34});
    ca_.Branch(tmp35, &block18, &block19);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr3(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 595);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 596);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp36}, compiler::TNode<BoolT>{tmp37}, compiler::TNode<BoolT>{tmp38});
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp39});
    ca_.Branch(tmp40, &block20, &block21);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr1(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 596);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 597);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp41}, compiler::TNode<BoolT>{tmp42}, compiler::TNode<BoolT>{tmp43});
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp44});
    ca_.Branch(tmp45, &block22, &block23);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr2(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 597);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 598);
    compiler::TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp46}, compiler::TNode<BoolT>{tmp47}, compiler::TNode<BoolT>{tmp48});
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp49});
    ca_.Branch(tmp50, &block24, &block25);
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr3(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 598);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 599);
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp51}, compiler::TNode<BoolT>{tmp52}, compiler::TNode<BoolT>{tmp53});
    ca_.Branch(tmp54, &block26, &block27);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr1(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 599);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 600);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp55}, compiler::TNode<BoolT>{tmp56}, compiler::TNode<BoolT>{tmp57});
    ca_.Branch(tmp58, &block28, &block29);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr2(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 600);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 601);
    compiler::TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp59}, compiler::TNode<BoolT>{tmp60}, compiler::TNode<BoolT>{tmp61});
    ca_.Branch(tmp62, &block30, &block31);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr3(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 601);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 602);
    compiler::TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp63}, compiler::TNode<BoolT>{tmp64}, compiler::TNode<BoolT>{tmp65});
    compiler::TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp66});
    ca_.Branch(tmp67, &block32, &block33);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr1(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 602);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 603);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp70;
    USE(tmp70);
    tmp70 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp68}, compiler::TNode<BoolT>{tmp69}, compiler::TNode<BoolT>{tmp70});
    compiler::TNode<BoolT> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp71});
    ca_.Branch(tmp72, &block34, &block35);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr2(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 603);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 604);
    compiler::TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp76;
    USE(tmp76);
    tmp76 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp73}, compiler::TNode<BoolT>{tmp74}, compiler::TNode<BoolT>{tmp75});
    compiler::TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp76});
    ca_.Branch(tmp77, &block36, &block37);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr3(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 604);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 605);
    compiler::TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp78}, compiler::TNode<BoolT>{tmp79}, compiler::TNode<BoolT>{tmp80});
    ca_.Branch(tmp81, &block38, &block39);
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr1(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 605);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 606);
    compiler::TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp82}, compiler::TNode<BoolT>{tmp83}, compiler::TNode<BoolT>{tmp84});
    ca_.Branch(tmp85, &block40, &block41);
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr2(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 606);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 607);
    compiler::TNode<BoolT> tmp86;
    USE(tmp86);
    tmp86 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp89;
    USE(tmp89);
    tmp89 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp86}, compiler::TNode<BoolT>{tmp87}, compiler::TNode<BoolT>{tmp88});
    ca_.Branch(tmp89, &block42, &block43);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr3(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 607);
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 608);
    compiler::TNode<BoolT> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp93;
    USE(tmp93);
    tmp93 = TestAndOr1_420(state_, compiler::TNode<BoolT>{tmp90}, compiler::TNode<BoolT>{tmp91}, compiler::TNode<BoolT>{tmp92});
    compiler::TNode<BoolT> tmp94;
    USE(tmp94);
    tmp94 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp93});
    ca_.Branch(tmp94, &block44, &block45);
  }

  if (block45.is_used()) {
    ca_.Bind(&block45);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr1(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 608);
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 609);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp98;
    USE(tmp98);
    tmp98 = TestAndOr2_421(state_, compiler::TNode<BoolT>{tmp95}, compiler::TNode<BoolT>{tmp96}, compiler::TNode<BoolT>{tmp97});
    compiler::TNode<BoolT> tmp99;
    USE(tmp99);
    tmp99 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp98});
    ca_.Branch(tmp99, &block46, &block47);
  }

  if (block47.is_used()) {
    ca_.Bind(&block47);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr2(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 609);
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 610);
    compiler::TNode<BoolT> tmp100;
    USE(tmp100);
    tmp100 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp102;
    USE(tmp102);
    tmp102 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = TestAndOr3_422(state_, compiler::TNode<BoolT>{tmp100}, compiler::TNode<BoolT>{tmp101}, compiler::TNode<BoolT>{tmp102});
    compiler::TNode<BoolT> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp103});
    ca_.Branch(tmp104, &block48, &block49);
  }

  if (block49.is_used()) {
    ca_.Bind(&block49);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr3(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 610);
  }

  if (block48.is_used()) {
    ca_.Bind(&block48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 611);
    compiler::TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp107;
    USE(tmp107);
    tmp107 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp105}, compiler::TNode<BoolT>{tmp106}, compiler::TNode<BoolT>{tmp107});
    ca_.Branch(tmp108, &block50, &block51);
  }

  if (block51.is_used()) {
    ca_.Bind(&block51);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd1(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 611);
  }

  if (block50.is_used()) {
    ca_.Bind(&block50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 612);
    compiler::TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp110;
    USE(tmp110);
    tmp110 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp109}, compiler::TNode<BoolT>{tmp110}, compiler::TNode<BoolT>{tmp111});
    ca_.Branch(tmp112, &block52, &block53);
  }

  if (block53.is_used()) {
    ca_.Bind(&block53);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd2(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 612);
  }

  if (block52.is_used()) {
    ca_.Bind(&block52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 613);
    compiler::TNode<BoolT> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp115;
    USE(tmp115);
    tmp115 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp116;
    USE(tmp116);
    tmp116 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp113}, compiler::TNode<BoolT>{tmp114}, compiler::TNode<BoolT>{tmp115});
    ca_.Branch(tmp116, &block54, &block55);
  }

  if (block55.is_used()) {
    ca_.Bind(&block55);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd3(true, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 613);
  }

  if (block54.is_used()) {
    ca_.Bind(&block54);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 614);
    compiler::TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp120;
    USE(tmp120);
    tmp120 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp117}, compiler::TNode<BoolT>{tmp118}, compiler::TNode<BoolT>{tmp119});
    ca_.Branch(tmp120, &block56, &block57);
  }

  if (block57.is_used()) {
    ca_.Bind(&block57);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd1(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 614);
  }

  if (block56.is_used()) {
    ca_.Bind(&block56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 615);
    compiler::TNode<BoolT> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp121}, compiler::TNode<BoolT>{tmp122}, compiler::TNode<BoolT>{tmp123});
    ca_.Branch(tmp124, &block58, &block59);
  }

  if (block59.is_used()) {
    ca_.Bind(&block59);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd2(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 615);
  }

  if (block58.is_used()) {
    ca_.Bind(&block58);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 616);
    compiler::TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp126;
    USE(tmp126);
    tmp126 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp128;
    USE(tmp128);
    tmp128 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp125}, compiler::TNode<BoolT>{tmp126}, compiler::TNode<BoolT>{tmp127});
    ca_.Branch(tmp128, &block60, &block61);
  }

  if (block61.is_used()) {
    ca_.Bind(&block61);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd3(true, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 616);
  }

  if (block60.is_used()) {
    ca_.Bind(&block60);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 617);
    compiler::TNode<BoolT> tmp129;
    USE(tmp129);
    tmp129 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp131;
    USE(tmp131);
    tmp131 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp132;
    USE(tmp132);
    tmp132 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp129}, compiler::TNode<BoolT>{tmp130}, compiler::TNode<BoolT>{tmp131});
    ca_.Branch(tmp132, &block62, &block63);
  }

  if (block63.is_used()) {
    ca_.Bind(&block63);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd1(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 617);
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 618);
    compiler::TNode<BoolT> tmp133;
    USE(tmp133);
    tmp133 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp134;
    USE(tmp134);
    tmp134 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp135;
    USE(tmp135);
    tmp135 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp136;
    USE(tmp136);
    tmp136 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp133}, compiler::TNode<BoolT>{tmp134}, compiler::TNode<BoolT>{tmp135});
    ca_.Branch(tmp136, &block64, &block65);
  }

  if (block65.is_used()) {
    ca_.Bind(&block65);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd2(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 618);
  }

  if (block64.is_used()) {
    ca_.Bind(&block64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 619);
    compiler::TNode<BoolT> tmp137;
    USE(tmp137);
    tmp137 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp138;
    USE(tmp138);
    tmp138 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp139;
    USE(tmp139);
    tmp139 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp140;
    USE(tmp140);
    tmp140 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp137}, compiler::TNode<BoolT>{tmp138}, compiler::TNode<BoolT>{tmp139});
    ca_.Branch(tmp140, &block66, &block67);
  }

  if (block67.is_used()) {
    ca_.Bind(&block67);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd3(true, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 619);
  }

  if (block66.is_used()) {
    ca_.Bind(&block66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 620);
    compiler::TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp143;
    USE(tmp143);
    tmp143 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp144;
    USE(tmp144);
    tmp144 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp141}, compiler::TNode<BoolT>{tmp142}, compiler::TNode<BoolT>{tmp143});
    ca_.Branch(tmp144, &block68, &block69);
  }

  if (block69.is_used()) {
    ca_.Bind(&block69);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd1(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 620);
  }

  if (block68.is_used()) {
    ca_.Bind(&block68);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 621);
    compiler::TNode<BoolT> tmp145;
    USE(tmp145);
    tmp145 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp148;
    USE(tmp148);
    tmp148 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp145}, compiler::TNode<BoolT>{tmp146}, compiler::TNode<BoolT>{tmp147});
    ca_.Branch(tmp148, &block70, &block71);
  }

  if (block71.is_used()) {
    ca_.Bind(&block71);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd2(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 621);
  }

  if (block70.is_used()) {
    ca_.Bind(&block70);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 622);
    compiler::TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp150;
    USE(tmp150);
    tmp150 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp152;
    USE(tmp152);
    tmp152 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp149}, compiler::TNode<BoolT>{tmp150}, compiler::TNode<BoolT>{tmp151});
    ca_.Branch(tmp152, &block72, &block73);
  }

  if (block73.is_used()) {
    ca_.Bind(&block73);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd3(true, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 622);
  }

  if (block72.is_used()) {
    ca_.Bind(&block72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 623);
    compiler::TNode<BoolT> tmp153;
    USE(tmp153);
    tmp153 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp154;
    USE(tmp154);
    tmp154 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp156;
    USE(tmp156);
    tmp156 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp153}, compiler::TNode<BoolT>{tmp154}, compiler::TNode<BoolT>{tmp155});
    ca_.Branch(tmp156, &block74, &block75);
  }

  if (block75.is_used()) {
    ca_.Bind(&block75);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd1(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 623);
  }

  if (block74.is_used()) {
    ca_.Bind(&block74);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 624);
    compiler::TNode<BoolT> tmp157;
    USE(tmp157);
    tmp157 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp158;
    USE(tmp158);
    tmp158 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp159;
    USE(tmp159);
    tmp159 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp160;
    USE(tmp160);
    tmp160 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp157}, compiler::TNode<BoolT>{tmp158}, compiler::TNode<BoolT>{tmp159});
    ca_.Branch(tmp160, &block76, &block77);
  }

  if (block77.is_used()) {
    ca_.Bind(&block77);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd2(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 624);
  }

  if (block76.is_used()) {
    ca_.Bind(&block76);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 625);
    compiler::TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp162;
    USE(tmp162);
    tmp162 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp161}, compiler::TNode<BoolT>{tmp162}, compiler::TNode<BoolT>{tmp163});
    ca_.Branch(tmp164, &block78, &block79);
  }

  if (block79.is_used()) {
    ca_.Bind(&block79);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd3(false, true, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 625);
  }

  if (block78.is_used()) {
    ca_.Bind(&block78);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 626);
    compiler::TNode<BoolT> tmp165;
    USE(tmp165);
    tmp165 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp166;
    USE(tmp166);
    tmp166 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp167;
    USE(tmp167);
    tmp167 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp165}, compiler::TNode<BoolT>{tmp166}, compiler::TNode<BoolT>{tmp167});
    compiler::TNode<BoolT> tmp169;
    USE(tmp169);
    tmp169 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp168});
    ca_.Branch(tmp169, &block80, &block81);
  }

  if (block81.is_used()) {
    ca_.Bind(&block81);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd1(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 626);
  }

  if (block80.is_used()) {
    ca_.Bind(&block80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 627);
    compiler::TNode<BoolT> tmp170;
    USE(tmp170);
    tmp170 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp171;
    USE(tmp171);
    tmp171 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp173;
    USE(tmp173);
    tmp173 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp170}, compiler::TNode<BoolT>{tmp171}, compiler::TNode<BoolT>{tmp172});
    compiler::TNode<BoolT> tmp174;
    USE(tmp174);
    tmp174 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp173});
    ca_.Branch(tmp174, &block82, &block83);
  }

  if (block83.is_used()) {
    ca_.Bind(&block83);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd2(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 627);
  }

  if (block82.is_used()) {
    ca_.Bind(&block82);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 628);
    compiler::TNode<BoolT> tmp175;
    USE(tmp175);
    tmp175 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp176;
    USE(tmp176);
    tmp176 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp177;
    USE(tmp177);
    tmp177 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp175}, compiler::TNode<BoolT>{tmp176}, compiler::TNode<BoolT>{tmp177});
    compiler::TNode<BoolT> tmp179;
    USE(tmp179);
    tmp179 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp178});
    ca_.Branch(tmp179, &block84, &block85);
  }

  if (block85.is_used()) {
    ca_.Bind(&block85);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd3(false, true, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 628);
  }

  if (block84.is_used()) {
    ca_.Bind(&block84);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 629);
    compiler::TNode<BoolT> tmp180;
    USE(tmp180);
    tmp180 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp181;
    USE(tmp181);
    tmp181 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp183;
    USE(tmp183);
    tmp183 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp180}, compiler::TNode<BoolT>{tmp181}, compiler::TNode<BoolT>{tmp182});
    compiler::TNode<BoolT> tmp184;
    USE(tmp184);
    tmp184 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp183});
    ca_.Branch(tmp184, &block86, &block87);
  }

  if (block87.is_used()) {
    ca_.Bind(&block87);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd1(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 629);
  }

  if (block86.is_used()) {
    ca_.Bind(&block86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 630);
    compiler::TNode<BoolT> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp186;
    USE(tmp186);
    tmp186 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp187;
    USE(tmp187);
    tmp187 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp188;
    USE(tmp188);
    tmp188 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp185}, compiler::TNode<BoolT>{tmp186}, compiler::TNode<BoolT>{tmp187});
    compiler::TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp188});
    ca_.Branch(tmp189, &block88, &block89);
  }

  if (block89.is_used()) {
    ca_.Bind(&block89);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd2(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 630);
  }

  if (block88.is_used()) {
    ca_.Bind(&block88);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 631);
    compiler::TNode<BoolT> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp191;
    USE(tmp191);
    tmp191 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp192;
    USE(tmp192);
    tmp192 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    compiler::TNode<BoolT> tmp193;
    USE(tmp193);
    tmp193 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp190}, compiler::TNode<BoolT>{tmp191}, compiler::TNode<BoolT>{tmp192});
    compiler::TNode<BoolT> tmp194;
    USE(tmp194);
    tmp194 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp193});
    ca_.Branch(tmp194, &block90, &block91);
  }

  if (block91.is_used()) {
    ca_.Bind(&block91);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd3(false, false, true)' failed", "../../deps/v8/test/torque/test-torque.tq", 631);
  }

  if (block90.is_used()) {
    ca_.Bind(&block90);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 632);
    compiler::TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp196;
    USE(tmp196);
    tmp196 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp197;
    USE(tmp197);
    tmp197 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp198;
    USE(tmp198);
    tmp198 = TestOrAnd1_417(state_, compiler::TNode<BoolT>{tmp195}, compiler::TNode<BoolT>{tmp196}, compiler::TNode<BoolT>{tmp197});
    compiler::TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp198});
    ca_.Branch(tmp199, &block92, &block93);
  }

  if (block93.is_used()) {
    ca_.Bind(&block93);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd1(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 632);
  }

  if (block92.is_used()) {
    ca_.Bind(&block92);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 633);
    compiler::TNode<BoolT> tmp200;
    USE(tmp200);
    tmp200 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp201;
    USE(tmp201);
    tmp201 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp203;
    USE(tmp203);
    tmp203 = TestOrAnd2_418(state_, compiler::TNode<BoolT>{tmp200}, compiler::TNode<BoolT>{tmp201}, compiler::TNode<BoolT>{tmp202});
    compiler::TNode<BoolT> tmp204;
    USE(tmp204);
    tmp204 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp203});
    ca_.Branch(tmp204, &block94, &block95);
  }

  if (block95.is_used()) {
    ca_.Bind(&block95);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd2(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 633);
  }

  if (block94.is_used()) {
    ca_.Bind(&block94);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 634);
    compiler::TNode<BoolT> tmp205;
    USE(tmp205);
    tmp205 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp206;
    USE(tmp206);
    tmp206 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp207;
    USE(tmp207);
    tmp207 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    compiler::TNode<BoolT> tmp208;
    USE(tmp208);
    tmp208 = TestOrAnd3_419(state_, compiler::TNode<BoolT>{tmp205}, compiler::TNode<BoolT>{tmp206}, compiler::TNode<BoolT>{tmp207});
    compiler::TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp208});
    ca_.Branch(tmp209, &block96, &block97);
  }

  if (block97.is_used()) {
    ca_.Bind(&block97);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd3(false, false, false)' failed", "../../deps/v8/test/torque/test-torque.tq", 634);
  }

  if (block96.is_used()) {
    ca_.Bind(&block96);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 585);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block98);
  }

    ca_.Bind(&block98);
}

compiler::TNode<Smi> TestCall_424(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 639);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp3);
    ca_.Goto(&block2, tmp3, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 640);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 637);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_A);
  }

    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

void TestOtherwiseWithCode1_425(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 645);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 646);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 648);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = TestCall_424(state_, compiler::TNode<Smi>{tmp2}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block7, &tmp4, &tmp5);
    ca_.Goto(&block5, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Goto(&block3, tmp9, tmp12, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block4, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 650);
    ca_.Goto(&block2, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 651);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 647);
    ca_.Goto(&block2, tmp18, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 644);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 643);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestOtherwiseWithCode2_426(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 658);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 659);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 660);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_424(state_, compiler::TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp7);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block7, tmp9, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block6, tmp12, tmp13, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp16, &tmp17);
    ca_.Goto(&block3, tmp16, tmp17);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 661);
    compiler::TNode<Smi> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 659);
    ca_.Goto(&block5, tmp22, tmp19);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25});
    ca_.Goto(&block4, tmp23, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block3, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 657);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 656);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestOtherwiseWithCode3_427(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 668);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 669);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 10);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 670);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_424(state_, compiler::TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp6, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp6, tmp7);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block7, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block8, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block6, tmp13, tmp14, tmp15, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block7, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp18, tmp19);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp23}, compiler::TNode<Smi>{tmp24});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 669);
    ca_.Goto(&block5, tmp25, tmp22);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block5, &tmp26, &tmp27);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp28});
    ca_.Goto(&block4, tmp26, tmp29);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block3, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 667);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 666);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestForwardLabel_428(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 678);
    ca_.Goto(&block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 681);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 677);
    ca_.Goto(&block2, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 675);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestQualifiedAccess_429(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 690);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 691);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = IsJSArray_52(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert '!array::IsJSArray(s)' failed", "../../deps/v8/test/torque/test-torque.tq", 691);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 689);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 688);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block1, &tmp8);
    ca_.Goto(&block4, tmp8);
  }

    compiler::TNode<Context> tmp9;
    ca_.Bind(&block4, &tmp9);
}

compiler::TNode<Smi> TestCatch1_430(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 696);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 698);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 700);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 701);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 694);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return compiler::TNode<Smi>{tmp13};
}

void TestCatch2Wrapper_431(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 707);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }
}

compiler::TNode<Smi> TestCatch2_432(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 712);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 714);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch2Wrapper_431(state_, compiler::TNode<Context>{tmp0});
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 716);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 717);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 710);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return compiler::TNode<Smi>{tmp13};
}

void TestCatch3WrapperWithLabel_433(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 724);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 721);
    ca_.Goto(label__Abort);
  }
}

compiler::TNode<Smi> TestCatch3_434(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 729);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 731);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch3WrapperWithLabel_433(state_, compiler::TNode<Context>{tmp0}, &label0);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block7, tmp0, tmp1, catch2_exception_object);
    }
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    ca_.Goto(&block5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 734);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, -1);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      compiler::TNode<Object> catch11_exception_object;
      ca_.Bind(&catch11__label, &catch11_exception_object);
      ca_.Goto(&block8, tmp8, tmp9, catch11_exception_object);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block1, tmp8, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 737);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 738);
    ca_.Goto(&block1, tmp15, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block1, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 727);
    ca_.Goto(&block9, tmp19, tmp20);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block9, &tmp21, &tmp22);
  return compiler::TNode<Smi>{tmp22};
}

void TestIterator_435(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_map);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Map> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 749);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IteratorBuiltinsAssembler(state_).GetIteratorMethod(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 750);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    std::tie(tmp4, tmp5) = IteratorBuiltinsAssembler(state_).GetIterator(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 752);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp0}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp4}, compiler::TNode<Object>{tmp5}}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Map> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Map> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 753);
    compiler::TNode<JSReceiver> tmp24;
    USE(tmp24);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp24 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp15}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp19}, compiler::TNode<Object>{tmp20}}, compiler::TNode<Map>{tmp17}, &label0);
    ca_.Goto(&block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17, tmp24);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<Map> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Map> tmp34;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block3, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Map> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Map> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    ca_.Bind(&block6, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 755);
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp35}, compiler::TNode<JSReceiver>{tmp36});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 756);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    tmp47 = IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp35}, compiler::TNode<JSReceiver>{tmp36}, compiler::TNode<Map>{tmp37});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 758);
    compiler::TNode<JSArray> tmp48;
    USE(tmp48);
    tmp48 = IteratorBuiltinsAssembler(state_).IterableToList(compiler::TNode<Context>{tmp35}, compiler::TNode<Object>{tmp38}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 760);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(compiler::TNode<Context>{tmp35}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp39}, compiler::TNode<Object>{tmp40}}, compiler::TNode<Object>{tmp46});
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Map> tmp51;
    ca_.Bind(&block3, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 748);
    ca_.Goto(&block2, tmp49, tmp50, tmp51);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Map> tmp54;
    ca_.Bind(&block2, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 746);
    ca_.Goto(&block1, tmp52, tmp53, tmp54);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Map> tmp57;
    ca_.Bind(&block1, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block8, tmp55, tmp56, tmp57);
  }

    compiler::TNode<Context> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Map> tmp60;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60);
}

void TestFrame1_436(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 767);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadFramePointer();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 769);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadContextOrFrameTypeFromFrame_271(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast11ATFrameType_264(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 768);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 772);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 773);
    compiler::TNode<RawPtrT> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast15ATStandardFrame_274(state_, compiler::TNode<Context>{tmp13}, compiler::TNode<RawPtrT>{tmp14}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp14, tmp14, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp14, tmp14);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block7, tmp17, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 774);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 776);
    compiler::TNode<RawPtrT> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = Cast23ATArgumentsAdaptorFrame_275(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<RawPtrT>{ca_.UncheckedCast<RawPtrT>(tmp31)}, &label0);
    ca_.Goto(&block12, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31), tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    ca_.Bind(&block13, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block11, tmp33, tmp34, tmp35, tmp36);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 777);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 779);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 776);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    ca_.Bind(&block10, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 773);
    ca_.Goto(&block6, tmp48, tmp49, tmp50, tmp51);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    ca_.Bind(&block6, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 772);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 766);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 765);
    ca_.Goto(&block1, tmp52);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp56;
    ca_.Bind(&block1, &tmp56);
    ca_.Goto(&block14, tmp56);
  }

    compiler::TNode<Context> tmp57;
    ca_.Bind(&block14, &tmp57);
}

void TestNew_437(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 786);
    compiler::TNode<JSArray> tmp1;
    USE(tmp1);
    tmp1 = NewJSArray_62(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 787);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = _method_JSArray_IsEmpty(state_, compiler::TNode<JSArray>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSArray> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'f.IsEmpty()' failed", "../../deps/v8/test/torque/test-torque.tq", 787);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 788);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp7);
    compiler::TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp7}, tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 785);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 784);
    ca_.Goto(&block1, tmp5);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp9;
    ca_.Bind(&block1, &tmp9);
    ca_.Goto(&block4, tmp9);
  }

    compiler::TNode<Context> tmp10;
    ca_.Bind(&block4, &tmp10);
}

void TestStructConstructor_438(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 811);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 6);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 7);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 5);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 812);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 5);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp3}, compiler::TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3, tmp1, tmp2, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.a == 5' failed", "../../deps/v8/test/torque/test-torque.tq", 812);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<Int32T> tmp14;
    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 813);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 6);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp14}, compiler::TNode<Int32T>{tmp17});
    ca_.Branch(tmp18, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<Int32T> tmp21;
    compiler::TNode<Int32T> tmp22;
    compiler::TNode<Int32T> tmp23;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 6' failed", "../../deps/v8/test/torque/test-torque.tq", 813);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    compiler::TNode<Int32T> tmp28;
    ca_.Bind(&block4, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 814);
    compiler::TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 7);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp27}, compiler::TNode<Int32T>{tmp29});
    ca_.Branch(tmp30, &block6, &block7, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Int32T> tmp33;
    compiler::TNode<Int32T> tmp34;
    compiler::TNode<Int32T> tmp35;
    ca_.Bind(&block7, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.y == 7' failed", "../../deps/v8/test/torque/test-torque.tq", 814);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Int32T> tmp40;
    ca_.Bind(&block6, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 815);
    compiler::TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 8);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp40}, compiler::TNode<Int32T>{tmp41});
    ca_.Branch(tmp42, &block8, &block9, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Int32T> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.c == 8' failed", "../../deps/v8/test/torque/test-torque.tq", 815);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<Int32T> tmp50;
    compiler::TNode<Int32T> tmp51;
    compiler::TNode<Int32T> tmp52;
    ca_.Bind(&block8, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 816);
    compiler::TNode<Int32T> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 817);
    compiler::TNode<Int32T> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp53}, compiler::TNode<Int32T>{tmp54});
    ca_.Branch(tmp55, &block10, &block11, tmp48, tmp49, tmp53, tmp51, tmp52);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<Int32T> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<Int32T> tmp60;
    ca_.Bind(&block11, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 1' failed", "../../deps/v8/test/torque/test-torque.tq", 817);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<Int32T> tmp62;
    compiler::TNode<Int32T> tmp63;
    compiler::TNode<Int32T> tmp64;
    compiler::TNode<Int32T> tmp65;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 818);
    compiler::TNode<Int32T> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 793);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 818);
    ca_.Goto(&block12, tmp61, tmp62, tmp66, tmp64, tmp65, tmp66);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Int32T> tmp68;
    compiler::TNode<Int32T> tmp69;
    compiler::TNode<Int32T> tmp70;
    compiler::TNode<Int32T> tmp71;
    compiler::TNode<Int32T> tmp72;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 819);
    compiler::TNode<Int32T> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 2);
    compiler::TNode<BoolT> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp69}, compiler::TNode<Int32T>{tmp73});
    ca_.Branch(tmp74, &block13, &block14, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Int32T> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<Int32T> tmp78;
    compiler::TNode<Int32T> tmp79;
    ca_.Bind(&block14, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 2' failed", "../../deps/v8/test/torque/test-torque.tq", 819);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<Int32T> tmp81;
    compiler::TNode<Int32T> tmp82;
    compiler::TNode<Int32T> tmp83;
    compiler::TNode<Int32T> tmp84;
    ca_.Bind(&block13, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 796);
    ca_.Goto(&block17, tmp80, tmp81, tmp82, tmp83, tmp84, tmp82);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<Int32T> tmp89;
    compiler::TNode<Int32T> tmp90;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 820);
    compiler::TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 2);
    compiler::TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp90}, compiler::TNode<Int32T>{tmp91});
    ca_.Branch(tmp92, &block15, &block16, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<Int32T> tmp94;
    compiler::TNode<Int32T> tmp95;
    compiler::TNode<Int32T> tmp96;
    compiler::TNode<Int32T> tmp97;
    ca_.Bind(&block16, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.GetX() == 2' failed", "../../deps/v8/test/torque/test-torque.tq", 820);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<Int32T> tmp100;
    compiler::TNode<Int32T> tmp101;
    compiler::TNode<Int32T> tmp102;
    ca_.Bind(&block15, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 809);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 808);
    ca_.Goto(&block1, tmp98);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp103;
    ca_.Bind(&block1, &tmp103);
    ca_.Goto(&block18, tmp103);
  }

    compiler::TNode<Context> tmp104;
    ca_.Bind(&block18, &tmp104);
}

compiler::TNode<InternalClass> NewInternalClass_439(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 834);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).GetStructMap(INTERNAL_CLASS_TYPE);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<InternalClass> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<InternalClass>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp4}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp5, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp4}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp6}, tmp3);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp8);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp8}, tmp2);
    ca_.Goto(&block1, tmp0, tmp5);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<InternalClass> tmp10;
    ca_.Bind(&block1, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 833);
    ca_.Goto(&block2, tmp9, tmp10);
  }

    compiler::TNode<Smi> tmp11;
    compiler::TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
  return compiler::TNode<InternalClass>{tmp12};
}

void TestInternalClass_440(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 839);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<InternalClass> tmp2;
    USE(tmp2);
    tmp2 = NewInternalClass_439(state_, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 840);
    compiler::CodeAssemblerLabel label0(&ca_);
    _method_InternalClass_Flip(state_, compiler::TNode<InternalClass>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp2, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp2, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<InternalClass> tmp4;
    compiler::TNode<InternalClass> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<InternalClass> tmp7;
    compiler::TNode<InternalClass> tmp8;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block2, tmp6, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<InternalClass> tmp10;
    ca_.Bind(&block3, &tmp9, &tmp10);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 841);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp13);
    compiler::TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 6);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp14}, compiler::TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp11, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<InternalClass> tmp18;
    ca_.Bind(&block7, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.a == 6' failed", "../../deps/v8/test/torque/test-torque.tq", 841);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<InternalClass> tmp20;
    ca_.Bind(&block6, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 842);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp21);
    compiler::TNode<Number>tmp22 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 5);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = IsNumberEqual_74(state_, compiler::TNode<Number>{tmp22}, compiler::TNode<Number>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp19, tmp20);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<InternalClass> tmp26;
    ca_.Bind(&block9, &tmp25, &tmp26);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.b == 5' failed", "../../deps/v8/test/torque/test-torque.tq", 842);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<InternalClass> tmp28;
    ca_.Bind(&block8, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 838);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 837);
    ca_.Goto(&block1, tmp27);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp29;
    ca_.Bind(&block1, &tmp29);
    ca_.Goto(&block10, tmp29);
  }

    compiler::TNode<Context> tmp30;
    ca_.Bind(&block10, &tmp30);
}

void TestConstInStructs_441(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 858);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_65(state_);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 859);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_65(state_);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 860);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 861);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 863);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 847);
    ca_.Goto(&block4, tmp0, tmp1, tmp4, tmp3, tmp0, tmp1, tmp0, tmp1, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Int32T> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Int32T> tmp12;
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 863);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp13}, compiler::TNode<Int32T>{tmp14});
    ca_.Branch(tmp15, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Int32T> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod1() == 1' failed", "../../deps/v8/test/torque/test-torque.tq", 863);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp22;
    compiler::TNode<Int32T> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 864);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 850);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp22, tmp23, tmp22);
  }

  if (block7.is_used()) {
    compiler::TNode<Object> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Int32T> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Int32T> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Int32T> tmp35;
    compiler::TNode<Object> tmp36;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 864);
    compiler::TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = Null_65(state_);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp36}, compiler::TNode<HeapObject>{tmp37});
    ca_.Branch(tmp38, &block5, &block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp39;
    compiler::TNode<Int32T> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Int32T> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Int32T> tmp44;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod2() == Null' failed", "../../deps/v8/test/torque/test-torque.tq", 864);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Int32T> tmp50;
    ca_.Bind(&block5, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 857);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 856);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

compiler::TNode<Object> TestNewFixedArrayFromSpread_442(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, HeapObject, IntPtrT, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 877);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 878);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = kFixedArrayMap_184(state_);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((16)));
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, kTaggedSize);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 272);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = Convert7ATint325ATSmi_166(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 274);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).TryInt32Mul(compiler::TNode<Int32T>{tmp6}, compiler::TNode<Int32T>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Map> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block4, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Map> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    compiler::TNode<Int32T> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Int32T> tmp30;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<Map> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Map> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<Int32T> tmp49;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 273);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 275);
    compiler::TNode<IntPtrT> tmp50;
    USE(tmp50);
    tmp50 = Convert8ATintptr7ATint32_148(state_, compiler::TNode<Int32T>{tmp49});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 276);
    compiler::TNode<IntPtrT> tmp51;
    USE(tmp51);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp51 = CodeStubAssembler(state_).TryIntPtrAdd(compiler::TNode<IntPtrT>{tmp45}, compiler::TNode<IntPtrT>{tmp50}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50, tmp51);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Map> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<Int32T> tmp60;
    compiler::TNode<Int32T> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    ca_.Bind(&block10, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.Goto(&block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Map> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Int32T> tmp72;
    compiler::TNode<Int32T> tmp73;
    compiler::TNode<Int32T> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block7, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp78);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Map> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    ca_.Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Map> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Int32T> tmp97;
    compiler::TNode<Int32T> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    ca_.Bind(&block7, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block2, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp101);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Map> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<IntPtrT> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Int32T> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    ca_.Bind(&block2, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 878);
    compiler::TNode<FixedArray> tmp111;
    USE(tmp111);
    tmp111 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp110}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp111, CodeStubAssembler(state_).IntPtrConstant(16), compiler::TNode<IntPtrT>{tmp110}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp112 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp112);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp112}, tmp104);
    compiler::TNode<IntPtrT> tmp113 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp113);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp113}, tmp114);
    compiler::TNode<Smi> tmp115;
    USE(tmp115);
    tmp115 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 283);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 284);
    compiler::TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 285);
    ca_.Goto(&block16, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp111, tmp112, tmp111, tmp113, tmp111, tmp115, tmp105, tmp105, tmp116);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Map> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Int32T> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<FixedArray> tmp126;
    compiler::TNode<HeapObject> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    compiler::TNode<HeapObject> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<FixedArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<Smi> tmp135;
    ca_.Bind(&block16, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    compiler::TNode<BoolT> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp135}, compiler::TNode<Smi>{tmp132});
    ca_.Branch(tmp136, &block14, &block15, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Map> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    compiler::TNode<IntPtrT> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Int32T> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<HeapObject> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<HeapObject> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<FixedArray> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    ca_.Bind(&block14, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 290);
    compiler::TNode<Smi> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp157;
    USE(tmp157);
    tmp157 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp155}, compiler::TNode<Smi>{tmp156});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 869);
    compiler::TNode<Smi> tmp158;
    USE(tmp158);
    tmp158 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp159;
    USE(tmp159);
    tmp159 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp154}, compiler::TNode<Smi>{tmp158});
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp154}, compiler::TNode<Smi>{tmp160});
    ca_.Branch(tmp161, &block18, &block19, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp159, tmp157, tmp155, tmp151);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Map> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<IntPtrT> tmp166;
    compiler::TNode<IntPtrT> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Int32T> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<FixedArray> tmp171;
    compiler::TNode<HeapObject> tmp172;
    compiler::TNode<IntPtrT> tmp173;
    compiler::TNode<HeapObject> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<FixedArray> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<FixedArray> tmp182;
    ca_.Bind(&block18, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.Goto(&block13, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<Map> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<IntPtrT> tmp187;
    compiler::TNode<IntPtrT> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Int32T> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<FixedArray> tmp192;
    compiler::TNode<HeapObject> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<HeapObject> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<FixedArray> tmp197;
    compiler::TNode<Smi> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<FixedArray> tmp203;
    ca_.Bind(&block19, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 870);
    compiler::TNode<Oddball> tmp204;
    USE(tmp204);
    tmp204 = TheHole_64(state_);
    ca_.Goto(&block17, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Map> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Int32T> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<FixedArray> tmp214;
    compiler::TNode<HeapObject> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<HeapObject> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Smi> tmp224;
    compiler::TNode<FixedArray> tmp225;
    compiler::TNode<Object> tmp226;
    ca_.Bind(&block17, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 290);
    StoreFixedArrayDirect_190(state_, compiler::TNode<FixedArray>{tmp225}, compiler::TNode<Smi>{tmp224}, compiler::TNode<Object>{tmp226});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 285);
    ca_.Goto(&block16, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Map> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<IntPtrT> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<Int32T> tmp234;
    compiler::TNode<IntPtrT> tmp235;
    compiler::TNode<FixedArray> tmp236;
    compiler::TNode<HeapObject> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<HeapObject> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<FixedArray> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<Smi> tmp245;
    ca_.Bind(&block15, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 282);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 293);
    ca_.Goto(&block12, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp246;
    compiler::TNode<Smi> tmp247;
    compiler::TNode<Map> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<IntPtrT> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Int32T> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<FixedArray> tmp255;
    compiler::TNode<HeapObject> tmp256;
    compiler::TNode<IntPtrT> tmp257;
    compiler::TNode<HeapObject> tmp258;
    compiler::TNode<IntPtrT> tmp259;
    compiler::TNode<FixedArray> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<Smi> tmp262;
    ca_.Bind(&block13, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/base.tq", 294);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<Map> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<IntPtrT> tmp267;
    compiler::TNode<IntPtrT> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Int32T> tmp270;
    compiler::TNode<IntPtrT> tmp271;
    compiler::TNode<FixedArray> tmp272;
    compiler::TNode<HeapObject> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<HeapObject> tmp275;
    compiler::TNode<IntPtrT> tmp276;
    compiler::TNode<FixedArray> tmp277;
    compiler::TNode<Smi> tmp278;
    compiler::TNode<Smi> tmp279;
    ca_.Bind(&block12, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 878);
    ca_.Goto(&block11, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Map> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<IntPtrT> tmp284;
    compiler::TNode<IntPtrT> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<Int32T> tmp287;
    compiler::TNode<IntPtrT> tmp288;
    compiler::TNode<FixedArray> tmp289;
    compiler::TNode<HeapObject> tmp290;
    compiler::TNode<IntPtrT> tmp291;
    compiler::TNode<HeapObject> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<FixedArray> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<Smi> tmp296;
    ca_.Bind(&block11, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.Goto(&block1, tmp280, tmp289);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp297;
    compiler::TNode<Object> tmp298;
    ca_.Bind(&block1, &tmp297, &tmp298);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 875);
    ca_.Goto(&block20, tmp297, tmp298);
  }

    compiler::TNode<Context> tmp299;
    compiler::TNode<Object> tmp300;
    ca_.Bind(&block20, &tmp299, &tmp300);
  return compiler::TNode<Object>{tmp300};
}

void TestReferences_443(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 897);
    compiler::TNode<Map> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).GetStructMap(SMI_PAIR_TYPE);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<SmiPair> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<SmiPair>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp1}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp2, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp1}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp3);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp0);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp4);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp4}, tmp5);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp6);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp6}, tmp7);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 898);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 899);
    compiler::TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 3);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp9});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 900);
    compiler::TNode<Smi>tmp12 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 901);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp15);
    compiler::TNode<HeapObject> tmp16;
    USE(tmp16);
    compiler::TNode<IntPtrT> tmp17;
    USE(tmp17);
    std::tie(tmp16, tmp17) = _method_SmiPair_GetA(state_, compiler::TNode<SmiPair>{tmp2}).Flatten();
    Swap5ATSmi_1435(state_, CodeStubAssembler::Reference{tmp2, tmp15}, CodeStubAssembler::Reference{tmp16, tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 902);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp18);
    compiler::TNode<Smi>tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp18});
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp19}, compiler::TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block2, &block3, tmp2, tmp2, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<SmiPair> tmp22;
    compiler::TNode<HeapObject> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.a == 2' failed", "../../deps/v8/test/torque/test-torque.tq", 902);
  }

  if (block2.is_used()) {
    compiler::TNode<SmiPair> tmp25;
    compiler::TNode<HeapObject> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 903);
    compiler::TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp28);
    compiler::TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp25, tmp28});
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 9);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.Branch(tmp31, &block4, &block5, tmp25, tmp26, tmp27);
  }

  if (block5.is_used()) {
    compiler::TNode<SmiPair> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    ca_.Bind(&block5, &tmp32, &tmp33, &tmp34);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.b == 9' failed", "../../deps/v8/test/torque/test-torque.tq", 903);
  }

  if (block4.is_used()) {
    compiler::TNode<SmiPair> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    ca_.Bind(&block4, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 896);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 895);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestStaticAssert_444(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 908);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, (CodeStubAssembler(state_).ConstexprInt31Equal((CodeStubAssembler(state_).ConstexprInt31Add(1, 2)), 3)));
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 906);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(NewSmiBox, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kValue));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 917);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).GetStructMap(SMI_BOX_TYPE);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<SmiBox> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<SmiBox>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp3}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp4, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp3}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp5}, tmp2);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp6}, tmp1);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp7}, tmp8);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

void TestLoadEliminationFixed_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 922);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 123);
    compiler::TNode<SmiBox> tmp2;
    tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp1));
    USE(tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 923);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp3);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 924);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp5);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 999);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp5}, tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 925);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    compiler::TNode<Smi>tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp7});
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp2, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<SmiBox> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp14);
    compiler::TNode<Smi>tmp15 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp14});
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<SmiBox> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    compiler::TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp19);
    compiler::TNode<Smi>tmp20 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp19});
    ca_.Goto(&block4, tmp16, tmp17, tmp18, tmp20);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<SmiBox> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<SmiBox> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 926);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp27}, compiler::TNode<Object>{tmp28});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp29});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 928);
    compiler::TNode<IntPtrT> tmp30 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp30);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 11);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp26, tmp30}, tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 929);
    compiler::TNode<IntPtrT> tmp32 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp32);
    compiler::TNode<Smi>tmp33 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp26, tmp32});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 930);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 931);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp33}, compiler::TNode<Object>{tmp34});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp35});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 921);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 920);
    ca_.Goto(&block1, tmp25);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp36;
    ca_.Bind(&block1, &tmp36);
    ca_.Goto(&block6, tmp36);
  }

    compiler::TNode<Context> tmp37;
    ca_.Bind(&block6, &tmp37);
}

void TestLoadEliminationVariable_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 936);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_187(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1370(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 937);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<SmiBox> tmp4;
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp3));
    USE(tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 938);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp5);
    compiler::TNode<Smi>tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp5});
    compiler::TNode<Object> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp2}, compiler::TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 939);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp8);
    compiler::TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp8});
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp10});
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp2}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 940);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp13);
    compiler::TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp13});
    compiler::TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp2}, compiler::TNode<Smi>{tmp14});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 941);
    compiler::TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp16);
    compiler::TNode<Smi>tmp17 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp16});
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp17}, compiler::TNode<Smi>{tmp18});
    compiler::TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp2}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 942);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp7}, compiler::TNode<Object>{tmp15});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 943);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<Object>{tmp20});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp22});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 935);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 934);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp23;
    ca_.Bind(&block1, &tmp23);
    ca_.Goto(&block2, tmp23);
  }

    compiler::TNode<Context> tmp24;
    ca_.Bind(&block2, &tmp24);
}

compiler::TNode<Smi> TestRedundantArrayElementCheck_447(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 948);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_187(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 949);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<FixedArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    compiler::TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 950);
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp10}, compiler::TNode<Smi>{tmp11});
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block6, &block7, tmp9, tmp10, tmp11);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block6, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 951);
    compiler::TNode<Object> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp16}, compiler::TNode<Smi>{tmp17});
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = TheHole_64(state_);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp18}, compiler::TNode<HeapObject>{tmp19});
    ca_.Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 952);
    compiler::TNode<Smi> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, -1);
    ca_.Goto(&block1, tmp21, tmp24);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<FixedArray> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block9, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 954);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp28});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 951);
    ca_.Goto(&block10, tmp25, tmp26, tmp27);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<FixedArray> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block10, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 950);
    ca_.Goto(&block7, tmp29, tmp30, tmp31);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<FixedArray> tmp33;
    compiler::TNode<Smi> tmp34;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 949);
    ca_.Goto(&block5, tmp32, tmp33, tmp34);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<FixedArray> tmp36;
    compiler::TNode<Smi> tmp37;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Smi> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp37}, compiler::TNode<Smi>{tmp38});
    ca_.Goto(&block4, tmp35, tmp36, tmp39);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<FixedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 958);
    compiler::TNode<Smi> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    ca_.Goto(&block1, tmp40, tmp43);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Smi> tmp45;
    ca_.Bind(&block1, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 946);
    ca_.Goto(&block11, tmp44, tmp45);
  }

    compiler::TNode<Context> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block11, &tmp46, &tmp47);
  return compiler::TNode<Smi>{tmp47};
}

compiler::TNode<Smi> TestRedundantSmiCheck_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 963);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_187(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 964);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp1}, 1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 965);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 966);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp2, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp2, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<FixedArray> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 967);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp11}, &label0);
    ca_.Goto(&block8, tmp9, tmp10, tmp11, tmp12, tmp14, tmp11, tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp9, tmp10, tmp11, tmp12, tmp14, tmp11);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<FixedArray> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block9, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block7, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<FixedArray> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block6, tmp22, tmp23, tmp24, tmp25, tmp26, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<FixedArray> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    VerifiedUnreachable_225(state_);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<FixedArray> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block6, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 968);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, -1);
    ca_.Goto(&block1, tmp34, tmp40);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<FixedArray> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block3, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 970);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 966);
    ca_.Goto(&block2, tmp41, tmp42, tmp43, tmp44);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<FixedArray> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    ca_.Bind(&block2, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 965);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 973);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    ca_.Goto(&block1, tmp45, tmp49);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Smi> tmp51;
    ca_.Bind(&block1, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 961);
    ca_.Goto(&block10, tmp50, tmp51);
  }

    compiler::TNode<Context> tmp52;
    compiler::TNode<Smi> tmp53;
    ca_.Bind(&block10, &tmp52, &tmp53);
  return compiler::TNode<Smi>{tmp53};
}

compiler::TNode<IntPtrT> TestGenericStruct1_449(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 982);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 123);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 983);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 984);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 985);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 123);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp0, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block3, &tmp3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'box.value == 123' failed", "../../deps/v8/test/torque/test-torque.tq", 985);
  }

  if (block2.is_used()) {
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 986);
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 987);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 246);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp10}, compiler::TNode<IntPtrT>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp6, tmp7, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'boxbox.value.value == 246' failed", "../../deps/v8/test/torque/test-torque.tq", 987);
  }

  if (block4.is_used()) {
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 988);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp19;
    ca_.Bind(&block1, &tmp19);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 980);
    ca_.Goto(&block6, tmp19);
  }

    compiler::TNode<IntPtrT> tmp20;
    ca_.Bind(&block6, &tmp20);
  return compiler::TNode<IntPtrT>{tmp20};
}

TorqueStructTestTuple_Smi__intptr_ TestGenericStruct2_450(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1003);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1004);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    std::tie(tmp2, tmp3) = Swap8ATintptr5ATSmi_1436(state_, TorqueStructTestTuple_intptr__Smi_{compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<Smi>{tmp1}}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1005);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<IntPtrT> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.fst == smiAndIntptr.snd' failed", "../../deps/v8/test/torque/test-torque.tq", 1005);
  }

  if (block2.is_used()) {
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1006);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Branch(tmp13, &block4, &block5, tmp9, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.snd == smiAndIntptr.fst' failed", "../../deps/v8/test/torque/test-torque.tq", 1006);
  }

  if (block4.is_used()) {
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1007);
    ca_.Goto(&block1, tmp20, tmp21);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1001);
    ca_.Goto(&block6, tmp22, tmp23);
  }

    compiler::TNode<Smi> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    ca_.Bind(&block6, &tmp24, &tmp25);
  return TorqueStructTestTuple_Smi__intptr_{compiler::TNode<Smi>{tmp24}, compiler::TNode<IntPtrT>{tmp25}};
}

compiler::TNode<Smi> LoadInternalClassA_1277(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 829);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreInternalClassA_1278(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 829);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Number> LoadInternalClassB_1279(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 830);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    compiler::TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Number>{tmp6};
}

void StoreInternalClassB_1280(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 830);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 825);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    compiler::TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<InternalClass> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<InternalClass> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 826);
    compiler::TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp9);
    compiler::TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp10);
    compiler::TNode<Smi>tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp10});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp9}, tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 827);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp12);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp12}, tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 824);
    ca_.Goto(&block2, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<InternalClass> tmp13;
    ca_.Bind(&block2, &tmp13);
    ca_.Goto(&block5, tmp13);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_NotASmi);
  }

    compiler::TNode<InternalClass> tmp14;
    ca_.Bind(&block5, &tmp14);
}

compiler::TNode<Smi> LoadSmiPairA_1281(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 885);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiPairA_1282(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 885);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadSmiPairB_1283(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 886);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiPairB_1284(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 886);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

CodeStubAssembler::Reference _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 883);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    ca_.Goto(&block1, tmp0, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp2;
    compiler::TNode<HeapObject> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 882);
    ca_.Goto(&block2, tmp2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7);
  return CodeStubAssembler::Reference{tmp6, tmp7};
}

compiler::TNode<Smi> LoadSmiBoxValue_1285(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 912);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiBoxValue_1286(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 912);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadSmiBoxUnrelated_1287(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 913);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiBoxUnrelated_1288(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 913);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 87);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_65(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

compiler::TNode<Object> GenericMacroTest5ATSmi_1428(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 136);
    compiler::TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_66(state_);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 157);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1429(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 145);
    compiler::TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_66(state_);
    ca_.Goto(&block2, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 162);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label__X);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1430(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 459);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 460);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block5, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 461);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Goto(&block1, tmp5, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 463);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 464);
    ca_.Goto(&block1, tmp11, ca_.UncheckedCast<HeapObject>(tmp12));
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block1, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 473);
    ca_.Goto(&block6, tmp13, tmp14);
  }

    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    ca_.Bind(&block6, &tmp15, &tmp16);
  return compiler::TNode<Object>{tmp16};
}

compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1431(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 525);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 532);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1432(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 522);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 533);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

void Swap5ATSmi_1435(compiler::CodeAssemblerState* state_, CodeStubAssembler::Reference p_a, CodeStubAssembler::Reference p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a.object, p_a.offset, p_b.object, p_b.offset);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 890);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 891);
    compiler::TNode<Smi>tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp1}, tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 892);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 889);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 901);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9);
  }

    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
}

TorqueStructTestTuple_Smi__intptr_ Swap8ATintptr5ATSmi_1436(compiler::CodeAssemblerState* state_, TorqueStructTestTuple_intptr__Smi_ p_tuple) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_tuple.fst, p_tuple.snd);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 998);
    ca_.Goto(&block1, tmp0, tmp1, tmp1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/test/torque/test-torque.tq", 1004);
    ca_.Goto(&block2, tmp2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
  return TorqueStructTestTuple_Smi__intptr_{compiler::TNode<Smi>{tmp8}, compiler::TNode<IntPtrT>{tmp9}};
}

}  // namespace internal
}  // namespace v8

