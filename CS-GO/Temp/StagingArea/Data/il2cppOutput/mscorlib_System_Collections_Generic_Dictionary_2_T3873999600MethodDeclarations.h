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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>
struct Transform_1_t3873999600;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1522184811_gshared (Transform_1_t3873999600 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1522184811(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3873999600 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1522184811_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::Invoke(TKey,TValue)
extern "C"  int16_t Transform_1_Invoke_m2185377969_gshared (Transform_1_t3873999600 * __this, int16_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2185377969(__this, ___key0, ___value1, method) ((  int16_t (*) (Transform_1_t3873999600 *, int16_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2185377969_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1782298256_gshared (Transform_1_t3873999600 * __this, int16_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1782298256(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3873999600 *, int16_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1782298256_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C"  int16_t Transform_1_EndInvoke_m422100793_gshared (Transform_1_t3873999600 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m422100793(__this, ___result0, method) ((  int16_t (*) (Transform_1_t3873999600 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m422100793_gshared)(__this, ___result0, method)
