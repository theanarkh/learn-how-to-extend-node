#include "torque-generated/class-definitions-tq.h"

#include "torque-generated/class-verifiers-tq.h"

#include "src/objects/struct-inl.h"

#include "torque-generated/internal-class-definitions-tq-inl.h"

namespace v8 {
namespace internal {
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFixedArrayBase<FixedArrayBase, HeapObject>::FixedArrayBaseVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FixedArrayBaseVerify(FixedArrayBase::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedString<String, Name>::StringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StringVerify(String::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedName<Name, HeapObject>::NameVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::NameVerify(Name::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSObject<JSObject, JSReceiver>::JSObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSObjectVerify(JSObject::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedOddball<Oddball, HeapObject>::OddballVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::OddballVerify(Oddball::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSymbol<Symbol, Name>::SymbolVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SymbolVerify(Symbol::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedConsString<ConsString, String>::ConsStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalizedString<InternalizedString, String>::InternalizedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqString<SeqString, String>::SeqStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqOneByteString<SeqOneByteString, SeqString>::SeqOneByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqTwoByteString<SeqTwoByteString, SeqString>::SeqTwoByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSlicedString<SlicedString, String>::SlicedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedThinString<ThinString, String>::ThinStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStruct<Struct, HeapObject>::StructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StructVerify(Struct::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTuple2<Tuple2, Struct>::Tuple2Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::Tuple2Verify(Tuple2::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTuple3<Tuple3, Tuple2>::Tuple3Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::Tuple3Verify(Tuple3::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedEnumCache<EnumCache, Struct>::EnumCacheVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::EnumCacheVerify(EnumCache::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSourcePositionTableWithFrameCache<SourcePositionTableWithFrameCache, Struct>::SourcePositionTableWithFrameCacheVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SourcePositionTableWithFrameCacheVerify(SourcePositionTableWithFrameCache::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSProxy<JSProxy, JSReceiver>::JSProxyVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSProxyVerify(JSProxy::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGlobalProxy<JSGlobalProxy, JSObject>::JSGlobalProxyVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSPrimitiveWrapper<JSPrimitiveWrapper, JSObject>::JSPrimitiveWrapperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCallHandlerInfo<CallHandlerInfo, Struct>::CallHandlerInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CallHandlerInfoVerify(CallHandlerInfo::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSortState<SortState, Struct>::SortStateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SortStateVerify(SortState::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalClass<InternalClass, Struct>::InternalClassVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalClassVerify(InternalClass::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSmiPair<SmiPair, Struct>::SmiPairVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SmiPairVerify(SmiPair::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSmiBox<SmiBox, Struct>::SmiBoxVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SmiBoxVerify(SmiBox::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
}  // namespace internal
}  // namespace v8
