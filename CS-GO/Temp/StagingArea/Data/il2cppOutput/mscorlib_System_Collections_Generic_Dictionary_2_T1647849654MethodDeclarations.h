﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>
struct Transform_1_t1647849654;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23705921145.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2023563346_gshared (Transform_1_t1647849654 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2023563346(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1647849654 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2023563346_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3705921145  Transform_1_Invoke_m1850905446_gshared (Transform_1_t1647849654 * __this, uint8_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1850905446(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3705921145  (*) (Transform_1_t1647849654 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1850905446_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2155894033_gshared (Transform_1_t1647849654 * __this, uint8_t ___key0, int32_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2155894033(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1647849654 *, uint8_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2155894033_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3705921145  Transform_1_EndInvoke_m3889566052_gshared (Transform_1_t1647849654 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3889566052(__this, ___result0, method) ((  KeyValuePair_2_t3705921145  (*) (Transform_1_t1647849654 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3889566052_gshared)(__this, ___result0, method)
