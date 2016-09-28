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

// PhotonNetwork/EventCallback
struct EventCallback_t3012881631;
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

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void EventCallback__ctor_m2245100633 (EventCallback_t3012881631 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
extern "C"  void EventCallback_Invoke_m2981428785 (EventCallback_t3012881631 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventCallback_t3012881631(Il2CppObject* delegate, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2);
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventCallback_BeginInvoke_m1709012328 (EventCallback_t3012881631 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void EventCallback_EndInvoke_m2982087401 (EventCallback_t3012881631 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
