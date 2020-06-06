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

compiler::TNode<Foreign> LoadJSDateTimeFormatIcuLocale_1289(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 18);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuLocaleOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSDateTimeFormatIcuLocale_1290(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 18);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSDateTimeFormatIcuSimpleDateFormat_1291(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 19);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuSimpleDateFormatOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSDateTimeFormatIcuSimpleDateFormat_1292(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 19);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuSimpleDateFormatOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSDateTimeFormatIcuDateIntervalFormat_1293(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 20);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuDateIntervalFormatOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSDateTimeFormatIcuDateIntervalFormat_1294(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 20);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSDateTimeFormat::kIcuDateIntervalFormatOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSDateTimeFormatBoundFormat_1295(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 21);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSDateTimeFormat::kBoundFormatOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSDateTimeFormatBoundFormat_1296(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 21);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSDateTimeFormat::kBoundFormatOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSDateTimeFormatFlags_1297(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 22);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSDateTimeFormat::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSDateTimeFormatFlags_1298(compiler::CodeAssemblerState* state_, compiler::TNode<JSDateTimeFormat> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDateTimeFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 22);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSDateTimeFormat::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSDateTimeFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSDateTimeFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSListFormatLocale_1299(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 26);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSListFormat::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSListFormatLocale_1300(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 26);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSListFormat::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSListFormatIcuFormatter_1301(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 27);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSListFormat::kIcuFormatterOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSListFormatIcuFormatter_1302(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 27);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSListFormat::kIcuFormatterOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSListFormatFlags_1303(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 28);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSListFormat::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSListFormatFlags_1304(compiler::CodeAssemblerState* state_, compiler::TNode<JSListFormat> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSListFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSListFormat> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 28);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSListFormat::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSListFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSListFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSNumberFormatLocale_1305(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 32);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSNumberFormat::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSNumberFormatLocale_1306(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 32);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSNumberFormat::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter_1307(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 33);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSNumberFormat::kIcuNumberFormatterOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSNumberFormatIcuNumberFormatter_1308(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 33);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSNumberFormat::kIcuNumberFormatterOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSNumberFormatBoundFormat_1309(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 35);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSNumberFormat::kBoundFormatOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSNumberFormatBoundFormat_1310(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 35);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSNumberFormat::kBoundFormatOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSNumberFormatFlags_1311(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 36);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSNumberFormat::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSNumberFormatFlags_1312(compiler::CodeAssemblerState* state_, compiler::TNode<JSNumberFormat> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSNumberFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSNumberFormat> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 36);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSNumberFormat::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSNumberFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSNumberFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSPluralRulesLocale_1313(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 40);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSPluralRules::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSPluralRulesLocale_1314(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 40);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSPluralRules::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSPluralRulesFlags_1315(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 41);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSPluralRules::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSPluralRulesFlags_1316(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 41);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSPluralRules::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSPluralRulesIcuPluralRules_1317(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 42);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSPluralRules::kIcuPluralRulesOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSPluralRulesIcuPluralRules_1318(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 42);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSPluralRules::kIcuPluralRulesOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter_1319(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 43);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSPluralRules::kIcuNumberFormatterOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSPluralRulesIcuNumberFormatter_1320(compiler::CodeAssemblerState* state_, compiler::TNode<JSPluralRules> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPluralRules, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPluralRules> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 43);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSPluralRules::kIcuNumberFormatterOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPluralRules> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSPluralRules> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSRelativeTimeFormatLocale_1321(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 48);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSRelativeTimeFormat::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSRelativeTimeFormatLocale_1322(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 48);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSRelativeTimeFormat::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter_1323(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 49);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSRelativeTimeFormat::kIcuFormatterOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSRelativeTimeFormatIcuFormatter_1324(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 49);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSRelativeTimeFormat::kIcuFormatterOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSRelativeTimeFormatFlags_1325(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 50);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSRelativeTimeFormat::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSRelativeTimeFormatFlags_1326(compiler::CodeAssemblerState* state_, compiler::TNode<JSRelativeTimeFormat> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSRelativeTimeFormat, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 50);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSRelativeTimeFormat::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSRelativeTimeFormat> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSRelativeTimeFormat> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSLocaleIcuLocale_1327(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSLocale> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSLocale, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSLocale, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSLocale> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 54);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSLocale::kIcuLocaleOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSLocale> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSLocale> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSLocaleIcuLocale_1328(compiler::CodeAssemblerState* state_, compiler::TNode<JSLocale> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSLocale, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSLocale, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSLocale, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSLocale> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 54);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSLocale::kIcuLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSLocale> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSLocale> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSSegmenterLocale_1329(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 58);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmenter::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSSegmenterLocale_1330(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 58);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmenter::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSSegmenterIcuBreakIterator_1331(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 59);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmenter::kIcuBreakIteratorOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSSegmenterIcuBreakIterator_1332(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 59);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmenter::kIcuBreakIteratorOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSSegmenterFlags_1333(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 60);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmenter::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSSegmenterFlags_1334(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmenter> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmenter, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmenter> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 60);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmenter::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmenter> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmenter> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator_1335(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 64);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmentIterator::kIcuBreakIteratorOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSSegmentIteratorIcuBreakIterator_1336(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 64);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmentIterator::kIcuBreakIteratorOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSSegmentIteratorUnicodeString_1337(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 65);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmentIterator::kUnicodeStringOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSSegmentIteratorUnicodeString_1338(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 65);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmentIterator::kUnicodeStringOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSSegmentIteratorFlags_1339(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 66);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSSegmentIterator::kFlagsOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSSegmentIteratorFlags_1340(compiler::CodeAssemblerState* state_, compiler::TNode<JSSegmentIterator> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSSegmentIterator, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 66);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSSegmentIterator::kFlagsOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSSegmentIterator> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSSegmentIterator> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<String> LoadJSV8BreakIteratorLocale_1341(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 70);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kLocaleOffset);
    USE(tmp1);
    compiler::TNode<String>tmp2 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<String>{tmp6};
}

