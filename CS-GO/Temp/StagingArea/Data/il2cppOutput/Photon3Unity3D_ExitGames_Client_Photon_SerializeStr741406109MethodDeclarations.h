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

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t741406109;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t433541692;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffer433541692.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeStreamMethod__ctor_m1029384447 (SerializeStreamMethod_t741406109 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t SerializeStreamMethod_Invoke_m1239976771 (SerializeStreamMethod_t741406109 * __this, StreamBuffer_t433541692 * ___outStream0, Il2CppObject * ___customObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int16_t pinvoke_delegate_wrapper_SerializeStreamMethod_t741406109(Il2CppObject* delegate, StreamBuffer_t433541692 * ___outStream0, Il2CppObject * ___customObject1);
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeStreamMethod_BeginInvoke_m2560005368 (SerializeStreamMethod_t741406109 * __this, StreamBuffer_t433541692 * ___outStream0, Il2CppObject * ___customObject1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  int16_t SerializeStreamMethod_EndInvoke_m3161046821 (SerializeStreamMethod_t741406109 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
