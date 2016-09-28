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

// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1933801609;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SpawnDelegate__ctor_m2307239207 (SpawnDelegate_t1933801609 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C"  GameObject_t4012695102 * SpawnDelegate_Invoke_m1159691543 (SpawnDelegate_t1933801609 * __this, Vector3_t3525329789  ___position0, NetworkHash128_t1719292676  ___assetId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" GameObject_t4012695102 * pinvoke_delegate_wrapper_SpawnDelegate_t1933801609(Il2CppObject* delegate, Vector3_t3525329789  ___position0, NetworkHash128_t1719292676  ___assetId1);
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SpawnDelegate_BeginInvoke_m287551329 (SpawnDelegate_t1933801609 * __this, Vector3_t3525329789  ___position0, NetworkHash128_t1719292676  ___assetId1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C"  GameObject_t4012695102 * SpawnDelegate_EndInvoke_m1564502918 (SpawnDelegate_t1933801609 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
