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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>
struct Transform_1_t1663915666;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24085384122.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4106042041.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2859988082_gshared (Transform_1_t1663915666 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2859988082(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1663915666 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2859988082_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4085384122  Transform_1_Invoke_m3999717830_gshared (Transform_1_t1663915666 * __this, int32_t ___key0, ConnectionPendingPlayers_t4106042041  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3999717830(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4085384122  (*) (Transform_1_t1663915666 *, int32_t, ConnectionPendingPlayers_t4106042041 , const MethodInfo*))Transform_1_Invoke_m3999717830_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4096784369_gshared (Transform_1_t1663915666 * __this, int32_t ___key0, ConnectionPendingPlayers_t4106042041  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4096784369(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1663915666 *, int32_t, ConnectionPendingPlayers_t4106042041 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4096784369_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4085384122  Transform_1_EndInvoke_m3373797124_gshared (Transform_1_t1663915666 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3373797124(__this, ___result0, method) ((  KeyValuePair_2_t4085384122  (*) (Transform_1_t1663915666 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3373797124_gshared)(__this, ___result0, method)
