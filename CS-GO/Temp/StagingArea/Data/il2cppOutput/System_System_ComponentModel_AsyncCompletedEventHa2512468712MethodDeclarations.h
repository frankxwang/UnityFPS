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

// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t2512468712;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t2437453489;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_AsyncCompletedEventAr2437453489.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.AsyncCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCompletedEventHandler__ctor_m1567555400 (AsyncCompletedEventHandler_t2512468712 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::Invoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs)
extern "C"  void AsyncCompletedEventHandler_Invoke_m2381493849 (AsyncCompletedEventHandler_t2512468712 * __this, Il2CppObject * ___sender0, AsyncCompletedEventArgs_t2437453489 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncCompletedEventHandler_t2512468712(Il2CppObject* delegate, Il2CppObject * ___sender0, AsyncCompletedEventArgs_t2437453489 * ___e1);
// System.IAsyncResult System.ComponentModel.AsyncCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncCompletedEventHandler_BeginInvoke_m1323045516 (AsyncCompletedEventHandler_t2512468712 * __this, Il2CppObject * ___sender0, AsyncCompletedEventArgs_t2437453489 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncCompletedEventHandler_EndInvoke_m997545304 (AsyncCompletedEventHandler_t2512468712 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
