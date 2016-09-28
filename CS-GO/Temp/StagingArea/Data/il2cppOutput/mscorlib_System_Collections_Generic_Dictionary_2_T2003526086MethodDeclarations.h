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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.DictionaryEntry>
struct Transform_1_t2003526086;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4106042041.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1230233398_gshared (Transform_1_t2003526086 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1230233398(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2003526086 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1230233398_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m2463636294_gshared (Transform_1_t2003526086 * __this, int32_t ___key0, ConnectionPendingPlayers_t4106042041  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2463636294(__this, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t2003526086 *, int32_t, ConnectionPendingPlayers_t4106042041 , const MethodInfo*))Transform_1_Invoke_m2463636294_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1061133349_gshared (Transform_1_t2003526086 * __this, int32_t ___key0, ConnectionPendingPlayers_t4106042041  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1061133349(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2003526086 *, int32_t, ConnectionPendingPlayers_t4106042041 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1061133349_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m2547441028_gshared (Transform_1_t2003526086 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2547441028(__this, ___result0, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t2003526086 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2547441028_gshared)(__this, ___result0, method)
