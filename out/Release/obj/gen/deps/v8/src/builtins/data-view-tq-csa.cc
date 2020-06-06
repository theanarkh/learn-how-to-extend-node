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

compiler::TNode<String> MakeDataViewGetterNameString_241(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 10);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 11);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 12);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 13);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 14);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 15);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 16);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 17);
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 18);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 19);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 20);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 21);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 22);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 23);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getFloat32");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 24);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 25);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getFloat64");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 26);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 27);
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getBigInt64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 28);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 29);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.getBigUint64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 31);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 9);
    ca_.Goto(&block32, tmp10);
  }

    compiler::TNode<String> tmp11;
    ca_.Bind(&block32, &tmp11);
  return compiler::TNode<String>{tmp11};
}

compiler::TNode<String> MakeDataViewSetterNameString_242(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 36);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 37);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 38);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 39);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 40);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 41);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 42);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 43);
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 44);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 45);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 46);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 47);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 48);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 49);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setFloat32");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 50);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 51);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setFloat64");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 52);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 53);
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setBigInt64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 54);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 55);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_129(state_, "DataView.prototype.setBigUint64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 57);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 35);
    ca_.Goto(&block32, tmp10);
  }

    compiler::TNode<String> tmp11;
    ca_.Bind(&block32, &tmp11);
  return compiler::TNode<String>{tmp11};
}

compiler::TNode<BoolT> WasNeutered_243(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBufferView> p_view) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_view);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 62);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp1);
    compiler::TNode<JSArrayBuffer>tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp2});
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 61);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    compiler::TNode<JSArrayBufferView> tmp6;
    compiler::TNode<BoolT> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return compiler::TNode<BoolT>{tmp7};
}

compiler::TNode<JSDataView> ValidateDataView_244(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<String> p_method) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object, JSDataView> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, JSDataView> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_method);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 68);
    compiler::TNode<JSDataView> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSDataView_1414(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<String> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<JSDataView> tmp12;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<String> tmp15;
    ca_.Bind(&block3, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 71);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, compiler::TNode<Object>{tmp15});
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<String> tmp18;
    compiler::TNode<JSDataView> tmp19;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 65);
    ca_.Goto(&block6, tmp16, tmp17, tmp18, tmp19);
  }

    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<JSDataView> tmp23;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSDataView>{tmp23};
}

TF_BUILTIN(DataViewPrototypeGetBuffer, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 80);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_129(state_, "get DataView.prototype.buffer");
    compiler::TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 79);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 81);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp7);
    compiler::TNode<JSArrayBuffer>tmp8 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp6, tmp7});
    arguments.PopAndReturn(tmp8);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 88);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 87);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_129(state_, "get DataView.prototype.byte_length");
    compiler::TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 89);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = WasNeutered_243(state_, compiler::TNode<JSArrayBufferView>{tmp6});
    ca_.Branch(tmp7, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSDataView> tmp13;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 92);
    compiler::TNode<Number> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    arguments.PopAndReturn(tmp14);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 94);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp21);
    compiler::TNode<UintPtrT>tmp22 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Convert20UT5ATSmi10HeapNumber9ATuintptr_175(state_, compiler::TNode<UintPtrT>{tmp22});
    arguments.PopAndReturn(tmp23);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 101);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 100);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_129(state_, "get DataView.prototype.byte_offset");
    compiler::TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 102);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = WasNeutered_243(state_, compiler::TNode<JSArrayBufferView>{tmp6});
    ca_.Branch(tmp7, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSDataView> tmp13;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 105);
    compiler::TNode<Number> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    arguments.PopAndReturn(tmp14);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 107);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp21);
    compiler::TNode<UintPtrT>tmp22 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Convert20UT5ATSmi10HeapNumber9ATuintptr_175(state_, compiler::TNode<UintPtrT>{tmp22});
    arguments.PopAndReturn(tmp23);
  }
}

compiler::TNode<Smi> LoadDataView8_245(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 122);
    if ((p_signed)) {
      ca_.Goto(&block2, tmp0, tmp1);
    } else {
      ca_.Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 123);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    compiler::TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp2, tmp4});
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp3});
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = Convert5ATSmi7ATint32_150(state_, compiler::TNode<Int32T>{tmp6});
    ca_.Goto(&block1, tmp2, tmp3, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp8;
    compiler::TNode<UintPtrT> tmp9;
    ca_.Bind(&block3, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 125);
    compiler::TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp10);
    compiler::TNode<RawPtrT>tmp11 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp8, tmp10});
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp11}, compiler::TNode<UintPtrT>{tmp9});
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = Convert5ATSmi8ATuint32_152(state_, compiler::TNode<Uint32T>{tmp12});
    ca_.Goto(&block1, tmp8, tmp9, tmp13);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    compiler::TNode<Smi> tmp16;
    ca_.Bind(&block1, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 120);
    ca_.Goto(&block5, tmp14, tmp15, tmp16);
  }

    compiler::TNode<JSArrayBuffer> tmp17;
    compiler::TNode<UintPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19);
  return compiler::TNode<Smi>{tmp19};
}

compiler::TNode<Number> LoadDataView16_246(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 132);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    compiler::TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 134);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 135);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 136);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 139);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp5;
    compiler::TNode<UintPtrT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 140);
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<UintPtrT>{tmp6});
    compiler::TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp12});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 141);
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp6}, compiler::TNode<UintPtrT>{tmp14});
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<UintPtrT>{tmp15});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 142);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 8);
    compiler::TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Int32T>{tmp16}, compiler::TNode<Int32T>{tmp17});
    compiler::TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp18}, compiler::TNode<Int32T>{tmp13});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 139);
    ca_.Goto(&block4, tmp5, tmp6, tmp7, tmp8, tmp13, tmp16, tmp19);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    compiler::TNode<BoolT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Int32T> tmp26;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 144);
    compiler::TNode<Int32T> tmp27;
    USE(tmp27);
    tmp27 = DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp23}, compiler::TNode<UintPtrT>{tmp21});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 145);
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp28});
    compiler::TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp23}, compiler::TNode<UintPtrT>{tmp29});
    compiler::TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp30});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 146);
    compiler::TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 8);
    compiler::TNode<Int32T> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Int32T>{tmp27}, compiler::TNode<Int32T>{tmp32});
    compiler::TNode<Int32T> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp33}, compiler::TNode<Int32T>{tmp31});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 139);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp27, tmp31, tmp34);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Int32T> tmp40;
    compiler::TNode<Int32T> tmp41;
    ca_.Bind(&block4, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 148);
    if ((p_signed)) {
      ca_.Goto(&block5, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
    } else {
      ca_.Goto(&block6, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp42;
    compiler::TNode<UintPtrT> tmp43;
    compiler::TNode<BoolT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<Int32T> tmp48;
    ca_.Bind(&block5, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 149);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = Convert5ATSmi7ATint32_150(state_, compiler::TNode<Int32T>{tmp48});
    ca_.Goto(&block1, tmp42, tmp43, tmp44, tmp49);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp50;
    compiler::TNode<UintPtrT> tmp51;
    compiler::TNode<BoolT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<Int32T> tmp54;
    compiler::TNode<Int32T> tmp55;
    compiler::TNode<Int32T> tmp56;
    ca_.Bind(&block6, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 152);
    compiler::TNode<Int32T> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0xFFFF);
    compiler::TNode<Int32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32And(compiler::TNode<Int32T>{tmp56}, compiler::TNode<Int32T>{tmp57});
    compiler::TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = Convert5ATSmi7ATint32_150(state_, compiler::TNode<Int32T>{tmp58});
    ca_.Goto(&block1, tmp50, tmp51, tmp52, tmp59);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp60;
    compiler::TNode<UintPtrT> tmp61;
    compiler::TNode<BoolT> tmp62;
    compiler::TNode<Number> tmp63;
    ca_.Bind(&block1, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 129);
    ca_.Goto(&block8, tmp60, tmp61, tmp62, tmp63);
  }

    compiler::TNode<JSArrayBuffer> tmp64;
    compiler::TNode<UintPtrT> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<Number> tmp67;
    ca_.Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67);
  return compiler::TNode<Number>{tmp67};
}

compiler::TNode<Number> LoadDataView32_247(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 159);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    compiler::TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 161);
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 162);
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp6});
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 163);
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp9});
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 164);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp12});
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp13});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 165);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 167);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, tmp5, tmp8, tmp11, tmp14, ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp15;
    compiler::TNode<UintPtrT> tmp16;
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<Uint32T> tmp19;
    compiler::TNode<Uint32T> tmp20;
    compiler::TNode<Uint32T> tmp21;
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<Uint32T> tmp23;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 168);
    compiler::TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp22}, compiler::TNode<Uint32T>{tmp24});
    compiler::TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp21}, compiler::TNode<Uint32T>{tmp26});
    compiler::TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp25}, compiler::TNode<Uint32T>{tmp27});
    compiler::TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp20}, compiler::TNode<Uint32T>{tmp29});
    compiler::TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp28}, compiler::TNode<Uint32T>{tmp30});
    compiler::TNode<Uint32T> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp31}, compiler::TNode<Uint32T>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 167);
    ca_.Goto(&block4, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp32);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp33;
    compiler::TNode<UintPtrT> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 170);
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp37}, compiler::TNode<Uint32T>{tmp42});
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp38}, compiler::TNode<Uint32T>{tmp44});
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp43}, compiler::TNode<Uint32T>{tmp45});
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp39}, compiler::TNode<Uint32T>{tmp47});
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp46}, compiler::TNode<Uint32T>{tmp48});
    compiler::TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp49}, compiler::TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 167);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp50);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp51;
    compiler::TNode<UintPtrT> tmp52;
    compiler::TNode<BoolT> tmp53;
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<Uint32T> tmp55;
    compiler::TNode<Uint32T> tmp56;
    compiler::TNode<Uint32T> tmp57;
    compiler::TNode<Uint32T> tmp58;
    compiler::TNode<Uint32T> tmp59;
    ca_.Bind(&block4, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 173);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block5, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
    } else {
      ca_.Goto(&block6, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp60;
    compiler::TNode<UintPtrT> tmp61;
    compiler::TNode<BoolT> tmp62;
    compiler::TNode<RawPtrT> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 174);
    compiler::TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp68});
    compiler::TNode<Number> tmp70;
    USE(tmp70);
    tmp70 = Convert20UT5ATSmi10HeapNumber7ATint32_147(state_, compiler::TNode<Int32T>{tmp69});
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp70);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp71;
    compiler::TNode<UintPtrT> tmp72;
    compiler::TNode<BoolT> tmp73;
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<Uint32T> tmp75;
    compiler::TNode<Uint32T> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<Uint32T> tmp78;
    compiler::TNode<Uint32T> tmp79;
    ca_.Bind(&block6, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 175);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block8, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
    } else {
      ca_.Goto(&block9, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp80;
    compiler::TNode<UintPtrT> tmp81;
    compiler::TNode<BoolT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<Uint32T> tmp84;
    compiler::TNode<Uint32T> tmp85;
    compiler::TNode<Uint32T> tmp86;
    compiler::TNode<Uint32T> tmp87;
    compiler::TNode<Uint32T> tmp88;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 176);
    compiler::TNode<Number> tmp89;
    USE(tmp89);
    tmp89 = Convert20UT5ATSmi10HeapNumber8ATuint32_151(state_, compiler::TNode<Uint32T>{tmp88});
    ca_.Goto(&block1, tmp80, tmp81, tmp82, tmp89);
  }

  if (block9.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp90;
    compiler::TNode<UintPtrT> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<RawPtrT> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    ca_.Bind(&block9, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 177);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block11, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
    } else {
      ca_.Goto(&block12, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp99;
    compiler::TNode<UintPtrT> tmp100;
    compiler::TNode<BoolT> tmp101;
    compiler::TNode<RawPtrT> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<Uint32T> tmp104;
    compiler::TNode<Uint32T> tmp105;
    compiler::TNode<Uint32T> tmp106;
    compiler::TNode<Uint32T> tmp107;
    ca_.Bind(&block11, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 178);
    compiler::TNode<Float32T> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).BitcastInt32ToFloat32(compiler::TNode<Uint32T>{tmp107});
    compiler::TNode<Float64T> tmp109;
    USE(tmp109);
    tmp109 = Convert9ATfloat649ATfloat32_170(state_, compiler::TNode<Float32T>{tmp108});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 179);
    compiler::TNode<Number> tmp110;
    USE(tmp110);
    tmp110 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp109});
    ca_.Goto(&block1, tmp99, tmp100, tmp101, tmp110);
  }

  if (block12.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp111;
    compiler::TNode<UintPtrT> tmp112;
    compiler::TNode<BoolT> tmp113;
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<Uint32T> tmp115;
    compiler::TNode<Uint32T> tmp116;
    compiler::TNode<Uint32T> tmp117;
    compiler::TNode<Uint32T> tmp118;
    compiler::TNode<Uint32T> tmp119;
    ca_.Bind(&block12, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 181);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp120;
    compiler::TNode<UintPtrT> tmp121;
    compiler::TNode<BoolT> tmp122;
    compiler::TNode<Number> tmp123;
    ca_.Bind(&block1, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 156);
    ca_.Goto(&block14, tmp120, tmp121, tmp122, tmp123);
  }

    compiler::TNode<JSArrayBuffer> tmp124;
    compiler::TNode<UintPtrT> tmp125;
    compiler::TNode<BoolT> tmp126;
    compiler::TNode<Number> tmp127;
    ca_.Bind(&block14, &tmp124, &tmp125, &tmp126, &tmp127);
  return compiler::TNode<Number>{tmp127};
}

