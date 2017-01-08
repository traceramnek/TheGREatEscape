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
// System.String
struct String_t;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t3692741984;

#include "mscorlib_System_MarshalByRefObject1219038801.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKey
struct  RegistryKey_t1336600840  : public MarshalByRefObject_t1219038801
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	Il2CppObject * ___handle_1;
	// System.Object Microsoft.Win32.RegistryKey::hive
	Il2CppObject * ___hive_2;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_3;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_5;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840, ___handle_1)); }
	inline Il2CppObject * get_handle_1() const { return ___handle_1; }
	inline Il2CppObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(Il2CppObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier(&___handle_1, value);
	}

	inline static int32_t get_offset_of_hive_2() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840, ___hive_2)); }
	inline Il2CppObject * get_hive_2() const { return ___hive_2; }
	inline Il2CppObject ** get_address_of_hive_2() { return &___hive_2; }
	inline void set_hive_2(Il2CppObject * value)
	{
		___hive_2 = value;
		Il2CppCodeGenWriteBarrier(&___hive_2, value);
	}

	inline static int32_t get_offset_of_qname_3() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840, ___qname_3)); }
	inline String_t* get_qname_3() const { return ___qname_3; }
	inline String_t** get_address_of_qname_3() { return &___qname_3; }
	inline void set_qname_3(String_t* value)
	{
		___qname_3 = value;
		Il2CppCodeGenWriteBarrier(&___qname_3, value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_4() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840, ___isRemoteRoot_4)); }
	inline bool get_isRemoteRoot_4() const { return ___isRemoteRoot_4; }
	inline bool* get_address_of_isRemoteRoot_4() { return &___isRemoteRoot_4; }
	inline void set_isRemoteRoot_4(bool value)
	{
		___isRemoteRoot_4 = value;
	}

	inline static int32_t get_offset_of_isWritable_5() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840, ___isWritable_5)); }
	inline bool get_isWritable_5() const { return ___isWritable_5; }
	inline bool* get_address_of_isWritable_5() { return &___isWritable_5; }
	inline void set_isWritable_5(bool value)
	{
		___isWritable_5 = value;
	}
};

struct RegistryKey_t1336600840_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	Il2CppObject * ___RegistryApi_6;

public:
	inline static int32_t get_offset_of_RegistryApi_6() { return static_cast<int32_t>(offsetof(RegistryKey_t1336600840_StaticFields, ___RegistryApi_6)); }
	inline Il2CppObject * get_RegistryApi_6() const { return ___RegistryApi_6; }
	inline Il2CppObject ** get_address_of_RegistryApi_6() { return &___RegistryApi_6; }
	inline void set_RegistryApi_6(Il2CppObject * value)
	{
		___RegistryApi_6 = value;
		Il2CppCodeGenWriteBarrier(&___RegistryApi_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
