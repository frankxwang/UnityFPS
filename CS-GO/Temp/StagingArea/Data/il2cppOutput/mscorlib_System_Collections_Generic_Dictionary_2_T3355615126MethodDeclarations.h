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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
struct Transform_1_t3355615126;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2767544167_gshared (Transform_1_t3355615126 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2767544167(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3355615126 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2767544167_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern "C"  int64_t Transform_1_Invoke_m1677374261_gshared (Transform_1_t3355615126 * __this, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1677374261(__this, ___key0, ___value1, method) ((  int64_t (*) (Transform_1_t3355615126 *, Il2CppObject *, int64_t, const MethodInfo*))Transform_1_Invoke_m1677374261_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m185097492_gshared (Transform_1_t3355615126 * __this, Il2CppObject * ___key0, int64_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m185097492(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3355615126 *, Il2CppObject *, int64_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m185097492_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Transform_1_EndInvoke_m349784629_gshared (Transform_1_t3355615126 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m349784629(__this, ___result0, method) ((  int64_t (*) (Transform_1_t3355615126 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m349784629_gshared)(__this, ___result0, method)