compiler::TNode<Number> LoadDataViewFloat64_248(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 188);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    compiler::TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 190);
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 191);
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp6});
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 192);
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp9});
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 193);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp12});
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp13});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 194);
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 4);
    compiler::TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp15});
    compiler::TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp16});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 195);
    compiler::TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 5);
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp18});
    compiler::TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 196);
    compiler::TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 6);
    compiler::TNode<UintPtrT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp21});
    compiler::TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp22});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 197);
    compiler::TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 7);
    compiler::TNode<UintPtrT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp24});
    compiler::TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp25});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 198);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 199);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 201);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, tmp5, tmp8, tmp11, tmp14, tmp17, tmp20, tmp23, tmp26, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp27;
    compiler::TNode<UintPtrT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<Uint32T> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 202);
    compiler::TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp34}, compiler::TNode<Uint32T>{tmp41});
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp33}, compiler::TNode<Uint32T>{tmp43});
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp42}, compiler::TNode<Uint32T>{tmp44});
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp32}, compiler::TNode<Uint32T>{tmp46});
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp45}, compiler::TNode<Uint32T>{tmp47});
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp48}, compiler::TNode<Uint32T>{tmp31});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 203);
    compiler::TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp38}, compiler::TNode<Uint32T>{tmp50});
    compiler::TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp37}, compiler::TNode<Uint32T>{tmp52});
    compiler::TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp51}, compiler::TNode<Uint32T>{tmp53});
    compiler::TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp55});
    compiler::TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp54}, compiler::TNode<Uint32T>{tmp56});
    compiler::TNode<Uint32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp57}, compiler::TNode<Uint32T>{tmp35});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 201);
    ca_.Goto(&block4, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp49, tmp58);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<BoolT> tmp61;
    compiler::TNode<RawPtrT> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    compiler::TNode<Uint32T> tmp72;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 205);
    compiler::TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp63}, compiler::TNode<Uint32T>{tmp73});
    compiler::TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp64}, compiler::TNode<Uint32T>{tmp75});
    compiler::TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp74}, compiler::TNode<Uint32T>{tmp76});
    compiler::TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp65}, compiler::TNode<Uint32T>{tmp78});
    compiler::TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp77}, compiler::TNode<Uint32T>{tmp79});
    compiler::TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp80}, compiler::TNode<Uint32T>{tmp66});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 206);
    compiler::TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp67}, compiler::TNode<Uint32T>{tmp82});
    compiler::TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp68}, compiler::TNode<Uint32T>{tmp84});
    compiler::TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp83}, compiler::TNode<Uint32T>{tmp85});
    compiler::TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp69}, compiler::TNode<Uint32T>{tmp87});
    compiler::TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp86}, compiler::TNode<Uint32T>{tmp88});
    compiler::TNode<Uint32T> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp89}, compiler::TNode<Uint32T>{tmp70});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 201);
    ca_.Goto(&block4, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp90, tmp81);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    compiler::TNode<BoolT> tmp93;
    compiler::TNode<RawPtrT> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Uint32T> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<Uint32T> tmp104;
    ca_.Bind(&block4, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 209);
    compiler::TNode<Float64T> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 210);
    compiler::TNode<Float64T> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).Float64InsertLowWord32(compiler::TNode<Float64T>{tmp105}, compiler::TNode<Uint32T>{tmp103});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 211);
    compiler::TNode<Float64T> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).Float64InsertHighWord32(compiler::TNode<Float64T>{tmp106}, compiler::TNode<Uint32T>{tmp104});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 213);
    compiler::TNode<Number> tmp108;
    USE(tmp108);
    tmp108 = Convert20UT5ATSmi10HeapNumber9ATfloat64_173(state_, compiler::TNode<Float64T>{tmp107});
    ca_.Goto(&block1, tmp91, tmp92, tmp93, tmp108);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp109;
    compiler::TNode<UintPtrT> tmp110;
    compiler::TNode<BoolT> tmp111;
    compiler::TNode<Number> tmp112;
    ca_.Bind(&block1, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 185);
    ca_.Goto(&block5, tmp109, tmp110, tmp111, tmp112);
  }

    compiler::TNode<JSArrayBuffer> tmp113;
    compiler::TNode<UintPtrT> tmp114;
    compiler::TNode<BoolT> tmp115;
    compiler::TNode<Number> tmp116;
    ca_.Bind(&block5, &tmp113, &tmp114, &tmp115, &tmp116);
  return compiler::TNode<Number>{tmp116};
}

int31_t kZeroDigitBigInt_249(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 0;
}

int31_t kOneDigitBigInt_250(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 1;
}

int31_t kTwoDigitBigInt_251(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 2;
}

compiler::TNode<BigInt> MakeBigIntOn64Bit_252(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 224);
    compiler::TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp1}, compiler::TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block4, &block3, tmp0, tmp1, tmp2);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Uint32T> tmp6;
    compiler::TNode<Uint32T> tmp7;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp7}, compiler::TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Uint32T> tmp11;
    compiler::TNode<Uint32T> tmp12;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 225);
    compiler::TNode<IntPtrT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, kZeroDigitBigInt_249(state_));
    compiler::TNode<BigInt> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp13});
    compiler::TNode<BigInt> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp14});
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Uint32T> tmp17;
    compiler::TNode<Uint32T> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 228);
    compiler::TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = kPositiveSign_229(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 229);
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = Convert9ATuintptr8ATuint32_153(state_, compiler::TNode<Uint32T>{tmp18});
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 230);
    compiler::TNode<UintPtrT> tmp22;
    USE(tmp22);
    tmp22 = Convert9ATuintptr8ATuint32_153(state_, compiler::TNode<Uint32T>{tmp17});
    compiler::TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp22});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 231);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 32);
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).WordShl(compiler::TNode<IntPtrT>{tmp21}, compiler::TNode<IntPtrT>{tmp24});
    compiler::TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp25}, compiler::TNode<IntPtrT>{tmp23});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 233);
    if ((p_signed)) {
      ca_.Goto(&block5, tmp16, tmp17, tmp18, tmp19, tmp21, tmp23, tmp26);
    } else {
      ca_.Goto(&block6, tmp16, tmp17, tmp18, tmp19, tmp21, tmp23, tmp26);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Uint32T> tmp28;
    compiler::TNode<Uint32T> tmp29;
    compiler::TNode<Uint32T> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 234);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp33}, compiler::TNode<IntPtrT>{tmp34});
    ca_.Branch(tmp35, &block8, &block9, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 235);
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = kNegativeSign_230(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 237);
    compiler::TNode<IntPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp44}, compiler::TNode<IntPtrT>{tmp42});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 234);
    ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp43, tmp40, tmp41, tmp45);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Uint32T> tmp47;
    compiler::TNode<Uint32T> tmp48;
    compiler::TNode<Uint32T> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    ca_.Bind(&block9, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 233);
    ca_.Goto(&block7, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<Uint32T> tmp55;
    compiler::TNode<Uint32T> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block7, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Uint32T> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    ca_.Bind(&block7, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 243);
    compiler::TNode<IntPtrT> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, kOneDigitBigInt_250(state_));
    compiler::TNode<BigInt> tmp68;
    USE(tmp68);
    tmp68 = AllocateEmptyBigInt_234(state_, compiler::TNode<Context>{tmp60}, compiler::TNode<Uint32T>{tmp63}, compiler::TNode<IntPtrT>{tmp67});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 242);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 244);
    compiler::TNode<UintPtrT> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp66});
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp68}, compiler::TNode<IntPtrT>{tmp70}, compiler::TNode<UintPtrT>{tmp69});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 245);
    compiler::TNode<BigInt> tmp71;
    USE(tmp71);
    tmp71 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp68});
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp71);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Uint32T> tmp73;
    compiler::TNode<Uint32T> tmp74;
    compiler::TNode<BigInt> tmp75;
    ca_.Bind(&block1, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 221);
    ca_.Goto(&block10, tmp72, tmp73, tmp74, tmp75);
  }

    compiler::TNode<Context> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<Uint32T> tmp78;
    compiler::TNode<BigInt> tmp79;
    ca_.Bind(&block10, &tmp76, &tmp77, &tmp78, &tmp79);
  return compiler::TNode<BigInt>{tmp79};
}

