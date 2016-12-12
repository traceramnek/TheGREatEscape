#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BossQuestions
struct BossQuestions_t2160058432;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void BossQuestions::.ctor()
extern "C"  void BossQuestions__ctor_m573753643 (BossQuestions_t2160058432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Start()
extern "C"  void BossQuestions_Start_m3815858731 (BossQuestions_t2160058432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Update()
extern "C"  void BossQuestions_Update_m2333355842 (BossQuestions_t2160058432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isInRevInd(System.Int32)
extern "C"  bool BossQuestions_isInRevInd_m1743723777 (BossQuestions_t2160058432 * __this, int32_t ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isRevWord(System.String)
extern "C"  bool BossQuestions_isRevWord_m528502242 (BossQuestions_t2160058432 * __this, String_t* ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isQuesUsed(System.String)
extern "C"  bool BossQuestions_isQuesUsed_m831894692 (BossQuestions_t2160058432 * __this, String_t* ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::parseCorrectWords()
extern "C"  void BossQuestions_parseCorrectWords_m1974076571 (BossQuestions_t2160058432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::parseStr(System.String)
extern "C"  void BossQuestions_parseStr_m3084840651 (BossQuestions_t2160058432 * __this, String_t* ___toParse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BossQuestions::pickQuestion()
extern "C"  String_t* BossQuestions_pickQuestion_m1716767933 (BossQuestions_t2160058432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::assignAnswers(System.String)
extern "C"  void BossQuestions_assignAnswers_m2606191091 (BossQuestions_t2160058432 * __this, String_t* ___correct0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isQuestionUsed(System.String)
extern "C"  bool BossQuestions_isQuestionUsed_m225313040 (BossQuestions_t2160058432 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::checkAnswer(System.String)
extern "C"  bool BossQuestions_checkAnswer_m452428127 (BossQuestions_t2160058432 * __this, String_t* ___playerAnswer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BossQuestions_OnTriggerEnter2D_m526739373 (BossQuestions_t2160058432 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
