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

compiler::TNode<JSTypedArray> AllocateTypedArray_301(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_isOnHeap, compiler::TNode<Map> p_map, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_byteOffset, compiler::TNode<UintPtrT> p_byteLength, compiler::TNode<UintPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, RawPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, RawPtrT, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_buffer, p_byteOffset, p_byteLength, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 29);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 30);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 32);
    if ((p_isOnHeap)) {
      ca_.Goto(&block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, ca_.Uninitialized<ByteArray>(), ca_.Uninitialized<RawPtrT>(), ca_.Uninitialized<Object>());
    } else {
      ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, ca_.Uninitialized<ByteArray>(), ca_.Uninitialized<RawPtrT>(), ca_.Uninitialized<Object>());
    }
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Map> tmp7;
    compiler::TNode<JSArrayBuffer> tmp8;
    compiler::TNode<UintPtrT> tmp9;
    compiler::TNode<UintPtrT> tmp10;
    compiler::TNode<UintPtrT> tmp11;
    compiler::TNode<ByteArray> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 33);
    compiler::TNode<ByteArray> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).AllocateByteArray(compiler::TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 35);
    compiler::TNode<RawPtrT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).PointerConstant(JSTypedArray::ExternalPointerForOnHeapArray());
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 32);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp15, tmp16, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Map> tmp18;
    compiler::TNode<JSArrayBuffer> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    compiler::TNode<UintPtrT> tmp22;
    compiler::TNode<ByteArray> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block3, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 37);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = Convert5ATSmi17ATconstexpr_int31_1367(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 43);
    compiler::TNode<IntPtrT> tmp27 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp27);
    compiler::TNode<RawPtrT>tmp28 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp19, tmp27});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 44);
    compiler::TNode<IntPtrT> tmp29;
    USE(tmp29);
    tmp29 = Convert8ATintptr9ATuintptr_162(state_, compiler::TNode<UintPtrT>{tmp20});
    compiler::TNode<RawPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).RawPtrAdd(compiler::TNode<RawPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp29});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 54);
    compiler::TNode<ByteArray> tmp31;
    USE(tmp31);
    tmp31 = kEmptyByteArray_186(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 32);
    ca_.Goto(&block4, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp31, tmp30, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Map> tmp33;
    compiler::TNode<JSArrayBuffer> tmp34;
    compiler::TNode<UintPtrT> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<UintPtrT> tmp37;
    compiler::TNode<ByteArray> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block4, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 61);
    compiler::TNode<JSObject> tmp41;
    USE(tmp41);
    tmp41 = AllocateFastOrSlowJSObjectFromMap_59(state_, compiler::TNode<Context>{tmp32}, compiler::TNode<Map>{tmp33});
    compiler::TNode<JSTypedArray> tmp42;
    USE(tmp42);
    tmp42 = UnsafeCast12JSTypedArray_1373(state_, compiler::TNode<Context>{tmp32}, compiler::TNode<Object>{tmp41});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 62);
    compiler::TNode<IntPtrT> tmp43 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp43);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp43}, tmp38);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 63);
    compiler::TNode<IntPtrT> tmp44 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp44);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp44}, tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 64);
    compiler::TNode<IntPtrT> tmp45 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp45);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp45}, tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 65);
    compiler::TNode<IntPtrT> tmp46 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp46);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp46}, tmp36);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 66);
    compiler::TNode<IntPtrT> tmp47 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp47);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp47}, tmp37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 67);
    compiler::TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(JSTypedArray::kExternalPointerOffset);
    USE(tmp48);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp48}, tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 68);
    compiler::TNode<IntPtrT> tmp49 = ca_.IntPtrConstant(JSTypedArray::kBasePointerOffset);
    USE(tmp49);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp49}, tmp40);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 69);
    TypedArrayBuiltinsAssembler(state_).SetupTypedArrayEmbedderFields(compiler::TNode<JSTypedArray>{tmp42});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 70);
    ca_.Goto(&block1, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp42);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Map> tmp51;
    compiler::TNode<JSArrayBuffer> tmp52;
    compiler::TNode<UintPtrT> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<UintPtrT> tmp55;
    compiler::TNode<JSTypedArray> tmp56;
    ca_.Bind(&block1, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 26);
    ca_.Goto(&block5, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

    compiler::TNode<Context> tmp57;
    compiler::TNode<Map> tmp58;
    compiler::TNode<JSArrayBuffer> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<UintPtrT> tmp61;
    compiler::TNode<UintPtrT> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    ca_.Bind(&block5, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
  return compiler::TNode<JSTypedArray>{tmp63};
}

compiler::TNode<JSTypedArray> TypedArrayInitialize_302(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_initialize, compiler::TNode<Map> p_map, compiler::TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, Object, JSArrayBuffer> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, JSArrayBuffer> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, JSTypedArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp6}, compiler::TNode<UintPtrT>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp3});
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp8}, compiler::TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp9, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp3, tmp4, tmp2, tmp2, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Map> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<UintPtrT> tmp13;
    compiler::TNode<Int32T> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<UintPtrT> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Map> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<UintPtrT> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    compiler::TNode<UintPtrT> tmp32;
    compiler::TNode<UintPtrT> tmp33;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 31);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Map> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<UintPtrT> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<UintPtrT> tmp40;
    compiler::TNode<Int32T> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 77);
    ca_.Goto(&block2, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp44);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Map> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<UintPtrT> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    ca_.Bind(&block3, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 78);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp45}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Map> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<Int32T> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<UintPtrT> tmp57;
    ca_.Bind(&block2, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 79);
    compiler::TNode<Number> tmp58;
    USE(tmp58);
    tmp58 = Convert20UT5ATSmi10HeapNumber9ATuintptr_175(state_, compiler::TNode<UintPtrT>{tmp57});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 80);
    compiler::TNode<JSReceiver> tmp59;
    USE(tmp59);
    tmp59 = GetArrayBufferFunction_195(state_, compiler::TNode<Context>{tmp51});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 81);
    compiler::TNode<UintPtrT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 84);
    compiler::TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<HeapObject>{tmp56}, compiler::TNode<HeapObject>{tmp59});
    ca_.Branch(tmp61, &block11, &block12, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Map> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<UintPtrT> tmp65;
    compiler::TNode<Int32T> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<UintPtrT> tmp68;
    compiler::TNode<Number> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<UintPtrT> tmp71;
    ca_.Bind(&block11, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 86);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 85);
    compiler::TNode<JSReceiver> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).ConstructWithTarget(compiler::TNode<Context>{tmp62}, compiler::TNode<JSReceiver>{tmp70}, compiler::TNode<JSReceiver>{tmp67}, compiler::TNode<Object>{tmp69});
    ca_.Goto(&block8, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<Map> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<UintPtrT> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<UintPtrT> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<UintPtrT> tmp82;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 89);
    compiler::TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, JSTypedArray::kMaxSizeInHeap);
    compiler::TNode<BoolT> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).UintPtrGreaterThan(compiler::TNode<UintPtrT>{tmp79}, compiler::TNode<UintPtrT>{tmp83});
    ca_.Branch(tmp84, &block13, &block14, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Map> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<UintPtrT> tmp88;
    compiler::TNode<Int32T> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<UintPtrT> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<UintPtrT> tmp94;
    ca_.Bind(&block13, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.Goto(&block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Map> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<UintPtrT> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<JSReceiver> tmp100;
    compiler::TNode<UintPtrT> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<UintPtrT> tmp104;
    ca_.Bind(&block14, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 91);
    compiler::TNode<JSArrayBuffer> tmp105;
    USE(tmp105);
    tmp105 = TypedArrayBuiltinsAssembler(state_).AllocateEmptyOnHeapBuffer(compiler::TNode<Context>{tmp95}, compiler::TNode<UintPtrT>{tmp101});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 95);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 96);
    compiler::TNode<UintPtrT> tmp106;
    USE(tmp106);
    tmp106 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 94);
    compiler::TNode<JSTypedArray> tmp107;
    USE(tmp107);
    tmp107 = AllocateTypedArray_301(state_, compiler::TNode<Context>{tmp95}, true, compiler::TNode<Map>{tmp96}, compiler::TNode<JSArrayBuffer>{tmp105}, compiler::TNode<UintPtrT>{tmp104}, compiler::TNode<UintPtrT>{tmp101}, compiler::TNode<UintPtrT>{tmp106});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 98);
    if ((p_initialize)) {
      ca_.Goto(&block15, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
    } else {
      ca_.Goto(&block16, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<Map> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<UintPtrT> tmp111;
    compiler::TNode<Int32T> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<UintPtrT> tmp114;
    compiler::TNode<Number> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<UintPtrT> tmp117;
    compiler::TNode<JSArrayBuffer> tmp118;
    compiler::TNode<JSTypedArray> tmp119;
    ca_.Bind(&block15, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 99);
    compiler::TNode<RawPtrT> tmp120;
    USE(tmp120);
    tmp120 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp119});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 100);
    compiler::TNode<IntPtrT> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr8ATintptr17ATconstexpr_int31_123(state_, 0);
    TypedArrayBuiltinsAssembler(state_).CallCMemset(compiler::TNode<RawPtrT>{tmp120}, compiler::TNode<IntPtrT>{tmp121}, compiler::TNode<UintPtrT>{tmp114});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 98);
    ca_.Goto(&block17, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<Map> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<UintPtrT> tmp125;
    compiler::TNode<Int32T> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<UintPtrT> tmp128;
    compiler::TNode<Number> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<UintPtrT> tmp131;
    compiler::TNode<JSArrayBuffer> tmp132;
    compiler::TNode<JSTypedArray> tmp133;
    ca_.Bind(&block16, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.Goto(&block17, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp134;
    compiler::TNode<Map> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<UintPtrT> tmp137;
    compiler::TNode<Int32T> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<UintPtrT> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<UintPtrT> tmp143;
    compiler::TNode<JSArrayBuffer> tmp144;
    compiler::TNode<JSTypedArray> tmp145;
    ca_.Bind(&block17, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 103);
    ca_.Goto(&block1, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp145);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<Map> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<UintPtrT> tmp149;
    compiler::TNode<Int32T> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<UintPtrT> tmp152;
    compiler::TNode<Number> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<UintPtrT> tmp155;
    ca_.Bind(&block10, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 106);
    if ((p_initialize)) {
      ca_.Goto(&block18, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155);
    } else {
      ca_.Goto(&block19, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155);
    }
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<UintPtrT> tmp159;
    compiler::TNode<Int32T> tmp160;
    compiler::TNode<JSReceiver> tmp161;
    compiler::TNode<UintPtrT> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<JSReceiver> tmp164;
    compiler::TNode<UintPtrT> tmp165;
    ca_.Bind(&block18, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 107);
    compiler::TNode<JSReceiver> tmp166;
    USE(tmp166);
    tmp166 = CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp156}, compiler::TNode<JSReceiver>{tmp164}, compiler::TNode<Object>{tmp163});
    ca_.Goto(&block8, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp167;
    compiler::TNode<Map> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<UintPtrT> tmp170;
    compiler::TNode<Int32T> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<UintPtrT> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<JSReceiver> tmp175;
    compiler::TNode<UintPtrT> tmp176;
    ca_.Bind(&block19, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 110);
    compiler::TNode<JSFunction> tmp177;
    USE(tmp177);
    tmp177 = GetArrayBufferNoInitFunction_196(state_, compiler::TNode<Context>{tmp167});
    compiler::TNode<Oddball> tmp178;
    USE(tmp178);
    tmp178 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 109);
    compiler::TNode<Object> tmp179;
    USE(tmp179);
    tmp179 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp167}, compiler::TNode<HeapObject>{tmp177}, compiler::TNode<Object>{tmp178}, compiler::TNode<Object>{tmp174});
    ca_.Goto(&block8, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp179);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp180;
    compiler::TNode<Map> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<UintPtrT> tmp183;
    compiler::TNode<Int32T> tmp184;
    compiler::TNode<JSReceiver> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<UintPtrT> tmp189;
    compiler::TNode<Object> tmp190;
    ca_.Bind(&block8, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 114);
    compiler::TNode<JSArrayBuffer> tmp191;
    USE(tmp191);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp191 = Cast13JSArrayBuffer_1423(state_, compiler::TNode<Context>{tmp180}, compiler::TNode<Object>{tmp190}, &label0);
    ca_.Goto(&block23, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp190, tmp191);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block24, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp190);
    }
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<Map> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<UintPtrT> tmp195;
    compiler::TNode<Int32T> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<UintPtrT> tmp198;
    compiler::TNode<Number> tmp199;
    compiler::TNode<JSReceiver> tmp200;
    compiler::TNode<UintPtrT> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<Object> tmp203;
    ca_.Bind(&block24, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.Goto(&block22, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp204;
    compiler::TNode<Map> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<UintPtrT> tmp207;
    compiler::TNode<Int32T> tmp208;
    compiler::TNode<JSReceiver> tmp209;
    compiler::TNode<UintPtrT> tmp210;
    compiler::TNode<Number> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<UintPtrT> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<JSArrayBuffer> tmp216;
    ca_.Bind(&block23, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.Goto(&block21, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp216);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp217;
    compiler::TNode<Map> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<UintPtrT> tmp220;
    compiler::TNode<Int32T> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<UintPtrT> tmp223;
    compiler::TNode<Number> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<UintPtrT> tmp226;
    compiler::TNode<Object> tmp227;
    ca_.Bind(&block22, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp228;
    compiler::TNode<Map> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<UintPtrT> tmp231;
    compiler::TNode<Int32T> tmp232;
    compiler::TNode<JSReceiver> tmp233;
    compiler::TNode<UintPtrT> tmp234;
    compiler::TNode<Number> tmp235;
    compiler::TNode<JSReceiver> tmp236;
    compiler::TNode<UintPtrT> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<JSArrayBuffer> tmp239;
    ca_.Bind(&block21, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 117);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 118);
    compiler::TNode<UintPtrT> tmp240;
    USE(tmp240);
    tmp240 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp230});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 116);
    compiler::TNode<JSTypedArray> tmp241;
    USE(tmp241);
    tmp241 = AllocateTypedArray_301(state_, compiler::TNode<Context>{tmp228}, false, compiler::TNode<Map>{tmp229}, compiler::TNode<JSArrayBuffer>{tmp239}, compiler::TNode<UintPtrT>{tmp237}, compiler::TNode<UintPtrT>{tmp234}, compiler::TNode<UintPtrT>{tmp240});
    ca_.Goto(&block1, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp241);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp242;
    compiler::TNode<Map> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<UintPtrT> tmp245;
    compiler::TNode<Int32T> tmp246;
    compiler::TNode<JSReceiver> tmp247;
    compiler::TNode<JSTypedArray> tmp248;
    ca_.Bind(&block1, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 73);
    ca_.Goto(&block25, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248);
  }

    compiler::TNode<Context> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<UintPtrT> tmp252;
    compiler::TNode<Int32T> tmp253;
    compiler::TNode<JSReceiver> tmp254;
    compiler::TNode<JSTypedArray> tmp255;
    ca_.Bind(&block25, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
  return compiler::TNode<JSTypedArray>{tmp255};
}

