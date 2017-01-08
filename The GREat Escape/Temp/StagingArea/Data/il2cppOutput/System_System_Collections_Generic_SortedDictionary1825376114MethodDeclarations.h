#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t1825376114;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t523796052;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Collections_Generic_RBTree_Node523796052.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944668977.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C"  void Node__ctor_m650426770_gshared (Node_t1825376114 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Node__ctor_m650426770(__this, ___key0, method) ((  void (*) (Node_t1825376114 *, Il2CppObject *, const MethodInfo*))Node__ctor_m650426770_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m2551070487_gshared (Node_t1825376114 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Node__ctor_m2551070487(__this, ___key0, ___value1, method) ((  void (*) (Node_t1825376114 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Node__ctor_m2551070487_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m4112474117_gshared (Node_t1825376114 * __this, Node_t523796052 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m4112474117(__this, ___other0, method) ((  void (*) (Node_t1825376114 *, Node_t523796052 *, const MethodInfo*))Node_SwapValue_m4112474117_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C"  KeyValuePair_2_t1944668977  Node_AsKV_m3931249332_gshared (Node_t1825376114 * __this, const MethodInfo* method);
#define Node_AsKV_m3931249332(__this, method) ((  KeyValuePair_2_t1944668977  (*) (Node_t1825376114 *, const MethodInfo*))Node_AsKV_m3931249332_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C"  DictionaryEntry_t1751606614  Node_AsDE_m2939580031_gshared (Node_t1825376114 * __this, const MethodInfo* method);
#define Node_AsDE_m2939580031(__this, method) ((  DictionaryEntry_t1751606614  (*) (Node_t1825376114 *, const MethodInfo*))Node_AsDE_m2939580031_gshared)(__this, method)
