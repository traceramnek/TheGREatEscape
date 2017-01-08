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

// Microsoft.Win32.RegistryKey
struct RegistryKey_t1336600840;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.IOException
struct IOException_t2404867879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive2147736121.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C"  void RegistryKey__ctor_m342897029 (RegistryKey_t1336600840 * __this, int32_t ___hiveId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C"  void RegistryKey__ctor_m2854858954 (RegistryKey_t1336600840 * __this, int32_t ___hiveId0, IntPtr_t ___keyHandle1, bool ___remoteRoot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C"  void RegistryKey__ctor_m1518769778 (RegistryKey_t1336600840 * __this, Il2CppObject * ___data0, String_t* ___keyName1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C"  void RegistryKey__cctor_m1734304328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C"  void RegistryKey_System_IDisposable_Dispose_m1415252666 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C"  void RegistryKey_Finalize_m4054613053 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C"  String_t* RegistryKey_get_Name_m85466928 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C"  void RegistryKey_Flush_m1679464743 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C"  void RegistryKey_Close_m3306376987 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C"  void RegistryKey_SetValue_m1950413698 (RegistryKey_t1336600840 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C"  RegistryKey_t1336600840 * RegistryKey_OpenSubKey_m2049433439 (RegistryKey_t1336600840 * __this, String_t* ___name0, bool ___writable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C"  void RegistryKey_DeleteValue_m1091189604 (RegistryKey_t1336600840 * __this, String_t* ___name0, bool ___throwOnMissingValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C"  String_t* RegistryKey_ToString_m3742159304 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C"  bool RegistryKey_get_IsRoot_m3917496402 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C"  bool RegistryKey_get_IsWritable_m728976400 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C"  int32_t RegistryKey_get_Hive_m4130224109 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C"  Il2CppObject * RegistryKey_get_Handle_m2520121403 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C"  void RegistryKey_AssertKeyStillValid_m2607030704 (RegistryKey_t1336600840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C"  void RegistryKey_AssertKeyNameLength_m2260948885 (RegistryKey_t1336600840 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C"  IOException_t2404867879 * RegistryKey_CreateMarkedForDeletionException_m2481058284 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C"  String_t* RegistryKey_GetHiveName_m2156013975 (Il2CppObject * __this /* static, unused */, int32_t ___hive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