compiler::TNode<BigInt> MakeBigIntOn32Bit_253(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 252);
    compiler::TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp1}, compiler::TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block4, &block3, tmp0, tmp1, tmp2);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Uint32T> tmp6;
    compiler::TNode<Uint32T> tmp7;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp7}, compiler::TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Uint32T> tmp11;
    compiler::TNode<Uint32T> tmp12;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 253);
    compiler::TNode<IntPtrT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, kZeroDigitBigInt_249(state_));
    compiler::TNode<BigInt> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp13});
    compiler::TNode<BigInt> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp14});
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Uint32T> tmp17;
    compiler::TNode<Uint32T> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 257);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, false);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 258);
    compiler::TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = kPositiveSign_229(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 262);
    compiler::TNode<Int32T> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 263);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 268);
    compiler::TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp18}, compiler::TNode<Uint32T>{tmp23});
    ca_.Branch(tmp24, &block5, &block6, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Uint32T> tmp26;
    compiler::TNode<Uint32T> tmp27;
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<Uint32T> tmp29;
    compiler::TNode<Int32T> tmp30;
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block5, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 269);
    if ((p_signed)) {
      ca_.Goto(&block7, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
    } else {
      ca_.Goto(&block8, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<Int32T> tmp38;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 271);
    compiler::TNode<Int32T> tmp39;
    USE(tmp39);
    tmp39 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).Int32LessThan(compiler::TNode<Int32T>{tmp38}, compiler::TNode<Int32T>{tmp39});
    ca_.Branch(tmp40, &block10, &block11, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Uint32T> tmp42;
    compiler::TNode<Uint32T> tmp43;
    compiler::TNode<BoolT> tmp44;
    compiler::TNode<Uint32T> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 272);
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = kNegativeSign_230(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 277);
    compiler::TNode<Int32T> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<Int32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp49}, compiler::TNode<Int32T>{tmp47});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 278);
    compiler::TNode<Int32T> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Int32T>{tmp46}, compiler::TNode<Int32T>{tmp51});
    ca_.Branch(tmp52, &block13, &block14, tmp41, tmp42, tmp43, tmp44, tmp48, tmp46, tmp50);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<Uint32T> tmp55;
    compiler::TNode<BoolT> tmp56;
    compiler::TNode<Uint32T> tmp57;
    compiler::TNode<Int32T> tmp58;
    compiler::TNode<Int32T> tmp59;
    ca_.Bind(&block13, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 279);
    compiler::TNode<Int32T> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    compiler::TNode<Int32T> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp59}, compiler::TNode<Int32T>{tmp60});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 278);
    ca_.Goto(&block14, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp61);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<BoolT> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<Int32T> tmp68;
    ca_.Bind(&block14, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 281);
    compiler::TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp69}, compiler::TNode<Int32T>{tmp67});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 284);
    compiler::TNode<Int32T> tmp71;
    USE(tmp71);
    tmp71 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<BoolT> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Int32T>{tmp68}, compiler::TNode<Int32T>{tmp71});
    ca_.Branch(tmp72, &block15, &block16, tmp62, tmp63, tmp64, tmp65, tmp66, tmp70, tmp68);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<Uint32T> tmp74;
    compiler::TNode<Uint32T> tmp75;
    compiler::TNode<BoolT> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<Int32T> tmp78;
    compiler::TNode<Int32T> tmp79;
    ca_.Bind(&block15, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 285);
    compiler::TNode<BoolT> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 284);
    ca_.Goto(&block16, tmp73, tmp74, tmp75, tmp80, tmp77, tmp78, tmp79);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<Uint32T> tmp82;
    compiler::TNode<Uint32T> tmp83;
    compiler::TNode<BoolT> tmp84;
    compiler::TNode<Uint32T> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<Int32T> tmp87;
    ca_.Bind(&block16, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 271);
    ca_.Goto(&block12, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Uint32T> tmp89;
    compiler::TNode<Uint32T> tmp90;
    compiler::TNode<BoolT> tmp91;
    compiler::TNode<Uint32T> tmp92;
    compiler::TNode<Int32T> tmp93;
    compiler::TNode<Int32T> tmp94;
    ca_.Bind(&block11, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 290);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 271);
    ca_.Goto(&block12, tmp88, tmp89, tmp90, tmp95, tmp92, tmp93, tmp94);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<BoolT> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Int32T> tmp101;
    compiler::TNode<Int32T> tmp102;
    ca_.Bind(&block12, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 269);
    ca_.Goto(&block9, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp103;
    compiler::TNode<Uint32T> tmp104;
    compiler::TNode<Uint32T> tmp105;
    compiler::TNode<BoolT> tmp106;
    compiler::TNode<Uint32T> tmp107;
    compiler::TNode<Int32T> tmp108;
    compiler::TNode<Int32T> tmp109;
    ca_.Bind(&block8, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 296);
    compiler::TNode<BoolT> tmp110;
    USE(tmp110);
    tmp110 = FromConstexpr6ATbool16ATconstexpr_bool_140(state_, true);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 269);
    ca_.Goto(&block9, tmp103, tmp104, tmp105, tmp110, tmp107, tmp108, tmp109);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<Uint32T> tmp112;
    compiler::TNode<Uint32T> tmp113;
    compiler::TNode<BoolT> tmp114;
    compiler::TNode<Uint32T> tmp115;
    compiler::TNode<Int32T> tmp116;
    compiler::TNode<Int32T> tmp117;
    ca_.Bind(&block9, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 268);
    ca_.Goto(&block6, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp118;
    compiler::TNode<Uint32T> tmp119;
    compiler::TNode<Uint32T> tmp120;
    compiler::TNode<BoolT> tmp121;
    compiler::TNode<Uint32T> tmp122;
    compiler::TNode<Int32T> tmp123;
    compiler::TNode<Int32T> tmp124;
    ca_.Bind(&block6, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 301);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 302);
    ca_.Branch(tmp121, &block17, &block18, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, ca_.Uninitialized<BigInt>());
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<Uint32T> tmp126;
    compiler::TNode<Uint32T> tmp127;
    compiler::TNode<BoolT> tmp128;
    compiler::TNode<Uint32T> tmp129;
    compiler::TNode<Int32T> tmp130;
    compiler::TNode<Int32T> tmp131;
    compiler::TNode<BigInt> tmp132;
    ca_.Bind(&block17, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 303);
    compiler::TNode<IntPtrT> tmp133;
    USE(tmp133);
    tmp133 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, kTwoDigitBigInt_251(state_));
    compiler::TNode<BigInt> tmp134;
    USE(tmp134);
    tmp134 = AllocateEmptyBigInt_234(state_, compiler::TNode<Context>{tmp125}, compiler::TNode<Uint32T>{tmp129}, compiler::TNode<IntPtrT>{tmp133});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 302);
    ca_.Goto(&block19, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp134);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<Uint32T> tmp136;
    compiler::TNode<Uint32T> tmp137;
    compiler::TNode<BoolT> tmp138;
    compiler::TNode<Uint32T> tmp139;
    compiler::TNode<Int32T> tmp140;
    compiler::TNode<Int32T> tmp141;
    compiler::TNode<BigInt> tmp142;
    ca_.Bind(&block18, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 305);
    compiler::TNode<IntPtrT> tmp143;
    USE(tmp143);
    tmp143 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, kOneDigitBigInt_250(state_));
    compiler::TNode<BigInt> tmp144;
    USE(tmp144);
    tmp144 = AllocateEmptyBigInt_234(state_, compiler::TNode<Context>{tmp135}, compiler::TNode<Uint32T>{tmp139}, compiler::TNode<IntPtrT>{tmp143});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 302);
    ca_.Goto(&block19, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp144);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp145;
    compiler::TNode<Uint32T> tmp146;
    compiler::TNode<Uint32T> tmp147;
    compiler::TNode<BoolT> tmp148;
    compiler::TNode<Uint32T> tmp149;
    compiler::TNode<Int32T> tmp150;
    compiler::TNode<Int32T> tmp151;
    compiler::TNode<BigInt> tmp152;
    ca_.Bind(&block19, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 309);
    compiler::TNode<IntPtrT> tmp153;
    USE(tmp153);
    tmp153 = Convert8ATintptr7ATint32_148(state_, compiler::TNode<Int32T>{tmp150});
    compiler::TNode<UintPtrT> tmp154;
    USE(tmp154);
    tmp154 = CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp153});
    compiler::TNode<IntPtrT> tmp155;
    USE(tmp155);
    tmp155 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp152}, compiler::TNode<IntPtrT>{tmp155}, compiler::TNode<UintPtrT>{tmp154});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 310);
    ca_.Branch(tmp148, &block20, &block21, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<Uint32T> tmp157;
    compiler::TNode<Uint32T> tmp158;
    compiler::TNode<BoolT> tmp159;
    compiler::TNode<Uint32T> tmp160;
    compiler::TNode<Int32T> tmp161;
    compiler::TNode<Int32T> tmp162;
    compiler::TNode<BigInt> tmp163;
    ca_.Bind(&block20, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 311);
    compiler::TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = Convert8ATintptr7ATint32_148(state_, compiler::TNode<Int32T>{tmp162});
    compiler::TNode<UintPtrT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp164});
    compiler::TNode<IntPtrT> tmp166;
    USE(tmp166);
    tmp166 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp163}, compiler::TNode<IntPtrT>{tmp166}, compiler::TNode<UintPtrT>{tmp165});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 310);
    ca_.Goto(&block21, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp167;
    compiler::TNode<Uint32T> tmp168;
    compiler::TNode<Uint32T> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<Uint32T> tmp171;
    compiler::TNode<Int32T> tmp172;
    compiler::TNode<Int32T> tmp173;
    compiler::TNode<BigInt> tmp174;
    ca_.Bind(&block21, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 313);
    compiler::TNode<BigInt> tmp175;
    USE(tmp175);
    tmp175 = Convert8ATBigInt13MutableBigInt_228(state_, compiler::TNode<BigInt>{tmp174});
    ca_.Goto(&block1, tmp167, tmp168, tmp169, tmp175);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp176;
    compiler::TNode<Uint32T> tmp177;
    compiler::TNode<Uint32T> tmp178;
    compiler::TNode<BigInt> tmp179;
    ca_.Bind(&block1, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 249);
    ca_.Goto(&block22, tmp176, tmp177, tmp178, tmp179);
  }

    compiler::TNode<Context> tmp180;
    compiler::TNode<Uint32T> tmp181;
    compiler::TNode<Uint32T> tmp182;
    compiler::TNode<BigInt> tmp183;
    ca_.Bind(&block22, &tmp180, &tmp181, &tmp182, &tmp183);
  return compiler::TNode<BigInt>{tmp183};
}

compiler::TNode<BigInt> MakeBigInt_254(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 320);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block2, tmp0, tmp1, tmp2);
    } else {
      ca_.Goto(&block3, tmp0, tmp1, tmp2);
    }
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Uint32T> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 321);
    compiler::TNode<BigInt> tmp6;
    USE(tmp6);
    tmp6 = MakeBigIntOn64Bit_252(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Uint32T>{tmp4}, compiler::TNode<Uint32T>{tmp5}, p_signed);
    ca_.Goto(&block1, tmp3, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Uint32T> tmp8;
    compiler::TNode<Uint32T> tmp9;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 323);
    compiler::TNode<BigInt> tmp10;
    USE(tmp10);
    tmp10 = MakeBigIntOn32Bit_253(state_, compiler::TNode<Context>{tmp7}, compiler::TNode<Uint32T>{tmp8}, compiler::TNode<Uint32T>{tmp9}, p_signed);
    ca_.Goto(&block1, tmp7, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Uint32T> tmp12;
    compiler::TNode<Uint32T> tmp13;
    compiler::TNode<BigInt> tmp14;
    ca_.Bind(&block1, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 316);
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp14);
  }

    compiler::TNode<Context> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<Uint32T> tmp17;
    compiler::TNode<BigInt> tmp18;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18);
  return compiler::TNode<BigInt>{tmp18};
}

