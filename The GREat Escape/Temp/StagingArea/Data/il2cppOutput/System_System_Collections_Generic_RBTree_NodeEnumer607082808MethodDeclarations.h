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

// System.Collections.Generic.RBTree
struct RBTree_t1086383906;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t523796052;
// System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t607082808;
struct NodeEnumerator_t607082808_marshaled_pinvoke;
struct NodeEnumerator_t607082808_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer607082808.h"
#include "System_System_Collections_Generic_RBTree1086383906.h"

// System.Void System.Collections.Generic.RBTree/NodeEnumerator::.ctor(System.Collections.Generic.RBTree)
extern "C"  void NodeEnumerator__ctor_m4042857041 (NodeEnumerator_t607082808 * __this, RBTree_t1086383906 * ___tree0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.RBTree/NodeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * NodeEnumerator_System_Collections_IEnumerator_get_Current_m3495194572 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Reset()
extern "C"  void NodeEnumerator_Reset_m3536423185 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/NodeEnumerator::get_Current()
extern "C"  Node_t523796052 * NodeEnumerator_get_Current_m1383999975 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.RBTree/NodeEnumerator::MoveNext()
extern "C"  bool NodeEnumerator_MoveNext_m4089593818 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Dispose()
extern "C"  void NodeEnumerator_Dispose_m3706978721 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_version()
extern "C"  void NodeEnumerator_check_version_m557987587 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_current()
extern "C"  void NodeEnumerator_check_current_m2622698340 (NodeEnumerator_t607082808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NodeEnumerator_t607082808;
struct NodeEnumerator_t607082808_marshaled_pinvoke;

extern "C" void NodeEnumerator_t607082808_marshal_pinvoke(const NodeEnumerator_t607082808& unmarshaled, NodeEnumerator_t607082808_marshaled_pinvoke& marshaled);
extern "C" void NodeEnumerator_t607082808_marshal_pinvoke_back(const NodeEnumerator_t607082808_marshaled_pinvoke& marshaled, NodeEnumerator_t607082808& unmarshaled);
extern "C" void NodeEnumerator_t607082808_marshal_pinvoke_cleanup(NodeEnumerator_t607082808_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NodeEnumerator_t607082808;
struct NodeEnumerator_t607082808_marshaled_com;

extern "C" void NodeEnumerator_t607082808_marshal_com(const NodeEnumerator_t607082808& unmarshaled, NodeEnumerator_t607082808_marshaled_com& marshaled);
extern "C" void NodeEnumerator_t607082808_marshal_com_back(const NodeEnumerator_t607082808_marshaled_com& marshaled, NodeEnumerator_t607082808& unmarshaled);
extern "C" void NodeEnumerator_t607082808_marshal_com_cleanup(NodeEnumerator_t607082808_marshaled_com& marshaled);