compiler::TNode<JSTypedArray> ConstructByLength_303(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, JSTypedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 128);
    compiler::TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 127);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 133);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast13ATPositiveSmi_80(state_, compiler::TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Map> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<UintPtrT> tmp10;
    compiler::TNode<Int32T> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Map> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<UintPtrT> tmp17;
    compiler::TNode<Int32T> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    ca_.Bind(&block4, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block2, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Map> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Number> tmp27;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 134);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp22}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp24});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Map> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<UintPtrT> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Smi> tmp34;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 133);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 135);
    compiler::TNode<JSReceiver> tmp35;
    USE(tmp35);
    tmp35 = GetArrayBufferFunction_195(state_, compiler::TNode<Context>{tmp28});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 138);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 137);
    compiler::TNode<JSTypedArray> tmp36;
    USE(tmp36);
    tmp36 = TypedArrayInitialize_302(state_, compiler::TNode<Context>{tmp28}, true, compiler::TNode<Map>{tmp29}, compiler::TNode<Smi>{tmp34}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<Int32T>{tmp32}}, compiler::TNode<JSReceiver>{tmp35});
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31, tmp32, tmp36);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Map> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<UintPtrT> tmp40;
    compiler::TNode<Int32T> tmp41;
    compiler::TNode<JSTypedArray> tmp42;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 124);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

    compiler::TNode<Context> tmp43;
    compiler::TNode<Map> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<JSTypedArray> tmp48;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
  return compiler::TNode<JSTypedArray>{tmp48};
}

