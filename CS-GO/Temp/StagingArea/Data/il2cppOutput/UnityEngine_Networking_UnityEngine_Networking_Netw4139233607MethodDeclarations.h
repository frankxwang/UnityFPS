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

// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void NetworkMessageDelegate__ctor_m1044889877 (NetworkMessageDelegate_t4139233607 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::Invoke(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMessageDelegate_Invoke_m632497895 (NetworkMessageDelegate_t4139233607 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NetworkMessageDelegate_t4139233607(Il2CppObject* delegate, NetworkMessage_t1976735906 * ___netMsg0);
// System.IAsyncResult UnityEngine.Networking.NetworkMessageDelegate::BeginInvoke(UnityEngine.Networking.NetworkMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkMessageDelegate_BeginInvoke_m2869868812 (NetworkMessageDelegate_t4139233607 * __this, NetworkMessage_t1976735906 * ___netMsg0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void NetworkMessageDelegate_EndInvoke_m2573796773 (NetworkMessageDelegate_t4139233607 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
