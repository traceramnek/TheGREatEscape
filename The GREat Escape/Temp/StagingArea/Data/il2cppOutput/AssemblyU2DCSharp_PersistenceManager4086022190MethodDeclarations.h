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

// PersistenceManager
struct PersistenceManager_t4086022190;
// IPersistence
struct IPersistence_t1207440022;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void PersistenceManager::.ctor()
extern "C"  void PersistenceManager__ctor_m2869204013 (PersistenceManager_t4086022190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Awake()
extern "C"  void PersistenceManager_Awake_m3106809232 (PersistenceManager_t4086022190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Save(IPersistence)
extern "C"  void PersistenceManager_Save_m228982110 (PersistenceManager_t4086022190 * __this, Il2CppObject * ___objectToSave0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PersistenceManager::Load(System.String)
extern "C"  Il2CppObject * PersistenceManager_Load_m1147952368 (PersistenceManager_t4086022190 * __this, String_t* ___nameOfFile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Delete(System.String)
extern "C"  void PersistenceManager_Delete_m2357673312 (PersistenceManager_t4086022190 * __this, String_t* ___nameOfFile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
