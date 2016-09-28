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

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t1378746877;
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

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeMethod__ctor_m1797781663 (SerializeMethod_t1378746877 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C"  ByteU5BU5D_t58506160* SerializeMethod_Invoke_m996346405 (SerializeMethod_t1378746877 * __this, Il2CppObject * ___customObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t58506160* pinvoke_delegate_wrapper_SerializeMethod_t1378746877(Il2CppObject* delegate, Il2CppObject * ___customObject0);
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeMethod_BeginInvoke_m132015908 (SerializeMethod_t1378746877 * __this, Il2CppObject * ___customObject0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t58506160* SerializeMethod_EndInvoke_m1790554053 (SerializeMethod_t1378746877 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
