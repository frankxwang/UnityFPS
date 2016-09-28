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

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t4182166364;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeMethod__ctor_m2522370750 (DeserializeMethod_t4182166364 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
extern "C"  Il2CppObject * DeserializeMethod_Invoke_m1673137958 (DeserializeMethod_t4182166364 * __this, ByteU5BU5D_t58506160* ___serializedCustomObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Il2CppObject * pinvoke_delegate_wrapper_DeserializeMethod_t4182166364(Il2CppObject* delegate, ByteU5BU5D_t58506160* ___serializedCustomObject0);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeserializeMethod_BeginInvoke_m3007778384 (DeserializeMethod_t4182166364 * __this, ByteU5BU5D_t58506160* ___serializedCustomObject0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DeserializeMethod_EndInvoke_m1155714681 (DeserializeMethod_t4182166364 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