compiler::TNode<BigInt> LoadDataViewBigInt_255(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArrayBuffer> tmp1;
    compiler::TNode<UintPtrT> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 330);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    compiler::TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 332);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 333);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp7});
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp8});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 334);
    compiler::TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp10});
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 335);
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp13});
    compiler::TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp14});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 336);
    compiler::TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 4);
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp16});
    compiler::TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 337);
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 5);
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp19});
    compiler::TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp20});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 338);
    compiler::TNode<UintPtrT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 6);
    compiler::TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp22});
    compiler::TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp23});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 339);
    compiler::TNode<UintPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 7);
    compiler::TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp2}, compiler::TNode<UintPtrT>{tmp25});
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 340);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 341);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 343);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp9, tmp12, tmp15, tmp18, tmp21, tmp24, tmp27, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSArrayBuffer> tmp29;
    compiler::TNode<UintPtrT> tmp30;
    compiler::TNode<BoolT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    compiler::TNode<Uint32T> tmp42;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 344);
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp43});
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp35}, compiler::TNode<Uint32T>{tmp45});
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp44}, compiler::TNode<Uint32T>{tmp46});
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp34}, compiler::TNode<Uint32T>{tmp48});
    compiler::TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp47}, compiler::TNode<Uint32T>{tmp49});
    compiler::TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp50}, compiler::TNode<Uint32T>{tmp33});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 345);
    compiler::TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp40}, compiler::TNode<Uint32T>{tmp52});
    compiler::TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp39}, compiler::TNode<Uint32T>{tmp54});
    compiler::TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp53}, compiler::TNode<Uint32T>{tmp55});
    compiler::TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp38}, compiler::TNode<Uint32T>{tmp57});
    compiler::TNode<Uint32T> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp56}, compiler::TNode<Uint32T>{tmp58});
    compiler::TNode<Uint32T> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp59}, compiler::TNode<Uint32T>{tmp37});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 343);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp51, tmp60);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<JSArrayBuffer> tmp62;
    compiler::TNode<UintPtrT> tmp63;
    compiler::TNode<BoolT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    compiler::TNode<Uint32T> tmp72;
    compiler::TNode<Uint32T> tmp73;
    compiler::TNode<Uint32T> tmp74;
    compiler::TNode<Uint32T> tmp75;
    ca_.Bind(&block3, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 347);
    compiler::TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp66}, compiler::TNode<Uint32T>{tmp76});
    compiler::TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp67}, compiler::TNode<Uint32T>{tmp78});
    compiler::TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp77}, compiler::TNode<Uint32T>{tmp79});
    compiler::TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp68}, compiler::TNode<Uint32T>{tmp81});
    compiler::TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp80}, compiler::TNode<Uint32T>{tmp82});
    compiler::TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp83}, compiler::TNode<Uint32T>{tmp69});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 348);
    compiler::TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp70}, compiler::TNode<Uint32T>{tmp85});
    compiler::TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp71}, compiler::TNode<Uint32T>{tmp87});
    compiler::TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp86}, compiler::TNode<Uint32T>{tmp88});
    compiler::TNode<Uint32T> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp91;
    USE(tmp91);
    tmp91 = CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp72}, compiler::TNode<Uint32T>{tmp90});
    compiler::TNode<Uint32T> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp89}, compiler::TNode<Uint32T>{tmp91});
    compiler::TNode<Uint32T> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp92}, compiler::TNode<Uint32T>{tmp73});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 343);
    ca_.Goto(&block4, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp93, tmp84);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<JSArrayBuffer> tmp95;
    compiler::TNode<UintPtrT> tmp96;
    compiler::TNode<BoolT> tmp97;
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Uint32T> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<Uint32T> tmp104;
    compiler::TNode<Uint32T> tmp105;
    compiler::TNode<Uint32T> tmp106;
    compiler::TNode<Uint32T> tmp107;
    compiler::TNode<Uint32T> tmp108;
    ca_.Bind(&block4, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 351);
    compiler::TNode<BigInt> tmp109;
    USE(tmp109);
    tmp109 = MakeBigInt_254(state_, compiler::TNode<Context>{tmp94}, compiler::TNode<Uint32T>{tmp107}, compiler::TNode<Uint32T>{tmp108}, p_signed);
    ca_.Goto(&block1, tmp94, tmp95, tmp96, tmp97, tmp109);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSArrayBuffer> tmp111;
    compiler::TNode<UintPtrT> tmp112;
    compiler::TNode<BoolT> tmp113;
    compiler::TNode<BigInt> tmp114;
    ca_.Bind(&block1, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 327);
    ca_.Goto(&block5, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

    compiler::TNode<Context> tmp115;
    compiler::TNode<JSArrayBuffer> tmp116;
    compiler::TNode<UintPtrT> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<BigInt> tmp119;
    ca_.Bind(&block5, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
  return compiler::TNode<BigInt>{tmp119};
}

compiler::TNode<Numeric> DataViewGet_256(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Numeric> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Numeric> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 363);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = MakeDataViewGetterNameString_241(state_, p_kind);
    compiler::TNode<JSDataView> tmp5;
    USE(tmp5);
    tmp5 = ValidateDataView_244(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 362);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 365);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 367);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = ToIndex_216(state_, compiler::TNode<Object>{tmp2}, compiler::TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSDataView> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Context> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<JSDataView> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Context> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 369);
    ca_.Goto(&block2, tmp15, tmp16, tmp17, tmp18, tmp19, tmp23);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<JSDataView> tmp28;
    compiler::TNode<Number> tmp29;
    ca_.Bind(&block3, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 370);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp24}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSDataView> tmp34;
    compiler::TNode<Number> tmp35;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 373);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ToBoolean_214(state_, compiler::TNode<Object>{tmp33});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 374);
    compiler::TNode<IntPtrT> tmp37 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp37);
    compiler::TNode<JSArrayBuffer>tmp38 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp34, tmp37});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 376);
    compiler::TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp38});
    ca_.Branch(tmp39, &block6, &block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<JSDataView> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<BoolT> tmp46;
    compiler::TNode<JSArrayBuffer> tmp47;
    ca_.Bind(&block6, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 377);
    compiler::TNode<String> tmp48;
    USE(tmp48);
    tmp48 = MakeDataViewGetterNameString_241(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp40}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp48});
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<JSDataView> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<JSArrayBuffer> tmp56;
    ca_.Bind(&block7, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 380);
    compiler::TNode<Float64T> tmp57;
    USE(tmp57);
    tmp57 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp54});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 381);
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = Convert9ATuintptr9ATfloat64_176(state_, compiler::TNode<Float64T>{tmp57});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 383);
    compiler::TNode<IntPtrT> tmp59 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp59);
    compiler::TNode<UintPtrT>tmp60 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp53, tmp59});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 384);
    compiler::TNode<IntPtrT> tmp61 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp61);
    compiler::TNode<UintPtrT>tmp62 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp53, tmp61});
    compiler::TNode<Float64T> tmp63;
    USE(tmp63);
    tmp63 = Convert9ATfloat649ATuintptr_174(state_, compiler::TNode<UintPtrT>{tmp62});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 385);
    compiler::TNode<Float64T> tmp64;
    USE(tmp64);
    tmp64 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 387);
    compiler::TNode<Float64T> tmp65;
    USE(tmp65);
    tmp65 = CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp57}, compiler::TNode<Float64T>{tmp64});
    compiler::TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp65}, compiler::TNode<Float64T>{tmp63});
    ca_.Branch(tmp66, &block8, &block9, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp60, tmp63, tmp64);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<JSDataView> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<BoolT> tmp73;
    compiler::TNode<JSArrayBuffer> tmp74;
    compiler::TNode<Float64T> tmp75;
    compiler::TNode<UintPtrT> tmp76;
    compiler::TNode<UintPtrT> tmp77;
    compiler::TNode<Float64T> tmp78;
    compiler::TNode<Float64T> tmp79;
    ca_.Bind(&block8, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 388);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp67}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSDataView> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<BoolT> tmp86;
    compiler::TNode<JSArrayBuffer> tmp87;
    compiler::TNode<Float64T> tmp88;
    compiler::TNode<UintPtrT> tmp89;
    compiler::TNode<UintPtrT> tmp90;
    compiler::TNode<Float64T> tmp91;
    compiler::TNode<Float64T> tmp92;
    ca_.Bind(&block9, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 391);
    compiler::TNode<UintPtrT> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp89}, compiler::TNode<UintPtrT>{tmp90});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 393);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block10, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
    } else {
      ca_.Goto(&block11, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<JSDataView> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<BoolT> tmp100;
    compiler::TNode<JSArrayBuffer> tmp101;
    compiler::TNode<Float64T> tmp102;
    compiler::TNode<UintPtrT> tmp103;
    compiler::TNode<UintPtrT> tmp104;
    compiler::TNode<Float64T> tmp105;
    compiler::TNode<Float64T> tmp106;
    compiler::TNode<UintPtrT> tmp107;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 394);
    compiler::TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = LoadDataView8_245(state_, compiler::TNode<JSArrayBuffer>{tmp101}, compiler::TNode<UintPtrT>{tmp107}, false);
    ca_.Goto(&block1, tmp94, tmp95, tmp96, tmp97, tmp108);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<JSDataView> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<BoolT> tmp115;
    compiler::TNode<JSArrayBuffer> tmp116;
    compiler::TNode<Float64T> tmp117;
    compiler::TNode<UintPtrT> tmp118;
    compiler::TNode<UintPtrT> tmp119;
    compiler::TNode<Float64T> tmp120;
    compiler::TNode<Float64T> tmp121;
    compiler::TNode<UintPtrT> tmp122;
    ca_.Bind(&block11, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 395);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block13, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
    } else {
      ca_.Goto(&block14, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<JSDataView> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<BoolT> tmp129;
    compiler::TNode<JSArrayBuffer> tmp130;
    compiler::TNode<Float64T> tmp131;
    compiler::TNode<UintPtrT> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<Float64T> tmp134;
    compiler::TNode<Float64T> tmp135;
    compiler::TNode<UintPtrT> tmp136;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 396);
    compiler::TNode<Smi> tmp137;
    USE(tmp137);
    tmp137 = LoadDataView8_245(state_, compiler::TNode<JSArrayBuffer>{tmp130}, compiler::TNode<UintPtrT>{tmp136}, true);
    ca_.Goto(&block1, tmp123, tmp124, tmp125, tmp126, tmp137);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSDataView> tmp142;
    compiler::TNode<Number> tmp143;
    compiler::TNode<BoolT> tmp144;
    compiler::TNode<JSArrayBuffer> tmp145;
    compiler::TNode<Float64T> tmp146;
    compiler::TNode<UintPtrT> tmp147;
    compiler::TNode<UintPtrT> tmp148;
    compiler::TNode<Float64T> tmp149;
    compiler::TNode<Float64T> tmp150;
    compiler::TNode<UintPtrT> tmp151;
    ca_.Bind(&block14, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 397);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block16, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
    } else {
      ca_.Goto(&block17, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSDataView> tmp156;
    compiler::TNode<Number> tmp157;
    compiler::TNode<BoolT> tmp158;
    compiler::TNode<JSArrayBuffer> tmp159;
    compiler::TNode<Float64T> tmp160;
    compiler::TNode<UintPtrT> tmp161;
    compiler::TNode<UintPtrT> tmp162;
    compiler::TNode<Float64T> tmp163;
    compiler::TNode<Float64T> tmp164;
    compiler::TNode<UintPtrT> tmp165;
    ca_.Bind(&block16, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 398);
    compiler::TNode<Number> tmp166;
    USE(tmp166);
    tmp166 = LoadDataView16_246(state_, compiler::TNode<JSArrayBuffer>{tmp159}, compiler::TNode<UintPtrT>{tmp165}, compiler::TNode<BoolT>{tmp158}, false);
    ca_.Goto(&block1, tmp152, tmp153, tmp154, tmp155, tmp166);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSDataView> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<BoolT> tmp173;
    compiler::TNode<JSArrayBuffer> tmp174;
    compiler::TNode<Float64T> tmp175;
    compiler::TNode<UintPtrT> tmp176;
    compiler::TNode<UintPtrT> tmp177;
    compiler::TNode<Float64T> tmp178;
    compiler::TNode<Float64T> tmp179;
    compiler::TNode<UintPtrT> tmp180;
    ca_.Bind(&block17, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 399);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block19, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180);
    } else {
      ca_.Goto(&block20, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<JSDataView> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<BoolT> tmp187;
    compiler::TNode<JSArrayBuffer> tmp188;
    compiler::TNode<Float64T> tmp189;
    compiler::TNode<UintPtrT> tmp190;
    compiler::TNode<UintPtrT> tmp191;
    compiler::TNode<Float64T> tmp192;
    compiler::TNode<Float64T> tmp193;
    compiler::TNode<UintPtrT> tmp194;
    ca_.Bind(&block19, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 400);
    compiler::TNode<Number> tmp195;
    USE(tmp195);
    tmp195 = LoadDataView16_246(state_, compiler::TNode<JSArrayBuffer>{tmp188}, compiler::TNode<UintPtrT>{tmp194}, compiler::TNode<BoolT>{tmp187}, true);
    ca_.Goto(&block1, tmp181, tmp182, tmp183, tmp184, tmp195);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<JSDataView> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<BoolT> tmp202;
    compiler::TNode<JSArrayBuffer> tmp203;
    compiler::TNode<Float64T> tmp204;
    compiler::TNode<UintPtrT> tmp205;
    compiler::TNode<UintPtrT> tmp206;
    compiler::TNode<Float64T> tmp207;
    compiler::TNode<Float64T> tmp208;
    compiler::TNode<UintPtrT> tmp209;
    ca_.Bind(&block20, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 401);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block22, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209);
    } else {
      ca_.Goto(&block23, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<JSDataView> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<BoolT> tmp216;
    compiler::TNode<JSArrayBuffer> tmp217;
    compiler::TNode<Float64T> tmp218;
    compiler::TNode<UintPtrT> tmp219;
    compiler::TNode<UintPtrT> tmp220;
    compiler::TNode<Float64T> tmp221;
    compiler::TNode<Float64T> tmp222;
    compiler::TNode<UintPtrT> tmp223;
    ca_.Bind(&block22, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 402);
    compiler::TNode<Number> tmp224;
    USE(tmp224);
    tmp224 = LoadDataView32_247(state_, compiler::TNode<JSArrayBuffer>{tmp217}, compiler::TNode<UintPtrT>{tmp223}, compiler::TNode<BoolT>{tmp216}, p_kind);
    ca_.Goto(&block1, tmp210, tmp211, tmp212, tmp213, tmp224);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<JSDataView> tmp229;
    compiler::TNode<Number> tmp230;
    compiler::TNode<BoolT> tmp231;
    compiler::TNode<JSArrayBuffer> tmp232;
    compiler::TNode<Float64T> tmp233;
    compiler::TNode<UintPtrT> tmp234;
    compiler::TNode<UintPtrT> tmp235;
    compiler::TNode<Float64T> tmp236;
    compiler::TNode<Float64T> tmp237;
    compiler::TNode<UintPtrT> tmp238;
    ca_.Bind(&block23, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 403);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block25, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238);
    } else {
      ca_.Goto(&block26, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<JSDataView> tmp243;
    compiler::TNode<Number> tmp244;
    compiler::TNode<BoolT> tmp245;
    compiler::TNode<JSArrayBuffer> tmp246;
    compiler::TNode<Float64T> tmp247;
    compiler::TNode<UintPtrT> tmp248;
    compiler::TNode<UintPtrT> tmp249;
    compiler::TNode<Float64T> tmp250;
    compiler::TNode<Float64T> tmp251;
    compiler::TNode<UintPtrT> tmp252;
    ca_.Bind(&block25, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 404);
    compiler::TNode<Number> tmp253;
    USE(tmp253);
    tmp253 = LoadDataView32_247(state_, compiler::TNode<JSArrayBuffer>{tmp246}, compiler::TNode<UintPtrT>{tmp252}, compiler::TNode<BoolT>{tmp245}, p_kind);
    ca_.Goto(&block1, tmp239, tmp240, tmp241, tmp242, tmp253);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp254;
    compiler::TNode<Object> tmp255;
    compiler::TNode<Object> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<JSDataView> tmp258;
    compiler::TNode<Number> tmp259;
    compiler::TNode<BoolT> tmp260;
    compiler::TNode<JSArrayBuffer> tmp261;
    compiler::TNode<Float64T> tmp262;
    compiler::TNode<UintPtrT> tmp263;
    compiler::TNode<UintPtrT> tmp264;
    compiler::TNode<Float64T> tmp265;
    compiler::TNode<Float64T> tmp266;
    compiler::TNode<UintPtrT> tmp267;
    ca_.Bind(&block26, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 405);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block28, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267);
    } else {
      ca_.Goto(&block29, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267);
    }
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<Object> tmp270;
    compiler::TNode<Object> tmp271;
    compiler::TNode<JSDataView> tmp272;
    compiler::TNode<Number> tmp273;
    compiler::TNode<BoolT> tmp274;
    compiler::TNode<JSArrayBuffer> tmp275;
    compiler::TNode<Float64T> tmp276;
    compiler::TNode<UintPtrT> tmp277;
    compiler::TNode<UintPtrT> tmp278;
    compiler::TNode<Float64T> tmp279;
    compiler::TNode<Float64T> tmp280;
    compiler::TNode<UintPtrT> tmp281;
    ca_.Bind(&block28, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 406);
    compiler::TNode<Number> tmp282;
    USE(tmp282);
    tmp282 = LoadDataView32_247(state_, compiler::TNode<JSArrayBuffer>{tmp275}, compiler::TNode<UintPtrT>{tmp281}, compiler::TNode<BoolT>{tmp274}, p_kind);
    ca_.Goto(&block1, tmp268, tmp269, tmp270, tmp271, tmp282);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<Object> tmp285;
    compiler::TNode<Object> tmp286;
    compiler::TNode<JSDataView> tmp287;
    compiler::TNode<Number> tmp288;
    compiler::TNode<BoolT> tmp289;
    compiler::TNode<JSArrayBuffer> tmp290;
    compiler::TNode<Float64T> tmp291;
    compiler::TNode<UintPtrT> tmp292;
    compiler::TNode<UintPtrT> tmp293;
    compiler::TNode<Float64T> tmp294;
    compiler::TNode<Float64T> tmp295;
    compiler::TNode<UintPtrT> tmp296;
    ca_.Bind(&block29, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 407);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block31, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296);
    } else {
      ca_.Goto(&block32, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296);
    }
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp297;
    compiler::TNode<Object> tmp298;
    compiler::TNode<Object> tmp299;
    compiler::TNode<Object> tmp300;
    compiler::TNode<JSDataView> tmp301;
    compiler::TNode<Number> tmp302;
    compiler::TNode<BoolT> tmp303;
    compiler::TNode<JSArrayBuffer> tmp304;
    compiler::TNode<Float64T> tmp305;
    compiler::TNode<UintPtrT> tmp306;
    compiler::TNode<UintPtrT> tmp307;
    compiler::TNode<Float64T> tmp308;
    compiler::TNode<Float64T> tmp309;
    compiler::TNode<UintPtrT> tmp310;
    ca_.Bind(&block31, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 408);
    compiler::TNode<Number> tmp311;
    USE(tmp311);
    tmp311 = LoadDataViewFloat64_248(state_, compiler::TNode<JSArrayBuffer>{tmp304}, compiler::TNode<UintPtrT>{tmp310}, compiler::TNode<BoolT>{tmp303});
    ca_.Goto(&block1, tmp297, tmp298, tmp299, tmp300, tmp311);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp312;
    compiler::TNode<Object> tmp313;
    compiler::TNode<Object> tmp314;
    compiler::TNode<Object> tmp315;
    compiler::TNode<JSDataView> tmp316;
    compiler::TNode<Number> tmp317;
    compiler::TNode<BoolT> tmp318;
    compiler::TNode<JSArrayBuffer> tmp319;
    compiler::TNode<Float64T> tmp320;
    compiler::TNode<UintPtrT> tmp321;
    compiler::TNode<UintPtrT> tmp322;
    compiler::TNode<Float64T> tmp323;
    compiler::TNode<Float64T> tmp324;
    compiler::TNode<UintPtrT> tmp325;
    ca_.Bind(&block32, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 409);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block34, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325);
    } else {
      ca_.Goto(&block35, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp326;
    compiler::TNode<Object> tmp327;
    compiler::TNode<Object> tmp328;
    compiler::TNode<Object> tmp329;
    compiler::TNode<JSDataView> tmp330;
    compiler::TNode<Number> tmp331;
    compiler::TNode<BoolT> tmp332;
    compiler::TNode<JSArrayBuffer> tmp333;
    compiler::TNode<Float64T> tmp334;
    compiler::TNode<UintPtrT> tmp335;
    compiler::TNode<UintPtrT> tmp336;
    compiler::TNode<Float64T> tmp337;
    compiler::TNode<Float64T> tmp338;
    compiler::TNode<UintPtrT> tmp339;
    ca_.Bind(&block34, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 410);
    compiler::TNode<BigInt> tmp340;
    USE(tmp340);
    tmp340 = LoadDataViewBigInt_255(state_, compiler::TNode<Context>{tmp326}, compiler::TNode<JSArrayBuffer>{tmp333}, compiler::TNode<UintPtrT>{tmp339}, compiler::TNode<BoolT>{tmp332}, false);
    ca_.Goto(&block1, tmp326, tmp327, tmp328, tmp329, tmp340);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp341;
    compiler::TNode<Object> tmp342;
    compiler::TNode<Object> tmp343;
    compiler::TNode<Object> tmp344;
    compiler::TNode<JSDataView> tmp345;
    compiler::TNode<Number> tmp346;
    compiler::TNode<BoolT> tmp347;
    compiler::TNode<JSArrayBuffer> tmp348;
    compiler::TNode<Float64T> tmp349;
    compiler::TNode<UintPtrT> tmp350;
    compiler::TNode<UintPtrT> tmp351;
    compiler::TNode<Float64T> tmp352;
    compiler::TNode<Float64T> tmp353;
    compiler::TNode<UintPtrT> tmp354;
    ca_.Bind(&block35, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 411);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block37, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
    } else {
      ca_.Goto(&block38, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
    }
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp355;
    compiler::TNode<Object> tmp356;
    compiler::TNode<Object> tmp357;
    compiler::TNode<Object> tmp358;
    compiler::TNode<JSDataView> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<BoolT> tmp361;
    compiler::TNode<JSArrayBuffer> tmp362;
    compiler::TNode<Float64T> tmp363;
    compiler::TNode<UintPtrT> tmp364;
    compiler::TNode<UintPtrT> tmp365;
    compiler::TNode<Float64T> tmp366;
    compiler::TNode<Float64T> tmp367;
    compiler::TNode<UintPtrT> tmp368;
    ca_.Bind(&block37, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 412);
    compiler::TNode<BigInt> tmp369;
    USE(tmp369);
    tmp369 = LoadDataViewBigInt_255(state_, compiler::TNode<Context>{tmp355}, compiler::TNode<JSArrayBuffer>{tmp362}, compiler::TNode<UintPtrT>{tmp368}, compiler::TNode<BoolT>{tmp361}, true);
    ca_.Goto(&block1, tmp355, tmp356, tmp357, tmp358, tmp369);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp370;
    compiler::TNode<Object> tmp371;
    compiler::TNode<Object> tmp372;
    compiler::TNode<Object> tmp373;
    compiler::TNode<JSDataView> tmp374;
    compiler::TNode<Number> tmp375;
    compiler::TNode<BoolT> tmp376;
    compiler::TNode<JSArrayBuffer> tmp377;
    compiler::TNode<Float64T> tmp378;
    compiler::TNode<UintPtrT> tmp379;
    compiler::TNode<UintPtrT> tmp380;
    compiler::TNode<Float64T> tmp381;
    compiler::TNode<Float64T> tmp382;
    compiler::TNode<UintPtrT> tmp383;
    ca_.Bind(&block38, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 414);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<Object> tmp385;
    compiler::TNode<Object> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Numeric> tmp388;
    ca_.Bind(&block1, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 359);
    ca_.Goto(&block40, tmp384, tmp385, tmp386, tmp387, tmp388);
  }

    compiler::TNode<Context> tmp389;
    compiler::TNode<Object> tmp390;
    compiler::TNode<Object> tmp391;
    compiler::TNode<Object> tmp392;
    compiler::TNode<Numeric> tmp393;
    ca_.Bind(&block40, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393);
  return compiler::TNode<Numeric>{tmp393};
}

