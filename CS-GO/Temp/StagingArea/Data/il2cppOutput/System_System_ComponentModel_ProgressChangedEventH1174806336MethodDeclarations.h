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

// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t1174806336;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t1502466393;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_ProgressChangedEventA1502466393.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.ProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProgressChangedEventHandler__ctor_m3863672652 (ProgressChangedEventHandler_t1174806336 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::Invoke(System.Object,System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void ProgressChangedEventHandler_Invoke_m3851768901 (ProgressChangedEventHandler_t1174806336 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t1502466393 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProgressChangedEventHandler_t1174806336(Il2CppObject* delegate, Il2CppObject * ___sender0, ProgressChangedEventArgs_t1502466393 * ___e1);
// System.IAsyncResult System.ComponentModel.ProgressChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProgressChangedEventHandler_BeginInvoke_m2997756890 (ProgressChangedEventHandler_t1174806336 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t1502466393 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProgressChangedEventHandler_EndInvoke_m2314596188 (ProgressChangedEventHandler_t1174806336 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