compiler::TNode<JSTypedArray> ConstructByArrayLike_304(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<HeapObject> p_arrayLike, compiler::TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, JSTypedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_arrayLike, p_initialLength, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Int32T> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 148);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).ToSmiLength(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Map> tmp9;
    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<UintPtrT> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Map> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<Int32T> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block2, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp24);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Map> tmp26;
    compiler::TNode<HeapObject> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<UintPtrT> tmp29;
    compiler::TNode<Int32T> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    ca_.Bind(&block3, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 149);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp25}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp28});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Map> tmp33;
    compiler::TNode<HeapObject> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block2, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 148);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 152);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 151);
    compiler::TNode<JSTypedArray> tmp40;
    USE(tmp40);
    tmp40 = TypedArrayInitialize_302(state_, compiler::TNode<Context>{tmp32}, false, compiler::TNode<Map>{tmp33}, compiler::TNode<Smi>{tmp39}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp36}, compiler::TNode<Int32T>{tmp37}}, compiler::TNode<JSReceiver>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 155);
    compiler::TNode<JSTypedArray> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = Cast12JSTypedArray_90(state_, compiler::TNode<HeapObject>{tmp34}, &label0);
    ca_.Goto(&block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<Map> tmp43;
    compiler::TNode<HeapObject> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<JSTypedArray> tmp50;
    compiler::TNode<HeapObject> tmp51;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Map> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<UintPtrT> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<JSTypedArray> tmp60;
    compiler::TNode<HeapObject> tmp61;
    compiler::TNode<JSTypedArray> tmp62;
    ca_.Bind(&block8, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 157);
    compiler::TNode<IntPtrT> tmp63 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp63);
    compiler::TNode<JSArrayBuffer>tmp64 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp62, tmp63});
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp64});
    ca_.Branch(tmp65, &block10, &block11, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Map> tmp67;
    compiler::TNode<HeapObject> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<Int32T> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<JSTypedArray> tmp74;
    compiler::TNode<JSTypedArray> tmp75;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 158);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp66}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Map> tmp77;
    compiler::TNode<HeapObject> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    compiler::TNode<Int32T> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<JSTypedArray> tmp84;
    compiler::TNode<JSTypedArray> tmp85;
    ca_.Bind(&block11, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 160);
    compiler::TNode<Int32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp85});
    compiler::TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = ElementsKindNotEqual_73(state_, compiler::TNode<Int32T>{tmp86}, compiler::TNode<Int32T>{tmp81});
    ca_.Branch(tmp87, &block13, &block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Map> tmp89;
    compiler::TNode<HeapObject> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    compiler::TNode<Int32T> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<JSTypedArray> tmp96;
    compiler::TNode<JSTypedArray> tmp97;
    ca_.Bind(&block13, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 161);
    ca_.Goto(&block7, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Map> tmp99;
    compiler::TNode<HeapObject> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<UintPtrT> tmp102;
    compiler::TNode<Int32T> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<JSTypedArray> tmp106;
    compiler::TNode<JSTypedArray> tmp107;
    ca_.Bind(&block14, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 163);
    compiler::TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp105}, compiler::TNode<Smi>{tmp108});
    ca_.Branch(tmp109, &block16, &block17, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<Map> tmp111;
    compiler::TNode<HeapObject> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<UintPtrT> tmp114;
    compiler::TNode<Int32T> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<JSTypedArray> tmp118;
    compiler::TNode<JSTypedArray> tmp119;
    ca_.Bind(&block16, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 164);
    compiler::TNode<IntPtrT> tmp120 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp120);
    compiler::TNode<UintPtrT>tmp121 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp118, tmp120});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 166);
    compiler::TNode<RawPtrT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp118});
    compiler::TNode<RawPtrT> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp119});
    TypedArrayBuiltinsAssembler(state_).CallCMemcpy(compiler::TNode<RawPtrT>{tmp122}, compiler::TNode<RawPtrT>{tmp123}, compiler::TNode<UintPtrT>{tmp121});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 163);
    ca_.Goto(&block17, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp124;
    compiler::TNode<Map> tmp125;
    compiler::TNode<HeapObject> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<UintPtrT> tmp128;
    compiler::TNode<Int32T> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<JSTypedArray> tmp132;
    compiler::TNode<JSTypedArray> tmp133;
    ca_.Bind(&block17, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 160);
    ca_.Goto(&block15, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp134;
    compiler::TNode<Map> tmp135;
    compiler::TNode<HeapObject> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<UintPtrT> tmp138;
    compiler::TNode<Int32T> tmp139;
    compiler::TNode<JSReceiver> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<JSTypedArray> tmp142;
    compiler::TNode<JSTypedArray> tmp143;
    ca_.Bind(&block15, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 157);
    ca_.Goto(&block12, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp144;
    compiler::TNode<Map> tmp145;
    compiler::TNode<HeapObject> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<UintPtrT> tmp148;
    compiler::TNode<Int32T> tmp149;
    compiler::TNode<JSReceiver> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<JSTypedArray> tmp152;
    compiler::TNode<JSTypedArray> tmp153;
    ca_.Bind(&block12, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 154);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 169);
    ca_.Goto(&block6, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp154;
    compiler::TNode<Map> tmp155;
    compiler::TNode<HeapObject> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    compiler::TNode<Int32T> tmp159;
    compiler::TNode<JSReceiver> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<JSTypedArray> tmp162;
    ca_.Bind(&block7, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 170);
    compiler::TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr5ATSmi17ATconstexpr_int31_127(state_, 0);
    compiler::TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp161}, compiler::TNode<Smi>{tmp163});
    ca_.Branch(tmp164, &block18, &block19, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<Map> tmp166;
    compiler::TNode<HeapObject> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<UintPtrT> tmp169;
    compiler::TNode<Int32T> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<JSTypedArray> tmp173;
    ca_.Bind(&block18, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 171);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, tmp165, tmp173, tmp167, tmp172);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 170);
    ca_.Goto(&block19, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp175;
    compiler::TNode<Map> tmp176;
    compiler::TNode<HeapObject> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<UintPtrT> tmp179;
    compiler::TNode<Int32T> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<JSTypedArray> tmp183;
    ca_.Bind(&block19, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 154);
    ca_.Goto(&block6, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<Map> tmp185;
    compiler::TNode<HeapObject> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<UintPtrT> tmp188;
    compiler::TNode<Int32T> tmp189;
    compiler::TNode<JSReceiver> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<JSTypedArray> tmp192;
    ca_.Bind(&block6, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 174);
    ca_.Goto(&block1, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp192);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp193;
    compiler::TNode<Map> tmp194;
    compiler::TNode<HeapObject> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<UintPtrT> tmp197;
    compiler::TNode<Int32T> tmp198;
    compiler::TNode<JSReceiver> tmp199;
    compiler::TNode<JSTypedArray> tmp200;
    ca_.Bind(&block1, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 143);
    ca_.Goto(&block20, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200);
  }

    compiler::TNode<Context> tmp201;
    compiler::TNode<Map> tmp202;
    compiler::TNode<HeapObject> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<UintPtrT> tmp205;
    compiler::TNode<Int32T> tmp206;
    compiler::TNode<JSReceiver> tmp207;
    compiler::TNode<JSTypedArray> tmp208;
    ca_.Bind(&block20, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
  return compiler::TNode<JSTypedArray>{tmp208};
}

void ConstructByIterable_305(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_iterable, compiler::TNode<HeapObject> p_iteratorFn, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable, p_iteratorFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 183);
    compiler::TNode<JSArray> tmp3;
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kIterableToListMayPreserveHoles, tmp0, tmp1, tmp2));
    USE(tmp3);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 182);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 184);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp4);
    compiler::TNode<Number>tmp5 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp3, tmp4});
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = GetArrayBufferFunction_195(state_, compiler::TNode<Context>{tmp0});
    ca_.Goto(&block1, tmp3, tmp5, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 179);
    *label_IfConstructByArrayLike_parameter_2 = tmp9;
    *label_IfConstructByArrayLike_parameter_1 = tmp8;
    *label_IfConstructByArrayLike_parameter_0 = tmp7;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

