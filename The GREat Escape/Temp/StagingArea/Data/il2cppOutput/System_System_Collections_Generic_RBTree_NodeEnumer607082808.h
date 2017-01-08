#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree
struct RBTree_t1086383906;
// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node>
struct Stack_1_t3622356976;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.RBTree/NodeEnumerator
struct  NodeEnumerator_t607082808 
{
public:
	// System.Collections.Generic.RBTree System.Collections.Generic.RBTree/NodeEnumerator::tree
	RBTree_t1086383906 * ___tree_0;
	// System.UInt32 System.Collections.Generic.RBTree/NodeEnumerator::version
	uint32_t ___version_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree/NodeEnumerator::pennants
	Stack_1_t3622356976 * ___pennants_2;

public:
	inline static int32_t get_offset_of_tree_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t607082808, ___tree_0)); }
	inline RBTree_t1086383906 * get_tree_0() const { return ___tree_0; }
	inline RBTree_t1086383906 ** get_address_of_tree_0() { return &___tree_0; }
	inline void set_tree_0(RBTree_t1086383906 * value)
	{
		___tree_0 = value;
		Il2CppCodeGenWriteBarrier(&___tree_0, value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t607082808, ___version_1)); }
	inline uint32_t get_version_1() const { return ___version_1; }
	inline uint32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_pennants_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t607082808, ___pennants_2)); }
	inline Stack_1_t3622356976 * get_pennants_2() const { return ___pennants_2; }
	inline Stack_1_t3622356976 ** get_address_of_pennants_2() { return &___pennants_2; }
	inline void set_pennants_2(Stack_1_t3622356976 * value)
	{
		___pennants_2 = value;
		Il2CppCodeGenWriteBarrier(&___pennants_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t607082808_marshaled_pinvoke
{
	RBTree_t1086383906 * ___tree_0;
	uint32_t ___version_1;
	Stack_1_t3622356976 * ___pennants_2;
};
// Native definition for marshalling of: System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t607082808_marshaled_com
{
	RBTree_t1086383906 * ___tree_0;
	uint32_t ___version_1;
	Stack_1_t3622356976 * ___pennants_2;
};
