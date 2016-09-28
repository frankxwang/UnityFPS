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

// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t1667302363;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3565652346;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3565652346.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ULocalConnectionToServer__ctor_m1104830699 (ULocalConnectionToServer_t1667302363 * __this, NetworkServer_t3565652346 * ___localServer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToServer_Send_m4050621441 (ULocalConnectionToServer_t1667302363 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendByChannel_m1721875706 (ULocalConnectionToServer_t1667302363 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendBytes_m2212210337 (ULocalConnectionToServer_t1667302363 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendWriter_m1566048029 (ULocalConnectionToServer_t1667302363 * __this, NetworkWriter_t3691904682 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
