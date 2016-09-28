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

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct ProcessWorkerEventHandler_t2811277981;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1801128212;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t692973875;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_AsyncOperation1801128212.h"
#include "mscorlib_System_Threading_SendOrPostCallback692973875.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProcessWorkerEventHandler__ctor_m2120487491 (ProcessWorkerEventHandler_t2811277981 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::Invoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void ProcessWorkerEventHandler_Invoke_m1004409832 (ProcessWorkerEventHandler_t2811277981 * __this, Il2CppObject * ___argument0, AsyncOperation_t1801128212 * ___async1, SendOrPostCallback_t692973875 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProcessWorkerEventHandler_t2811277981(Il2CppObject* delegate, Il2CppObject * ___argument0, AsyncOperation_t1801128212 * ___async1, SendOrPostCallback_t692973875 * ___callback2);
// System.IAsyncResult System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProcessWorkerEventHandler_BeginInvoke_m1905035501 (ProcessWorkerEventHandler_t2811277981 * __this, Il2CppObject * ___argument0, AsyncOperation_t1801128212 * ___async1, SendOrPostCallback_t692973875 * ___callback2, AsyncCallback_t1363551830 * ____callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProcessWorkerEventHandler_EndInvoke_m885595603 (ProcessWorkerEventHandler_t2811277981 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
