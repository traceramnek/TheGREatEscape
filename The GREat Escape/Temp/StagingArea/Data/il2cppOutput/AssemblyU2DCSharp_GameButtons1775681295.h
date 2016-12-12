#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// QuestionPanel
struct QuestionPanel_t4049178014;
// QuestionCanvas
struct QuestionCanvas_t598303998;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameButtons
struct  GameButtons_t1775681295  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] GameButtons::showIfPaused
	GameObjectU5BU5D_t2662109048* ___showIfPaused_2;
	// UnityEngine.GameObject[] GameButtons::showIfResumed
	GameObjectU5BU5D_t2662109048* ___showIfResumed_3;
	// QuestionPanel GameButtons::panel
	QuestionPanel_t4049178014 * ___panel_4;
	// QuestionCanvas GameButtons::qCanvas
	QuestionCanvas_t598303998 * ___qCanvas_5;

public:
	inline static int32_t get_offset_of_showIfPaused_2() { return static_cast<int32_t>(offsetof(GameButtons_t1775681295, ___showIfPaused_2)); }
	inline GameObjectU5BU5D_t2662109048* get_showIfPaused_2() const { return ___showIfPaused_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_showIfPaused_2() { return &___showIfPaused_2; }
	inline void set_showIfPaused_2(GameObjectU5BU5D_t2662109048* value)
	{
		___showIfPaused_2 = value;
		Il2CppCodeGenWriteBarrier(&___showIfPaused_2, value);
	}

	inline static int32_t get_offset_of_showIfResumed_3() { return static_cast<int32_t>(offsetof(GameButtons_t1775681295, ___showIfResumed_3)); }
	inline GameObjectU5BU5D_t2662109048* get_showIfResumed_3() const { return ___showIfResumed_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_showIfResumed_3() { return &___showIfResumed_3; }
	inline void set_showIfResumed_3(GameObjectU5BU5D_t2662109048* value)
	{
		___showIfResumed_3 = value;
		Il2CppCodeGenWriteBarrier(&___showIfResumed_3, value);
	}

	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(GameButtons_t1775681295, ___panel_4)); }
	inline QuestionPanel_t4049178014 * get_panel_4() const { return ___panel_4; }
	inline QuestionPanel_t4049178014 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(QuestionPanel_t4049178014 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___panel_4, value);
	}

	inline static int32_t get_offset_of_qCanvas_5() { return static_cast<int32_t>(offsetof(GameButtons_t1775681295, ___qCanvas_5)); }
	inline QuestionCanvas_t598303998 * get_qCanvas_5() const { return ___qCanvas_5; }
	inline QuestionCanvas_t598303998 ** get_address_of_qCanvas_5() { return &___qCanvas_5; }
	inline void set_qCanvas_5(QuestionCanvas_t598303998 * value)
	{
		___qCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___qCanvas_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
