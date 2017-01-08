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
// System.String
struct String_t;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t3262957182;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossQuestions
struct  BossQuestions_t2160058432  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text BossQuestions::Question
	Text_t9039225 * ___Question_4;
	// UnityEngine.UI.Text BossQuestions::Ans1
	Text_t9039225 * ___Ans1_5;
	// UnityEngine.UI.Text BossQuestions::Ans2
	Text_t9039225 * ___Ans2_6;
	// UnityEngine.UI.Text BossQuestions::Ans3
	Text_t9039225 * ___Ans3_7;
	// System.Int32 BossQuestions::numWords
	int32_t ___numWords_8;
	// System.Char BossQuestions::delim
	Il2CppChar ___delim_9;
	// System.Char BossQuestions::delim2
	Il2CppChar ___delim2_10;
	// System.String BossQuestions::wrdTmp
	String_t* ___wrdTmp_11;
	// System.String BossQuestions::defTmp
	String_t* ___defTmp_12;
	// System.String BossQuestions::currQuestion
	String_t* ___currQuestion_13;
	// System.Collections.Generic.List`1<System.String> BossQuestions::answerOptions
	List_1_t1375417109 * ___answerOptions_15;
	// System.Collections.Generic.List`1<System.String> BossQuestions::keyList
	List_1_t1375417109 * ___keyList_16;
	// System.String[] BossQuestions::multiple_choice
	StringU5BU5D_t4054002952* ___multiple_choice_18;

public:
	inline static int32_t get_offset_of_Question_4() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___Question_4)); }
	inline Text_t9039225 * get_Question_4() const { return ___Question_4; }
	inline Text_t9039225 ** get_address_of_Question_4() { return &___Question_4; }
	inline void set_Question_4(Text_t9039225 * value)
	{
		___Question_4 = value;
		Il2CppCodeGenWriteBarrier(&___Question_4, value);
	}

	inline static int32_t get_offset_of_Ans1_5() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___Ans1_5)); }
	inline Text_t9039225 * get_Ans1_5() const { return ___Ans1_5; }
	inline Text_t9039225 ** get_address_of_Ans1_5() { return &___Ans1_5; }
	inline void set_Ans1_5(Text_t9039225 * value)
	{
		___Ans1_5 = value;
		Il2CppCodeGenWriteBarrier(&___Ans1_5, value);
	}

	inline static int32_t get_offset_of_Ans2_6() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___Ans2_6)); }
	inline Text_t9039225 * get_Ans2_6() const { return ___Ans2_6; }
	inline Text_t9039225 ** get_address_of_Ans2_6() { return &___Ans2_6; }
	inline void set_Ans2_6(Text_t9039225 * value)
	{
		___Ans2_6 = value;
		Il2CppCodeGenWriteBarrier(&___Ans2_6, value);
	}

	inline static int32_t get_offset_of_Ans3_7() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___Ans3_7)); }
	inline Text_t9039225 * get_Ans3_7() const { return ___Ans3_7; }
	inline Text_t9039225 ** get_address_of_Ans3_7() { return &___Ans3_7; }
	inline void set_Ans3_7(Text_t9039225 * value)
	{
		___Ans3_7 = value;
		Il2CppCodeGenWriteBarrier(&___Ans3_7, value);
	}

	inline static int32_t get_offset_of_numWords_8() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___numWords_8)); }
	inline int32_t get_numWords_8() const { return ___numWords_8; }
	inline int32_t* get_address_of_numWords_8() { return &___numWords_8; }
	inline void set_numWords_8(int32_t value)
	{
		___numWords_8 = value;
	}

	inline static int32_t get_offset_of_delim_9() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___delim_9)); }
	inline Il2CppChar get_delim_9() const { return ___delim_9; }
	inline Il2CppChar* get_address_of_delim_9() { return &___delim_9; }
	inline void set_delim_9(Il2CppChar value)
	{
		___delim_9 = value;
	}

	inline static int32_t get_offset_of_delim2_10() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___delim2_10)); }
	inline Il2CppChar get_delim2_10() const { return ___delim2_10; }
	inline Il2CppChar* get_address_of_delim2_10() { return &___delim2_10; }
	inline void set_delim2_10(Il2CppChar value)
	{
		___delim2_10 = value;
	}

	inline static int32_t get_offset_of_wrdTmp_11() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___wrdTmp_11)); }
	inline String_t* get_wrdTmp_11() const { return ___wrdTmp_11; }
	inline String_t** get_address_of_wrdTmp_11() { return &___wrdTmp_11; }
	inline void set_wrdTmp_11(String_t* value)
	{
		___wrdTmp_11 = value;
		Il2CppCodeGenWriteBarrier(&___wrdTmp_11, value);
	}

	inline static int32_t get_offset_of_defTmp_12() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___defTmp_12)); }
	inline String_t* get_defTmp_12() const { return ___defTmp_12; }
	inline String_t** get_address_of_defTmp_12() { return &___defTmp_12; }
	inline void set_defTmp_12(String_t* value)
	{
		___defTmp_12 = value;
		Il2CppCodeGenWriteBarrier(&___defTmp_12, value);
	}

	inline static int32_t get_offset_of_currQuestion_13() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___currQuestion_13)); }
	inline String_t* get_currQuestion_13() const { return ___currQuestion_13; }
	inline String_t** get_address_of_currQuestion_13() { return &___currQuestion_13; }
	inline void set_currQuestion_13(String_t* value)
	{
		___currQuestion_13 = value;
		Il2CppCodeGenWriteBarrier(&___currQuestion_13, value);
	}

	inline static int32_t get_offset_of_answerOptions_15() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___answerOptions_15)); }
	inline List_1_t1375417109 * get_answerOptions_15() const { return ___answerOptions_15; }
	inline List_1_t1375417109 ** get_address_of_answerOptions_15() { return &___answerOptions_15; }
	inline void set_answerOptions_15(List_1_t1375417109 * value)
	{
		___answerOptions_15 = value;
		Il2CppCodeGenWriteBarrier(&___answerOptions_15, value);
	}

	inline static int32_t get_offset_of_keyList_16() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___keyList_16)); }
	inline List_1_t1375417109 * get_keyList_16() const { return ___keyList_16; }
	inline List_1_t1375417109 ** get_address_of_keyList_16() { return &___keyList_16; }
	inline void set_keyList_16(List_1_t1375417109 * value)
	{
		___keyList_16 = value;
		Il2CppCodeGenWriteBarrier(&___keyList_16, value);
	}

	inline static int32_t get_offset_of_multiple_choice_18() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432, ___multiple_choice_18)); }
	inline StringU5BU5D_t4054002952* get_multiple_choice_18() const { return ___multiple_choice_18; }
	inline StringU5BU5D_t4054002952** get_address_of_multiple_choice_18() { return &___multiple_choice_18; }
	inline void set_multiple_choice_18(StringU5BU5D_t4054002952* value)
	{
		___multiple_choice_18 = value;
		Il2CppCodeGenWriteBarrier(&___multiple_choice_18, value);
	}
};

