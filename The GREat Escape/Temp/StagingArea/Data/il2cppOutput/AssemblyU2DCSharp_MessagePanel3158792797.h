#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePanel
struct  MessagePanel_t3158792797  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text MessagePanel::WordDisplay
	Text_t9039225 * ___WordDisplay_2;
	// UnityEngine.GameObject MessagePanel::button
	GameObject_t3674682005 * ___button_3;

public:
	inline static int32_t get_offset_of_WordDisplay_2() { return static_cast<int32_t>(offsetof(MessagePanel_t3158792797, ___WordDisplay_2)); }
	inline Text_t9039225 * get_WordDisplay_2() const { return ___WordDisplay_2; }
	inline Text_t9039225 ** get_address_of_WordDisplay_2() { return &___WordDisplay_2; }
	inline void set_WordDisplay_2(Text_t9039225 * value)
	{
		___WordDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___WordDisplay_2, value);
	}

	inline static int32_t get_offset_of_button_3() { return static_cast<int32_t>(offsetof(MessagePanel_t3158792797, ___button_3)); }
	inline GameObject_t3674682005 * get_button_3() const { return ___button_3; }
	inline GameObject_t3674682005 ** get_address_of_button_3() { return &___button_3; }
	inline void set_button_3(GameObject_t3674682005 * value)
	{
		___button_3 = value;
		Il2CppCodeGenWriteBarrier(&___button_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
