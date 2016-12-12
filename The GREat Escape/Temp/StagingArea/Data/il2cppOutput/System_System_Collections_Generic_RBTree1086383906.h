#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree/Node
struct Node_t523796052;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1891981604;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.RBTree
struct  RBTree_t1086383906  : public Il2CppObject
{
public:
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::root
	Node_t523796052 * ___root_0;
	// System.Object System.Collections.Generic.RBTree::hlp
	Il2CppObject * ___hlp_1;
	// System.UInt32 System.Collections.Generic.RBTree::version
	uint32_t ___version_2;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(RBTree_t1086383906, ___root_0)); }
	inline Node_t523796052 * get_root_0() const { return ___root_0; }
	inline Node_t523796052 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Node_t523796052 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier(&___root_0, value);
	}

	inline static int32_t get_offset_of_hlp_1() { return static_cast<int32_t>(offsetof(RBTree_t1086383906, ___hlp_1)); }
	inline Il2CppObject * get_hlp_1() const { return ___hlp_1; }
	inline Il2CppObject ** get_address_of_hlp_1() { return &___hlp_1; }
	inline void set_hlp_1(Il2CppObject * value)
	{
		___hlp_1 = value;
		Il2CppCodeGenWriteBarrier(&___hlp_1, value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(RBTree_t1086383906, ___version_2)); }
	inline uint32_t get_version_2() const { return ___version_2; }
	inline uint32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(uint32_t value)
	{
		___version_2 = value;
	}
};

struct RBTree_t1086383906_ThreadStaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::cached_path
	List_1_t1891981604 * ___cached_path_3;

public:
	inline static int32_t get_offset_of_cached_path_3() { return static_cast<int32_t>(offsetof(RBTree_t1086383906_ThreadStaticFields, ___cached_path_3)); }
	inline List_1_t1891981604 * get_cached_path_3() const { return ___cached_path_3; }
	inline List_1_t1891981604 ** get_address_of_cached_path_3() { return &___cached_path_3; }
	inline void set_cached_path_3(List_1_t1891981604 * value)
	{
		___cached_path_3 = value;
		Il2CppCodeGenWriteBarrier(&___cached_path_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
