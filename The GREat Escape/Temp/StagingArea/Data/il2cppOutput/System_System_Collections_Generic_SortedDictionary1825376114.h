#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "System_System_Collections_Generic_RBTree_Node523796052.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct  Node_t1825376114  : public Node_t523796052
{
public:
	// TKey System.Collections.Generic.SortedDictionary`2/Node::key
	Il2CppObject * ___key_5;
	// TValue System.Collections.Generic.SortedDictionary`2/Node::value
	Il2CppObject * ___value_6;

public:
	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(Node_t1825376114, ___key_5)); }
	inline Il2CppObject * get_key_5() const { return ___key_5; }
	inline Il2CppObject ** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(Il2CppObject * value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier(&___key_5, value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(Node_t1825376114, ___value_6)); }
	inline Il2CppObject * get_value_6() const { return ___value_6; }
	inline Il2CppObject ** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(Il2CppObject * value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier(&___value_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
