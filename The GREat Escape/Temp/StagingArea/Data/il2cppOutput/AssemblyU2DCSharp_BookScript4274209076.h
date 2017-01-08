#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BookScript
struct BookScript_t4274209076;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BookScript
struct  BookScript_t4274209076  : public MonoBehaviour_t667441552
{
public:
	// System.String[] BookScript::words
	StringU5BU5D_t4054002952* ___words_5;
	// System.Collections.Generic.List`1<System.String> BookScript::reviewWords
	List_1_t1375417109 * ___reviewWords_6;
	// System.Collections.Generic.List`1<System.Int32> BookScript::reviewIndices
	List_1_t2522024052 * ___reviewIndices_7;
	// System.Int32 BookScript::numBooks
	int32_t ___numBooks_8;
	// System.Int32 BookScript::maxBooks
	int32_t ___maxBooks_9;
	// UnityEngine.UI.Text BookScript::numBooksCollected
	Text_t9039225 * ___numBooksCollected_10;

public:
	inline static int32_t get_offset_of_words_5() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___words_5)); }
	inline StringU5BU5D_t4054002952* get_words_5() const { return ___words_5; }
	inline StringU5BU5D_t4054002952** get_address_of_words_5() { return &___words_5; }
	inline void set_words_5(StringU5BU5D_t4054002952* value)
	{
		___words_5 = value;
		Il2CppCodeGenWriteBarrier(&___words_5, value);
	}

	inline static int32_t get_offset_of_reviewWords_6() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___reviewWords_6)); }
	inline List_1_t1375417109 * get_reviewWords_6() const { return ___reviewWords_6; }
	inline List_1_t1375417109 ** get_address_of_reviewWords_6() { return &___reviewWords_6; }
	inline void set_reviewWords_6(List_1_t1375417109 * value)
	{
		___reviewWords_6 = value;
		Il2CppCodeGenWriteBarrier(&___reviewWords_6, value);
	}

	inline static int32_t get_offset_of_reviewIndices_7() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___reviewIndices_7)); }
	inline List_1_t2522024052 * get_reviewIndices_7() const { return ___reviewIndices_7; }
	inline List_1_t2522024052 ** get_address_of_reviewIndices_7() { return &___reviewIndices_7; }
	inline void set_reviewIndices_7(List_1_t2522024052 * value)
	{
		___reviewIndices_7 = value;
		Il2CppCodeGenWriteBarrier(&___reviewIndices_7, value);
	}

	inline static int32_t get_offset_of_numBooks_8() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___numBooks_8)); }
	inline int32_t get_numBooks_8() const { return ___numBooks_8; }
	inline int32_t* get_address_of_numBooks_8() { return &___numBooks_8; }
	inline void set_numBooks_8(int32_t value)
	{
		___numBooks_8 = value;
	}

	inline static int32_t get_offset_of_maxBooks_9() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___maxBooks_9)); }
	inline int32_t get_maxBooks_9() const { return ___maxBooks_9; }
	inline int32_t* get_address_of_maxBooks_9() { return &___maxBooks_9; }
	inline void set_maxBooks_9(int32_t value)
	{
		___maxBooks_9 = value;
	}

	inline static int32_t get_offset_of_numBooksCollected_10() { return static_cast<int32_t>(offsetof(BookScript_t4274209076, ___numBooksCollected_10)); }
	inline Text_t9039225 * get_numBooksCollected_10() const { return ___numBooksCollected_10; }
	inline Text_t9039225 ** get_address_of_numBooksCollected_10() { return &___numBooksCollected_10; }
	inline void set_numBooksCollected_10(Text_t9039225 * value)
	{
		___numBooksCollected_10 = value;
		Il2CppCodeGenWriteBarrier(&___numBooksCollected_10, value);
	}
};

struct BookScript_t4274209076_StaticFields
{
public:
	// BookScript BookScript::bookControl
	BookScript_t4274209076 * ___bookControl_3;
	// System.Int32 BookScript::levelCount
	int32_t ___levelCount_4;

public:
	inline static int32_t get_offset_of_bookControl_3() { return static_cast<int32_t>(offsetof(BookScript_t4274209076_StaticFields, ___bookControl_3)); }
	inline BookScript_t4274209076 * get_bookControl_3() const { return ___bookControl_3; }
	inline BookScript_t4274209076 ** get_address_of_bookControl_3() { return &___bookControl_3; }
	inline void set_bookControl_3(BookScript_t4274209076 * value)
	{
		___bookControl_3 = value;
		Il2CppCodeGenWriteBarrier(&___bookControl_3, value);
	}

	inline static int32_t get_offset_of_levelCount_4() { return static_cast<int32_t>(offsetof(BookScript_t4274209076_StaticFields, ___levelCount_4)); }
	inline int32_t get_levelCount_4() const { return ___levelCount_4; }
	inline int32_t* get_address_of_levelCount_4() { return &___levelCount_4; }
	inline void set_levelCount_4(int32_t value)
	{
		___levelCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
