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

// System.Net.Dns/GetHostAddressesCallback
struct GetHostAddressesCallback_t999064489;
// System.Object
struct Il2CppObject;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.Dns/GetHostAddressesCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetHostAddressesCallback__ctor_m123273879 (GetHostAddressesCallback_t999064489 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::Invoke(System.String)
extern "C"  IPAddressU5BU5D_t3494006030* GetHostAddressesCallback_Invoke_m3143931217 (GetHostAddressesCallback_t999064489 * __this, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPAddressU5BU5D_t3494006030* pinvoke_delegate_wrapper_GetHostAddressesCallback_t999064489(Il2CppObject* delegate, String_t* ___hostName0);
// System.IAsyncResult System.Net.Dns/GetHostAddressesCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetHostAddressesCallback_BeginInvoke_m3599621630 (GetHostAddressesCallback_t999064489 * __this, String_t* ___hostName0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::EndInvoke(System.IAsyncResult)
extern "C"  IPAddressU5BU5D_t3494006030* GetHostAddressesCallback_EndInvoke_m3543111623 (GetHostAddressesCallback_t999064489 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
