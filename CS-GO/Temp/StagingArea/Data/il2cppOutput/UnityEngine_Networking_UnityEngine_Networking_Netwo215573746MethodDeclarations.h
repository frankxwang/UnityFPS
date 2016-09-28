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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t215573746;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback3D__ctor_m3126730506 (ClientMoveCallback3D_t215573746 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  bool ClientMoveCallback3D_Invoke_m1369516815 (ClientMoveCallback3D_t215573746 * __this, Vector3_t3525329789 * ___position0, Vector3_t3525329789 * ___velocity1, Quaternion_t1891715979 * ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_ClientMoveCallback3D_t215573746(Il2CppObject* delegate, Vector3_t3525329789 * ___position0, Vector3_t3525329789 * ___velocity1, Quaternion_t1891715979 * ___rotation2);
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ClientMoveCallback3D_BeginInvoke_m3462367428 (ClientMoveCallback3D_t215573746 * __this, Vector3_t3525329789 * ___position0, Vector3_t3525329789 * ___velocity1, Quaternion_t1891715979 * ___rotation2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::EndInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback3D_EndInvoke_m2489934819 (ClientMoveCallback3D_t215573746 * __this, Vector3_t3525329789 * ___position0, Vector3_t3525329789 * ___velocity1, Quaternion_t1891715979 * ___rotation2, Il2CppObject * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
