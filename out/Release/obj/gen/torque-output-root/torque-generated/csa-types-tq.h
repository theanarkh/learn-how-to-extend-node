#ifndef V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_

#include "src/compiler/code-assembler.h"

namespace v8 {
namespace internal {
struct TorqueStructArguments {
  compiler::TNode<RawPtrT> frame;
  compiler::TNode<RawPtrT> base;
  compiler::TNode<IntPtrT> length;

  std::tuple<compiler::TNode<RawPtrT>, compiler::TNode<RawPtrT>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(base), std::make_tuple(length));
  }
};
struct TorqueStructArgumentsInfo {
  compiler::TNode<RawPtrT> frame;
  compiler::TNode<BInt> argument_count;
  compiler::TNode<BInt> formal_parameter_count;

  std::tuple<compiler::TNode<RawPtrT>, compiler::TNode<BInt>, compiler::TNode<BInt>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(argument_count), std::make_tuple(formal_parameter_count));
  }
};
struct TorqueStructBuffer {
  compiler::TNode<FixedArray> fixedArray;
  compiler::TNode<IntPtrT> index;
  compiler::TNode<IntPtrT> totalStringLength;
  compiler::TNode<BoolT> isOneByte;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<IntPtrT>, compiler::TNode<IntPtrT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(index), std::make_tuple(totalStringLength), std::make_tuple(isOneByte));
  }
};
struct TorqueStructVector {
  compiler::TNode<FixedArray> fixedArray;
  compiler::TNode<BoolT> onlySmis;
  compiler::TNode<BoolT> onlyNumbers;
  compiler::TNode<BoolT> skippedElements;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<BoolT>, compiler::TNode<BoolT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(onlySmis), std::make_tuple(onlyNumbers), std::make_tuple(skippedElements));
  }
};
struct TorqueStructFastJSArrayWitness {
  compiler::TNode<JSArray> stable;
  compiler::TNode<JSArray> unstable;
  compiler::TNode<Map> map;
  compiler::TNode<BoolT> hasDoubles;
  compiler::TNode<BoolT> hasSmis;
  compiler::TNode<BoolT> arrayIsPushable;

  std::tuple<compiler::TNode<JSArray>, compiler::TNode<JSArray>, compiler::TNode<Map>, compiler::TNode<BoolT>, compiler::TNode<BoolT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles), std::make_tuple(hasSmis), std::make_tuple(arrayIsPushable));
  }
};
struct TorqueStructFastJSArrayForReadWitness {
  compiler::TNode<JSArray> stable;
  compiler::TNode<JSArray> unstable;
  compiler::TNode<Map> map;
  compiler::TNode<BoolT> hasDoubles;

  std::tuple<compiler::TNode<JSArray>, compiler::TNode<JSArray>, compiler::TNode<Map>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles));
  }
};
struct TorqueStructKeyValuePair {
  compiler::TNode<Object> key;
  compiler::TNode<Object> value;

  std::tuple<compiler::TNode<Object>, compiler::TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(key), std::make_tuple(value));
  }
};
struct TorqueStructGrowableFixedArray {
  compiler::TNode<FixedArray> array;
  compiler::TNode<IntPtrT> capacity;
  compiler::TNode<IntPtrT> length;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<IntPtrT>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(array), std::make_tuple(capacity), std::make_tuple(length));
  }
};
struct TorqueStructIteratorRecord {
  compiler::TNode<JSReceiver> object;
  compiler::TNode<Object> next;

  std::tuple<compiler::TNode<JSReceiver>, compiler::TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(next));
  }
};
struct TorqueStructTypedArrayElementsInfo {
  compiler::TNode<UintPtrT> sizeLog2;
  compiler::TNode<Int32T> kind;

  std::tuple<compiler::TNode<UintPtrT>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(sizeLog2), std::make_tuple(kind));
  }
};
struct TorqueStructAttachedJSTypedArrayWitness {
  compiler::TNode<JSTypedArray> stable;
  compiler::TNode<JSTypedArray> unstable;
  compiler::TNode<BuiltinPtr> loadfn;

  std::tuple<compiler::TNode<JSTypedArray>, compiler::TNode<JSTypedArray>, compiler::TNode<BuiltinPtr>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(loadfn));
  }
};
struct TorqueStructTestStructA {
  compiler::TNode<FixedArray> indexes;
  compiler::TNode<Smi> i;
  compiler::TNode<Number> k;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
    return std::tuple_cat(std::make_tuple(indexes), std::make_tuple(i), std::make_tuple(k));
  }
};
struct TorqueStructTestStructB {
  TorqueStructTestStructA x;
  compiler::TNode<Smi> y;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(x.Flatten(), std::make_tuple(y));
  }
};
struct TorqueStructTestStructC {
  TorqueStructTestStructA x;
  TorqueStructTestStructA y;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
    return std::tuple_cat(x.Flatten(), y.Flatten());
  }
};
struct TorqueStructTestInner {
  compiler::TNode<Int32T> x;
  compiler::TNode<Int32T> y;

  std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(x), std::make_tuple(y));
  }
};
struct TorqueStructTestOuter {
  compiler::TNode<Int32T> a;
  TorqueStructTestInner b;
  compiler::TNode<Int32T> c;

  std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), b.Flatten(), std::make_tuple(c));
  }
};
struct TorqueStructStructWithConst {
  compiler::TNode<Object> a;
  compiler::TNode<Int32T> b;

  std::tuple<compiler::TNode<Object>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), std::make_tuple(b));
  }
};
struct TorqueStructTestIterator {
  compiler::TNode<Smi> count;

  std::tuple<compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(count));
  }
};
struct TorqueStructTestTuple_Smi__intptr_ {
  compiler::TNode<Smi> fst;
  compiler::TNode<IntPtrT> snd;

  std::tuple<compiler::TNode<Smi>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
struct TorqueStructSBox_intptr_ {
  compiler::TNode<IntPtrT> value;

  std::tuple<compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(value));
  }
};
struct TorqueStructSBox_struct_SBox_intptr__ {
  TorqueStructSBox_intptr_ value;

  std::tuple<compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(value.Flatten());
  }
};
struct TorqueStructTestTuple_intptr__Smi_ {
  compiler::TNode<IntPtrT> fst;
  compiler::TNode<Smi> snd;

  std::tuple<compiler::TNode<IntPtrT>, compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
