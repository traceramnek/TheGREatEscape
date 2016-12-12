#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collect
struct  Collect_t2614098186  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource Collect::audioS
	AudioSource_t1740077639 * ___audioS_2;

public:
	inline static int32_t get_offset_of_audioS_2() { return static_cast<int32_t>(offsetof(Collect_t2614098186, ___audioS_2)); }
	inline AudioSource_t1740077639 * get_audioS_2() const { return ___audioS_2; }
	inline AudioSource_t1740077639 ** get_address_of_audioS_2() { return &___audioS_2; }
	inline void set_audioS_2(AudioSource_t1740077639 * value)
	{
		___audioS_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioS_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
