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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,UnityEngine.Networking.NetworkHash128>
struct Transform_1_t1449911982;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,UnityEngine.Networking.NetworkHash128>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4252739523_gshared (Transform_1_t1449911982 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4252739523(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1449911982 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4252739523_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,UnityEngine.Networking.NetworkHash128>::Invoke(TKey,TValue)
extern "C"  NetworkHash128_t1719292676  Transform_1_Invoke_m2289048025_gshared (Transform_1_t1449911982 * __this, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2289048025(__this, ___key0, ___value1, method) ((  NetworkHash128_t1719292676  (*) (Transform_1_t1449911982 *, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2289048025_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,UnityEngine.Networking.NetworkHash128>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4242210104_gshared (Transform_1_t1449911982 * __this, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4242210104(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1449911982 *, NetworkHash128_t1719292676 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4242210104_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,UnityEngine.Networking.NetworkHash128>::EndInvoke(System.IAsyncResult)
extern "C"  NetworkHash128_t1719292676  Transform_1_EndInvoke_m3136689425_gshared (Transform_1_t1449911982 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3136689425(__this, ___result0, method) ((  NetworkHash128_t1719292676  (*) (Transform_1_t1449911982 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3136689425_gshared)(__this, ___result0, method)
