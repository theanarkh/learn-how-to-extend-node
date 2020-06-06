#ifdef VERIFY_HEAP

#include "src/objects/objects.h"
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
#include "torque-generated/class-verifiers-tq.h"
#include "torque-generated/internal-class-definitions-tq-inl.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
void TorqueGeneratedClassVerifiers::ContextVerify(Context o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsContext());
  {
    Object length__value = TaggedField<Object, Context::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
  {
    Object scope_info__value = TaggedField<Object, Context::kScopeInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, scope_info__value);
    CHECK(scope_info__value.IsScopeInfo());
  }
  {
    Object previous__value = TaggedField<Object, Context::kPreviousOffset>::load(o, 0);
    Object::VerifyPointer(isolate, previous__value);
  }
  {
    Object extension__value = TaggedField<Object, Context::kExtensionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, extension__value);
  }
  {
    Object native_context__value = TaggedField<Object, Context::kNativeContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, native_context__value);
  }
}
void TorqueGeneratedClassVerifiers::HeapObjectVerify(HeapObject o, Isolate* isolate) {
  CHECK(o.IsHeapObject());
  {
    Object map__value = TaggedField<Object, HeapObject::kMapOffset>::load(o, 0);
    Object::VerifyPointer(isolate, map__value);
    CHECK(map__value.IsMap());
  }
}
void TorqueGeneratedClassVerifiers::JSReceiverVerify(JSReceiver o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsJSReceiver());
  {
    Object properties_or_hash__value = TaggedField<Object, JSReceiver::kPropertiesOrHashOffset>::load(o, 0);
    Object::VerifyPointer(isolate, properties_or_hash__value);
    CHECK(properties_or_hash__value.IsSmi() || properties_or_hash__value.IsFixedArrayBase() || properties_or_hash__value.IsPropertyArray());
  }
}
void TorqueGeneratedClassVerifiers::HeapNumberVerify(HeapNumber o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsHeapNumber());
}
void TorqueGeneratedClassVerifiers::FixedArrayVerify(FixedArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsFixedArray());
  for (int i = 0; i < TaggedField<Smi, FixedArray::kLengthOffset>::load(o).value(); ++i) {
    Object objects__value = TaggedField<Object, FixedArray::kObjectsOffset>::load(o, i * kTaggedSize);
    Object::VerifyPointer(isolate, objects__value);
  }
}
void TorqueGeneratedClassVerifiers::FixedArrayBaseVerify(FixedArrayBase o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFixedArrayBase());
  {
    Object length__value = TaggedField<Object, FixedArrayBase::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::StringVerify(String o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(o.IsString());
}
void TorqueGeneratedClassVerifiers::NameVerify(Name o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsName());
}
void TorqueGeneratedClassVerifiers::JSArrayVerify(JSArray o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArray());
  {
    Object length__value = TaggedField<Object, JSArray::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi() || length__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSObjectVerify(JSObject o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  // Instance type check skipped because
  // it is an instantiated abstract class.
  {
    Object elements__value = TaggedField<Object, JSObject::kElementsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, elements__value);
    CHECK(elements__value.IsFixedArrayBase());
  }
}
void TorqueGeneratedClassVerifiers::OddballVerify(Oddball o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsOddball());
  {
    Object to_string__value = TaggedField<Object, Oddball::kToStringOffset>::load(o, 0);
    Object::VerifyPointer(isolate, to_string__value);
    CHECK(to_string__value.IsString());
  }
  {
    Object to_number__value = TaggedField<Object, Oddball::kToNumberOffset>::load(o, 0);
    Object::VerifyPointer(isolate, to_number__value);
    CHECK(to_number__value.IsSmi() || to_number__value.IsHeapNumber());
  }
  {
    Object type_of__value = TaggedField<Object, Oddball::kTypeOfOffset>::load(o, 0);
    Object::VerifyPointer(isolate, type_of__value);
    CHECK(type_of__value.IsString());
  }
  {
    Object kind__value = TaggedField<Object, Oddball::kKindOffset>::load(o, 0);
    Object::VerifyPointer(isolate, kind__value);
    CHECK(kind__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SymbolVerify(Symbol o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(o.IsSymbol());
  {
    Object name__value = TaggedField<Object, Symbol::kNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name__value);
  }
}
void TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsConsString());
  {
    Object first__value = TaggedField<Object, ConsString::kFirstOffset>::load(o, 0);
    Object::VerifyPointer(isolate, first__value);
    CHECK(first__value.IsString());
  }
  {
    Object second__value = TaggedField<Object, ConsString::kSecondOffset>::load(o, 0);
    Object::VerifyPointer(isolate, second__value);
    CHECK(second__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::ExternalStringVerify(ExternalString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsExternalString());
}
void TorqueGeneratedClassVerifiers::ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(o.IsExternalOneByteString());
}
void TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(o.IsExternalTwoByteString());
}
void TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsInternalizedString());
}
void TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsSeqString());
}
void TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(o.IsSeqOneByteString());
}
void TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(o.IsSeqTwoByteString());
}
void TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsSlicedString());
  {
    Object parent__value = TaggedField<Object, SlicedString::kParentOffset>::load(o, 0);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(parent__value.IsString());
  }
  {
    Object offset__value = TaggedField<Object, SlicedString::kOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(offset__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsThinString());
  {
    Object actual__value = TaggedField<Object, ThinString::kActualOffset>::load(o, 0);
    Object::VerifyPointer(isolate, actual__value);
    CHECK(actual__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::StructVerify(Struct o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsStruct());
}
void TorqueGeneratedClassVerifiers::Tuple2Verify(Tuple2 o, Isolate* isolate) {
  o.StructVerify(isolate);
  // Instance type check skipped because
  // it is an instantiated abstract class.
  {
    Object value1__value = TaggedField<Object, Tuple2::kValue1Offset>::load(o, 0);
    Object::VerifyPointer(isolate, value1__value);
  }
  {
    Object value2__value = TaggedField<Object, Tuple2::kValue2Offset>::load(o, 0);
    Object::VerifyPointer(isolate, value2__value);
  }
}
void TorqueGeneratedClassVerifiers::Tuple3Verify(Tuple3 o, Isolate* isolate) {
  o.Tuple2Verify(isolate);
  // Instance type check skipped because
  // it is an instantiated abstract class.
  {
    Object value3__value = TaggedField<Object, Tuple3::kValue3Offset>::load(o, 0);
    Object::VerifyPointer(isolate, value3__value);
  }
}
void TorqueGeneratedClassVerifiers::FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsFixedDoubleArray());
}
void TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWeakFixedArray());
  {
    Object length__value = TaggedField<Object, WeakFixedArray::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ByteArrayVerify(ByteArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsByteArray());
}
void TorqueGeneratedClassVerifiers::MapVerify(Map o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsMap());
  {
    Object prototype__value = TaggedField<Object, Map::kPrototypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prototype__value);
    CHECK(prototype__value.IsHeapObject());
  }
  {
    Object constructor_or_back_pointer__value = TaggedField<Object, Map::kConstructorOrBackPointerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, constructor_or_back_pointer__value);
  }
  {
    Object instance_descriptors__value = TaggedField<Object, Map::kInstanceDescriptorsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instance_descriptors__value);
    CHECK(instance_descriptors__value.IsDescriptorArray());
  }
  {
    Object layout_descriptor__value = TaggedField<Object, Map::kLayoutDescriptorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, layout_descriptor__value);
    CHECK(layout_descriptor__value.IsLayoutDescriptor());
  }
  {
    Object dependent_code__value = TaggedField<Object, Map::kDependentCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(dependent_code__value.IsDependentCode());
  }
  {
    Object prototype_validity_cell__value = TaggedField<Object, Map::kPrototypeValidityCellOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prototype_validity_cell__value);
    CHECK(prototype_validity_cell__value.IsSmi() || prototype_validity_cell__value.IsCell());
  }
  {
    MaybeObject transitions_or_prototype_info__value = TaggedField<MaybeObject, Map::kTransitionsOrPrototypeInfoOffset>::load(o, 0);
    MaybeObject::VerifyMaybeObjectPointer(isolate, transitions_or_prototype_info__value);
    CHECK(transitions_or_prototype_info__value.IsWeakOrCleared() || transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsSmi() || transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsTransitionArray() || transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsMap() || transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsPrototypeInfo());
  }
}
void TorqueGeneratedClassVerifiers::EnumCacheVerify(EnumCache o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsEnumCache());
  {
    Object keys__value = TaggedField<Object, EnumCache::kKeysOffset>::load(o, 0);
    Object::VerifyPointer(isolate, keys__value);
    CHECK(keys__value.IsFixedArray());
  }
  {
    Object indices__value = TaggedField<Object, EnumCache::kIndicesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, indices__value);
    CHECK(indices__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::SourcePositionTableWithFrameCacheVerify(SourcePositionTableWithFrameCache o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSourcePositionTableWithFrameCache());
  {
    Object source_position_table__value = TaggedField<Object, SourcePositionTableWithFrameCache::kSourcePositionTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source_position_table__value);
    CHECK(source_position_table__value.IsByteArray());
  }
  {
    Object stack_frame_cache__value = TaggedField<Object, SourcePositionTableWithFrameCache::kStackFrameCacheOffset>::load(o, 0);
    Object::VerifyPointer(isolate, stack_frame_cache__value);
  }
}
void TorqueGeneratedClassVerifiers::DescriptorArrayVerify(DescriptorArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsDescriptorArray());
  {
    Object enum_cache__value = TaggedField<Object, DescriptorArray::kEnumCacheOffset>::load(o, 0);
    Object::VerifyPointer(isolate, enum_cache__value);
    CHECK(enum_cache__value.IsEnumCache());
  }
}
void TorqueGeneratedClassVerifiers::JSFunctionVerify(JSFunction o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSFunction());
  {
    Object shared_function_info__value = TaggedField<Object, JSFunction::kSharedFunctionInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object context__value = TaggedField<Object, JSFunction::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object feedback_cell__value = TaggedField<Object, JSFunction::kFeedbackCellOffset>::load(o, 0);
    Object::VerifyPointer(isolate, feedback_cell__value);
    CHECK(feedback_cell__value.IsFeedbackCell());
  }
  {
    MaybeObject code__value = TaggedField<MaybeObject, JSFunction::kCodeOffset>::load(o, 0);
    MaybeObject::VerifyMaybeObjectPointer(isolate, code__value);
    CHECK(code__value.IsWeakOrCleared() || code__value.GetHeapObjectOrSmi().IsCode());
  }
}
void TorqueGeneratedClassVerifiers::JSProxyVerify(JSProxy o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(o.IsJSProxy());
  {
    Object target__value = TaggedField<Object, JSProxy::kTargetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsNull() || target__value.IsJSReceiver());
  }
  {
    Object handler__value = TaggedField<Object, JSProxy::kHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(handler__value.IsNull() || handler__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSGlobalProxy());
  {
    Object native_context__value = TaggedField<Object, JSGlobalProxy::kNativeContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, native_context__value);
  }
}
void TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSPrimitiveWrapper());
  {
    Object value__value = TaggedField<Object, JSPrimitiveWrapper::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
  }
}
void TorqueGeneratedClassVerifiers::JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArgumentsObject());
}
void TorqueGeneratedClassVerifiers::JSSloppyArgumentsObjectVerify(JSSloppyArgumentsObject o, Isolate* isolate) {
  o.JSArgumentsObjectVerify(isolate);
  CHECK(o.IsJSSloppyArgumentsObject());
  {
    Object callee__value = TaggedField<Object, JSSloppyArgumentsObject::kCalleeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callee__value);
  }
}
void TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArrayIterator());
  {
    Object iterated_object__value = TaggedField<Object, JSArrayIterator::kIteratedObjectOffset>::load(o, 0);
    Object::VerifyPointer(isolate, iterated_object__value);
    CHECK(iterated_object__value.IsJSReceiver());
  }
  {
    Object next_index__value = TaggedField<Object, JSArrayIterator::kNextIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next_index__value);
    CHECK(next_index__value.IsSmi() || next_index__value.IsHeapNumber());
  }
  {
    Object kind__value = TaggedField<Object, JSArrayIterator::kKindOffset>::load(o, 0);
    Object::VerifyPointer(isolate, kind__value);
    CHECK(kind__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::CallHandlerInfoVerify(CallHandlerInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsCallHandlerInfo());
  {
    Object callback__value = TaggedField<Object, CallHandlerInfo::kCallbackOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(callback__value.IsUndefined() || callback__value.IsForeign());
  }
  {
    Object js_callback__value = TaggedField<Object, CallHandlerInfo::kJsCallbackOffset>::load(o, 0);
    Object::VerifyPointer(isolate, js_callback__value);
    CHECK(js_callback__value.IsUndefined() || js_callback__value.IsForeign());
  }
  {
    Object data__value = TaggedField<Object, CallHandlerInfo::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::ModuleVerify(Module o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsModule());
  {
    Object exports__value = TaggedField<Object, Module::kExportsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, exports__value);
    CHECK(exports__value.IsObjectHashTable());
  }
  {
    Object hash__value = TaggedField<Object, Module::kHashOffset>::load(o, 0);
    Object::VerifyPointer(isolate, hash__value);
    CHECK(hash__value.IsSmi());
  }
  {
    Object status__value = TaggedField<Object, Module::kStatusOffset>::load(o, 0);
    Object::VerifyPointer(isolate, status__value);
    CHECK(status__value.IsSmi());
  }
  {
    Object module_namespace__value = TaggedField<Object, Module::kModuleNamespaceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, module_namespace__value);
    CHECK(module_namespace__value.IsUndefined() || module_namespace__value.IsJSModuleNamespace());
  }
  {
    Object exception__value = TaggedField<Object, Module::kExceptionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, exception__value);
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleVerify(SourceTextModule o, Isolate* isolate) {
  o.ModuleVerify(isolate);
  CHECK(o.IsSourceTextModule());
  {
    Object code__value = TaggedField<Object, SourceTextModule::kCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, code__value);
    CHECK(code__value.IsSourceTextModuleInfo() || code__value.IsJSFunction() || code__value.IsJSGeneratorObject() || code__value.IsSharedFunctionInfo());
  }
  {
    Object regular_exports__value = TaggedField<Object, SourceTextModule::kRegularExportsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, regular_exports__value);
    CHECK(regular_exports__value.IsFixedArray());
  }
  {
    Object regular_imports__value = TaggedField<Object, SourceTextModule::kRegularImportsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, regular_imports__value);
    CHECK(regular_imports__value.IsFixedArray());
  }
  {
    Object requested_modules__value = TaggedField<Object, SourceTextModule::kRequestedModulesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, requested_modules__value);
    CHECK(requested_modules__value.IsFixedArray());
  }
  {
    Object script__value = TaggedField<Object, SourceTextModule::kScriptOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsScript());
  }
  {
    Object import_meta__value = TaggedField<Object, SourceTextModule::kImportMetaOffset>::load(o, 0);
    Object::VerifyPointer(isolate, import_meta__value);
    CHECK(import_meta__value.IsTheHole() || import_meta__value.IsJSObject());
  }
  {
    Object dfs_index__value = TaggedField<Object, SourceTextModule::kDfsIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, dfs_index__value);
    CHECK(dfs_index__value.IsSmi());
  }
  {
    Object dfs_ancestor_index__value = TaggedField<Object, SourceTextModule::kDfsAncestorIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, dfs_ancestor_index__value);
    CHECK(dfs_ancestor_index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SyntheticModuleVerify(SyntheticModule o, Isolate* isolate) {
  o.ModuleVerify(isolate);
  CHECK(o.IsSyntheticModule());
  {
    Object name__value = TaggedField<Object, SyntheticModule::kNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString());
  }
  {
    Object export_names__value = TaggedField<Object, SyntheticModule::kExportNamesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, export_names__value);
    CHECK(export_names__value.IsFixedArray());
  }
  {
    Object evaluation_steps__value = TaggedField<Object, SyntheticModule::kEvaluationStepsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, evaluation_steps__value);
    CHECK(evaluation_steps__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSModuleNamespaceVerify(JSModuleNamespace o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSModuleNamespace());
  {
    Object module__value = TaggedField<Object, JSModuleNamespace::kModuleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, module__value);
    CHECK(module__value.IsModule());
  }
}
void TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(JSWeakCollection o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSWeakCollection());
  {
    Object table__value = TaggedField<Object, JSWeakCollection::kTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSWeakSetVerify(JSWeakSet o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(o.IsJSWeakSet());
}
void TorqueGeneratedClassVerifiers::JSWeakMapVerify(JSWeakMap o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(o.IsJSWeakMap());
}
void TorqueGeneratedClassVerifiers::JSCollectionIteratorVerify(JSCollectionIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCollectionIterator());
  {
    Object table__value = TaggedField<Object, JSCollectionIterator::kTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, table__value);
  }
  {
    Object index__value = TaggedField<Object, JSCollectionIterator::kIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, index__value);
  }
}
void TorqueGeneratedClassVerifiers::JSMessageObjectVerify(JSMessageObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSMessageObject());
  {
    Object message_type__value = TaggedField<Object, JSMessageObject::kMessageTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, message_type__value);
    CHECK(message_type__value.IsSmi());
  }
  {
    Object arguments__value = TaggedField<Object, JSMessageObject::kArgumentsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, arguments__value);
  }
  {
    Object script__value = TaggedField<Object, JSMessageObject::kScriptOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsScript());
  }
  {
    Object stack_frames__value = TaggedField<Object, JSMessageObject::kStackFramesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, stack_frames__value);
  }
  {
    Object shared_info__value = TaggedField<Object, JSMessageObject::kSharedInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_info__value);
    CHECK(shared_info__value.IsUndefined() || shared_info__value.IsSharedFunctionInfo());
  }
  {
    Object bytecode_offset__value = TaggedField<Object, JSMessageObject::kBytecodeOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bytecode_offset__value);
    CHECK(bytecode_offset__value.IsSmi());
  }
  {
    Object start_position__value = TaggedField<Object, JSMessageObject::kStartPositionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, start_position__value);
    CHECK(start_position__value.IsSmi());
  }
  {
    Object end_position__value = TaggedField<Object, JSMessageObject::kEndPositionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, end_position__value);
    CHECK(end_position__value.IsSmi());
  }
  {
    Object error_level__value = TaggedField<Object, JSMessageObject::kErrorLevelOffset>::load(o, 0);
    Object::VerifyPointer(isolate, error_level__value);
    CHECK(error_level__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WeakArrayListVerify(WeakArrayList o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWeakArrayList());
  {
    Object capacity__value = TaggedField<Object, WeakArrayList::kCapacityOffset>::load(o, 0);
    Object::VerifyPointer(isolate, capacity__value);
    CHECK(capacity__value.IsSmi());
  }
  {
    Object length__value = TaggedField<Object, WeakArrayList::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPrototypeInfo());
  {
    Object js_module_namespace__value = TaggedField<Object, PrototypeInfo::kJsModuleNamespaceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, js_module_namespace__value);
    CHECK(js_module_namespace__value.IsUndefined() || js_module_namespace__value.IsJSModuleNamespace());
  }
  {
    Object prototype_users__value = TaggedField<Object, PrototypeInfo::kPrototypeUsersOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prototype_users__value);
    CHECK(prototype_users__value.IsZero() || prototype_users__value.IsWeakArrayList());
  }
  {
    Object registry_slot__value = TaggedField<Object, PrototypeInfo::kRegistrySlotOffset>::load(o, 0);
    Object::VerifyPointer(isolate, registry_slot__value);
    CHECK(registry_slot__value.IsSmi());
  }
  {
    Object validity_cell__value = TaggedField<Object, PrototypeInfo::kValidityCellOffset>::load(o, 0);
    Object::VerifyPointer(isolate, validity_cell__value);
  }
  {
    Object bit_field__value = TaggedField<Object, PrototypeInfo::kBitFieldOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bit_field__value);
    CHECK(bit_field__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ScriptVerify(Script o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsScript());
  {
    Object source__value = TaggedField<Object, Script::kSourceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source__value);
  }
  {
    Object name__value = TaggedField<Object, Script::kNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name__value);
  }
  {
    Object line_offset__value = TaggedField<Object, Script::kLineOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, line_offset__value);
    CHECK(line_offset__value.IsSmi());
  }
  {
    Object column_offset__value = TaggedField<Object, Script::kColumnOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, column_offset__value);
    CHECK(column_offset__value.IsSmi());
  }
  {
    Object context__value = TaggedField<Object, Script::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
  }
  {
    Object script_type__value = TaggedField<Object, Script::kScriptTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script_type__value);
    CHECK(script_type__value.IsSmi());
  }
  {
    Object line_ends__value = TaggedField<Object, Script::kLineEndsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, line_ends__value);
  }
  {
    Object id__value = TaggedField<Object, Script::kIdOffset>::load(o, 0);
    Object::VerifyPointer(isolate, id__value);
    CHECK(id__value.IsSmi());
  }
  {
    Object eval_from_shared_or_wrapped_arguments__value = TaggedField<Object, Script::kEvalFromSharedOrWrappedArgumentsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, eval_from_shared_or_wrapped_arguments__value);
  }
  {
    Object eval_from_position__value = TaggedField<Object, Script::kEvalFromPositionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, eval_from_position__value);
    CHECK(eval_from_position__value.IsSmi());
  }
  {
    Object shared_function_infos__value = TaggedField<Object, Script::kSharedFunctionInfosOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_function_infos__value);
  }
  {
    Object flags__value = TaggedField<Object, Script::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object source_url__value = TaggedField<Object, Script::kSourceUrlOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source_url__value);
  }
  {
    Object source_mapping_url__value = TaggedField<Object, Script::kSourceMappingUrlOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source_mapping_url__value);
  }
  {
    Object host_defined_options__value = TaggedField<Object, Script::kHostDefinedOptionsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, host_defined_options__value);
  }
}
void TorqueGeneratedClassVerifiers::EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsEmbedderDataArray());
  {
    Object length__value = TaggedField<Object, EmbedderDataArray::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::PreparseDataVerify(PreparseData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPreparseData());
}
void TorqueGeneratedClassVerifiers::InterpreterDataVerify(InterpreterData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsInterpreterData());
  {
    Object bytecode_array__value = TaggedField<Object, InterpreterData::kBytecodeArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bytecode_array__value);
    CHECK(bytecode_array__value.IsBytecodeArray());
  }
  {
    Object interpreter_trampoline__value = TaggedField<Object, InterpreterData::kInterpreterTrampolineOffset>::load(o, 0);
    Object::VerifyPointer(isolate, interpreter_trampoline__value);
    CHECK(interpreter_trampoline__value.IsCode());
  }
}
void TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsSharedFunctionInfo());
  {
    MaybeObject function_data__value = TaggedField<MaybeObject, SharedFunctionInfo::kFunctionDataOffset>::load(o, 0);
    MaybeObject::VerifyMaybeObjectPointer(isolate, function_data__value);
  }
  {
    Object name_or_scope_info__value = TaggedField<Object, SharedFunctionInfo::kNameOrScopeInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name_or_scope_info__value);
    CHECK(name_or_scope_info__value.IsNoSharedNameSentinel() || name_or_scope_info__value.IsScopeInfo() || name_or_scope_info__value.IsString());
  }
  {
    Object outer_scope_info_or_feedback_metadata__value = TaggedField<Object, SharedFunctionInfo::kOuterScopeInfoOrFeedbackMetadataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, outer_scope_info_or_feedback_metadata__value);
    CHECK(outer_scope_info_or_feedback_metadata__value.IsHeapObject());
  }
  {
    Object script_or_debug_info__value = TaggedField<Object, SharedFunctionInfo::kScriptOrDebugInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script_or_debug_info__value);
    CHECK(script_or_debug_info__value.IsUndefined() || script_or_debug_info__value.IsDebugInfo() || script_or_debug_info__value.IsScript());
  }
}
void TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSBoundFunction());
  {
    Object bound_target_function__value = TaggedField<Object, JSBoundFunction::kBoundTargetFunctionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_target_function__value);
    CHECK(bound_target_function__value.IsCallableApiObject() || bound_target_function__value.IsCallableJSProxy() || bound_target_function__value.IsJSBoundFunction() || bound_target_function__value.IsJSFunction());
  }
  {
    Object bound_this__value = TaggedField<Object, JSBoundFunction::kBoundThisOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_this__value);
  }
  {
    Object bound_arguments__value = TaggedField<Object, JSBoundFunction::kBoundArgumentsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_arguments__value);
    CHECK(bound_arguments__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::ForeignVerify(Foreign o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsForeign());
}
void TorqueGeneratedClassVerifiers::FreeSpaceVerify(FreeSpace o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFreeSpace());
  {
    Object size__value = TaggedField<Object, FreeSpace::kSizeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, size__value);
    CHECK(size__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArrayBuffer());
}
void TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArrayBufferView());
  {
    Object buffer__value = TaggedField<Object, JSArrayBufferView::kBufferOffset>::load(o, 0);
    Object::VerifyPointer(isolate, buffer__value);
    CHECK(buffer__value.IsJSArrayBuffer());
  }
}
void TorqueGeneratedClassVerifiers::JSTypedArrayVerify(JSTypedArray o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSTypedArray());
  {
    Object base_pointer__value = TaggedField<Object, JSTypedArray::kBasePointerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, base_pointer__value);
    CHECK(base_pointer__value.IsSmi() || base_pointer__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::JSCollectionVerify(JSCollection o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCollection());
  {
    Object table__value = TaggedField<Object, JSCollection::kTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSSetVerify(JSSet o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(o.IsJSSet());
}
void TorqueGeneratedClassVerifiers::JSMapVerify(JSMap o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(o.IsJSMap());
}
void TorqueGeneratedClassVerifiers::JSDateVerify(JSDate o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDate());
  {
    Object value__value = TaggedField<Object, JSDate::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsSmi() || value__value.IsUndefined() || value__value.IsHeapNumber());
  }
  {
    Object year__value = TaggedField<Object, JSDate::kYearOffset>::load(o, 0);
    Object::VerifyPointer(isolate, year__value);
    CHECK(year__value.IsNaN() || year__value.IsSmi() || year__value.IsUndefined());
  }
  {
    Object month__value = TaggedField<Object, JSDate::kMonthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, month__value);
    CHECK(month__value.IsNaN() || month__value.IsSmi() || month__value.IsUndefined());
  }
  {
    Object day__value = TaggedField<Object, JSDate::kDayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, day__value);
    CHECK(day__value.IsNaN() || day__value.IsSmi() || day__value.IsUndefined());
  }
  {
    Object weekday__value = TaggedField<Object, JSDate::kWeekdayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, weekday__value);
    CHECK(weekday__value.IsNaN() || weekday__value.IsSmi() || weekday__value.IsUndefined());
  }
  {
    Object hour__value = TaggedField<Object, JSDate::kHourOffset>::load(o, 0);
    Object::VerifyPointer(isolate, hour__value);
    CHECK(hour__value.IsNaN() || hour__value.IsSmi() || hour__value.IsUndefined());
  }
  {
    Object min__value = TaggedField<Object, JSDate::kMinOffset>::load(o, 0);
    Object::VerifyPointer(isolate, min__value);
    CHECK(min__value.IsNaN() || min__value.IsSmi() || min__value.IsUndefined());
  }
  {
    Object sec__value = TaggedField<Object, JSDate::kSecOffset>::load(o, 0);
    Object::VerifyPointer(isolate, sec__value);
    CHECK(sec__value.IsNaN() || sec__value.IsSmi() || sec__value.IsUndefined());
  }
  {
    Object cache_stamp__value = TaggedField<Object, JSDate::kCacheStampOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cache_stamp__value);
    CHECK(cache_stamp__value.IsNaN() || cache_stamp__value.IsSmi() || cache_stamp__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSGlobalObject());
  {
    Object native_context__value = TaggedField<Object, JSGlobalObject::kNativeContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
  {
    Object global_proxy__value = TaggedField<Object, JSGlobalObject::kGlobalProxyOffset>::load(o, 0);
    Object::VerifyPointer(isolate, global_proxy__value);
    CHECK(global_proxy__value.IsJSGlobalProxy());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSAsyncFromSyncIterator());
  {
    Object sync_iterator__value = TaggedField<Object, JSAsyncFromSyncIterator::kSyncIteratorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, sync_iterator__value);
    CHECK(sync_iterator__value.IsJSReceiver());
  }
  {
    Object next__value = TaggedField<Object, JSAsyncFromSyncIterator::kNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next__value);
  }
}
void TorqueGeneratedClassVerifiers::JSStringIteratorVerify(JSStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSStringIterator());
  {
    Object string__value = TaggedField<Object, JSStringIterator::kStringOffset>::load(o, 0);
    Object::VerifyPointer(isolate, string__value);
    CHECK(string__value.IsString());
  }
  {
    Object next_index__value = TaggedField<Object, JSStringIterator::kNextIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next_index__value);
    CHECK(next_index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::TemplateInfoVerify(TemplateInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsTemplateInfo());
  {
    Object tag__value = TaggedField<Object, TemplateInfo::kTagOffset>::load(o, 0);
    Object::VerifyPointer(isolate, tag__value);
  }
  {
    Object serial_number__value = TaggedField<Object, TemplateInfo::kSerialNumberOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serial_number__value);
  }
  {
    Object number_of_properties__value = TaggedField<Object, TemplateInfo::kNumberOfPropertiesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, number_of_properties__value);
    CHECK(number_of_properties__value.IsSmi());
  }
  {
    Object property_list__value = TaggedField<Object, TemplateInfo::kPropertyListOffset>::load(o, 0);
    Object::VerifyPointer(isolate, property_list__value);
  }
  {
    Object property_accessors__value = TaggedField<Object, TemplateInfo::kPropertyAccessorsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, property_accessors__value);
  }
}
void TorqueGeneratedClassVerifiers::TemplateObjectDescriptionVerify(TemplateObjectDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsTemplateObjectDescription());
  {
    Object raw_strings__value = TaggedField<Object, TemplateObjectDescription::kRawStringsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, raw_strings__value);
    CHECK(raw_strings__value.IsFixedArray());
  }
  {
    Object cooked_strings__value = TaggedField<Object, TemplateObjectDescription::kCookedStringsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cooked_strings__value);
    CHECK(cooked_strings__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsFunctionTemplateRareData());
  {
    Object prototype_template__value = TaggedField<Object, FunctionTemplateRareData::kPrototypeTemplateOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prototype_template__value);
  }
  {
    Object prototype_provider_template__value = TaggedField<Object, FunctionTemplateRareData::kPrototypeProviderTemplateOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prototype_provider_template__value);
  }
  {
    Object parent_template__value = TaggedField<Object, FunctionTemplateRareData::kParentTemplateOffset>::load(o, 0);
    Object::VerifyPointer(isolate, parent_template__value);
  }
  {
    Object named_property_handler__value = TaggedField<Object, FunctionTemplateRareData::kNamedPropertyHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, named_property_handler__value);
  }
  {
    Object indexed_property_handler__value = TaggedField<Object, FunctionTemplateRareData::kIndexedPropertyHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, indexed_property_handler__value);
  }
  {
    Object instance_template__value = TaggedField<Object, FunctionTemplateRareData::kInstanceTemplateOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instance_template__value);
  }
  {
    Object instance_call_handler__value = TaggedField<Object, FunctionTemplateRareData::kInstanceCallHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instance_call_handler__value);
  }
  {
    Object access_check_info__value = TaggedField<Object, FunctionTemplateRareData::kAccessCheckInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, access_check_info__value);
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(o.IsFunctionTemplateInfo());
  {
    Object call_code__value = TaggedField<Object, FunctionTemplateInfo::kCallCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, call_code__value);
  }
  {
    Object class_name__value = TaggedField<Object, FunctionTemplateInfo::kClassNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, class_name__value);
  }
  {
    Object signature__value = TaggedField<Object, FunctionTemplateInfo::kSignatureOffset>::load(o, 0);
    Object::VerifyPointer(isolate, signature__value);
  }
  {
    Object function_template_rare_data__value = TaggedField<Object, FunctionTemplateInfo::kFunctionTemplateRareDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, function_template_rare_data__value);
  }
  {
    Object shared_function_info__value = TaggedField<Object, FunctionTemplateInfo::kSharedFunctionInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_function_info__value);
  }
  {
    Object flag__value = TaggedField<Object, FunctionTemplateInfo::kFlagOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flag__value);
    CHECK(flag__value.IsSmi());
  }
  {
    Object length__value = TaggedField<Object, FunctionTemplateInfo::kLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
  {
    Object cached_property_name__value = TaggedField<Object, FunctionTemplateInfo::kCachedPropertyNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cached_property_name__value);
  }
}
void TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(o.IsObjectTemplateInfo());
  {
    Object constructor__value = TaggedField<Object, ObjectTemplateInfo::kConstructorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, constructor__value);
  }
  {
    Object data__value = TaggedField<Object, ObjectTemplateInfo::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::PropertyArrayVerify(PropertyArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPropertyArray());
  {
    Object length_and_hash__value = TaggedField<Object, PropertyArray::kLengthAndHashOffset>::load(o, 0);
    Object::VerifyPointer(isolate, length_and_hash__value);
    CHECK(length_and_hash__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::PropertyCellVerify(PropertyCell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPropertyCell());
  {
    Object name__value = TaggedField<Object, PropertyCell::kNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsName());
  }
  {
    Object property_details_raw__value = TaggedField<Object, PropertyCell::kPropertyDetailsRawOffset>::load(o, 0);
    Object::VerifyPointer(isolate, property_details_raw__value);
    CHECK(property_details_raw__value.IsSmi());
  }
  {
    Object value__value = TaggedField<Object, PropertyCell::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object dependent_code__value = TaggedField<Object, PropertyCell::kDependentCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(dependent_code__value.IsDependentCode());
  }
}
void TorqueGeneratedClassVerifiers::JSDataViewVerify(JSDataView o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSDataView());
}
void TorqueGeneratedClassVerifiers::InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsInterceptorInfo());
  {
    Object getter__value = TaggedField<Object, InterceptorInfo::kGetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, getter__value);
    CHECK(getter__value.IsNonNullForeign() || getter__value.IsUndefined() || getter__value.IsZero());
  }
  {
    Object setter__value = TaggedField<Object, InterceptorInfo::kSetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, setter__value);
    CHECK(setter__value.IsNonNullForeign() || setter__value.IsUndefined() || setter__value.IsZero());
  }
  {
    Object query__value = TaggedField<Object, InterceptorInfo::kQueryOffset>::load(o, 0);
    Object::VerifyPointer(isolate, query__value);
    CHECK(query__value.IsNonNullForeign() || query__value.IsUndefined() || query__value.IsZero());
  }
  {
    Object descriptor__value = TaggedField<Object, InterceptorInfo::kDescriptorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, descriptor__value);
    CHECK(descriptor__value.IsNonNullForeign() || descriptor__value.IsUndefined() || descriptor__value.IsZero());
  }
  {
    Object deleter__value = TaggedField<Object, InterceptorInfo::kDeleterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, deleter__value);
    CHECK(deleter__value.IsNonNullForeign() || deleter__value.IsUndefined() || deleter__value.IsZero());
  }
  {
    Object enumerator__value = TaggedField<Object, InterceptorInfo::kEnumeratorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, enumerator__value);
    CHECK(enumerator__value.IsNonNullForeign() || enumerator__value.IsUndefined() || enumerator__value.IsZero());
  }
  {
    Object definer__value = TaggedField<Object, InterceptorInfo::kDefinerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, definer__value);
    CHECK(definer__value.IsNonNullForeign() || definer__value.IsUndefined() || definer__value.IsZero());
  }
  {
    Object data__value = TaggedField<Object, InterceptorInfo::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
  }
  {
    Object flags__value = TaggedField<Object, InterceptorInfo::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAccessCheckInfo());
  {
    Object callback__value = TaggedField<Object, AccessCheckInfo::kCallbackOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(callback__value.IsUndefined() || callback__value.IsZero() || callback__value.IsForeign());
  }
  {
    Object named_interceptor__value = TaggedField<Object, AccessCheckInfo::kNamedInterceptorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, named_interceptor__value);
    CHECK(named_interceptor__value.IsUndefined() || named_interceptor__value.IsZero() || named_interceptor__value.IsInterceptorInfo());
  }
  {
    Object indexed_interceptor__value = TaggedField<Object, AccessCheckInfo::kIndexedInterceptorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, indexed_interceptor__value);
    CHECK(indexed_interceptor__value.IsUndefined() || indexed_interceptor__value.IsZero() || indexed_interceptor__value.IsInterceptorInfo());
  }
  {
    Object data__value = TaggedField<Object, AccessCheckInfo::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsArrayBoilerplateDescription());
  {
    Object flags__value = TaggedField<Object, ArrayBoilerplateDescription::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object constant_elements__value = TaggedField<Object, ArrayBoilerplateDescription::kConstantElementsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, constant_elements__value);
    CHECK(constant_elements__value.IsFixedArrayBase());
  }
}
void TorqueGeneratedClassVerifiers::AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAliasedArgumentsEntry());
  {
    Object aliased_context_slot__value = TaggedField<Object, AliasedArgumentsEntry::kAliasedContextSlotOffset>::load(o, 0);
    Object::VerifyPointer(isolate, aliased_context_slot__value);
    CHECK(aliased_context_slot__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::CellVerify(Cell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsCell());
  {
    Object value__value = TaggedField<Object, Cell::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
  }
}
void TorqueGeneratedClassVerifiers::DataHandlerVerify(DataHandler o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsDataHandler());
  {
    Object smi_handler__value = TaggedField<Object, DataHandler::kSmiHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, smi_handler__value);
    CHECK(smi_handler__value.IsCode() || smi_handler__value.IsSmi());
  }
  {
    Object validity_cell__value = TaggedField<Object, DataHandler::kValidityCellOffset>::load(o, 0);
    Object::VerifyPointer(isolate, validity_cell__value);
    CHECK(validity_cell__value.IsSmi() || validity_cell__value.IsCell());
  }
}
void TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  // Instance type check skipped because
  // it is an instantiated abstract class.
  {
    Object function__value = TaggedField<Object, JSGeneratorObject::kFunctionOffset>::load(o, 0);
    Object::VerifyPointer(isolate, function__value);
    CHECK(function__value.IsJSFunction());
  }
  {
    Object context__value = TaggedField<Object, JSGeneratorObject::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object receiver__value = TaggedField<Object, JSGeneratorObject::kReceiverOffset>::load(o, 0);
    Object::VerifyPointer(isolate, receiver__value);
  }
  {
    Object input_or_debug_pos__value = TaggedField<Object, JSGeneratorObject::kInputOrDebugPosOffset>::load(o, 0);
    Object::VerifyPointer(isolate, input_or_debug_pos__value);
  }
  {
    Object resume_mode__value = TaggedField<Object, JSGeneratorObject::kResumeModeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(resume_mode__value.IsSmi());
  }
  {
    Object continuation__value = TaggedField<Object, JSGeneratorObject::kContinuationOffset>::load(o, 0);
    Object::VerifyPointer(isolate, continuation__value);
    CHECK(continuation__value.IsSmi());
  }
  {
    Object parameters_and_registers__value = TaggedField<Object, JSGeneratorObject::kParametersAndRegistersOffset>::load(o, 0);
    Object::VerifyPointer(isolate, parameters_and_registers__value);
    CHECK(parameters_and_registers__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncFunctionObject());
  {
    Object promise__value = TaggedField<Object, JSAsyncFunctionObject::kPromiseOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsJSPromise());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncGeneratorObject());
  {
    Object queue__value = TaggedField<Object, JSAsyncGeneratorObject::kQueueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, queue__value);
    CHECK(queue__value.IsHeapObject());
  }
  {
    Object is_awaiting__value = TaggedField<Object, JSAsyncGeneratorObject::kIsAwaitingOffset>::load(o, 0);
    Object::VerifyPointer(isolate, is_awaiting__value);
    CHECK(is_awaiting__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSPromiseVerify(JSPromise o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSPromise());
  {
    Object reactions_or_result__value = TaggedField<Object, JSPromise::kReactionsOrResultOffset>::load(o, 0);
    Object::VerifyPointer(isolate, reactions_or_result__value);
  }
  {
    Object flags__value = TaggedField<Object, JSPromise::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::MicrotaskVerify(Microtask o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsMicrotask());
}
void TorqueGeneratedClassVerifiers::CallbackTaskVerify(CallbackTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsCallbackTask());
  {
    Object callback__value = TaggedField<Object, CallbackTask::kCallbackOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(callback__value.IsForeign());
  }
  {
    Object data__value = TaggedField<Object, CallbackTask::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::CallableTaskVerify(CallableTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsCallableTask());
  {
    Object callable__value = TaggedField<Object, CallableTask::kCallableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(callable__value.IsJSReceiver());
  }
  {
    Object context__value = TaggedField<Object, CallableTask::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
}
void TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsStackFrameInfo());
  {
    Object line_number__value = TaggedField<Object, StackFrameInfo::kLineNumberOffset>::load(o, 0);
    Object::VerifyPointer(isolate, line_number__value);
    CHECK(line_number__value.IsSmi());
  }
  {
    Object column_number__value = TaggedField<Object, StackFrameInfo::kColumnNumberOffset>::load(o, 0);
    Object::VerifyPointer(isolate, column_number__value);
    CHECK(column_number__value.IsSmi());
  }
  {
    Object promise_all_index__value = TaggedField<Object, StackFrameInfo::kPromiseAllIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise_all_index__value);
    CHECK(promise_all_index__value.IsSmi());
  }
  {
    Object script_id__value = TaggedField<Object, StackFrameInfo::kScriptIdOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script_id__value);
    CHECK(script_id__value.IsSmi());
  }
  {
    Object script_name__value = TaggedField<Object, StackFrameInfo::kScriptNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script_name__value);
    CHECK(script_name__value.IsNull() || script_name__value.IsUndefined() || script_name__value.IsString());
  }
  {
    Object script_name_or_source_url__value = TaggedField<Object, StackFrameInfo::kScriptNameOrSourceUrlOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script_name_or_source_url__value);
    CHECK(script_name_or_source_url__value.IsNull() || script_name_or_source_url__value.IsUndefined() || script_name_or_source_url__value.IsString());
  }
  {
    Object function_name__value = TaggedField<Object, StackFrameInfo::kFunctionNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, function_name__value);
    CHECK(function_name__value.IsNull() || function_name__value.IsUndefined() || function_name__value.IsString());
  }
  {
    Object method_name__value = TaggedField<Object, StackFrameInfo::kMethodNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, method_name__value);
    CHECK(method_name__value.IsNull() || method_name__value.IsUndefined() || method_name__value.IsString());
  }
  {
    Object type_name__value = TaggedField<Object, StackFrameInfo::kTypeNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, type_name__value);
    CHECK(type_name__value.IsNull() || type_name__value.IsUndefined() || type_name__value.IsString());
  }
  {
    Object eval_origin__value = TaggedField<Object, StackFrameInfo::kEvalOriginOffset>::load(o, 0);
    Object::VerifyPointer(isolate, eval_origin__value);
    CHECK(eval_origin__value.IsNull() || eval_origin__value.IsUndefined() || eval_origin__value.IsString());
  }
  {
    Object wasm_module_name__value = TaggedField<Object, StackFrameInfo::kWasmModuleNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, wasm_module_name__value);
    CHECK(wasm_module_name__value.IsNull() || wasm_module_name__value.IsUndefined() || wasm_module_name__value.IsString());
  }
  {
    Object flag__value = TaggedField<Object, StackFrameInfo::kFlagOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flag__value);
    CHECK(flag__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::StackTraceFrameVerify(StackTraceFrame o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsStackTraceFrame());
  {
    Object frame_array__value = TaggedField<Object, StackTraceFrame::kFrameArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, frame_array__value);
    CHECK(frame_array__value.IsFrameArray() || frame_array__value.IsUndefined());
  }
  {
    Object frame_index__value = TaggedField<Object, StackTraceFrame::kFrameIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, frame_index__value);
    CHECK(frame_index__value.IsSmi());
  }
  {
    Object frame_info__value = TaggedField<Object, StackTraceFrame::kFrameInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, frame_info__value);
    CHECK(frame_info__value.IsUndefined() || frame_info__value.IsStackFrameInfo());
  }
  {
    Object id__value = TaggedField<Object, StackTraceFrame::kIdOffset>::load(o, 0);
    Object::VerifyPointer(isolate, id__value);
    CHECK(id__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ClassPositionsVerify(ClassPositions o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsClassPositions());
  {
    Object start__value = TaggedField<Object, ClassPositions::kStartOffset>::load(o, 0);
    Object::VerifyPointer(isolate, start__value);
    CHECK(start__value.IsSmi());
  }
  {
    Object end__value = TaggedField<Object, ClassPositions::kEndOffset>::load(o, 0);
    Object::VerifyPointer(isolate, end__value);
    CHECK(end__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmExportedFunctionData());
  {
    Object wrapper_code__value = TaggedField<Object, WasmExportedFunctionData::kWrapperCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, wrapper_code__value);
    CHECK(wrapper_code__value.IsCode());
  }
  {
    Object instance__value = TaggedField<Object, WasmExportedFunctionData::kInstanceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsWasmInstanceObject());
  }
  {
    Object jump_table_offset__value = TaggedField<Object, WasmExportedFunctionData::kJumpTableOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, jump_table_offset__value);
    CHECK(jump_table_offset__value.IsSmi());
  }
  {
    Object function_index__value = TaggedField<Object, WasmExportedFunctionData::kFunctionIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, function_index__value);
    CHECK(function_index__value.IsSmi());
  }
  {
    Object c_wrapper_code__value = TaggedField<Object, WasmExportedFunctionData::kCWrapperCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, c_wrapper_code__value);
  }
  {
    Object wasm_call_target__value = TaggedField<Object, WasmExportedFunctionData::kWasmCallTargetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, wasm_call_target__value);
    CHECK(wasm_call_target__value.IsSmi());
  }
  {
    Object packed_args_size__value = TaggedField<Object, WasmExportedFunctionData::kPackedArgsSizeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, packed_args_size__value);
    CHECK(packed_args_size__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(WasmJSFunctionData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmJSFunctionData());
  {
    Object callable__value = TaggedField<Object, WasmJSFunctionData::kCallableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(callable__value.IsJSReceiver());
  }
  {
    Object wrapper_code__value = TaggedField<Object, WasmJSFunctionData::kWrapperCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, wrapper_code__value);
    CHECK(wrapper_code__value.IsCode());
  }
  {
    Object serialized_return_count__value = TaggedField<Object, WasmJSFunctionData::kSerializedReturnCountOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serialized_return_count__value);
    CHECK(serialized_return_count__value.IsSmi());
  }
  {
    Object serialized_parameter_count__value = TaggedField<Object, WasmJSFunctionData::kSerializedParameterCountOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serialized_parameter_count__value);
    CHECK(serialized_parameter_count__value.IsSmi());
  }
  {
    Object serialized_signature__value = TaggedField<Object, WasmJSFunctionData::kSerializedSignatureOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmCapiFunctionData());
  {
    Object wrapper_code__value = TaggedField<Object, WasmCapiFunctionData::kWrapperCodeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, wrapper_code__value);
    CHECK(wrapper_code__value.IsCode());
  }
  {
    Object serialized_signature__value = TaggedField<Object, WasmCapiFunctionData::kSerializedSignatureOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmIndirectFunctionTable());
  {
    Object managed_native_allocations__value = TaggedField<Object, WasmIndirectFunctionTable::kManagedNativeAllocationsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, managed_native_allocations__value);
    CHECK(managed_native_allocations__value.IsUndefined() || managed_native_allocations__value.IsForeign());
  }
  {
    Object refs__value = TaggedField<Object, WasmIndirectFunctionTable::kRefsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, refs__value);
    CHECK(refs__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmDebugInfoVerify(WasmDebugInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmDebugInfo());
  {
    Object instance__value = TaggedField<Object, WasmDebugInfo::kInstanceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsWasmInstanceObject());
  }
  {
    Object interpreter_handle__value = TaggedField<Object, WasmDebugInfo::kInterpreterHandleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, interpreter_handle__value);
    CHECK(interpreter_handle__value.IsUndefined() || interpreter_handle__value.IsForeign());
  }
  {
    Object locals_names__value = TaggedField<Object, WasmDebugInfo::kLocalsNamesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locals_names__value);
    CHECK(locals_names__value.IsUndefined() || locals_names__value.IsFixedArray());
  }
  {
    Object c_wasm_entries__value = TaggedField<Object, WasmDebugInfo::kCWasmEntriesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, c_wasm_entries__value);
    CHECK(c_wasm_entries__value.IsUndefined() || c_wasm_entries__value.IsFixedArray());
  }
  {
    Object c_wasm_entry_map__value = TaggedField<Object, WasmDebugInfo::kCWasmEntryMapOffset>::load(o, 0);
    Object::VerifyPointer(isolate, c_wasm_entry_map__value);
    CHECK(c_wasm_entry_map__value.IsUndefined() || c_wasm_entry_map__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmExceptionTag());
  {
    Object index__value = TaggedField<Object, WasmExceptionTag::kIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, index__value);
    CHECK(index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAsyncGeneratorRequest());
  {
    Object next__value = TaggedField<Object, AsyncGeneratorRequest::kNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsUndefined() || next__value.IsAsyncGeneratorRequest());
  }
  {
    Object resume_mode__value = TaggedField<Object, AsyncGeneratorRequest::kResumeModeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(resume_mode__value.IsSmi());
  }
  {
    Object value__value = TaggedField<Object, AsyncGeneratorRequest::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object promise__value = TaggedField<Object, AsyncGeneratorRequest::kPromiseOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsJSPromise());
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify(SourceTextModuleInfoEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSourceTextModuleInfoEntry());
  {
    Object export_name__value = TaggedField<Object, SourceTextModuleInfoEntry::kExportNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, export_name__value);
    CHECK(export_name__value.IsUndefined() || export_name__value.IsString());
  }
  {
    Object local_name__value = TaggedField<Object, SourceTextModuleInfoEntry::kLocalNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, local_name__value);
    CHECK(local_name__value.IsUndefined() || local_name__value.IsString());
  }
  {
    Object import_name__value = TaggedField<Object, SourceTextModuleInfoEntry::kImportNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, import_name__value);
    CHECK(import_name__value.IsUndefined() || import_name__value.IsString());
  }
  {
    Object module_request__value = TaggedField<Object, SourceTextModuleInfoEntry::kModuleRequestOffset>::load(o, 0);
    Object::VerifyPointer(isolate, module_request__value);
    CHECK(module_request__value.IsSmi());
  }
  {
    Object cell_index__value = TaggedField<Object, SourceTextModuleInfoEntry::kCellIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cell_index__value);
    CHECK(cell_index__value.IsSmi());
  }
  {
    Object beg_pos__value = TaggedField<Object, SourceTextModuleInfoEntry::kBegPosOffset>::load(o, 0);
    Object::VerifyPointer(isolate, beg_pos__value);
    CHECK(beg_pos__value.IsSmi());
  }
  {
    Object end_pos__value = TaggedField<Object, SourceTextModuleInfoEntry::kEndPosOffset>::load(o, 0);
    Object::VerifyPointer(isolate, end_pos__value);
    CHECK(end_pos__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPromiseCapability());
  {
    Object promise__value = TaggedField<Object, PromiseCapability::kPromiseOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsUndefined() || promise__value.IsJSReceiver());
  }
  {
    Object resolve__value = TaggedField<Object, PromiseCapability::kResolveOffset>::load(o, 0);
    Object::VerifyPointer(isolate, resolve__value);
  }
  {
    Object reject__value = TaggedField<Object, PromiseCapability::kRejectOffset>::load(o, 0);
    Object::VerifyPointer(isolate, reject__value);
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionVerify(PromiseReaction o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPromiseReaction());
  {
    Object next__value = TaggedField<Object, PromiseReaction::kNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsZero() || next__value.IsPromiseReaction());
  }
  {
    Object reject_handler__value = TaggedField<Object, PromiseReaction::kRejectHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, reject_handler__value);
    CHECK(reject_handler__value.IsCallableApiObject() || reject_handler__value.IsCallableJSProxy() || reject_handler__value.IsUndefined() || reject_handler__value.IsJSBoundFunction() || reject_handler__value.IsJSFunction());
  }
  {
    Object fulfill_handler__value = TaggedField<Object, PromiseReaction::kFulfillHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, fulfill_handler__value);
    CHECK(fulfill_handler__value.IsCallableApiObject() || fulfill_handler__value.IsCallableJSProxy() || fulfill_handler__value.IsUndefined() || fulfill_handler__value.IsJSBoundFunction() || fulfill_handler__value.IsJSFunction());
  }
  {
    Object promise_or_capability__value = TaggedField<Object, PromiseReaction::kPromiseOrCapabilityOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(promise_or_capability__value.IsUndefined() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability());
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsPromiseReactionJobTask());
  {
    Object argument__value = TaggedField<Object, PromiseReactionJobTask::kArgumentOffset>::load(o, 0);
    Object::VerifyPointer(isolate, argument__value);
  }
  {
    Object context__value = TaggedField<Object, PromiseReactionJobTask::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object handler__value = TaggedField<Object, PromiseReactionJobTask::kHandlerOffset>::load(o, 0);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(handler__value.IsCallableApiObject() || handler__value.IsCallableJSProxy() || handler__value.IsUndefined() || handler__value.IsJSBoundFunction() || handler__value.IsJSFunction());
  }
  {
    Object promise_or_capability__value = TaggedField<Object, PromiseReactionJobTask::kPromiseOrCapabilityOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(promise_or_capability__value.IsUndefined() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability());
  }
}
void TorqueGeneratedClassVerifiers::PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseFulfillReactionJobTask());
}
void TorqueGeneratedClassVerifiers::PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseRejectReactionJobTask());
}
void TorqueGeneratedClassVerifiers::PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsPromiseResolveThenableJobTask());
  {
    Object context__value = TaggedField<Object, PromiseResolveThenableJobTask::kContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object promise_to_resolve__value = TaggedField<Object, PromiseResolveThenableJobTask::kPromiseToResolveOffset>::load(o, 0);
    Object::VerifyPointer(isolate, promise_to_resolve__value);
    CHECK(promise_to_resolve__value.IsJSPromise());
  }
  {
    Object then__value = TaggedField<Object, PromiseResolveThenableJobTask::kThenOffset>::load(o, 0);
    Object::VerifyPointer(isolate, then__value);
    CHECK(then__value.IsJSReceiver());
  }
  {
    Object thenable__value = TaggedField<Object, PromiseResolveThenableJobTask::kThenableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, thenable__value);
    CHECK(thenable__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSRegExpVerify(JSRegExp o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRegExp());
  {
    Object data__value = TaggedField<Object, JSRegExp::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsUndefined() || data__value.IsFixedArray());
  }
  {
    Object source__value = TaggedField<Object, JSRegExp::kSourceOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source__value);
    CHECK(source__value.IsUndefined() || source__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object, JSRegExp::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi() || flags__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::JSRegExpResultVerify(JSRegExpResult o, Isolate* isolate) {
  o.JSArrayVerify(isolate);
  CHECK(o.IsJSRegExpResult());
  {
    Object index__value = TaggedField<Object, JSRegExpResult::kIndexOffset>::load(o, 0);
    Object::VerifyPointer(isolate, index__value);
  }
  {
    Object input__value = TaggedField<Object, JSRegExpResult::kInputOffset>::load(o, 0);
    Object::VerifyPointer(isolate, input__value);
  }
  {
    Object groups__value = TaggedField<Object, JSRegExpResult::kGroupsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, groups__value);
  }
}
void TorqueGeneratedClassVerifiers::JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRegExpStringIterator());
  {
    Object iterating_reg_exp__value = TaggedField<Object, JSRegExpStringIterator::kIteratingRegExpOffset>::load(o, 0);
    Object::VerifyPointer(isolate, iterating_reg_exp__value);
  }
  {
    Object iterated_string__value = TaggedField<Object, JSRegExpStringIterator::kIteratedStringOffset>::load(o, 0);
    Object::VerifyPointer(isolate, iterated_string__value);
    CHECK(iterated_string__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object, JSRegExpStringIterator::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(o.IsRegExpMatchInfo());
}
void TorqueGeneratedClassVerifiers::AccessorInfoVerify(AccessorInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAccessorInfo());
  {
    Object name__value = TaggedField<Object, AccessorInfo::kNameOffset>::load(o, 0);
    Object::VerifyPointer(isolate, name__value);
  }
  {
    Object flags__value = TaggedField<Object, AccessorInfo::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object expected_receiver_type__value = TaggedField<Object, AccessorInfo::kExpectedReceiverTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, expected_receiver_type__value);
  }
  {
    Object setter__value = TaggedField<Object, AccessorInfo::kSetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, setter__value);
    CHECK(setter__value.IsNonNullForeign() || setter__value.IsZero());
  }
  {
    Object getter__value = TaggedField<Object, AccessorInfo::kGetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, getter__value);
    CHECK(getter__value.IsNonNullForeign() || getter__value.IsZero());
  }
  {
    Object js_getter__value = TaggedField<Object, AccessorInfo::kJsGetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, js_getter__value);
    CHECK(js_getter__value.IsNonNullForeign() || js_getter__value.IsZero());
  }
  {
    Object data__value = TaggedField<Object, AccessorInfo::kDataOffset>::load(o, 0);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::AccessorPairVerify(AccessorPair o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAccessorPair());
  {
    Object getter__value = TaggedField<Object, AccessorPair::kGetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, getter__value);
  }
  {
    Object setter__value = TaggedField<Object, AccessorPair::kSetterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, setter__value);
  }
}
void TorqueGeneratedClassVerifiers::BreakPointVerify(BreakPoint o, Isolate* isolate) {
  o.Tuple2Verify(isolate);
  CHECK(o.IsBreakPoint());
}
void TorqueGeneratedClassVerifiers::BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate) {
  o.Tuple2Verify(isolate);
  CHECK(o.IsBreakPointInfo());
}
void TorqueGeneratedClassVerifiers::DebugInfoVerify(DebugInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsDebugInfo());
  {
    Object shared_function_info__value = TaggedField<Object, DebugInfo::kSharedFunctionInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object debugger_hints__value = TaggedField<Object, DebugInfo::kDebuggerHintsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, debugger_hints__value);
    CHECK(debugger_hints__value.IsSmi());
  }
  {
    Object script__value = TaggedField<Object, DebugInfo::kScriptOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsUndefined() || script__value.IsScript());
  }
  {
    Object original_bytecode_array__value = TaggedField<Object, DebugInfo::kOriginalBytecodeArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, original_bytecode_array__value);
    CHECK(original_bytecode_array__value.IsUndefined() || original_bytecode_array__value.IsBytecodeArray());
  }
  {
    Object debug_bytecode_array__value = TaggedField<Object, DebugInfo::kDebugBytecodeArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, debug_bytecode_array__value);
    CHECK(debug_bytecode_array__value.IsUndefined() || debug_bytecode_array__value.IsBytecodeArray());
  }
  {
    Object break_points__value = TaggedField<Object, DebugInfo::kBreakPointsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, break_points__value);
    CHECK(break_points__value.IsFixedArray());
  }
  {
    Object flags__value = TaggedField<Object, DebugInfo::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object coverage_info__value = TaggedField<Object, DebugInfo::kCoverageInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, coverage_info__value);
    CHECK(coverage_info__value.IsCoverageInfo() || coverage_info__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::FeedbackVectorVerify(FeedbackVector o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFeedbackVector());
  {
    Object shared_function_info__value = TaggedField<Object, FeedbackVector::kSharedFunctionInfoOffset>::load(o, 0);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object closure_feedback_cell_array__value = TaggedField<Object, FeedbackVector::kClosureFeedbackCellArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, closure_feedback_cell_array__value);
    CHECK(closure_feedback_cell_array__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::FeedbackCellVerify(FeedbackCell o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsFeedbackCell());
  {
    Object value__value = TaggedField<Object, FeedbackCell::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsUndefined() || value__value.IsFeedbackVector() || value__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::AllocationMementoVerify(AllocationMemento o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAllocationMemento());
  {
    Object allocation_site__value = TaggedField<Object, AllocationMemento::kAllocationSiteOffset>::load(o, 0);
    Object::VerifyPointer(isolate, allocation_site__value);
    CHECK(allocation_site__value.IsAllocationSite());
  }
}
void TorqueGeneratedClassVerifiers::WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmModuleObject());
  {
    Object native_module__value = TaggedField<Object, WasmModuleObject::kNativeModuleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, native_module__value);
    CHECK(native_module__value.IsForeign());
  }
  {
    Object export_wrappers__value = TaggedField<Object, WasmModuleObject::kExportWrappersOffset>::load(o, 0);
    Object::VerifyPointer(isolate, export_wrappers__value);
    CHECK(export_wrappers__value.IsFixedArray());
  }
  {
    Object script__value = TaggedField<Object, WasmModuleObject::kScriptOffset>::load(o, 0);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsScript());
  }
  {
    Object weak_instance_list__value = TaggedField<Object, WasmModuleObject::kWeakInstanceListOffset>::load(o, 0);
    Object::VerifyPointer(isolate, weak_instance_list__value);
    CHECK(weak_instance_list__value.IsWeakArrayList());
  }
  {
    Object asm_js_offset_table__value = TaggedField<Object, WasmModuleObject::kAsmJsOffsetTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, asm_js_offset_table__value);
    CHECK(asm_js_offset_table__value.IsUndefined() || asm_js_offset_table__value.IsByteArray());
  }
  {
    Object break_point_infos__value = TaggedField<Object, WasmModuleObject::kBreakPointInfosOffset>::load(o, 0);
    Object::VerifyPointer(isolate, break_point_infos__value);
    CHECK(break_point_infos__value.IsUndefined() || break_point_infos__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmTableObjectVerify(WasmTableObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmTableObject());
  {
    Object entries__value = TaggedField<Object, WasmTableObject::kEntriesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(entries__value.IsFixedArray());
  }
  {
    Object maximum_length__value = TaggedField<Object, WasmTableObject::kMaximumLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, maximum_length__value);
    CHECK(maximum_length__value.IsSmi() || maximum_length__value.IsUndefined() || maximum_length__value.IsHeapNumber());
  }
  {
    Object dispatch_tables__value = TaggedField<Object, WasmTableObject::kDispatchTablesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, dispatch_tables__value);
    CHECK(dispatch_tables__value.IsFixedArray());
  }
  {
    Object raw_type__value = TaggedField<Object, WasmTableObject::kRawTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, raw_type__value);
    CHECK(raw_type__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmMemoryObject());
  {
    Object array_buffer__value = TaggedField<Object, WasmMemoryObject::kArrayBufferOffset>::load(o, 0);
    Object::VerifyPointer(isolate, array_buffer__value);
    CHECK(array_buffer__value.IsJSArrayBuffer());
  }
  {
    Object maximum_pages__value = TaggedField<Object, WasmMemoryObject::kMaximumPagesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, maximum_pages__value);
    CHECK(maximum_pages__value.IsSmi());
  }
  {
    Object instances__value = TaggedField<Object, WasmMemoryObject::kInstancesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, instances__value);
    CHECK(instances__value.IsUndefined() || instances__value.IsWeakArrayList());
  }
}
void TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmGlobalObject());
  {
    Object untagged_buffer__value = TaggedField<Object, WasmGlobalObject::kUntaggedBufferOffset>::load(o, 0);
    Object::VerifyPointer(isolate, untagged_buffer__value);
    CHECK(untagged_buffer__value.IsUndefined() || untagged_buffer__value.IsJSArrayBuffer());
  }
  {
    Object tagged_buffer__value = TaggedField<Object, WasmGlobalObject::kTaggedBufferOffset>::load(o, 0);
    Object::VerifyPointer(isolate, tagged_buffer__value);
    CHECK(tagged_buffer__value.IsUndefined() || tagged_buffer__value.IsFixedArray());
  }
  {
    Object offset__value = TaggedField<Object, WasmGlobalObject::kOffsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(offset__value.IsSmi());
  }
  {
    Object flags__value = TaggedField<Object, WasmGlobalObject::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmExceptionObjectVerify(WasmExceptionObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmExceptionObject());
  {
    Object serialized_signature__value = TaggedField<Object, WasmExceptionObject::kSerializedSignatureOffset>::load(o, 0);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
  {
    Object exception_tag__value = TaggedField<Object, WasmExceptionObject::kExceptionTagOffset>::load(o, 0);
    Object::VerifyPointer(isolate, exception_tag__value);
    CHECK(exception_tag__value.IsHeapObject());
  }
}
void TorqueGeneratedClassVerifiers::AsmWasmDataVerify(AsmWasmData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAsmWasmData());
  {
    Object managed_native_module__value = TaggedField<Object, AsmWasmData::kManagedNativeModuleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, managed_native_module__value);
    CHECK(managed_native_module__value.IsForeign());
  }
  {
    Object export_wrappers__value = TaggedField<Object, AsmWasmData::kExportWrappersOffset>::load(o, 0);
    Object::VerifyPointer(isolate, export_wrappers__value);
    CHECK(export_wrappers__value.IsFixedArray());
  }
  {
    Object asm_js_offset_table__value = TaggedField<Object, AsmWasmData::kAsmJsOffsetTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, asm_js_offset_table__value);
    CHECK(asm_js_offset_table__value.IsByteArray());
  }
  {
    Object uses_bitset__value = TaggedField<Object, AsmWasmData::kUsesBitsetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, uses_bitset__value);
    CHECK(uses_bitset__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSFinalizationGroupVerify(JSFinalizationGroup o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSFinalizationGroup());
  {
    Object native_context__value = TaggedField<Object, JSFinalizationGroup::kNativeContextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
  {
    Object cleanup__value = TaggedField<Object, JSFinalizationGroup::kCleanupOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cleanup__value);
  }
  {
    Object active_cells__value = TaggedField<Object, JSFinalizationGroup::kActiveCellsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, active_cells__value);
    CHECK(active_cells__value.IsUndefined() || active_cells__value.IsWeakCell());
  }
  {
    Object cleared_cells__value = TaggedField<Object, JSFinalizationGroup::kClearedCellsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, cleared_cells__value);
    CHECK(cleared_cells__value.IsUndefined() || cleared_cells__value.IsWeakCell());
  }
  {
    Object key_map__value = TaggedField<Object, JSFinalizationGroup::kKeyMapOffset>::load(o, 0);
    Object::VerifyPointer(isolate, key_map__value);
  }
  {
    Object next__value = TaggedField<Object, JSFinalizationGroup::kNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsUndefined() || next__value.IsJSFinalizationGroup());
  }
  {
    Object flags__value = TaggedField<Object, JSFinalizationGroup::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSFinalizationGroupCleanupIteratorVerify(JSFinalizationGroupCleanupIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSFinalizationGroupCleanupIterator());
  {
    Object finalization_group__value = TaggedField<Object, JSFinalizationGroupCleanupIterator::kFinalizationGroupOffset>::load(o, 0);
    Object::VerifyPointer(isolate, finalization_group__value);
    CHECK(finalization_group__value.IsJSFinalizationGroup());
  }
}
void TorqueGeneratedClassVerifiers::WeakCellVerify(WeakCell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWeakCell());
  {
    Object finalization_group__value = TaggedField<Object, WeakCell::kFinalizationGroupOffset>::load(o, 0);
    Object::VerifyPointer(isolate, finalization_group__value);
    CHECK(finalization_group__value.IsUndefined() || finalization_group__value.IsJSFinalizationGroup());
  }
  {
    Object target__value = TaggedField<Object, WeakCell::kTargetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsUndefined() || target__value.IsJSReceiver());
  }
  {
    Object holdings__value = TaggedField<Object, WeakCell::kHoldingsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, holdings__value);
  }
  {
    Object prev__value = TaggedField<Object, WeakCell::kPrevOffset>::load(o, 0);
    Object::VerifyPointer(isolate, prev__value);
    CHECK(prev__value.IsUndefined() || prev__value.IsWeakCell());
  }
  {
    Object next__value = TaggedField<Object, WeakCell::kNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsUndefined() || next__value.IsWeakCell());
  }
  {
    Object key__value = TaggedField<Object, WeakCell::kKeyOffset>::load(o, 0);
    Object::VerifyPointer(isolate, key__value);
  }
  {
    Object key_list_prev__value = TaggedField<Object, WeakCell::kKeyListPrevOffset>::load(o, 0);
    Object::VerifyPointer(isolate, key_list_prev__value);
    CHECK(key_list_prev__value.IsUndefined() || key_list_prev__value.IsWeakCell());
  }
  {
    Object key_list_next__value = TaggedField<Object, WeakCell::kKeyListNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, key_list_next__value);
    CHECK(key_list_next__value.IsUndefined() || key_list_next__value.IsWeakCell());
  }
}
void TorqueGeneratedClassVerifiers::JSWeakRefVerify(JSWeakRef o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSWeakRef());
  {
    Object target__value = TaggedField<Object, JSWeakRef::kTargetOffset>::load(o, 0);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsUndefined() || target__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::BytecodeArrayVerify(BytecodeArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsBytecodeArray());
  {
    Object constant_pool__value = TaggedField<Object, BytecodeArray::kConstantPoolOffset>::load(o, 0);
    Object::VerifyPointer(isolate, constant_pool__value);
    CHECK(constant_pool__value.IsFixedArray());
  }
  {
    Object handler_table__value = TaggedField<Object, BytecodeArray::kHandlerTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, handler_table__value);
    CHECK(handler_table__value.IsByteArray());
  }
  {
    Object source_position_table__value = TaggedField<Object, BytecodeArray::kSourcePositionTableOffset>::load(o, 0);
    Object::VerifyPointer(isolate, source_position_table__value);
    CHECK(source_position_table__value.IsUndefined() || source_position_table__value.IsByteArray() || source_position_table__value.IsSourcePositionTableWithFrameCache());
  }
}
void TorqueGeneratedClassVerifiers::SortStateVerify(SortState o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSortState());
  {
    Object receiver__value = TaggedField<Object, SortState::kReceiverOffset>::load(o, 0);
    Object::VerifyPointer(isolate, receiver__value);
    CHECK(receiver__value.IsJSReceiver());
  }
  {
    Object initialReceiverMap__value = TaggedField<Object, SortState::kInitialReceiverMapOffset>::load(o, 0);
    Object::VerifyPointer(isolate, initialReceiverMap__value);
    CHECK(initialReceiverMap__value.IsMap());
  }
  {
    Object initialReceiverLength__value = TaggedField<Object, SortState::kInitialReceiverLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, initialReceiverLength__value);
    CHECK(initialReceiverLength__value.IsSmi() || initialReceiverLength__value.IsHeapNumber());
  }
  {
    Object userCmpFn__value = TaggedField<Object, SortState::kUserCmpFnOffset>::load(o, 0);
    Object::VerifyPointer(isolate, userCmpFn__value);
    CHECK(userCmpFn__value.IsCallableApiObject() || userCmpFn__value.IsCallableJSProxy() || userCmpFn__value.IsUndefined() || userCmpFn__value.IsJSBoundFunction() || userCmpFn__value.IsJSFunction());
  }
  {
    Object sortComparePtr__value = TaggedField<Object, SortState::kSortComparePtrOffset>::load(o, 0);
    Object::VerifyPointer(isolate, sortComparePtr__value);
    CHECK(sortComparePtr__value.IsSmi());
  }
  {
    Object loadFn__value = TaggedField<Object, SortState::kLoadFnOffset>::load(o, 0);
    Object::VerifyPointer(isolate, loadFn__value);
    CHECK(loadFn__value.IsSmi());
  }
  {
    Object storeFn__value = TaggedField<Object, SortState::kStoreFnOffset>::load(o, 0);
    Object::VerifyPointer(isolate, storeFn__value);
    CHECK(storeFn__value.IsSmi());
  }
  {
    Object deleteFn__value = TaggedField<Object, SortState::kDeleteFnOffset>::load(o, 0);
    Object::VerifyPointer(isolate, deleteFn__value);
    CHECK(deleteFn__value.IsSmi());
  }
  {
    Object canUseSameAccessorFn__value = TaggedField<Object, SortState::kCanUseSameAccessorFnOffset>::load(o, 0);
    Object::VerifyPointer(isolate, canUseSameAccessorFn__value);
    CHECK(canUseSameAccessorFn__value.IsSmi());
  }
  {
    Object minGallop__value = TaggedField<Object, SortState::kMinGallopOffset>::load(o, 0);
    Object::VerifyPointer(isolate, minGallop__value);
    CHECK(minGallop__value.IsSmi());
  }
  {
    Object pendingRunsSize__value = TaggedField<Object, SortState::kPendingRunsSizeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, pendingRunsSize__value);
    CHECK(pendingRunsSize__value.IsSmi());
  }
  {
    Object pendingRuns__value = TaggedField<Object, SortState::kPendingRunsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, pendingRuns__value);
    CHECK(pendingRuns__value.IsFixedArray());
  }
  {
    Object workArray__value = TaggedField<Object, SortState::kWorkArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, workArray__value);
    CHECK(workArray__value.IsFixedArray());
  }
  {
    Object tempArray__value = TaggedField<Object, SortState::kTempArrayOffset>::load(o, 0);
    Object::VerifyPointer(isolate, tempArray__value);
    CHECK(tempArray__value.IsFixedArray());
  }
  {
    Object sortLength__value = TaggedField<Object, SortState::kSortLengthOffset>::load(o, 0);
    Object::VerifyPointer(isolate, sortLength__value);
    CHECK(sortLength__value.IsSmi());
  }
  {
    Object numberOfUndefined__value = TaggedField<Object, SortState::kNumberOfUndefinedOffset>::load(o, 0);
    Object::VerifyPointer(isolate, numberOfUndefined__value);
    CHECK(numberOfUndefined__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::InternalClassVerify(InternalClass o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsInternalClass());
  {
    Object a__value = TaggedField<Object, InternalClass::kAOffset>::load(o, 0);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsSmi());
  }
  {
    Object b__value = TaggedField<Object, InternalClass::kBOffset>::load(o, 0);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsSmi() || b__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::SmiPairVerify(SmiPair o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSmiPair());
  {
    Object a__value = TaggedField<Object, SmiPair::kAOffset>::load(o, 0);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsSmi());
  }
  {
    Object b__value = TaggedField<Object, SmiPair::kBOffset>::load(o, 0);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SmiBoxVerify(SmiBox o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSmiBox());
  {
    Object value__value = TaggedField<Object, SmiBox::kValueOffset>::load(o, 0);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsSmi());
  }
  {
    Object unrelated__value = TaggedField<Object, SmiBox::kUnrelatedOffset>::load(o, 0);
    Object::VerifyPointer(isolate, unrelated__value);
    CHECK(unrelated__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDateTimeFormat());
  {
    Object icu_locale__value = TaggedField<Object, JSDateTimeFormat::kIcuLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(icu_locale__value.IsForeign());
  }
  {
    Object icu_simple_date_format__value = TaggedField<Object, JSDateTimeFormat::kIcuSimpleDateFormatOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_simple_date_format__value);
    CHECK(icu_simple_date_format__value.IsForeign());
  }
  {
    Object icu_date_interval_format__value = TaggedField<Object, JSDateTimeFormat::kIcuDateIntervalFormatOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_date_interval_format__value);
    CHECK(icu_date_interval_format__value.IsForeign());
  }
  {
    Object bound_format__value = TaggedField<Object, JSDateTimeFormat::kBoundFormatOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(bound_format__value.IsUndefined() || bound_format__value.IsJSFunction());
  }
  {
    Object flags__value = TaggedField<Object, JSDateTimeFormat::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSListFormatVerify(JSListFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSListFormat());
  {
    Object locale__value = TaggedField<Object, JSListFormat::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_formatter__value = TaggedField<Object, JSListFormat::kIcuFormatterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(icu_formatter__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object, JSListFormat::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSNumberFormat());
  {
    Object locale__value = TaggedField<Object, JSNumberFormat::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_number_formatter__value = TaggedField<Object, JSNumberFormat::kIcuNumberFormatterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(icu_number_formatter__value.IsForeign());
  }
  {
    Object bound_format__value = TaggedField<Object, JSNumberFormat::kBoundFormatOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(bound_format__value.IsUndefined() || bound_format__value.IsJSFunction());
  }
  {
    Object flags__value = TaggedField<Object, JSNumberFormat::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSPluralRulesVerify(JSPluralRules o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSPluralRules());
  {
    Object locale__value = TaggedField<Object, JSPluralRules::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object, JSPluralRules::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object icu_plural_rules__value = TaggedField<Object, JSPluralRules::kIcuPluralRulesOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_plural_rules__value);
    CHECK(icu_plural_rules__value.IsForeign());
  }
  {
    Object icu_number_formatter__value = TaggedField<Object, JSPluralRules::kIcuNumberFormatterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(icu_number_formatter__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRelativeTimeFormat());
  {
    Object locale__value = TaggedField<Object, JSRelativeTimeFormat::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_formatter__value = TaggedField<Object, JSRelativeTimeFormat::kIcuFormatterOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(icu_formatter__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object, JSRelativeTimeFormat::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSLocaleVerify(JSLocale o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSLocale());
  {
    Object icu_locale__value = TaggedField<Object, JSLocale::kIcuLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(icu_locale__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSSegmenterVerify(JSSegmenter o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSSegmenter());
  {
    Object locale__value = TaggedField<Object, JSSegmenter::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_break_iterator__value = TaggedField<Object, JSSegmenter::kIcuBreakIteratorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(icu_break_iterator__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object, JSSegmenter::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSSegmentIterator());
  {
    Object icu_break_iterator__value = TaggedField<Object, JSSegmentIterator::kIcuBreakIteratorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(icu_break_iterator__value.IsForeign());
  }
  {
    Object unicode_string__value = TaggedField<Object, JSSegmentIterator::kUnicodeStringOffset>::load(o, 0);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(unicode_string__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object, JSSegmentIterator::kFlagsOffset>::load(o, 0);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSV8BreakIteratorVerify(JSV8BreakIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSV8BreakIterator());
  {
    Object locale__value = TaggedField<Object, JSV8BreakIterator::kLocaleOffset>::load(o, 0);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object break_iterator__value = TaggedField<Object, JSV8BreakIterator::kBreakIteratorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, break_iterator__value);
    CHECK(break_iterator__value.IsForeign());
  }
  {
    Object unicode_string__value = TaggedField<Object, JSV8BreakIterator::kUnicodeStringOffset>::load(o, 0);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(unicode_string__value.IsForeign());
  }
  {
    Object bound_adopt_text__value = TaggedField<Object, JSV8BreakIterator::kBoundAdoptTextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_adopt_text__value);
    CHECK(bound_adopt_text__value.IsUndefined() || bound_adopt_text__value.IsJSFunction());
  }
  {
    Object bound_first__value = TaggedField<Object, JSV8BreakIterator::kBoundFirstOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_first__value);
    CHECK(bound_first__value.IsUndefined() || bound_first__value.IsJSFunction());
  }
  {
    Object bound_next__value = TaggedField<Object, JSV8BreakIterator::kBoundNextOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_next__value);
    CHECK(bound_next__value.IsUndefined() || bound_next__value.IsJSFunction());
  }
  {
    Object bound_current__value = TaggedField<Object, JSV8BreakIterator::kBoundCurrentOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_current__value);
    CHECK(bound_current__value.IsUndefined() || bound_current__value.IsJSFunction());
  }
  {
    Object bound_break_type__value = TaggedField<Object, JSV8BreakIterator::kBoundBreakTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_break_type__value);
    CHECK(bound_break_type__value.IsUndefined() || bound_break_type__value.IsJSFunction());
  }
  {
    Object break_iterator_type__value = TaggedField<Object, JSV8BreakIterator::kBreakIteratorTypeOffset>::load(o, 0);
    Object::VerifyPointer(isolate, break_iterator_type__value);
    CHECK(break_iterator_type__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSCollatorVerify(JSCollator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCollator());
  {
    Object icu_collator__value = TaggedField<Object, JSCollator::kIcuCollatorOffset>::load(o, 0);
    Object::VerifyPointer(isolate, icu_collator__value);
    CHECK(icu_collator__value.IsForeign());
  }
  {
    Object bound_compare__value = TaggedField<Object, JSCollator::kBoundCompareOffset>::load(o, 0);
    Object::VerifyPointer(isolate, bound_compare__value);
    CHECK(bound_compare__value.IsUndefined() || bound_compare__value.IsJSFunction());
  }
}
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // VERIFY_HEAP