TF_BUILTIN(DataViewPrototypeGetUint8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 420);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 421);
    compiler::TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_66(state_);
    compiler::TNode<Numeric> tmp33;
    USE(tmp33);
    tmp33 = DataViewGet_256(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<Object>{tmp30}, compiler::TNode<Object>{tmp31}, compiler::TNode<Object>{tmp32}, UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp33);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 426);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 427);
    compiler::TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_66(state_);
    compiler::TNode<Numeric> tmp33;
    USE(tmp33);
    tmp33 = DataViewGet_256(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<Object>{tmp30}, compiler::TNode<Object>{tmp31}, compiler::TNode<Object>{tmp32}, INT8_ELEMENTS);
    arguments.PopAndReturn(tmp33);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 432);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 434);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 433);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 436);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 435);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 441);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 443);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 442);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 445);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 444);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, INT16_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 450);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 452);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 451);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 454);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 453);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 459);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 461);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 460);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 463);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 462);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, INT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 468);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 470);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 469);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 472);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 471);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 477);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 479);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 478);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 481);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 480);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 486);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 488);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 487);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 490);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 489);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 495);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 497);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 496);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 499);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 498);
    compiler::TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_256(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

void StoreDataView8_257(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 510);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    compiler::TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp5});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 509);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp7;
    compiler::TNode<UintPtrT> tmp8;
    compiler::TNode<Uint32T> tmp9;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp7, tmp8, tmp9);
  }

    compiler::TNode<JSArrayBuffer> tmp10;
    compiler::TNode<UintPtrT> tmp11;
    compiler::TNode<Uint32T> tmp12;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12);
}

void StoreDataView16_258(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 516);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    compiler::TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 518);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 519);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp8});
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp9}, compiler::TNode<Uint32T>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 521);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp7, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp12;
    compiler::TNode<UintPtrT> tmp13;
    compiler::TNode<Uint32T> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<Uint32T> tmp17;
    compiler::TNode<Uint32T> tmp18;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 522);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp16}, compiler::TNode<UintPtrT>{tmp13}, compiler::TNode<Uint32T>{tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 523);
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp13}, compiler::TNode<UintPtrT>{tmp19});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp16}, compiler::TNode<UintPtrT>{tmp20}, compiler::TNode<Uint32T>{tmp18});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 521);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp21;
    compiler::TNode<UintPtrT> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<Uint32T> tmp26;
    compiler::TNode<Uint32T> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 525);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp25}, compiler::TNode<UintPtrT>{tmp22}, compiler::TNode<Uint32T>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 526);
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp28});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp25}, compiler::TNode<UintPtrT>{tmp29}, compiler::TNode<Uint32T>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 521);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp30;
    compiler::TNode<UintPtrT> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<BoolT> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    ca_.Bind(&block4, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 515);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 513);
    ca_.Goto(&block1, tmp30, tmp31, tmp32, tmp33);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp37;
    compiler::TNode<UintPtrT> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<BoolT> tmp40;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp37, tmp38, tmp39, tmp40);
  }

    compiler::TNode<JSArrayBuffer> tmp41;
    compiler::TNode<UintPtrT> tmp42;
    compiler::TNode<Uint32T> tmp43;
    compiler::TNode<BoolT> tmp44;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44);
}

void StoreDataView32_259(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 533);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    compiler::TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 535);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 536);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp8});
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp9}, compiler::TNode<Uint32T>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 537);
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp12});
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp13}, compiler::TNode<Uint32T>{tmp14});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 538);
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp16});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 540);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp7, tmp11, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp18;
    compiler::TNode<UintPtrT> tmp19;
    compiler::TNode<Uint32T> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<Uint32T> tmp24;
    compiler::TNode<Uint32T> tmp25;
    compiler::TNode<Uint32T> tmp26;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 541);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp19}, compiler::TNode<Uint32T>{tmp23});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 542);
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp19}, compiler::TNode<UintPtrT>{tmp27});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp28}, compiler::TNode<Uint32T>{tmp24});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 543);
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp19}, compiler::TNode<UintPtrT>{tmp29});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp30}, compiler::TNode<Uint32T>{tmp25});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 544);
    compiler::TNode<UintPtrT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp19}, compiler::TNode<UintPtrT>{tmp31});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<Uint32T>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 540);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp33;
    compiler::TNode<UintPtrT> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<BoolT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 546);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp37}, compiler::TNode<UintPtrT>{tmp34}, compiler::TNode<Uint32T>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 547);
    compiler::TNode<UintPtrT> tmp42;
    USE(tmp42);
    tmp42 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp34}, compiler::TNode<UintPtrT>{tmp42});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp37}, compiler::TNode<UintPtrT>{tmp43}, compiler::TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 548);
    compiler::TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp34}, compiler::TNode<UintPtrT>{tmp44});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp37}, compiler::TNode<UintPtrT>{tmp45}, compiler::TNode<Uint32T>{tmp39});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 549);
    compiler::TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp34}, compiler::TNode<UintPtrT>{tmp46});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp37}, compiler::TNode<UintPtrT>{tmp47}, compiler::TNode<Uint32T>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 540);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp48;
    compiler::TNode<UintPtrT> tmp49;
    compiler::TNode<Uint32T> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<Uint32T> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<Uint32T> tmp55;
    compiler::TNode<Uint32T> tmp56;
    ca_.Bind(&block4, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 532);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 530);
    ca_.Goto(&block1, tmp48, tmp49, tmp50, tmp51);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp57;
    compiler::TNode<UintPtrT> tmp58;
    compiler::TNode<Uint32T> tmp59;
    compiler::TNode<BoolT> tmp60;
    ca_.Bind(&block1, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.Goto(&block5, tmp57, tmp58, tmp59, tmp60);
  }

    compiler::TNode<JSArrayBuffer> tmp61;
    compiler::TNode<UintPtrT> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<BoolT> tmp64;
    ca_.Bind(&block5, &tmp61, &tmp62, &tmp63, &tmp64);
}

