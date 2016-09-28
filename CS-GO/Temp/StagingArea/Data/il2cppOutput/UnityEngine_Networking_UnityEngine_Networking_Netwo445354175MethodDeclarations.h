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

// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t445354175;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CmdDelegate__ctor_m2759759062 (CmdDelegate_t445354175 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::Invoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader)
extern "C"  void CmdDelegate_Invoke_m3957373192 (CmdDelegate_t445354175 * __this, NetworkBehaviour_t1633744088 * ___obj0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CmdDelegate_t445354175(Il2CppObject* delegate, NetworkBehaviour_t1633744088 * ___obj0, NetworkReader_t3536499450 * ___reader1);
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/CmdDelegate::BeginInvoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CmdDelegate_BeginInvoke_m3277484939 (CmdDelegate_t445354175 * __this, NetworkBehaviour_t1633744088 * ___obj0, NetworkReader_t3536499450 * ___reader1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CmdDelegate_EndInvoke_m2547638758 (CmdDelegate_t445354175 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
