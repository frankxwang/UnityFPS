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

// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t4056931739;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t1026369758;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve1026369758.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RunWorkerCompletedEventHandler__ctor_m1268649851 (RunWorkerCompletedEventHandler_t4056931739 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::Invoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void RunWorkerCompletedEventHandler_Invoke_m1222062457 (RunWorkerCompletedEventHandler_t4056931739 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t1026369758 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RunWorkerCompletedEventHandler_t4056931739(Il2CppObject* delegate, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t1026369758 * ___e1);
// System.IAsyncResult System.ComponentModel.RunWorkerCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RunWorkerCompletedEventHandler_BeginInvoke_m1188553062 (RunWorkerCompletedEventHandler_t4056931739 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t1026369758 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RunWorkerCompletedEventHandler_EndInvoke_m4248991499 (RunWorkerCompletedEventHandler_t4056931739 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