void StoreDataView64_260(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_lowWord, p_highWord, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<BoolT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 556);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp5);
    compiler::TNode<RawPtrT>tmp6 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 558);
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp7});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 559);
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp9});
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp10}, compiler::TNode<Uint32T>{tmp11});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 560);
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp13});
    compiler::TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp14}, compiler::TNode<Uint32T>{tmp15});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 561);
    compiler::TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp17});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 563);
    compiler::TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp19});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 564);
    compiler::TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 8);
    compiler::TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp21});
    compiler::TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp22}, compiler::TNode<Uint32T>{tmp23});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 565);
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 16);
    compiler::TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp25});
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0xFF);
    compiler::TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp26}, compiler::TNode<Uint32T>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 566);
    compiler::TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 24);
    compiler::TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp29});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 568);
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp12, tmp16, tmp18, tmp20, tmp24, tmp28, tmp30);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp31;
    compiler::TNode<UintPtrT> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    compiler::TNode<Uint32T> tmp42;
    compiler::TNode<Uint32T> tmp43;
    compiler::TNode<Uint32T> tmp44;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 569);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<Uint32T>{tmp37});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 570);
    compiler::TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp45});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp46}, compiler::TNode<Uint32T>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 571);
    compiler::TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp47});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp48}, compiler::TNode<Uint32T>{tmp39});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 572);
    compiler::TNode<UintPtrT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp49});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp50}, compiler::TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 573);
    compiler::TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 4);
    compiler::TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp51});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp52}, compiler::TNode<Uint32T>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 574);
    compiler::TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 5);
    compiler::TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp53});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp54}, compiler::TNode<Uint32T>{tmp42});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 575);
    compiler::TNode<UintPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 6);
    compiler::TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp55});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp56}, compiler::TNode<Uint32T>{tmp43});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 576);
    compiler::TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 7);
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp32}, compiler::TNode<UintPtrT>{tmp57});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp58}, compiler::TNode<Uint32T>{tmp44});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 568);
    ca_.Goto(&block4, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<Uint32T> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<BoolT> tmp63;
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    compiler::TNode<Uint32T> tmp72;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 578);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<Uint32T>{tmp72});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 579);
    compiler::TNode<UintPtrT> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp73});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp74}, compiler::TNode<Uint32T>{tmp71});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 580);
    compiler::TNode<UintPtrT> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 2);
    compiler::TNode<UintPtrT> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp75});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp76}, compiler::TNode<Uint32T>{tmp70});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 581);
    compiler::TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 3);
    compiler::TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp77});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp78}, compiler::TNode<Uint32T>{tmp69});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 582);
    compiler::TNode<UintPtrT> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 4);
    compiler::TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp79});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp80}, compiler::TNode<Uint32T>{tmp68});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 583);
    compiler::TNode<UintPtrT> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 5);
    compiler::TNode<UintPtrT> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp81});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp82}, compiler::TNode<Uint32T>{tmp67});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 584);
    compiler::TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 6);
    compiler::TNode<UintPtrT> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp83});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp84}, compiler::TNode<Uint32T>{tmp66});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 585);
    compiler::TNode<UintPtrT> tmp85;
    USE(tmp85);
    tmp85 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 7);
    compiler::TNode<UintPtrT> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp85});
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp64}, compiler::TNode<UintPtrT>{tmp86}, compiler::TNode<Uint32T>{tmp65});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 568);
    ca_.Goto(&block4, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp87;
    compiler::TNode<UintPtrT> tmp88;
    compiler::TNode<Uint32T> tmp89;
    compiler::TNode<Uint32T> tmp90;
    compiler::TNode<BoolT> tmp91;
    compiler::TNode<RawPtrT> tmp92;
    compiler::TNode<Uint32T> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    ca_.Bind(&block4, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 555);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 553);
    ca_.Goto(&block1, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp101;
    compiler::TNode<UintPtrT> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<Uint32T> tmp104;
    compiler::TNode<BoolT> tmp105;
    ca_.Bind(&block1, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block5, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    compiler::TNode<JSArrayBuffer> tmp106;
    compiler::TNode<UintPtrT> tmp107;
    compiler::TNode<Uint32T> tmp108;
    compiler::TNode<Uint32T> tmp109;
    compiler::TNode<BoolT> tmp110;
    ca_.Bind(&block5, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
}

void StoreDataViewBigInt_261(compiler::CodeAssemblerState* state_, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BigInt> p_bigIntValue, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_bigIntValue, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BigInt> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 600);
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntLength(compiler::TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 601);
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntSign(compiler::TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 605);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 606);
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 609);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp4}, compiler::TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp10;
    compiler::TNode<UintPtrT> tmp11;
    compiler::TNode<BigInt> tmp12;
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<Uint32T> tmp14;
    compiler::TNode<Uint32T> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<Uint32T> tmp17;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 610);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    } else {
      ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp18;
    compiler::TNode<UintPtrT> tmp19;
    compiler::TNode<BigInt> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<Uint32T> tmp24;
    compiler::TNode<Uint32T> tmp25;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 612);
    compiler::TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp20}, compiler::TNode<IntPtrT>{tmp26});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 613);
    compiler::TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = Convert8ATuint329ATuintptr_159(state_, compiler::TNode<UintPtrT>{tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 614);
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 32);
    compiler::TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp27}, compiler::TNode<UintPtrT>{tmp29});
    compiler::TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = Convert8ATuint329ATuintptr_159(state_, compiler::TNode<UintPtrT>{tmp30});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 610);
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp28, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp32;
    compiler::TNode<UintPtrT> tmp33;
    compiler::TNode<BigInt> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    ca_.Bind(&block5, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 616);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<UintPtrT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp34}, compiler::TNode<IntPtrT>{tmp40});
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = Convert8ATuint329ATuintptr_159(state_, compiler::TNode<UintPtrT>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 617);
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 2);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp43});
    ca_.Branch(tmp44, &block7, &block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp42, tmp39);
  }

  if (block7.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    compiler::TNode<BigInt> tmp47;
    compiler::TNode<BoolT> tmp48;
    compiler::TNode<Uint32T> tmp49;
    compiler::TNode<Uint32T> tmp50;
    compiler::TNode<Uint32T> tmp51;
    compiler::TNode<Uint32T> tmp52;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 618);
    compiler::TNode<IntPtrT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp47}, compiler::TNode<IntPtrT>{tmp53});
    compiler::TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = Convert8ATuint329ATuintptr_159(state_, compiler::TNode<UintPtrT>{tmp54});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 617);
    ca_.Goto(&block8, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp55);
  }

  if (block8.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp56;
    compiler::TNode<UintPtrT> tmp57;
    compiler::TNode<BigInt> tmp58;
    compiler::TNode<BoolT> tmp59;
    compiler::TNode<Uint32T> tmp60;
    compiler::TNode<Uint32T> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<Uint32T> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 610);
    ca_.Goto(&block6, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp64;
    compiler::TNode<UintPtrT> tmp65;
    compiler::TNode<BigInt> tmp66;
    compiler::TNode<BoolT> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    ca_.Bind(&block6, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 609);
    ca_.Goto(&block3, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp72;
    compiler::TNode<UintPtrT> tmp73;
    compiler::TNode<BigInt> tmp74;
    compiler::TNode<BoolT> tmp75;
    compiler::TNode<Uint32T> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<Uint32T> tmp78;
    compiler::TNode<Uint32T> tmp79;
    ca_.Bind(&block3, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 623);
    compiler::TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp77}, compiler::TNode<Uint32T>{tmp80});
    ca_.Branch(tmp81, &block9, &block10, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

  if (block9.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp82;
    compiler::TNode<UintPtrT> tmp83;
    compiler::TNode<BigInt> tmp84;
    compiler::TNode<BoolT> tmp85;
    compiler::TNode<Uint32T> tmp86;
    compiler::TNode<Uint32T> tmp87;
    compiler::TNode<Uint32T> tmp88;
    compiler::TNode<Uint32T> tmp89;
    ca_.Bind(&block9, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 624);
    compiler::TNode<Int32T> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp89});
    compiler::TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<Int32T> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp91}, compiler::TNode<Int32T>{tmp90});
    compiler::TNode<Uint32T> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp92});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 625);
    compiler::TNode<Uint32T> tmp94;
    USE(tmp94);
    tmp94 = FromConstexpr8ATuint3217ATconstexpr_int31_136(state_, 0);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp88}, compiler::TNode<Uint32T>{tmp94});
    ca_.Branch(tmp95, &block11, &block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp93);
  }

  if (block11.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp96;
    compiler::TNode<UintPtrT> tmp97;
    compiler::TNode<BigInt> tmp98;
    compiler::TNode<BoolT> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Uint32T> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    ca_.Bind(&block11, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 626);
    compiler::TNode<Int32T> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp103});
    compiler::TNode<Int32T> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 1);
    compiler::TNode<Int32T> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp104}, compiler::TNode<Int32T>{tmp105});
    compiler::TNode<Uint32T> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp106});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 625);
    ca_.Goto(&block12, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp107);
  }

  if (block12.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp108;
    compiler::TNode<UintPtrT> tmp109;
    compiler::TNode<BigInt> tmp110;
    compiler::TNode<BoolT> tmp111;
    compiler::TNode<Uint32T> tmp112;
    compiler::TNode<Uint32T> tmp113;
    compiler::TNode<Uint32T> tmp114;
    compiler::TNode<Uint32T> tmp115;
    ca_.Bind(&block12, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 628);
    compiler::TNode<Int32T> tmp116;
    USE(tmp116);
    tmp116 = CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp114});
    compiler::TNode<Int32T> tmp117;
    USE(tmp117);
    tmp117 = FromConstexpr7ATint3217ATconstexpr_int31_121(state_, 0);
    compiler::TNode<Int32T> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp117}, compiler::TNode<Int32T>{tmp116});
    compiler::TNode<Uint32T> tmp119;
    USE(tmp119);
    tmp119 = CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp118});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 623);
    ca_.Goto(&block10, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp119, tmp115);
  }

  if (block10.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp120;
    compiler::TNode<UintPtrT> tmp121;
    compiler::TNode<BigInt> tmp122;
    compiler::TNode<BoolT> tmp123;
    compiler::TNode<Uint32T> tmp124;
    compiler::TNode<Uint32T> tmp125;
    compiler::TNode<Uint32T> tmp126;
    compiler::TNode<Uint32T> tmp127;
    ca_.Bind(&block10, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 631);
    StoreDataView64_260(state_, compiler::TNode<JSArrayBuffer>{tmp120}, compiler::TNode<UintPtrT>{tmp121}, compiler::TNode<Uint32T>{tmp126}, compiler::TNode<Uint32T>{tmp127}, compiler::TNode<BoolT>{tmp123});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 599);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 597);
    ca_.Goto(&block1, tmp120, tmp121, tmp122, tmp123);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp128;
    compiler::TNode<UintPtrT> tmp129;
    compiler::TNode<BigInt> tmp130;
    compiler::TNode<BoolT> tmp131;
    ca_.Bind(&block1, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.Goto(&block13, tmp128, tmp129, tmp130, tmp131);
  }

    compiler::TNode<JSArrayBuffer> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<BigInt> tmp134;
    compiler::TNode<BoolT> tmp135;
    ca_.Bind(&block13, &tmp132, &tmp133, &tmp134, &tmp135);
}

