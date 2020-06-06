#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_

#include "torque-generated/class-definitions-tq.h"

#include "src/objects/objects-inl.h"


// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
template <class D, class P>
Smi TorqueGeneratedFixedArrayBase<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedFixedArrayBase<D, P>::set_length(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedFixedArrayBase<D, P>::TorqueGeneratedFixedArrayBase(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsFixedArrayBase());
}
template <class D, class P>
int32_t TorqueGeneratedString<D, P>::length() const {
  return this->template ReadField<int32_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedString<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsString());
}
template <class D, class P>
uint32_t TorqueGeneratedName<D, P>::hash_field() const {
  return this->template ReadField<uint32_t>(kHashFieldOffset);
}
template <class D, class P>
void TorqueGeneratedName<D, P>::set_hash_field(uint32_t value) {
  this->template WriteField<uint32_t>(kHashFieldOffset, value);
}

template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsName());
}
template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSObject::elements(isolate);
}
template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements(Isolate* isolate) const {
  return TaggedField<FixedArrayBase, kElementsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSObject<D, P>::set_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kElementsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
double TorqueGeneratedOddball<D, P>::to_number_raw() const {
  return this->template ReadField<double>(kToNumberRawOffset);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number_raw(double value) {
  this->template WriteField<double>(kToNumberRawOffset, value);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_string(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string(Isolate* isolate) const {
  return TaggedField<String, kToStringOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kToStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToStringOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_number(isolate);
}
template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number(Isolate* isolate) const {
  Object value = TaggedField<Object, kToNumberOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kToNumberOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToNumberOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::type_of(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of(Isolate* isolate) const {
  return TaggedField<String, kTypeOfOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_type_of(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kTypeOfOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTypeOfOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedOddball<D, P>::kind() const {
  return TaggedField<Smi, kKindOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_kind(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kKindOffset, value);
}

template<class D, class P>
inline TorqueGeneratedOddball<D, P>::TorqueGeneratedOddball(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsOddball());
}
template <class D, class P>
int32_t TorqueGeneratedSymbol<D, P>::flags() const {
  return this->template ReadField<int32_t>(kFlagsOffset);
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_flags(int32_t value) {
  this->template WriteField<int32_t>(kFlagsOffset, value);
}

template <class D, class P>
Object TorqueGeneratedSymbol<D, P>::name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSymbol::name(isolate);
}
template <class D, class P>
Object TorqueGeneratedSymbol<D, P>::name(Isolate* isolate) const {
  Object value = TaggedField<Object, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSymbol());
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::first(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first(Isolate* isolate) const {
  return TaggedField<String, kFirstOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_first(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFirstOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedConsString<D, P>::second() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::second(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::second(Isolate* isolate) const {
  return TaggedField<String, kSecondOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_second(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSecondOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsConsString());
}
template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsInternalizedString());
}
template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqString());
}
template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqOneByteString());
}
template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqTwoByteString());
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSlicedString::parent(isolate);
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent(Isolate* isolate) const {
  return TaggedField<String, kParentOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_parent(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSlicedString<D, P>::offset() const {
  return TaggedField<Smi, kOffsetOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_offset(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kOffsetOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSlicedString());
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedThinString::actual(isolate);
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual(Isolate* isolate) const {
  return TaggedField<String, kActualOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedThinString<D, P>::set_actual(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kActualOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActualOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsThinString());
}
template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsStruct());
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value1(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue1Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value1(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue1Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue1Offset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value2(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue2Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value2(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue2Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue2Offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
Object TorqueGeneratedTuple3<D, P>::value3() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple3::value3(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple3<D, P>::value3(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue3Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple3<D, P>::set_value3(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue3Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue3Offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTuple3<D, P>::TorqueGeneratedTuple3(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::keys(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys(Isolate* isolate) const {
  return TaggedField<FixedArray, kKeysOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_keys(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kKeysOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeysOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::indices(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices(Isolate* isolate) const {
  return TaggedField<FixedArray, kIndicesOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_indices(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kIndicesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndicesOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedEnumCache<D, P>::TorqueGeneratedEnumCache(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsEnumCache());
}
template <class D, class P>
ByteArray TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::source_position_table() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourcePositionTableWithFrameCache::source_position_table(isolate);
}
template <class D, class P>
ByteArray TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::source_position_table(Isolate* isolate) const {
  return TaggedField<ByteArray, kSourcePositionTableOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::set_source_position_table(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSourcePositionTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourcePositionTableOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::stack_frame_cache() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourcePositionTableWithFrameCache::stack_frame_cache(isolate);
}
template <class D, class P>
Object TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::stack_frame_cache(Isolate* isolate) const {
  Object value = TaggedField<Object, kStackFrameCacheOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::set_stack_frame_cache(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kStackFrameCacheOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackFrameCacheOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::TorqueGeneratedSourcePositionTableWithFrameCache(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSourcePositionTableWithFrameCache());
}
template <class D, class P>
Object TorqueGeneratedJSProxy<D, P>::target() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::target(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSProxy<D, P>::target(Isolate* isolate) const {
  Object value = TaggedField<Object, kTargetOffset>::load(isolate, *this);
  DCHECK(value.IsNull() || value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_target(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNull() || value.IsJSReceiver());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSProxy<D, P>::handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::handler(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSProxy<D, P>::handler(Isolate* isolate) const {
  Object value = TaggedField<Object, kHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsNull() || value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_handler(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNull() || value.IsJSReceiver());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSProxy());
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGlobalProxy::native_context(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context(Isolate* isolate) const {
  Object value = TaggedField<Object, kNativeContextOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGlobalProxy<D, P>::set_native_context(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSGlobalProxy());
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPrimitiveWrapper::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value(Isolate* isolate) const {
  Object value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPrimitiveWrapper<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSPrimitiveWrapper());
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback(Isolate* isolate) const {
  Object value = TaggedField<Object, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::js_callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback(Isolate* isolate) const {
  Object value = TaggedField<Object, kJsCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_js_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsForeign());
  WRITE_FIELD(*this, kJsCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kJsCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data(Isolate* isolate) const {
  Object value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsCallHandlerInfo());
}
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::receiver(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver(Isolate* isolate) const {
  return TaggedField<JSReceiver, kReceiverOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_receiver(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverMap(isolate);
}
template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap(Isolate* isolate) const {
  return TaggedField<Map, kInitialReceiverMapOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverMap(Map value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsMap());
  WRITE_FIELD(*this, kInitialReceiverMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverMapOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverLength(isolate);
}
template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength(Isolate* isolate) const {
  Object value = TaggedField<Object, kInitialReceiverLengthOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverLength(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kInitialReceiverLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverLengthOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSortState<D, P>::userCmpFn() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::userCmpFn(isolate);
}
template <class D, class P>
Object TorqueGeneratedSortState<D, P>::userCmpFn(Isolate* isolate) const {
  Object value = TaggedField<Object, kUserCmpFnOffset>::load(isolate, *this);
  DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_userCmpFn(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kUserCmpFnOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUserCmpFnOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::sortComparePtr() const {
  return TaggedField<Smi, kSortComparePtrOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortComparePtr(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kSortComparePtrOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::loadFn() const {
  return TaggedField<Smi, kLoadFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_loadFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLoadFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::storeFn() const {
  return TaggedField<Smi, kStoreFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_storeFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kStoreFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::deleteFn() const {
  return TaggedField<Smi, kDeleteFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_deleteFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kDeleteFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::canUseSameAccessorFn() const {
  return TaggedField<Smi, kCanUseSameAccessorFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_canUseSameAccessorFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kCanUseSameAccessorFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::minGallop() const {
  return TaggedField<Smi, kMinGallopOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_minGallop(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kMinGallopOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::pendingRunsSize() const {
  return TaggedField<Smi, kPendingRunsSizeOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRunsSize(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kPendingRunsSizeOffset, value);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::pendingRuns(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns(Isolate* isolate) const {
  return TaggedField<FixedArray, kPendingRunsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRuns(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kPendingRunsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPendingRunsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::workArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray(Isolate* isolate) const {
  return TaggedField<FixedArray, kWorkArrayOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_workArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kWorkArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWorkArrayOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::tempArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray(Isolate* isolate) const {
  return TaggedField<FixedArray, kTempArrayOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_tempArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kTempArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTempArrayOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::sortLength() const {
  return TaggedField<Smi, kSortLengthOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortLength(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kSortLengthOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::numberOfUndefined() const {
  return TaggedField<Smi, kNumberOfUndefinedOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_numberOfUndefined(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kNumberOfUndefinedOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSortState());
}
template <class D, class P>
Smi TorqueGeneratedInternalClass<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_a(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kAOffset, value);
}

template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInternalClass::b(isolate);
}
template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b(Isolate* isolate) const {
  Object value = TaggedField<Object, kBOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_b(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsInternalClass());
}
template <class D, class P>
Smi TorqueGeneratedSmiPair<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_a(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kAOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSmiPair<D, P>::b() const {
  return TaggedField<Smi, kBOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_b(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kBOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSmiPair());
}
template <class D, class P>
Smi TorqueGeneratedSmiBox<D, P>::value() const {
  return TaggedField<Smi, kValueOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_value(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSmiBox<D, P>::unrelated() const {
  return TaggedField<Smi, kUnrelatedOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_unrelated(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kUnrelatedOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSmiBox());
}
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