void ConstructByTypedArray_306(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_srcTypedArray, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_srcTypedArray);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 192);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = GetArrayBufferFunction_195(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 193);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp3);
    compiler::TNode<JSArrayBuffer>tmp4 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp3});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 197);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp0, tmp1, tmp2, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<JSArrayBuffer> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<JSArrayBuffer> tmp13;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp14);
    compiler::TNode<UintPtrT>tmp15 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp11, tmp14});
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = Convert20UT5ATSmi10HeapNumber9ATuintptr_175(state_, compiler::TNode<UintPtrT>{tmp15});
    ca_.Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<JSArrayBuffer> tmp20;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    ca_.Goto(&block4, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<JSArrayBuffer> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 202);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = TypedArrayBuiltinsAssembler(state_).IsSharedArrayBuffer(compiler::TNode<JSArrayBuffer>{tmp25});
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp27});
    ca_.Branch(tmp28, &block6, &block7, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSTypedArray> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<JSArrayBuffer> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 203);
    compiler::TNode<JSReceiver> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).SpeciesConstructor(compiler::TNode<Context>{tmp29}, compiler::TNode<Object>{tmp32}, compiler::TNode<JSReceiver>{tmp31});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 205);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp32});
    ca_.Branch(tmp35, &block8, &block9, tmp29, tmp30, tmp34, tmp32, tmp33);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSTypedArray> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<JSArrayBuffer> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<Number> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_133(state_, 0);
    ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<JSArrayBuffer> tmp45;
    compiler::TNode<Number> tmp46;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 202);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<JSTypedArray> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<JSArrayBuffer> tmp50;
    compiler::TNode<Number> tmp51;
    ca_.Bind(&block7, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 207);
    ca_.Goto(&block1, tmp48, tmp51, tmp49);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    ca_.Bind(&block1, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 189);
    *label_IfConstructByArrayLike_parameter_2 = tmp54;
    *label_IfConstructByArrayLike_parameter_1 = tmp53;
    *label_IfConstructByArrayLike_parameter_0 = tmp52;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

