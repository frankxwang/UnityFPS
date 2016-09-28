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

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2898121368;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t569023745;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_PropertyChangedEventAr569023745.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangedEventHandler__ctor_m2551570084 (PropertyChangedEventHandler_t2898121368 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void PropertyChangedEventHandler_Invoke_m3617918709 (PropertyChangedEventHandler_t2898121368 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t569023745 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t2898121368(Il2CppObject* delegate, Il2CppObject * ___sender0, PropertyChangedEventArgs_t569023745 * ___e1);
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangedEventHandler_BeginInvoke_m2443252954 (PropertyChangedEventHandler_t2898121368 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t569023745 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangedEventHandler_EndInvoke_m1867137716 (PropertyChangedEventHandler_t2898121368 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
