#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerPersistantData
struct  PlayerPersistantData_t1870225214  : public Il2CppObject
{
public:
	// System.String PlayerPersistantData::level
	String_t* ___level_1;
	// System.Single PlayerPersistantData::posX
	float ___posX_2;
	// System.Single PlayerPersistantData::posY
	float ___posY_3;
	// System.Single PlayerPersistantData::health
	float ___health_4;
	// System.String[] PlayerPersistantData::booksCollected
	StringU5BU5D_t4054002952* ___booksCollected_5;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t1870225214, ___level_1)); }
	inline String_t* get_level_1() const { return ___level_1; }
	inline String_t** get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(String_t* value)
	{
		___level_1 = value;
		Il2CppCodeGenWriteBarrier(&___level_1, value);
	}

	inline static int32_t get_offset_of_posX_2() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t1870225214, ___posX_2)); }
	inline float get_posX_2() const { return ___posX_2; }
	inline float* get_address_of_posX_2() { return &___posX_2; }
	inline void set_posX_2(float value)
	{
		___posX_2 = value;
	}

	inline static int32_t get_offset_of_posY_3() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t1870225214, ___posY_3)); }
	inline float get_posY_3() const { return ___posY_3; }
	inline float* get_address_of_posY_3() { return &___posY_3; }
	inline void set_posY_3(float value)
	{
		___posY_3 = value;
	}

	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t1870225214, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_booksCollected_5() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t1870225214, ___booksCollected_5)); }
	inline StringU5BU5D_t4054002952* get_booksCollected_5() const { return ___booksCollected_5; }
	inline StringU5BU5D_t4054002952** get_address_of_booksCollected_5() { return &___booksCollected_5; }
	inline void set_booksCollected_5(StringU5BU5D_t4054002952* value)
	{
		___booksCollected_5 = value;
		Il2CppCodeGenWriteBarrier(&___booksCollected_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
