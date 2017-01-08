#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossController
struct  BossController_t2589434633  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform BossController::target
	Transform_t1659122786 * ___target_2;
	// System.Single BossController::speed
	float ___speed_3;
	// System.Single BossController::minDistance
	float ___minDistance_4;
	// System.Single BossController::range
	float ___range_5;
	// System.Boolean BossController::canMove
	bool ___canMove_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BossController_t2589434633, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BossController_t2589434633, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_minDistance_4() { return static_cast<int32_t>(offsetof(BossController_t2589434633, ___minDistance_4)); }
	inline float get_minDistance_4() const { return ___minDistance_4; }
	inline float* get_address_of_minDistance_4() { return &___minDistance_4; }
	inline void set_minDistance_4(float value)
	{
		___minDistance_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(BossController_t2589434633, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_canMove_6() { return static_cast<int32_t>(offsetof(BossController_t2589434633, ___canMove_6)); }
	inline bool get_canMove_6() const { return ___canMove_6; }
	inline bool* get_address_of_canMove_6() { return &___canMove_6; }
	inline void set_canMove_6(bool value)
	{
		___canMove_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
