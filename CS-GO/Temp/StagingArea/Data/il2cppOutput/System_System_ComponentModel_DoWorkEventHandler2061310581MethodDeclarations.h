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

// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t2061310581;
// System.Object
struct Il2CppObject;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t282241604;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_DoWorkEventArgs282241604.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.DoWorkEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DoWorkEventHandler__ctor_m3105703509 (DoWorkEventHandler_t2061310581 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::Invoke(System.Object,System.ComponentModel.DoWorkEventArgs)
extern "C"  void DoWorkEventHandler_Invoke_m3329269433 (DoWorkEventHandler_t2061310581 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t282241604 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DoWorkEventHandler_t2061310581(Il2CppObject* delegate, Il2CppObject * ___sender0, DoWorkEventArgs_t282241604 * ___e1);
// System.IAsyncResult System.ComponentModel.DoWorkEventHandler::BeginInvoke(System.Object,System.ComponentModel.DoWorkEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DoWorkEventHandler_BeginInvoke_m89334322 (DoWorkEventHandler_t2061310581 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t282241604 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DoWorkEventHandler_EndInvoke_m2354260709 (DoWorkEventHandler_t2061310581 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
