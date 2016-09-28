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

// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>
struct Transform_1_t2390125582;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23930985555.h"
#include "AssemblyU2DCSharp_PunTeams_Team2602621.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2194871070_gshared (Transform_1_t2390125582 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2194871070(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2390125582 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2194871070_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3930985555  Transform_1_Invoke_m1143714842_gshared (Transform_1_t2390125582 * __this, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1143714842(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3930985555  (*) (Transform_1_t2390125582 *, uint8_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1143714842_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3582737349_gshared (Transform_1_t2390125582 * __this, uint8_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3582737349(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2390125582 *, uint8_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3582737349_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3930985555  Transform_1_EndInvoke_m3186702384_gshared (Transform_1_t2390125582 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3186702384(__this, ___result0, method) ((  KeyValuePair_2_t3930985555  (*) (Transform_1_t2390125582 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3186702384_gshared)(__this, ___result0, method)