compiler::TNode<JSTypedArray> ConstructByArrayBuffer_307(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<Object> p_byteOffset, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, String> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, JSTypedArray> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_buffer, p_byteOffset, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 216);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 217);
    compiler::TNode<Oddball> tmp8;
    USE(tmp8);
    tmp8 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp3}, compiler::TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block10, &block11, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Map> tmp11;
    compiler::TNode<JSArrayBuffer> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<UintPtrT> tmp17;
    ca_.Bind(&block10, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 220);
    compiler::TNode<Number> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp13}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 219);
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = CodeStubAssembler(state_).TryNumberToUintPtr(compiler::TNode<Number>{tmp18}, &label0);
    ca_.Goto(&block14, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Map> tmp21;
    compiler::TNode<JSArrayBuffer> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<UintPtrT> tmp27;
    compiler::TNode<Number> tmp28;
    ca_.Bind(&block15, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block13, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Map> tmp30;
    compiler::TNode<JSArrayBuffer> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<UintPtrT> tmp34;
    compiler::TNode<Int32T> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<UintPtrT> tmp38;
    ca_.Bind(&block14, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block12, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Map> tmp40;
    compiler::TNode<JSArrayBuffer> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    ca_.Bind(&block13, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 221);
    ca_.Goto(&block3, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Map> tmp48;
    compiler::TNode<JSArrayBuffer> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<UintPtrT> tmp52;
    compiler::TNode<Int32T> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<UintPtrT> tmp55;
    ca_.Bind(&block12, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 219);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 224);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 48);
    compiler::TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp56}, compiler::TNode<UintPtrT>{tmp52});
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp57}, compiler::TNode<UintPtrT>{tmp58});
    compiler::TNode<UintPtrT> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).WordAnd(compiler::TNode<UintPtrT>{tmp55}, compiler::TNode<UintPtrT>{tmp59});
    compiler::TNode<UintPtrT> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 0);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp61});
    ca_.Goto(&block18, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp52, tmp53, tmp55, tmp55, tmp62);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<Map> tmp64;
    compiler::TNode<JSArrayBuffer> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<UintPtrT> tmp68;
    compiler::TNode<Int32T> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<UintPtrT> tmp71;
    compiler::TNode<Int32T> tmp72;
    compiler::TNode<UintPtrT> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<BoolT> tmp75;
    ca_.Bind(&block18, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 224);
    ca_.Branch(tmp75, &block16, &block17, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Map> tmp77;
    compiler::TNode<JSArrayBuffer> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<UintPtrT> tmp81;
    compiler::TNode<Int32T> tmp82;
    compiler::TNode<UintPtrT> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 225);
    compiler::TNode<String> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr6String18ATconstexpr_string_129(state_, "start offset");
    ca_.Goto(&block9, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp84);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Map> tmp86;
    compiler::TNode<JSArrayBuffer> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<UintPtrT> tmp90;
    compiler::TNode<Int32T> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 217);
    ca_.Goto(&block11, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<Map> tmp94;
    compiler::TNode<JSArrayBuffer> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<UintPtrT> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<UintPtrT> tmp100;
    ca_.Bind(&block11, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 229);
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr13ATPositiveSmi17ATconstexpr_int31_128(state_, 0);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 230);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 232);
    compiler::TNode<Oddball> tmp102;
    USE(tmp102);
    tmp102 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp97}, compiler::TNode<HeapObject>{tmp102});
    ca_.Branch(tmp103, &block19, &block20, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, ca_.Uninitialized<UintPtrT>());
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<Map> tmp105;
    compiler::TNode<JSArrayBuffer> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<UintPtrT> tmp109;
    compiler::TNode<Int32T> tmp110;
    compiler::TNode<UintPtrT> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<UintPtrT> tmp113;
    ca_.Bind(&block19, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 234);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp114 = CodeStubAssembler(state_).ToSmiIndex(compiler::TNode<Context>{tmp104}, compiler::TNode<Object>{tmp108}, &label0);
    ca_.Goto(&block21, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108, tmp114);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp115;
    compiler::TNode<Map> tmp116;
    compiler::TNode<JSArrayBuffer> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<UintPtrT> tmp120;
    compiler::TNode<Int32T> tmp121;
    compiler::TNode<UintPtrT> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<UintPtrT> tmp124;
    compiler::TNode<Object> tmp125;
    ca_.Bind(&block22, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.Goto(&block5, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<Map> tmp127;
    compiler::TNode<JSArrayBuffer> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<UintPtrT> tmp131;
    compiler::TNode<Int32T> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<UintPtrT> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Smi> tmp137;
    ca_.Bind(&block21, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 232);
    ca_.Goto(&block20, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp137, tmp135);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<Map> tmp139;
    compiler::TNode<JSArrayBuffer> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<UintPtrT> tmp143;
    compiler::TNode<Int32T> tmp144;
    compiler::TNode<UintPtrT> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<UintPtrT> tmp147;
    ca_.Bind(&block20, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 238);
    compiler::TNode<BoolT> tmp148;
    USE(tmp148);
    tmp148 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp140});
    ca_.Branch(tmp148, &block23, &block24, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<Map> tmp150;
    compiler::TNode<JSArrayBuffer> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<UintPtrT> tmp154;
    compiler::TNode<Int32T> tmp155;
    compiler::TNode<UintPtrT> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    ca_.Bind(&block23, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 239);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp149}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp159;
    compiler::TNode<Map> tmp160;
    compiler::TNode<JSArrayBuffer> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<UintPtrT> tmp164;
    compiler::TNode<Int32T> tmp165;
    compiler::TNode<UintPtrT> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<UintPtrT> tmp168;
    ca_.Bind(&block24, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 243);
    compiler::TNode<IntPtrT> tmp169 = ca_.IntPtrConstant(JSArrayBuffer::kByteLengthOffset);
    USE(tmp169);
    compiler::TNode<UintPtrT>tmp170 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp161, tmp169});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 246);
    compiler::TNode<Oddball> tmp171;
    USE(tmp171);
    tmp171 = Undefined_66(state_);
    compiler::TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp163}, compiler::TNode<HeapObject>{tmp171});
    ca_.Branch(tmp172, &block25, &block26, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp170);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp173;
    compiler::TNode<Map> tmp174;
    compiler::TNode<JSArrayBuffer> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<UintPtrT> tmp178;
    compiler::TNode<Int32T> tmp179;
    compiler::TNode<UintPtrT> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<UintPtrT> tmp182;
    compiler::TNode<UintPtrT> tmp183;
    ca_.Bind(&block25, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 249);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 48);
    compiler::TNode<UintPtrT> tmp184;
    USE(tmp184);
    tmp184 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp185;
    USE(tmp185);
    tmp185 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp184}, compiler::TNode<UintPtrT>{tmp178});
    compiler::TNode<UintPtrT> tmp186;
    USE(tmp186);
    tmp186 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 1);
    compiler::TNode<UintPtrT> tmp187;
    USE(tmp187);
    tmp187 = CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp185}, compiler::TNode<UintPtrT>{tmp186});
    compiler::TNode<UintPtrT> tmp188;
    USE(tmp188);
    tmp188 = CodeStubAssembler(state_).WordAnd(compiler::TNode<UintPtrT>{tmp183}, compiler::TNode<UintPtrT>{tmp187});
    compiler::TNode<UintPtrT> tmp189;
    USE(tmp189);
    tmp189 = FromConstexpr9ATuintptr17ATconstexpr_int31_137(state_, 0);
    compiler::TNode<BoolT> tmp190;
    USE(tmp190);
    tmp190 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp188}, compiler::TNode<UintPtrT>{tmp189});
    ca_.Goto(&block30, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp178, tmp179, tmp183, tmp183, tmp190);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp191;
    compiler::TNode<Map> tmp192;
    compiler::TNode<JSArrayBuffer> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<UintPtrT> tmp196;
    compiler::TNode<Int32T> tmp197;
    compiler::TNode<UintPtrT> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<UintPtrT> tmp200;
    compiler::TNode<UintPtrT> tmp201;
    compiler::TNode<UintPtrT> tmp202;
    compiler::TNode<Int32T> tmp203;
    compiler::TNode<UintPtrT> tmp204;
    compiler::TNode<UintPtrT> tmp205;
    compiler::TNode<BoolT> tmp206;
    ca_.Bind(&block30, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 249);
    ca_.Branch(tmp206, &block28, &block29, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<Map> tmp208;
    compiler::TNode<JSArrayBuffer> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<UintPtrT> tmp212;
    compiler::TNode<Int32T> tmp213;
    compiler::TNode<UintPtrT> tmp214;
    compiler::TNode<Smi> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    compiler::TNode<UintPtrT> tmp217;
    ca_.Bind(&block28, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 250);
    compiler::TNode<String> tmp218;
    USE(tmp218);
    tmp218 = FromConstexpr6String18ATconstexpr_string_129(state_, "byte length");
    ca_.Goto(&block9, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp218);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp219;
    compiler::TNode<Map> tmp220;
    compiler::TNode<JSArrayBuffer> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<UintPtrT> tmp224;
    compiler::TNode<Int32T> tmp225;
    compiler::TNode<UintPtrT> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<UintPtrT> tmp228;
    compiler::TNode<UintPtrT> tmp229;
    ca_.Bind(&block29, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 255);
    compiler::TNode<BoolT> tmp230;
    USE(tmp230);
    tmp230 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp229}, compiler::TNode<UintPtrT>{tmp226});
    ca_.Branch(tmp230, &block31, &block32, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp231;
    compiler::TNode<Map> tmp232;
    compiler::TNode<JSArrayBuffer> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<UintPtrT> tmp236;
    compiler::TNode<Int32T> tmp237;
    compiler::TNode<UintPtrT> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<UintPtrT> tmp240;
    compiler::TNode<UintPtrT> tmp241;
    ca_.Bind(&block31, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.Goto(&block3, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp242;
    compiler::TNode<Map> tmp243;
    compiler::TNode<JSArrayBuffer> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<UintPtrT> tmp247;
    compiler::TNode<Int32T> tmp248;
    compiler::TNode<UintPtrT> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<UintPtrT> tmp251;
    compiler::TNode<UintPtrT> tmp252;
    ca_.Bind(&block32, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 259);
    compiler::TNode<UintPtrT> tmp253;
    USE(tmp253);
    tmp253 = CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp252}, compiler::TNode<UintPtrT>{tmp249});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 260);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 37);
    compiler::TNode<UintPtrT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp253}, compiler::TNode<UintPtrT>{tmp247});
    compiler::TNode<Smi> tmp255;
    USE(tmp255);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp255 = Convert13ATPositiveSmi9ATuintptr_164(state_, compiler::TNode<UintPtrT>{tmp254}, &label0);
    ca_.Goto(&block34, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254, tmp255);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block35, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254);
    }
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp256;
    compiler::TNode<Map> tmp257;
    compiler::TNode<JSArrayBuffer> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<UintPtrT> tmp261;
    compiler::TNode<Int32T> tmp262;
    compiler::TNode<UintPtrT> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<UintPtrT> tmp265;
    compiler::TNode<UintPtrT> tmp266;
    compiler::TNode<UintPtrT> tmp267;
    compiler::TNode<Int32T> tmp268;
    compiler::TNode<UintPtrT> tmp269;
    compiler::TNode<UintPtrT> tmp270;
    compiler::TNode<UintPtrT> tmp271;
    ca_.Bind(&block35, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.Goto(&block3, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp272;
    compiler::TNode<Map> tmp273;
    compiler::TNode<JSArrayBuffer> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Object> tmp276;
    compiler::TNode<UintPtrT> tmp277;
    compiler::TNode<Int32T> tmp278;
    compiler::TNode<UintPtrT> tmp279;
    compiler::TNode<Smi> tmp280;
    compiler::TNode<UintPtrT> tmp281;
    compiler::TNode<UintPtrT> tmp282;
    compiler::TNode<UintPtrT> tmp283;
    compiler::TNode<Int32T> tmp284;
    compiler::TNode<UintPtrT> tmp285;
    compiler::TNode<UintPtrT> tmp286;
    compiler::TNode<UintPtrT> tmp287;
    compiler::TNode<Smi> tmp288;
    ca_.Bind(&block34, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.Goto(&block33, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp288);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp289;
    compiler::TNode<Map> tmp290;
    compiler::TNode<JSArrayBuffer> tmp291;
    compiler::TNode<Object> tmp292;
    compiler::TNode<Object> tmp293;
    compiler::TNode<UintPtrT> tmp294;
    compiler::TNode<Int32T> tmp295;
    compiler::TNode<UintPtrT> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<UintPtrT> tmp298;
    compiler::TNode<UintPtrT> tmp299;
    compiler::TNode<UintPtrT> tmp300;
    compiler::TNode<Int32T> tmp301;
    compiler::TNode<UintPtrT> tmp302;
    compiler::TNode<UintPtrT> tmp303;
    compiler::TNode<Smi> tmp304;
    ca_.Bind(&block33, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 260);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 246);
    ca_.Goto(&block27, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp304, tmp298, tmp299);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp305;
    compiler::TNode<Map> tmp306;
    compiler::TNode<JSArrayBuffer> tmp307;
    compiler::TNode<Object> tmp308;
    compiler::TNode<Object> tmp309;
    compiler::TNode<UintPtrT> tmp310;
    compiler::TNode<Int32T> tmp311;
    compiler::TNode<UintPtrT> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<UintPtrT> tmp314;
    compiler::TNode<UintPtrT> tmp315;
    ca_.Bind(&block26, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 266);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp316;
    USE(tmp316);
    tmp316 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp313});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp317;
    USE(tmp317);
    tmp317 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp316}, compiler::TNode<UintPtrT>{tmp310});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp318;
    USE(tmp318);
    tmp318 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp317}, compiler::TNode<UintPtrT>{tmp310});
    compiler::TNode<BoolT> tmp319;
    USE(tmp319);
    tmp319 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp318}, compiler::TNode<UintPtrT>{tmp316});
    ca_.Branch(tmp319, &block37, &block38, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp310, tmp311, tmp313, tmp313, tmp316, tmp317);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp320;
    compiler::TNode<Map> tmp321;
    compiler::TNode<JSArrayBuffer> tmp322;
    compiler::TNode<Object> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<UintPtrT> tmp325;
    compiler::TNode<Int32T> tmp326;
    compiler::TNode<UintPtrT> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<UintPtrT> tmp329;
    compiler::TNode<UintPtrT> tmp330;
    compiler::TNode<UintPtrT> tmp331;
    compiler::TNode<Int32T> tmp332;
    compiler::TNode<Smi> tmp333;
    compiler::TNode<Smi> tmp334;
    compiler::TNode<UintPtrT> tmp335;
    compiler::TNode<UintPtrT> tmp336;
    ca_.Bind(&block37, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.Goto(&block7, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp337;
    compiler::TNode<Map> tmp338;
    compiler::TNode<JSArrayBuffer> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<Object> tmp341;
    compiler::TNode<UintPtrT> tmp342;
    compiler::TNode<Int32T> tmp343;
    compiler::TNode<UintPtrT> tmp344;
    compiler::TNode<Smi> tmp345;
    compiler::TNode<UintPtrT> tmp346;
    compiler::TNode<UintPtrT> tmp347;
    compiler::TNode<UintPtrT> tmp348;
    compiler::TNode<Int32T> tmp349;
    compiler::TNode<Smi> tmp350;
    compiler::TNode<Smi> tmp351;
    compiler::TNode<UintPtrT> tmp352;
    compiler::TNode<UintPtrT> tmp353;
    ca_.Bind(&block38, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array.tq", 31);
    ca_.Goto(&block36, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp353);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp354;
    compiler::TNode<Map> tmp355;
    compiler::TNode<JSArrayBuffer> tmp356;
    compiler::TNode<Object> tmp357;
    compiler::TNode<Object> tmp358;
    compiler::TNode<UintPtrT> tmp359;
    compiler::TNode<Int32T> tmp360;
    compiler::TNode<UintPtrT> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<UintPtrT> tmp363;
    compiler::TNode<UintPtrT> tmp364;
    compiler::TNode<UintPtrT> tmp365;
    compiler::TNode<Int32T> tmp366;
    compiler::TNode<Smi> tmp367;
    compiler::TNode<Smi> tmp368;
    compiler::TNode<UintPtrT> tmp369;
    ca_.Bind(&block36, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 266);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 271);
    compiler::TNode<BoolT> tmp370;
    USE(tmp370);
    tmp370 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp364}, compiler::TNode<UintPtrT>{tmp369});
    ca_.Branch(tmp370, &block39, &block41, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp369, tmp364);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp371;
    compiler::TNode<Map> tmp372;
    compiler::TNode<JSArrayBuffer> tmp373;
    compiler::TNode<Object> tmp374;
    compiler::TNode<Object> tmp375;
    compiler::TNode<UintPtrT> tmp376;
    compiler::TNode<Int32T> tmp377;
    compiler::TNode<UintPtrT> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<UintPtrT> tmp380;
    compiler::TNode<UintPtrT> tmp381;
    ca_.Bind(&block41, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 272);
    compiler::TNode<UintPtrT> tmp382;
    USE(tmp382);
    tmp382 = CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp381}, compiler::TNode<UintPtrT>{tmp380});
    compiler::TNode<BoolT> tmp383;
    USE(tmp383);
    tmp383 = CodeStubAssembler(state_).UintPtrGreaterThan(compiler::TNode<UintPtrT>{tmp378}, compiler::TNode<UintPtrT>{tmp382});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 271);
    ca_.Branch(tmp383, &block39, &block40, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<Map> tmp385;
    compiler::TNode<JSArrayBuffer> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<UintPtrT> tmp389;
    compiler::TNode<Int32T> tmp390;
    compiler::TNode<UintPtrT> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<UintPtrT> tmp393;
    compiler::TNode<UintPtrT> tmp394;
    ca_.Bind(&block39, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 273);
    ca_.Goto(&block5, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp395;
    compiler::TNode<Map> tmp396;
    compiler::TNode<JSArrayBuffer> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<UintPtrT> tmp400;
    compiler::TNode<Int32T> tmp401;
    compiler::TNode<UintPtrT> tmp402;
    compiler::TNode<Smi> tmp403;
    compiler::TNode<UintPtrT> tmp404;
    compiler::TNode<UintPtrT> tmp405;
    ca_.Bind(&block40, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 246);
    ca_.Goto(&block27, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp406;
    compiler::TNode<Map> tmp407;
    compiler::TNode<JSArrayBuffer> tmp408;
    compiler::TNode<Object> tmp409;
    compiler::TNode<Object> tmp410;
    compiler::TNode<UintPtrT> tmp411;
    compiler::TNode<Int32T> tmp412;
    compiler::TNode<UintPtrT> tmp413;
    compiler::TNode<Smi> tmp414;
    compiler::TNode<UintPtrT> tmp415;
    compiler::TNode<UintPtrT> tmp416;
    ca_.Bind(&block27, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 278);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 279);
    compiler::TNode<UintPtrT> tmp417;
    USE(tmp417);
    tmp417 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp414});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 277);
    compiler::TNode<JSTypedArray> tmp418;
    USE(tmp418);
    tmp418 = AllocateTypedArray_301(state_, compiler::TNode<Context>{tmp406}, false, compiler::TNode<Map>{tmp407}, compiler::TNode<JSArrayBuffer>{tmp408}, compiler::TNode<UintPtrT>{tmp413}, compiler::TNode<UintPtrT>{tmp415}, compiler::TNode<UintPtrT>{tmp417});
    ca_.Goto(&block1, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp418);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp419;
    compiler::TNode<Map> tmp420;
    compiler::TNode<JSArrayBuffer> tmp421;
    compiler::TNode<Object> tmp422;
    compiler::TNode<Object> tmp423;
    compiler::TNode<UintPtrT> tmp424;
    compiler::TNode<Int32T> tmp425;
    compiler::TNode<String> tmp426;
    ca_.Bind(&block9, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 282);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidTypedArrayAlignment, tmp419, tmp420, tmp426);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp428;
    compiler::TNode<Map> tmp429;
    compiler::TNode<JSArrayBuffer> tmp430;
    compiler::TNode<Object> tmp431;
    compiler::TNode<Object> tmp432;
    compiler::TNode<UintPtrT> tmp433;
    compiler::TNode<Int32T> tmp434;
    ca_.Bind(&block7, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 285);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp428}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp435;
    compiler::TNode<Map> tmp436;
    compiler::TNode<JSArrayBuffer> tmp437;
    compiler::TNode<Object> tmp438;
    compiler::TNode<Object> tmp439;
    compiler::TNode<UintPtrT> tmp440;
    compiler::TNode<Int32T> tmp441;
    ca_.Bind(&block5, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 288);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp435}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp439});
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp442;
    compiler::TNode<Map> tmp443;
    compiler::TNode<JSArrayBuffer> tmp444;
    compiler::TNode<Object> tmp445;
    compiler::TNode<Object> tmp446;
    compiler::TNode<UintPtrT> tmp447;
    compiler::TNode<Int32T> tmp448;
    ca_.Bind(&block3, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 291);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp442}, MessageTemplate::kInvalidOffset, compiler::TNode<Object>{tmp445});
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp449;
    compiler::TNode<Map> tmp450;
    compiler::TNode<JSArrayBuffer> tmp451;
    compiler::TNode<Object> tmp452;
    compiler::TNode<Object> tmp453;
    compiler::TNode<UintPtrT> tmp454;
    compiler::TNode<Int32T> tmp455;
    compiler::TNode<JSTypedArray> tmp456;
    ca_.Bind(&block1, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 212);
    ca_.Goto(&block42, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456);
  }

    compiler::TNode<Context> tmp457;
    compiler::TNode<Map> tmp458;
    compiler::TNode<JSArrayBuffer> tmp459;
    compiler::TNode<Object> tmp460;
    compiler::TNode<Object> tmp461;
    compiler::TNode<UintPtrT> tmp462;
    compiler::TNode<Int32T> tmp463;
    compiler::TNode<JSTypedArray> tmp464;
    ca_.Bind(&block42, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464);
  return compiler::TNode<JSTypedArray>{tmp464};
}