struct BossQuestions_t2160058432_StaticFields
{
public:
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> BossQuestions::questionsAnswers
	SortedDictionary_2_t3262957182 * ___questionsAnswers_14;
	// System.Collections.Generic.List`1<System.String> BossQuestions::currAnswers
	List_1_t1375417109 * ___currAnswers_17;
	// System.Int32 BossQuestions::correct_index
	int32_t ___correct_index_19;
	// System.Collections.Generic.List`1<System.String> BossQuestions::questionsUsed
	List_1_t1375417109 * ___questionsUsed_20;

public:
	inline static int32_t get_offset_of_questionsAnswers_14() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432_StaticFields, ___questionsAnswers_14)); }
	inline SortedDictionary_2_t3262957182 * get_questionsAnswers_14() const { return ___questionsAnswers_14; }
	inline SortedDictionary_2_t3262957182 ** get_address_of_questionsAnswers_14() { return &___questionsAnswers_14; }
	inline void set_questionsAnswers_14(SortedDictionary_2_t3262957182 * value)
	{
		___questionsAnswers_14 = value;
		Il2CppCodeGenWriteBarrier(&___questionsAnswers_14, value);
	}

	inline static int32_t get_offset_of_currAnswers_17() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432_StaticFields, ___currAnswers_17)); }
	inline List_1_t1375417109 * get_currAnswers_17() const { return ___currAnswers_17; }
	inline List_1_t1375417109 ** get_address_of_currAnswers_17() { return &___currAnswers_17; }
	inline void set_currAnswers_17(List_1_t1375417109 * value)
	{
		___currAnswers_17 = value;
		Il2CppCodeGenWriteBarrier(&___currAnswers_17, value);
	}

	inline static int32_t get_offset_of_correct_index_19() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432_StaticFields, ___correct_index_19)); }
	inline int32_t get_correct_index_19() const { return ___correct_index_19; }
	inline int32_t* get_address_of_correct_index_19() { return &___correct_index_19; }
	inline void set_correct_index_19(int32_t value)
	{
		___correct_index_19 = value;
	}

	inline static int32_t get_offset_of_questionsUsed_20() { return static_cast<int32_t>(offsetof(BossQuestions_t2160058432_StaticFields, ___questionsUsed_20)); }
	inline List_1_t1375417109 * get_questionsUsed_20() const { return ___questionsUsed_20; }
	inline List_1_t1375417109 ** get_address_of_questionsUsed_20() { return &___questionsUsed_20; }
	inline void set_questionsUsed_20(List_1_t1375417109 * value)
	{
		___questionsUsed_20 = value;
		Il2CppCodeGenWriteBarrier(&___questionsUsed_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
