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

// Microsoft.Win32.KeyHandler
struct KeyHandler_t4109149591;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1336600840;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryKey1336600840.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Microsoft.Win32.KeyHandler::.ctor(Microsoft.Win32.RegistryKey,System.String)
extern "C"  void KeyHandler__ctor_m3739335595 (KeyHandler_t4109149591 * __this, RegistryKey_t1336600840 * ___rkey0, String_t* ___basedir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::.cctor()
extern "C"  void KeyHandler__cctor_m1452004825 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Load()
extern "C"  void KeyHandler_Load_m3226695126 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::LoadKey(System.Security.SecurityElement)
extern "C"  void KeyHandler_LoadKey_m858785658 (KeyHandler_t4109149591 * __this, SecurityElement_t2125293618 * ___se0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Ensure(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t1336600840 * KeyHandler_Ensure_m2516039600 (KeyHandler_t4109149591 * __this, RegistryKey_t1336600840 * ___rkey0, String_t* ___extra1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Probe(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t1336600840 * KeyHandler_Probe_m1961929884 (KeyHandler_t4109149591 * __this, RegistryKey_t1336600840 * ___rkey0, String_t* ___extra1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C"  String_t* KeyHandler_CombineName_m3830935430 (Il2CppObject * __this /* static, unused */, RegistryKey_t1336600840 * ___rkey0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.KeyHandler Microsoft.Win32.KeyHandler::Lookup(Microsoft.Win32.RegistryKey,System.Boolean)
extern "C"  KeyHandler_t4109149591 * KeyHandler_Lookup_m1282896433 (Il2CppObject * __this /* static, unused */, RegistryKey_t1336600840 * ___rkey0, bool ___createNonExisting1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Drop(Microsoft.Win32.RegistryKey)
extern "C"  void KeyHandler_Drop_m2342762884 (Il2CppObject * __this /* static, unused */, RegistryKey_t1336600840 * ___rkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetValue(System.String,System.Object)
extern "C"  void KeyHandler_SetValue_m1467651473 (KeyHandler_t4109149591 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetDirty()
extern "C"  void KeyHandler_SetDirty_m1254327168 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::DirtyTimeout(System.Object)
extern "C"  void KeyHandler_DirtyTimeout_m1874677525 (KeyHandler_t4109149591 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Flush()
extern "C"  void KeyHandler_Flush_m146337654 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::ValueExists(System.String)
extern "C"  bool KeyHandler_ValueExists_m2434241605 (KeyHandler_t4109149591 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::get_IsMarkedForDeletion()
extern "C"  bool KeyHandler_get_IsMarkedForDeletion_m3649435880 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::RemoveValue(System.String)
extern "C"  void KeyHandler_RemoveValue_m800900259 (KeyHandler_t4109149591 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Finalize()
extern "C"  void KeyHandler_Finalize_m3347730318 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Save()
extern "C"  void KeyHandler_Save_m3414796461 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::AssertNotMarkedForDeletion()
extern "C"  void KeyHandler_AssertNotMarkedForDeletion_m1157826414 (KeyHandler_t4109149591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_UserStore()
extern "C"  String_t* KeyHandler_get_UserStore_m3840584604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_MachineStore()
extern "C"  String_t* KeyHandler_get_MachineStore_m3222105334 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
