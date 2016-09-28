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

// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t3750587389;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientAuthorityCallback__ctor_m3327956993 (ClientAuthorityCallback_t3750587389 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::Invoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void ClientAuthorityCallback_Invoke_m540939218 (ClientAuthorityCallback_t3750587389 * __this, NetworkConnection_t2182631957 * ___conn0, NetworkIdentity_t1320523637 * ___uv1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ClientAuthorityCallback_t3750587389(Il2CppObject* delegate, NetworkConnection_t2182631957 * ___conn0, NetworkIdentity_t1320523637 * ___uv1, bool ___authorityState2);
// System.IAsyncResult UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::BeginInvoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientAuthorityCallback_BeginInvoke_m1868262143 (ClientAuthorityCallback_t3750587389 * __this, NetworkConnection_t2182631957 * ___conn0, NetworkIdentity_t1320523637 * ___uv1, bool ___authorityState2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ClientAuthorityCallback_EndInvoke_m922104465 (ClientAuthorityCallback_t3750587389 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