void ConstructByJSReceiver_308(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_obj, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, HeapObject, JSReceiver, HeapObject, HeapObject, Object, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_obj);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 300);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).GetIteratorMethod(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block5, tmp3, tmp4);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 299);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 301);
    compiler::TNode<HeapObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1366(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<Object>{tmp9}, &label0);
    ca_.Goto(&block10, tmp6, tmp7, tmp9, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp6, tmp7, tmp9, tmp9);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block11, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block9, tmp11, tmp12, tmp13);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<HeapObject> tmp19;
    ca_.Bind(&block10, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp19);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Object> tmp22;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 302);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp20}, MessageTemplate::kIteratorSymbolNonCallable);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<HeapObject> tmp26;
    ca_.Bind(&block8, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 301);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 303);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByIterable_305(state_, compiler::TNode<Context>{tmp23}, compiler::TNode<JSReceiver>{tmp24}, compiler::TNode<HeapObject>{tmp26}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp23, tmp24, tmp25, tmp26, tmp24, tmp26, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<HeapObject> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<HeapObject> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    ca_.Bind(&block12, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block1, tmp33, tmp34, tmp35);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    ca_.Bind(&block5, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 307);
    compiler::TNode<String> tmp38;
    USE(tmp38);
    tmp38 = kLengthString_70(state_);
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp37}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 308);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = CodeStubAssembler(state_).ToSmiLength(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp39}, &label0);
    ca_.Goto(&block15, tmp36, tmp37, tmp39, tmp39, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp36, tmp37, tmp39, tmp39);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block16, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block14, tmp41, tmp42, tmp43);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Smi> tmp49;
    ca_.Bind(&block15, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.Goto(&block13, tmp45, tmp46, tmp47, tmp49);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<Object> tmp52;
    ca_.Bind(&block14, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 309);
    ca_.Goto(&block3, tmp50, tmp51, tmp52);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block13, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 308);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 310);
    compiler::TNode<JSReceiver> tmp57;
    USE(tmp57);
    tmp57 = GetArrayBufferFunction_195(state_, compiler::TNode<Context>{tmp53});
    ca_.Goto(&block1, tmp54, tmp56, tmp57);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Object> tmp60;
    ca_.Bind(&block3, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 313);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp58}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp60});
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    ca_.Bind(&block1, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 295);
    *label_IfConstructByArrayLike_parameter_2 = tmp63;
    *label_IfConstructByArrayLike_parameter_1 = tmp62;
    *label_IfConstructByArrayLike_parameter_0 = tmp61;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

