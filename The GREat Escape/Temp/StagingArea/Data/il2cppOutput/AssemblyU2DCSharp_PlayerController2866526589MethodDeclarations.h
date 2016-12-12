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

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "mscorlib_System_String7231557.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m2428503418 (PlayerController_t2866526589 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m632467240 (PlayerController_t2866526589 * __this, Collision2D_t2859305914 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionExit2D_m4253863494 (PlayerController_t2866526589 * __this, Collision2D_t2859305914 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::addBook(System.String)
extern "C"  void PlayerController_addBook_m2025845724 (PlayerController_t2866526589 * __this, String_t* ___bName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
