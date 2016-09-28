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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,UnityEngine.Networking.NetworkBroadcastResult>
struct Transform_1_t2549318618;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3925257945.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,UnityEngine.Networking.NetworkBroadcastResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1968384281_gshared (Transform_1_t2549318618 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1968384281(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2549318618 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1968384281_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,UnityEngine.Networking.NetworkBroadcastResult>::Invoke(TKey,TValue)
extern "C"  NetworkBroadcastResult_t3925257945  Transform_1_Invoke_m611226435_gshared (Transform_1_t2549318618 * __this, Il2CppObject * ___key0, NetworkBroadcastResult_t3925257945  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m611226435(__this, ___key0, ___value1, method) ((  NetworkBroadcastResult_t3925257945  (*) (Transform_1_t2549318618 *, Il2CppObject *, NetworkBroadcastResult_t3925257945 , const MethodInfo*))Transform_1_Invoke_m611226435_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,UnityEngine.Networking.NetworkBroadcastResult>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2934116514_gshared (Transform_1_t2549318618 * __this, Il2CppObject * ___key0, NetworkBroadcastResult_t3925257945  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2934116514(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2549318618 *, Il2CppObject *, NetworkBroadcastResult_t3925257945 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2934116514_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,UnityEngine.Networking.NetworkBroadcastResult>::EndInvoke(System.IAsyncResult)
extern "C"  NetworkBroadcastResult_t3925257945  Transform_1_EndInvoke_m2062579047_gshared (Transform_1_t2549318618 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2062579047(__this, ___result0, method) ((  NetworkBroadcastResult_t3925257945  (*) (Transform_1_t2549318618 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2062579047_gshared)(__this, ___result0, method)