TF_BUILTIN(CreateTypedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSFunction> parameter1 = UncheckedCast<JSFunction>(Parameter(Descriptor::kTarget));
  USE(parameter1);
  compiler::TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kNewTarget));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kArg1));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kArg2));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kArg3));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSArrayBuffer> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, JSTypedArray, JSTypedArray, HeapObject, Object, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, JSReceiver, JSReceiver, HeapObject, Object, JSReceiver> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, HeapObject, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 325);
    compiler::TNode<Map> tmp6;
    USE(tmp6);
    tmp6 = GetDerivedMap_58(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSFunction>{tmp1}, compiler::TNode<JSReceiver>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 330);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    compiler::TNode<Int32T> tmp8;
    USE(tmp8);
    std::tie(tmp7, tmp8) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<Map>{tmp6}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 329);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 333);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 334);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast5ATSmi_79(state_, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp3, tmp3, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp3, tmp3);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSFunction> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Map> tmp16;
    compiler::TNode<UintPtrT> tmp17;
    compiler::TNode<Int32T> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block8, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSFunction> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Map> tmp27;
    compiler::TNode<UintPtrT> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Smi> tmp32;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 335);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp32);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSFunction> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Map> tmp39;
    compiler::TNode<UintPtrT> tmp40;
    compiler::TNode<Int32T> tmp41;
    compiler::TNode<Object> tmp42;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 337);
    compiler::TNode<JSArrayBuffer> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast13JSArrayBuffer_95(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp42)}, &label0);
    ca_.Goto(&block11, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, ca_.UncheckedCast<HeapObject>(tmp42), tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, ca_.UncheckedCast<HeapObject>(tmp42));
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSFunction> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Map> tmp50;
    compiler::TNode<UintPtrT> tmp51;
    compiler::TNode<Int32T> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<HeapObject> tmp54;
    ca_.Bind(&block12, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<JSFunction> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Map> tmp61;
    compiler::TNode<UintPtrT> tmp62;
    compiler::TNode<Int32T> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<JSArrayBuffer> tmp66;
    ca_.Bind(&block11, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 338);
    compiler::TNode<JSTypedArray> tmp67;
    USE(tmp67);
    tmp67 = ConstructByArrayBuffer_307(state_, compiler::TNode<Context>{tmp55}, compiler::TNode<Map>{tmp61}, compiler::TNode<JSArrayBuffer>{tmp66}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp62}, compiler::TNode<Int32T>{tmp63}});
    CodeStubAssembler(state_).Return(tmp67);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSFunction> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Map> tmp74;
    compiler::TNode<UintPtrT> tmp75;
    compiler::TNode<Int32T> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block10, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 340);
    compiler::TNode<JSTypedArray> tmp78;
    USE(tmp78);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp78 = Cast12JSTypedArray_90(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp77)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, ca_.UncheckedCast<HeapObject>(tmp77), tmp78);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, ca_.UncheckedCast<HeapObject>(tmp77));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<JSFunction> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Map> tmp85;
    compiler::TNode<UintPtrT> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<HeapObject> tmp89;
    ca_.Bind(&block16, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block14, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<JSFunction> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Map> tmp96;
    compiler::TNode<UintPtrT> tmp97;
    compiler::TNode<Int32T> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<HeapObject> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    ca_.Bind(&block15, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 341);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByTypedArray_306(state_, compiler::TNode<Context>{tmp90}, compiler::TNode<JSTypedArray>{tmp101}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp101, tmp101, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<JSFunction> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Map> tmp108;
    compiler::TNode<UintPtrT> tmp109;
    compiler::TNode<Int32T> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<JSTypedArray> tmp113;
    compiler::TNode<HeapObject> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    ca_.Bind(&block17, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block2, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp114, tmp115, tmp116);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<JSFunction> tmp118;
    compiler::TNode<JSReceiver> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Map> tmp123;
    compiler::TNode<UintPtrT> tmp124;
    compiler::TNode<Int32T> tmp125;
    compiler::TNode<Object> tmp126;
    ca_.Bind(&block14, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 343);
    compiler::TNode<JSReceiver> tmp127;
    USE(tmp127);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp127 = Cast10JSReceiver_116(state_, compiler::TNode<Context>{tmp117}, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp126)}, &label0);
    ca_.Goto(&block20, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, ca_.UncheckedCast<HeapObject>(tmp126), tmp127);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, ca_.UncheckedCast<HeapObject>(tmp126));
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<JSFunction> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Map> tmp134;
    compiler::TNode<UintPtrT> tmp135;
    compiler::TNode<Int32T> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<HeapObject> tmp138;
    ca_.Bind(&block21, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.Goto(&block19, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp139;
    compiler::TNode<JSFunction> tmp140;
    compiler::TNode<JSReceiver> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Map> tmp145;
    compiler::TNode<UintPtrT> tmp146;
    compiler::TNode<Int32T> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<HeapObject> tmp149;
    compiler::TNode<JSReceiver> tmp150;
    ca_.Bind(&block20, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 344);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByJSReceiver_308(state_, compiler::TNode<Context>{tmp139}, compiler::TNode<JSReceiver>{tmp150}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp150, tmp150, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp151;
    compiler::TNode<JSFunction> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Object> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    compiler::TNode<Int32T> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<JSReceiver> tmp161;
    compiler::TNode<JSReceiver> tmp162;
    compiler::TNode<HeapObject> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    ca_.Bind(&block22, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.Goto(&block2, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp163, tmp164, tmp165);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp166;
    compiler::TNode<JSFunction> tmp167;
    compiler::TNode<JSReceiver> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<Map> tmp172;
    compiler::TNode<UintPtrT> tmp173;
    compiler::TNode<Int32T> tmp174;
    compiler::TNode<Object> tmp175;
    ca_.Bind(&block19, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 348);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 349);
    ca_.Goto(&block4, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, ca_.UncheckedCast<HeapObject>(tmp175));
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp176;
    compiler::TNode<JSFunction> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<Map> tmp182;
    compiler::TNode<UintPtrT> tmp183;
    compiler::TNode<Int32T> tmp184;
    compiler::TNode<Object> tmp185;
    ca_.Bind(&block4, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 354);
    compiler::TNode<JSTypedArray> tmp186;
    USE(tmp186);
    tmp186 = ConstructByLength_303(state_, compiler::TNode<Context>{tmp176}, compiler::TNode<Map>{tmp182}, compiler::TNode<Object>{tmp185}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp183}, compiler::TNode<Int32T>{tmp184}});
    CodeStubAssembler(state_).Return(tmp186);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<JSFunction> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Map> tmp193;
    compiler::TNode<UintPtrT> tmp194;
    compiler::TNode<Int32T> tmp195;
    compiler::TNode<HeapObject> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<JSReceiver> tmp198;
    ca_.Bind(&block2, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 359);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 358);
    compiler::TNode<JSTypedArray> tmp199;
    USE(tmp199);
    tmp199 = ConstructByArrayLike_304(state_, compiler::TNode<Context>{tmp187}, compiler::TNode<Map>{tmp193}, compiler::TNode<HeapObject>{tmp196}, compiler::TNode<Object>{tmp197}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp194}, compiler::TNode<Int32T>{tmp195}}, compiler::TNode<JSReceiver>{tmp198});
    CodeStubAssembler(state_).Return(tmp199);
  }
}

