#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HealthBar
struct HealthBar_t2033234935;
// PlayerController
struct PlayerController_t2866526589;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtPlayer
struct  HurtPlayer_t1093330928  : public MonoBehaviour_t667441552
{
public:
	// HealthBar HurtPlayer::Health
	HealthBar_t2033234935 * ___Health_2;
	// PlayerController HurtPlayer::Player
	PlayerController_t2866526589 * ___Player_3;

public:
	inline static int32_t get_offset_of_Health_2() { return static_cast<int32_t>(offsetof(HurtPlayer_t1093330928, ___Health_2)); }
	inline HealthBar_t2033234935 * get_Health_2() const { return ___Health_2; }
	inline HealthBar_t2033234935 ** get_address_of_Health_2() { return &___Health_2; }
	inline void set_Health_2(HealthBar_t2033234935 * value)
	{
		___Health_2 = value;
		Il2CppCodeGenWriteBarrier(&___Health_2, value);
	}

	inline static int32_t get_offset_of_Player_3() { return static_cast<int32_t>(offsetof(HurtPlayer_t1093330928, ___Player_3)); }
	inline PlayerController_t2866526589 * get_Player_3() const { return ___Player_3; }
	inline PlayerController_t2866526589 ** get_address_of_Player_3() { return &___Player_3; }
	inline void set_Player_3(PlayerController_t2866526589 * value)
	{
		___Player_3 = value;
		Il2CppCodeGenWriteBarrier(&___Player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
