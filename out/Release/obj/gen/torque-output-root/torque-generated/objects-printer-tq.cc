#ifdef OBJECT_PRINT
#include "src/objects/objects.h"

#include <iosfwd>

#include "torque-generated/internal-class-definitions-tq-inl.h"
#include "src/objects/struct-inl.h"

#include "src/objects/template-objects-inl.h"

namespace v8 {
namespace internal {
template <>
void TorqueGeneratedStruct<Struct, HeapObject>::StructPrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedStruct");
  os << "\n";
}

template <>
void TorqueGeneratedTuple2<Tuple2, Struct>::Tuple2Print(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedTuple2");
  os << "\n - value1: " << Brief(this->value1());
  os << "\n - value2: " << Brief(this->value2());
  os << "\n";
}

template <>
void TorqueGeneratedTuple3<Tuple3, Tuple2>::Tuple3Print(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedTuple3");
  os << "\n - value1: " << Brief(this->value1());
  os << "\n - value2: " << Brief(this->value2());
  os << "\n - value3: " << Brief(this->value3());
  os << "\n";
}

template <>
void TorqueGeneratedEnumCache<EnumCache, Struct>::EnumCachePrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedEnumCache");
  os << "\n - keys: " << Brief(this->keys());
  os << "\n - indices: " << Brief(this->indices());
  os << "\n";
}

template <>
void TorqueGeneratedSourcePositionTableWithFrameCache<SourcePositionTableWithFrameCache, Struct>::SourcePositionTableWithFrameCachePrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedSourcePositionTableWithFrameCache");
  os << "\n - source_position_table: " << Brief(this->source_position_table());
  os << "\n - stack_frame_cache: " << Brief(this->stack_frame_cache());
  os << "\n";
}


void TemplateObjectDescription::TemplateObjectDescriptionPrint(std::ostream& os) {
  this->PrintHeader(os, "TemplateObjectDescription");
  os << "\n - raw_strings: " << Brief(this->raw_strings());
  os << "\n - cooked_strings: " << Brief(this->cooked_strings());
  os << "\n";
}

template <>
void TorqueGeneratedSortState<SortState, Struct>::SortStatePrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedSortState");
  os << "\n - receiver: " << Brief(this->receiver());
  os << "\n - initialReceiverMap: " << Brief(this->initialReceiverMap());
  os << "\n - initialReceiverLength: " << Brief(this->initialReceiverLength());
  os << "\n - userCmpFn: " << Brief(this->userCmpFn());
  os << "\n - sortComparePtr: " << Brief(this->sortComparePtr());
  os << "\n - loadFn: " << Brief(this->loadFn());
  os << "\n - storeFn: " << Brief(this->storeFn());
  os << "\n - deleteFn: " << Brief(this->deleteFn());
  os << "\n - canUseSameAccessorFn: " << Brief(this->canUseSameAccessorFn());
  os << "\n - minGallop: " << Brief(this->minGallop());
  os << "\n - pendingRunsSize: " << Brief(this->pendingRunsSize());
  os << "\n - pendingRuns: " << Brief(this->pendingRuns());
  os << "\n - workArray: " << Brief(this->workArray());
  os << "\n - tempArray: " << Brief(this->tempArray());
  os << "\n - sortLength: " << Brief(this->sortLength());
  os << "\n - numberOfUndefined: " << Brief(this->numberOfUndefined());
  os << "\n";
}

template <>
void TorqueGeneratedInternalClass<InternalClass, Struct>::InternalClassPrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedInternalClass");
  os << "\n - a: " << Brief(this->a());
  os << "\n - b: " << Brief(this->b());
  os << "\n";
}

template <>
void TorqueGeneratedSmiPair<SmiPair, Struct>::SmiPairPrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedSmiPair");
  os << "\n - a: " << Brief(this->a());
  os << "\n - b: " << Brief(this->b());
  os << "\n";
}

template <>
void TorqueGeneratedSmiBox<SmiBox, Struct>::SmiBoxPrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedSmiBox");
  os << "\n - value: " << Brief(this->value());
  os << "\n - unrelated: " << Brief(this->unrelated());
  os << "\n";
}

}  // namespace internal
}  // namespace v8
#endif  // OBJECT_PRINT
