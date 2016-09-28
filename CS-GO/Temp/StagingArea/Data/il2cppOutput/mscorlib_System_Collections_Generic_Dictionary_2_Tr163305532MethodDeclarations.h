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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>
struct Transform_1_t163305532;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m330505899_gshared (Transform_1_t163305532 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m330505899(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t163305532 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m330505899_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::Invoke(TKey,TValue)
extern "C"  NetworkInstanceId_t3860307911  Transform_1_Invoke_m1598580337_gshared (Transform_1_t163305532 * __this, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1598580337(__this, ___key0, ___value1, method) ((  NetworkInstanceId_t3860307911  (*) (Transform_1_t163305532 *, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1598580337_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1764716112_gshared (Transform_1_t163305532 * __this, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1764716112(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t163305532 *, NetworkInstanceId_t3860307911 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1764716112_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkInstanceId,System.Object,UnityEngine.Networking.NetworkInstanceId>::EndInvoke(System.IAsyncResult)
extern "C"  NetworkInstanceId_t3860307911  Transform_1_EndInvoke_m4222646649_gshared (Transform_1_t163305532 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4222646649(__this, ___result0, method) ((  NetworkInstanceId_t3860307911  (*) (Transform_1_t163305532 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4222646649_gshared)(__this, ___result0, method)
