#ifndef V8_GEN_TORQUE_GENERATED_INTERNAL_CLASS_DEFINITIONS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_INTERNAL_CLASS_DEFINITIONS_TQ_H_

#include "src/objects/objects.h"
#include "src/objects/struct.h"
#include "src/objects/js-objects.h"
#include "src/utils/utils.h"
#include "torque-generated/class-definitions-tq.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
class SortState: public TorqueGeneratedSortState<SortState, Struct> {
 public:
   TQ_OBJECT_CONSTRUCTORS(SortState)
};

class InternalClass: public TorqueGeneratedInternalClass<InternalClass, Struct> {
 public:
   TQ_OBJECT_CONSTRUCTORS(InternalClass)
};

class SmiPair: public TorqueGeneratedSmiPair<SmiPair, Struct> {
 public:
   TQ_OBJECT_CONSTRUCTORS(SmiPair)
};

class SmiBox: public TorqueGeneratedSmiBox<SmiBox, Struct> {
 public:
   TQ_OBJECT_CONSTRUCTORS(SmiBox)
};

}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // V8_GEN_TORQUE_GENERATED_INTERNAL_CLASS_DEFINITIONS_TQ_H_