compiler::TNode<JSTypedArray> TypedArraySpeciesCreate_309(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Object> p_arg0, compiler::TNode<Object> p_arg1, compiler::TNode<Object> p_arg2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_arg0, p_arg1, p_arg2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 367);
    compiler::TNode<JSFunction> tmp5;
    USE(tmp5);
    tmp5 = TypedArrayBuiltinsAssembler(state_).GetDefaultConstructor(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 370);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    compiler::TNode<Map>tmp7 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).IsPrototypeTypedArrayPrototype(compiler::TNode<Context>{tmp0}, compiler::TNode<Map>{tmp7});
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp8});
    ca_.Branch(tmp9, &block4, &block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSFunction> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSFunction> tmp21;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 371);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).IsTypedArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp22, &block6, &block7, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<JSFunction> tmp28;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block3, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSTypedArray> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSFunction> tmp34;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 374);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 373);
    compiler::TNode<JSTypedArray> tmp35;
    tmp35 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateTypedArray, tmp29, tmp34, tmp34, tmp31, tmp32, tmp33));
    USE(tmp35);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 380);
    ca_.Goto(&block1, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSTypedArray> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSFunction> tmp41;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 384);
    compiler::TNode<JSReceiver> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).SpeciesConstructor(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp37}, compiler::TNode<JSReceiver>{tmp41});
    compiler::TNode<JSReceiver> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast13ATConstructor_103(state_, compiler::TNode<HeapObject>{tmp42}, &label0);
    ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSFunction> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block9, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSTypedArray> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSFunction> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp58);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSTypedArray> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSFunction> tmp64;
    ca_.Bind(&block9, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 385);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<JSTypedArray> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSFunction> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    ca_.Bind(&block8, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 389);
    compiler::TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 390);
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(p_numArgs, 1)))) {
      ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    } else {
      ca_.Goto(&block13, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<JSTypedArray> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSFunction> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 391);
    compiler::TNode<JSReceiver> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp73}, compiler::TNode<JSReceiver>{tmp79}, compiler::TNode<Object>{tmp75});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 390);
    ca_.Goto(&block14, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSTypedArray> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSFunction> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block13, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 394);
    compiler::TNode<JSReceiver> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp82}, compiler::TNode<JSReceiver>{tmp88}, compiler::TNode<Object>{tmp84}, compiler::TNode<Object>{tmp85}, compiler::TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 390);
    ca_.Goto(&block14, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp90);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<JSTypedArray> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<JSFunction> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 397);
    compiler::TNode<JSTypedArray> tmp99;
    USE(tmp99);
    tmp99 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp91}, compiler::TNode<Object>{tmp98}, p_methodName);
    ca_.Goto(&block1, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSTypedArray> tmp105;
    ca_.Bind(&block1, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 363);
    ca_.Goto(&block15, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    compiler::TNode<Context> tmp106;
    compiler::TNode<JSTypedArray> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<JSTypedArray> tmp111;
    ca_.Bind(&block15, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
  return compiler::TNode<JSTypedArray>{tmp111};
}

compiler::TNode<JSTypedArray> TypedArraySpeciesCreateByLength_310(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 408);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_66(state_);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_66(state_);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 407);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = TypedArraySpeciesCreate_309(state_, compiler::TNode<Context>{tmp0}, p_methodName, 1, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Object>{tmp2}, compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 409);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    compiler::TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr13ATPositiveSmi_161(state_, compiler::TNode<Smi>{tmp2});
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<JSTypedArray> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 410);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp10}, MessageTemplate::kTypedArrayTooShort);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSTypedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 413);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSTypedArray> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 401);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25);
  return compiler::TNode<JSTypedArray>{tmp25};
}

compiler::TNode<JSArrayBuffer> Cast13JSArrayBuffer_1423(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<JSArrayBuffer> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast13JSArrayBuffer_95(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
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
    compiler::TNode<JSArrayBuffer> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArrayBuffer> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/../../deps/v8/src/builtins/typed-array-createtypedarray.tq", 114);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArrayBuffer> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArrayBuffer>{tmp23};
}

}  // namespace internal
}  // namespace v8

