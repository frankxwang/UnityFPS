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

// System.Func`1<System.Object>
struct Func_1_t1979887667;
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

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m2351420511_gshared (Func_1_t1979887667 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m2351420511(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t1979887667 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m2351420511_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C"  Il2CppObject * Func_1_Invoke_m2160158107_gshared (Func_1_t1979887667 * __this, const MethodInfo* method);
#define Func_1_Invoke_m2160158107(__this, method) ((  Il2CppObject * (*) (Func_1_t1979887667 *, const MethodInfo*))Func_1_Invoke_m2160158107_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m4066620266_gshared (Func_1_t1979887667 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m4066620266(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t1979887667 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m4066620266_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_1_EndInvoke_m3356710033_gshared (Func_1_t1979887667 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m3356710033(__this, ___result0, method) ((  Il2CppObject * (*) (Func_1_t1979887667 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m3356710033_gshared)(__this, ___result0, method)
