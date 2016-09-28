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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t215573715;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback2D__ctor_m1493926507 (ClientMoveCallback2D_t215573715 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
extern "C"  bool ClientMoveCallback2D_Invoke_m2348172372 (ClientMoveCallback2D_t215573715 * __this, Vector2_t3525329788 * ___position0, Vector2_t3525329788 * ___velocity1, float* ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_ClientMoveCallback2D_t215573715(Il2CppObject* delegate, Vector2_t3525329788 * ___position0, Vector2_t3525329788 * ___velocity1, float* ___rotation2);
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::BeginInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientMoveCallback2D_BeginInvoke_m2220729119 (ClientMoveCallback2D_t215573715 * __this, Vector2_t3525329788 * ___position0, Vector2_t3525329788 * ___velocity1, float* ___rotation2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::EndInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback2D_EndInvoke_m433115000 (ClientMoveCallback2D_t215573715 * __this, Vector2_t3525329788 * ___position0, Vector2_t3525329788 * ___velocity1, float* ___rotation2, Il2CppObject * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