compiler::TNode<Object> DataViewSet_262(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_value, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 638);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = MakeDataViewSetterNameString_242(state_, p_kind);
    compiler::TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_244(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 637);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 640);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 642);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = ToIndex_216(state_, compiler::TNode<Object>{tmp2}, compiler::TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSDataView> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Context> tmp16;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSDataView> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Context> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 644);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSDataView> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block3, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 645);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp27}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSDataView> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 648);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ToBoolean_214(state_, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 649);
    compiler::TNode<IntPtrT> tmp42 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp42);
    compiler::TNode<JSArrayBuffer>tmp43 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp39, tmp42});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 653);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))))) {
      ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
    } else {
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSDataView> tmp49;
    compiler::TNode<Number> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<JSArrayBuffer> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 654);
    compiler::TNode<BigInt> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).ToBigInt(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp47});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 656);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp52});
    ca_.Branch(tmp54, &block10, &block11, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSDataView> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<BoolT> tmp62;
    compiler::TNode<JSArrayBuffer> tmp63;
    compiler::TNode<BigInt> tmp64;
    ca_.Bind(&block10, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 657);
    compiler::TNode<String> tmp65;
    USE(tmp65);
    tmp65 = MakeDataViewSetterNameString_242(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp55}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp65});
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<JSDataView> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<BoolT> tmp73;
    compiler::TNode<JSArrayBuffer> tmp74;
    compiler::TNode<BigInt> tmp75;
    ca_.Bind(&block11, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 660);
    compiler::TNode<Float64T> tmp76;
    USE(tmp76);
    tmp76 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp72});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 661);
    compiler::TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = Convert9ATuintptr9ATfloat64_176(state_, compiler::TNode<Float64T>{tmp76});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 663);
    compiler::TNode<IntPtrT> tmp78 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp78);
    compiler::TNode<UintPtrT>tmp79 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp71, tmp78});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 664);
    compiler::TNode<IntPtrT> tmp80 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp80);
    compiler::TNode<UintPtrT>tmp81 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp71, tmp80});
    compiler::TNode<Float64T> tmp82;
    USE(tmp82);
    tmp82 = Convert9ATfloat649ATuintptr_174(state_, compiler::TNode<UintPtrT>{tmp81});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 665);
    compiler::TNode<Float64T> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 667);
    compiler::TNode<Float64T> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp76}, compiler::TNode<Float64T>{tmp83});
    compiler::TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp84}, compiler::TNode<Float64T>{tmp82});
    ca_.Branch(tmp85, &block12, &block13, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79, tmp82, tmp83);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<JSDataView> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<BoolT> tmp93;
    compiler::TNode<JSArrayBuffer> tmp94;
    compiler::TNode<BigInt> tmp95;
    compiler::TNode<Float64T> tmp96;
    compiler::TNode<UintPtrT> tmp97;
    compiler::TNode<UintPtrT> tmp98;
    compiler::TNode<Float64T> tmp99;
    compiler::TNode<Float64T> tmp100;
    ca_.Bind(&block12, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 668);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp86}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<JSDataView> tmp106;
    compiler::TNode<Number> tmp107;
    compiler::TNode<BoolT> tmp108;
    compiler::TNode<JSArrayBuffer> tmp109;
    compiler::TNode<BigInt> tmp110;
    compiler::TNode<Float64T> tmp111;
    compiler::TNode<UintPtrT> tmp112;
    compiler::TNode<UintPtrT> tmp113;
    compiler::TNode<Float64T> tmp114;
    compiler::TNode<Float64T> tmp115;
    ca_.Bind(&block13, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 671);
    compiler::TNode<UintPtrT> tmp116;
    USE(tmp116);
    tmp116 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp112}, compiler::TNode<UintPtrT>{tmp113});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 672);
    StoreDataViewBigInt_261(state_, compiler::TNode<JSArrayBuffer>{tmp109}, compiler::TNode<UintPtrT>{tmp116}, compiler::TNode<BigInt>{tmp110}, compiler::TNode<BoolT>{tmp108});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 653);
    ca_.Goto(&block9, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSDataView> tmp122;
    compiler::TNode<Number> tmp123;
    compiler::TNode<BoolT> tmp124;
    compiler::TNode<JSArrayBuffer> tmp125;
    ca_.Bind(&block8, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 674);
    compiler::TNode<Number> tmp126;
    USE(tmp126);
    tmp126 = CodeStubAssembler(state_).ToNumber(compiler::TNode<Context>{tmp117}, compiler::TNode<Object>{tmp120});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 676);
    compiler::TNode<BoolT> tmp127;
    USE(tmp127);
    tmp127 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp125});
    ca_.Branch(tmp127, &block14, &block15, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSDataView> tmp133;
    compiler::TNode<Number> tmp134;
    compiler::TNode<BoolT> tmp135;
    compiler::TNode<JSArrayBuffer> tmp136;
    compiler::TNode<Number> tmp137;
    ca_.Bind(&block14, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 677);
    compiler::TNode<String> tmp138;
    USE(tmp138);
    tmp138 = MakeDataViewSetterNameString_242(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp128}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp138});
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<JSDataView> tmp144;
    compiler::TNode<Number> tmp145;
    compiler::TNode<BoolT> tmp146;
    compiler::TNode<JSArrayBuffer> tmp147;
    compiler::TNode<Number> tmp148;
    ca_.Bind(&block15, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 680);
    compiler::TNode<Float64T> tmp149;
    USE(tmp149);
    tmp149 = Convert9ATfloat6420UT5ATSmi10HeapNumber_168(state_, compiler::TNode<Number>{tmp145});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 681);
    compiler::TNode<UintPtrT> tmp150;
    USE(tmp150);
    tmp150 = Convert9ATuintptr9ATfloat64_176(state_, compiler::TNode<Float64T>{tmp149});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 683);
    compiler::TNode<IntPtrT> tmp151 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp151);
    compiler::TNode<UintPtrT>tmp152 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp144, tmp151});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 684);
    compiler::TNode<IntPtrT> tmp153 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp153);
    compiler::TNode<UintPtrT>tmp154 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp144, tmp153});
    compiler::TNode<Float64T> tmp155;
    USE(tmp155);
    tmp155 = Convert9ATfloat649ATuintptr_174(state_, compiler::TNode<UintPtrT>{tmp154});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 685);
    compiler::TNode<Float64T> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr9ATfloat6417ATconstexpr_int31_138(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 687);
    compiler::TNode<Float64T> tmp157;
    USE(tmp157);
    tmp157 = CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp149}, compiler::TNode<Float64T>{tmp156});
    compiler::TNode<BoolT> tmp158;
    USE(tmp158);
    tmp158 = CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp157}, compiler::TNode<Float64T>{tmp155});
    ca_.Branch(tmp158, &block16, &block17, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp152, tmp155, tmp156);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<JSDataView> tmp164;
    compiler::TNode<Number> tmp165;
    compiler::TNode<BoolT> tmp166;
    compiler::TNode<JSArrayBuffer> tmp167;
    compiler::TNode<Number> tmp168;
    compiler::TNode<Float64T> tmp169;
    compiler::TNode<UintPtrT> tmp170;
    compiler::TNode<UintPtrT> tmp171;
    compiler::TNode<Float64T> tmp172;
    compiler::TNode<Float64T> tmp173;
    ca_.Bind(&block16, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 688);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp159}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<JSDataView> tmp179;
    compiler::TNode<Number> tmp180;
    compiler::TNode<BoolT> tmp181;
    compiler::TNode<JSArrayBuffer> tmp182;
    compiler::TNode<Number> tmp183;
    compiler::TNode<Float64T> tmp184;
    compiler::TNode<UintPtrT> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<Float64T> tmp187;
    compiler::TNode<Float64T> tmp188;
    ca_.Bind(&block17, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 691);
    compiler::TNode<UintPtrT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp185}, compiler::TNode<UintPtrT>{tmp186});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 693);
    compiler::TNode<Float64T> tmp190;
    USE(tmp190);
    tmp190 = CodeStubAssembler(state_).ChangeNumberToFloat64(compiler::TNode<Number>{tmp183});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 695);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS))))) {
      ca_.Goto(&block19, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
    } else {
      ca_.Goto(&block20, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<JSDataView> tmp196;
    compiler::TNode<Number> tmp197;
    compiler::TNode<BoolT> tmp198;
    compiler::TNode<JSArrayBuffer> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Float64T> tmp201;
    compiler::TNode<UintPtrT> tmp202;
    compiler::TNode<UintPtrT> tmp203;
    compiler::TNode<Float64T> tmp204;
    compiler::TNode<Float64T> tmp205;
    compiler::TNode<UintPtrT> tmp206;
    compiler::TNode<Float64T> tmp207;
    ca_.Bind(&block19, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 697);
    compiler::TNode<Uint32T> tmp208;
    USE(tmp208);
    tmp208 = CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp207});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 696);
    StoreDataView8_257(state_, compiler::TNode<JSArrayBuffer>{tmp199}, compiler::TNode<UintPtrT>{tmp206}, compiler::TNode<Uint32T>{tmp208});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 695);
    ca_.Goto(&block21, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<JSDataView> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<BoolT> tmp216;
    compiler::TNode<JSArrayBuffer> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Float64T> tmp219;
    compiler::TNode<UintPtrT> tmp220;
    compiler::TNode<UintPtrT> tmp221;
    compiler::TNode<Float64T> tmp222;
    compiler::TNode<Float64T> tmp223;
    compiler::TNode<UintPtrT> tmp224;
    compiler::TNode<Float64T> tmp225;
    ca_.Bind(&block20, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 698);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS))))) {
      ca_.Goto(&block23, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225);
    } else {
      ca_.Goto(&block24, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<JSDataView> tmp231;
    compiler::TNode<Number> tmp232;
    compiler::TNode<BoolT> tmp233;
    compiler::TNode<JSArrayBuffer> tmp234;
    compiler::TNode<Number> tmp235;
    compiler::TNode<Float64T> tmp236;
    compiler::TNode<UintPtrT> tmp237;
    compiler::TNode<UintPtrT> tmp238;
    compiler::TNode<Float64T> tmp239;
    compiler::TNode<Float64T> tmp240;
    compiler::TNode<UintPtrT> tmp241;
    compiler::TNode<Float64T> tmp242;
    ca_.Bind(&block23, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 700);
    compiler::TNode<Uint32T> tmp243;
    USE(tmp243);
    tmp243 = CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp242});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 701);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 699);
    StoreDataView16_258(state_, compiler::TNode<JSArrayBuffer>{tmp234}, compiler::TNode<UintPtrT>{tmp241}, compiler::TNode<Uint32T>{tmp243}, compiler::TNode<BoolT>{tmp233});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 698);
    ca_.Goto(&block25, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<Object> tmp247;
    compiler::TNode<Object> tmp248;
    compiler::TNode<JSDataView> tmp249;
    compiler::TNode<Number> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<JSArrayBuffer> tmp252;
    compiler::TNode<Number> tmp253;
    compiler::TNode<Float64T> tmp254;
    compiler::TNode<UintPtrT> tmp255;
    compiler::TNode<UintPtrT> tmp256;
    compiler::TNode<Float64T> tmp257;
    compiler::TNode<Float64T> tmp258;
    compiler::TNode<UintPtrT> tmp259;
    compiler::TNode<Float64T> tmp260;
    ca_.Bind(&block24, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 702);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))))) {
      ca_.Goto(&block27, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260);
    } else {
      ca_.Goto(&block28, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260);
    }
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp261;
    compiler::TNode<Object> tmp262;
    compiler::TNode<Object> tmp263;
    compiler::TNode<Object> tmp264;
    compiler::TNode<Object> tmp265;
    compiler::TNode<JSDataView> tmp266;
    compiler::TNode<Number> tmp267;
    compiler::TNode<BoolT> tmp268;
    compiler::TNode<JSArrayBuffer> tmp269;
    compiler::TNode<Number> tmp270;
    compiler::TNode<Float64T> tmp271;
    compiler::TNode<UintPtrT> tmp272;
    compiler::TNode<UintPtrT> tmp273;
    compiler::TNode<Float64T> tmp274;
    compiler::TNode<Float64T> tmp275;
    compiler::TNode<UintPtrT> tmp276;
    compiler::TNode<Float64T> tmp277;
    ca_.Bind(&block27, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 704);
    compiler::TNode<Uint32T> tmp278;
    USE(tmp278);
    tmp278 = CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp277});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 705);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 703);
    StoreDataView32_259(state_, compiler::TNode<JSArrayBuffer>{tmp269}, compiler::TNode<UintPtrT>{tmp276}, compiler::TNode<Uint32T>{tmp278}, compiler::TNode<BoolT>{tmp268});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 702);
    ca_.Goto(&block29, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp279;
    compiler::TNode<Object> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<Object> tmp282;
    compiler::TNode<Object> tmp283;
    compiler::TNode<JSDataView> tmp284;
    compiler::TNode<Number> tmp285;
    compiler::TNode<BoolT> tmp286;
    compiler::TNode<JSArrayBuffer> tmp287;
    compiler::TNode<Number> tmp288;
    compiler::TNode<Float64T> tmp289;
    compiler::TNode<UintPtrT> tmp290;
    compiler::TNode<UintPtrT> tmp291;
    compiler::TNode<Float64T> tmp292;
    compiler::TNode<Float64T> tmp293;
    compiler::TNode<UintPtrT> tmp294;
    compiler::TNode<Float64T> tmp295;
    ca_.Bind(&block28, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 706);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block30, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
    } else {
      ca_.Goto(&block31, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
    }
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<Object> tmp298;
    compiler::TNode<Object> tmp299;
    compiler::TNode<Object> tmp300;
    compiler::TNode<JSDataView> tmp301;
    compiler::TNode<Number> tmp302;
    compiler::TNode<BoolT> tmp303;
    compiler::TNode<JSArrayBuffer> tmp304;
    compiler::TNode<Number> tmp305;
    compiler::TNode<Float64T> tmp306;
    compiler::TNode<UintPtrT> tmp307;
    compiler::TNode<UintPtrT> tmp308;
    compiler::TNode<Float64T> tmp309;
    compiler::TNode<Float64T> tmp310;
    compiler::TNode<UintPtrT> tmp311;
    compiler::TNode<Float64T> tmp312;
    ca_.Bind(&block30, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 707);
    compiler::TNode<Float32T> tmp313;
    USE(tmp313);
    tmp313 = CodeStubAssembler(state_).TruncateFloat64ToFloat32(compiler::TNode<Float64T>{tmp312});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 709);
    compiler::TNode<Uint32T> tmp314;
    USE(tmp314);
    tmp314 = CodeStubAssembler(state_).BitcastFloat32ToInt32(compiler::TNode<Float32T>{tmp313});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 710);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 708);
    StoreDataView32_259(state_, compiler::TNode<JSArrayBuffer>{tmp304}, compiler::TNode<UintPtrT>{tmp311}, compiler::TNode<Uint32T>{tmp314}, compiler::TNode<BoolT>{tmp303});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 706);
    ca_.Goto(&block32, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp315;
    compiler::TNode<Object> tmp316;
    compiler::TNode<Object> tmp317;
    compiler::TNode<Object> tmp318;
    compiler::TNode<Object> tmp319;
    compiler::TNode<JSDataView> tmp320;
    compiler::TNode<Number> tmp321;
    compiler::TNode<BoolT> tmp322;
    compiler::TNode<JSArrayBuffer> tmp323;
    compiler::TNode<Number> tmp324;
    compiler::TNode<Float64T> tmp325;
    compiler::TNode<UintPtrT> tmp326;
    compiler::TNode<UintPtrT> tmp327;
    compiler::TNode<Float64T> tmp328;
    compiler::TNode<Float64T> tmp329;
    compiler::TNode<UintPtrT> tmp330;
    compiler::TNode<Float64T> tmp331;
    ca_.Bind(&block31, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 711);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block33, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331);
    } else {
      ca_.Goto(&block34, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331);
    }
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<Object> tmp335;
    compiler::TNode<Object> tmp336;
    compiler::TNode<JSDataView> tmp337;
    compiler::TNode<Number> tmp338;
    compiler::TNode<BoolT> tmp339;
    compiler::TNode<JSArrayBuffer> tmp340;
    compiler::TNode<Number> tmp341;
    compiler::TNode<Float64T> tmp342;
    compiler::TNode<UintPtrT> tmp343;
    compiler::TNode<UintPtrT> tmp344;
    compiler::TNode<Float64T> tmp345;
    compiler::TNode<Float64T> tmp346;
    compiler::TNode<UintPtrT> tmp347;
    compiler::TNode<Float64T> tmp348;
    ca_.Bind(&block33, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 712);
    compiler::TNode<Uint32T> tmp349;
    USE(tmp349);
    tmp349 = CodeStubAssembler(state_).Float64ExtractLowWord32(compiler::TNode<Float64T>{tmp348});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 713);
    compiler::TNode<Uint32T> tmp350;
    USE(tmp350);
    tmp350 = CodeStubAssembler(state_).Float64ExtractHighWord32(compiler::TNode<Float64T>{tmp348});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 714);
    StoreDataView64_260(state_, compiler::TNode<JSArrayBuffer>{tmp340}, compiler::TNode<UintPtrT>{tmp347}, compiler::TNode<Uint32T>{tmp349}, compiler::TNode<Uint32T>{tmp350}, compiler::TNode<BoolT>{tmp339});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 711);
    ca_.Goto(&block35, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp351;
    compiler::TNode<Object> tmp352;
    compiler::TNode<Object> tmp353;
    compiler::TNode<Object> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<JSDataView> tmp356;
    compiler::TNode<Number> tmp357;
    compiler::TNode<BoolT> tmp358;
    compiler::TNode<JSArrayBuffer> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<Float64T> tmp361;
    compiler::TNode<UintPtrT> tmp362;
    compiler::TNode<UintPtrT> tmp363;
    compiler::TNode<Float64T> tmp364;
    compiler::TNode<Float64T> tmp365;
    compiler::TNode<UintPtrT> tmp366;
    compiler::TNode<Float64T> tmp367;
    ca_.Bind(&block34, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.Goto(&block35, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp368;
    compiler::TNode<Object> tmp369;
    compiler::TNode<Object> tmp370;
    compiler::TNode<Object> tmp371;
    compiler::TNode<Object> tmp372;
    compiler::TNode<JSDataView> tmp373;
    compiler::TNode<Number> tmp374;
    compiler::TNode<BoolT> tmp375;
    compiler::TNode<JSArrayBuffer> tmp376;
    compiler::TNode<Number> tmp377;
    compiler::TNode<Float64T> tmp378;
    compiler::TNode<UintPtrT> tmp379;
    compiler::TNode<UintPtrT> tmp380;
    compiler::TNode<Float64T> tmp381;
    compiler::TNode<Float64T> tmp382;
    compiler::TNode<UintPtrT> tmp383;
    compiler::TNode<Float64T> tmp384;
    ca_.Bind(&block35, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 706);
    ca_.Goto(&block32, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp385;
    compiler::TNode<Object> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<Object> tmp389;
    compiler::TNode<JSDataView> tmp390;
    compiler::TNode<Number> tmp391;
    compiler::TNode<BoolT> tmp392;
    compiler::TNode<JSArrayBuffer> tmp393;
    compiler::TNode<Number> tmp394;
    compiler::TNode<Float64T> tmp395;
    compiler::TNode<UintPtrT> tmp396;
    compiler::TNode<UintPtrT> tmp397;
    compiler::TNode<Float64T> tmp398;
    compiler::TNode<Float64T> tmp399;
    compiler::TNode<UintPtrT> tmp400;
    compiler::TNode<Float64T> tmp401;
    ca_.Bind(&block32, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 702);
    ca_.Goto(&block29, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp402;
    compiler::TNode<Object> tmp403;
    compiler::TNode<Object> tmp404;
    compiler::TNode<Object> tmp405;
    compiler::TNode<Object> tmp406;
    compiler::TNode<JSDataView> tmp407;
    compiler::TNode<Number> tmp408;
    compiler::TNode<BoolT> tmp409;
    compiler::TNode<JSArrayBuffer> tmp410;
    compiler::TNode<Number> tmp411;
    compiler::TNode<Float64T> tmp412;
    compiler::TNode<UintPtrT> tmp413;
    compiler::TNode<UintPtrT> tmp414;
    compiler::TNode<Float64T> tmp415;
    compiler::TNode<Float64T> tmp416;
    compiler::TNode<UintPtrT> tmp417;
    compiler::TNode<Float64T> tmp418;
    ca_.Bind(&block29, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 698);
    ca_.Goto(&block25, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp419;
    compiler::TNode<Object> tmp420;
    compiler::TNode<Object> tmp421;
    compiler::TNode<Object> tmp422;
    compiler::TNode<Object> tmp423;
    compiler::TNode<JSDataView> tmp424;
    compiler::TNode<Number> tmp425;
    compiler::TNode<BoolT> tmp426;
    compiler::TNode<JSArrayBuffer> tmp427;
    compiler::TNode<Number> tmp428;
    compiler::TNode<Float64T> tmp429;
    compiler::TNode<UintPtrT> tmp430;
    compiler::TNode<UintPtrT> tmp431;
    compiler::TNode<Float64T> tmp432;
    compiler::TNode<Float64T> tmp433;
    compiler::TNode<UintPtrT> tmp434;
    compiler::TNode<Float64T> tmp435;
    ca_.Bind(&block25, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 695);
    ca_.Goto(&block21, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<Object> tmp438;
    compiler::TNode<Object> tmp439;
    compiler::TNode<Object> tmp440;
    compiler::TNode<JSDataView> tmp441;
    compiler::TNode<Number> tmp442;
    compiler::TNode<BoolT> tmp443;
    compiler::TNode<JSArrayBuffer> tmp444;
    compiler::TNode<Number> tmp445;
    compiler::TNode<Float64T> tmp446;
    compiler::TNode<UintPtrT> tmp447;
    compiler::TNode<UintPtrT> tmp448;
    compiler::TNode<Float64T> tmp449;
    compiler::TNode<Float64T> tmp450;
    compiler::TNode<UintPtrT> tmp451;
    compiler::TNode<Float64T> tmp452;
    ca_.Bind(&block21, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 673);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 653);
    ca_.Goto(&block9, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp453;
    compiler::TNode<Object> tmp454;
    compiler::TNode<Object> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<JSDataView> tmp458;
    compiler::TNode<Number> tmp459;
    compiler::TNode<BoolT> tmp460;
    compiler::TNode<JSArrayBuffer> tmp461;
    ca_.Bind(&block9, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 717);
    compiler::TNode<Oddball> tmp462;
    USE(tmp462);
    tmp462 = Undefined_66(state_);
    ca_.Goto(&block1, tmp453, tmp454, tmp455, tmp456, tmp457, tmp462);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp463;
    compiler::TNode<Object> tmp464;
    compiler::TNode<Object> tmp465;
    compiler::TNode<Object> tmp466;
    compiler::TNode<Object> tmp467;
    compiler::TNode<Object> tmp468;
    ca_.Bind(&block1, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 634);
    ca_.Goto(&block36, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468);
  }

    compiler::TNode<Context> tmp469;
    compiler::TNode<Object> tmp470;
    compiler::TNode<Object> tmp471;
    compiler::TNode<Object> tmp472;
    compiler::TNode<Object> tmp473;
    compiler::TNode<Object> tmp474;
    ca_.Bind(&block36, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474);
  return compiler::TNode<Object>{tmp474};
}

TF_BUILTIN(DataViewPrototypeSetUint8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 722);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 723);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 725);
    compiler::TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 724);
    compiler::TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = DataViewSet_262(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, compiler::TNode<Object>{tmp63}, UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp64);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 730);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 731);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 733);
    compiler::TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 732);
    compiler::TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = DataViewSet_262(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp62}, compiler::TNode<Object>{tmp63}, INT8_ELEMENTS);
    arguments.PopAndReturn(tmp64);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 738);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 739);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 741);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 740);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 743);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 742);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 748);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 749);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 751);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 750);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 753);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 752);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, INT16_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 758);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 759);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 761);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 760);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 763);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 762);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 768);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 769);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 771);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 770);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 773);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 772);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, INT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 778);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 779);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 781);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 780);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 783);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 782);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 788);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 789);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 791);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 790);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 793);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 792);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 798);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 799);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 801);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 800);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 803);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 802);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 808);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_66(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 809);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 1);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp34}, compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<IntPtrT>{tmp36}}, compiler::TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_66(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 811);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 2);
    compiler::TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp65}, compiler::TNode<RawPtrT>{tmp66}, compiler::TNode<IntPtrT>{tmp67}}, compiler::TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_66(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 810);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 813);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 812);
    compiler::TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_262(state_, compiler::TNode<Context>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp95}, compiler::TNode<Object>{tmp96}, compiler::TNode<Object>{tmp97}, BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

compiler::TNode<JSDataView> Cast10JSDataView_1414(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSDataView> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<JSDataView> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast10JSDataView_87(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
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
    compiler::TNode<JSDataView> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/data-view.tq", 68);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSDataView> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSDataView>{tmp23};
}

}  // namespace internal
}  // namespace v8

