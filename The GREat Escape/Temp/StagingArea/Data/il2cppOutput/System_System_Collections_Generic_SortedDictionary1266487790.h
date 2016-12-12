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

#include "mscorlib_System_ValueType1744280289.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer607082808.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t1266487790 
{
public:
	// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator::host
	NodeEnumerator_t607082808  ___host_0;
	// TKey System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator::current
	Il2CppObject * ___current_1;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t1266487790, ___host_0)); }
	inline NodeEnumerator_t607082808  get_host_0() const { return ___host_0; }
	inline NodeEnumerator_t607082808 * get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(NodeEnumerator_t607082808  value)
	{
		___host_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Enumerator_t1266487790, ___current_1)); }
	inline Il2CppObject * get_current_1() const { return ___current_1; }
	inline Il2CppObject ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(Il2CppObject * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier(&___current_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
