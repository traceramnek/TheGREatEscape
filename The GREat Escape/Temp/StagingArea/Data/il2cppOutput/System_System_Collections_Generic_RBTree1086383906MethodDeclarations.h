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
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t2435661101;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1891981604;
// System.Collections.Generic.RBTree/Node
struct Node_t523796052;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer607082808.h"
#include "System_System_Collections_Generic_RBTree_Node523796052.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C"  void RBTree__ctor_m3295261479 (RBTree_t1086383906 * __this, Il2CppObject * ___hlp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C"  Il2CppObject* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m3757106610 (RBTree_t1086383906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * RBTree_System_Collections_IEnumerable_GetEnumerator_m1716962706 (RBTree_t1086383906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C"  List_1_t1891981604 * RBTree_alloc_path_m525313183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_release_path_m4210523570 (Il2CppObject * __this /* static, unused */, List_1_t1891981604 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C"  void RBTree_Clear_m1676785592 (RBTree_t1086383906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C"  int32_t RBTree_get_Count_m3857430849 (RBTree_t1086383906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C"  NodeEnumerator_t607082808  RBTree_GetEnumerator_m3998335820 (RBTree_t1086383906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t523796052 * RBTree_do_insert_m1351836766 (RBTree_t1086383906 * __this, int32_t ___in_tree_cmp0, Node_t523796052 * ___current1, List_1_t1891981604 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t523796052 * RBTree_do_remove_m2593914040 (RBTree_t1086383906 * __this, List_1_t1891981604 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_insert_m2214731872 (RBTree_t1086383906 * __this, List_1_t1891981604 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_delete_m1144521262 (RBTree_t1086383906 * __this, List_1_t1891981604 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_insert__rotate_final_m1436405097 (RBTree_t1086383906 * __this, int32_t ___curpos0, List_1_t1891981604 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_delete__rotate_final_m2616670939 (RBTree_t1086383906 * __this, int32_t ___curpos0, List_1_t1891981604 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  int32_t RBTree_ensure_sibling_black_m2168961817 (RBTree_t1086383906 * __this, int32_t ___curpos0, List_1_t1891981604 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C"  void RBTree_node_reparent_m3069609149 (RBTree_t1086383906 * __this, Node_t523796052 * ___orig_parent0, Node_t523796052 * ___orig1, uint32_t ___orig_size2, Node_t523796052 * ___updated3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t523796052 * RBTree_right_most_m3326193396 (Il2CppObject * __this /* static, unused */, Node_t523796052 * ___current0, Node_t523796052 * ___sibling1, List_1_t1891981604 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