void StoreJSV8BreakIteratorLocale_1342(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 70);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kLocaleOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<String> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSV8BreakIteratorBreakIterator_1343(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 71);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBreakIteratorOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSV8BreakIteratorBreakIterator_1344(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 71);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBreakIteratorOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSV8BreakIteratorUnicodeString_1345(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 72);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kUnicodeStringOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSV8BreakIteratorUnicodeString_1346(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 72);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kUnicodeStringOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText_1347(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 73);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundAdoptTextOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSV8BreakIteratorBoundAdoptText_1348(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 73);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundAdoptTextOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst_1349(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 74);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundFirstOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSV8BreakIteratorBoundFirst_1350(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 74);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundFirstOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundNext_1351(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 75);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundNextOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSV8BreakIteratorBoundNext_1352(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 75);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundNextOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent_1353(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 76);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundCurrentOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSV8BreakIteratorBoundCurrent_1354(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 76);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundCurrentOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType_1355(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 77);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundBreakTypeOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSV8BreakIteratorBoundBreakType_1356(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 77);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBoundBreakTypeOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadJSV8BreakIteratorBreakIteratorType_1357(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 78);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSV8BreakIterator::kBreakIteratorTypeOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreJSV8BreakIteratorBreakIteratorType_1358(compiler::CodeAssemblerState* state_, compiler::TNode<JSV8BreakIterator> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSV8BreakIterator, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 78);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSV8BreakIterator::kBreakIteratorTypeOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSV8BreakIterator> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSV8BreakIterator> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Foreign> LoadJSCollatorIcuCollator_1359(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSCollator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSCollator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 82);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSCollator::kIcuCollatorOffset);
    USE(tmp1);
    compiler::TNode<Foreign>tmp2 = CodeStubAssembler(state_).LoadReference<Foreign>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSCollator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Foreign>{tmp6};
}

void StoreJSCollatorIcuCollator_1360(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSCollator> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 82);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSCollator::kIcuCollatorOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollator> tmp3;
    compiler::TNode<Foreign> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSCollator> tmp5;
    compiler::TNode<Foreign> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<HeapObject> LoadJSCollatorBoundCompare_1361(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSCollator> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSCollator> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 83);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSCollator::kBoundCompareOffset);
    USE(tmp1);
    compiler::TNode<HeapObject>tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSCollator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<HeapObject>{tmp6};
}

void StoreJSCollatorBoundCompare_1362(compiler::CodeAssemblerState* state_, compiler::TNode<JSCollator> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollator, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSCollator> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/objects/intl-objects.tq", 83);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSCollator::kBoundCompareOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollator> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<JSCollator> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

}  // namespace internal
}  // namespace v8

