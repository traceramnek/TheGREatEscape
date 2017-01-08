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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.RBTree/Node
struct  Node_t523796052  : public Il2CppObject
{
public:
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/Node::left
	Node_t523796052 * ___left_2;
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/Node::right
	Node_t523796052 * ___right_3;
	// System.UInt32 System.Collections.Generic.RBTree/Node::size_black
	uint32_t ___size_black_4;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(Node_t523796052, ___left_2)); }
	inline Node_t523796052 * get_left_2() const { return ___left_2; }
	inline Node_t523796052 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Node_t523796052 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier(&___left_2, value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(Node_t523796052, ___right_3)); }
	inline Node_t523796052 * get_right_3() const { return ___right_3; }
	inline Node_t523796052 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Node_t523796052 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier(&___right_3, value);
	}

	inline static int32_t get_offset_of_size_black_4() { return static_cast<int32_t>(offsetof(Node_t523796052, ___size_black_4)); }
	inline uint32_t get_size_black_4() const { return ___size_black_4; }
	inline uint32_t* get_address_of_size_black_4() { return &___size_black_4; }
	inline void set_size_black_4(uint32_t value)
	{
		___size_black_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
