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

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CollectionChangeEventHandler__ctor_m2647061383 (CollectionChangeEventHandler_t609299751 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void CollectionChangeEventHandler_Invoke_m294398393 (CollectionChangeEventHandler_t609299751 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t3787252946 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CollectionChangeEventHandler_t609299751(Il2CppObject* delegate, Il2CppObject * ___sender0, CollectionChangeEventArgs_t3787252946 * ___e1);
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CollectionChangeEventHandler_BeginInvoke_m597086414 (CollectionChangeEventHandler_t609299751 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t3787252946 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CollectionChangeEventHandler_EndInvoke_m3392618775 (CollectionChangeEventHandler_t609299751 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
