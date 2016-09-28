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

// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t1215416419;
// UnityEngine.Networking.LocalClient
struct LocalClient_t2051778943;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Loca2051778943.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
extern "C"  void ULocalConnectionToClient__ctor_m4118495422 (ULocalConnectionToClient_t1215416419 * __this, LocalClient_t2051778943 * ___localClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
extern "C"  LocalClient_t2051778943 * ULocalConnectionToClient_get_localClient_m1682296960 (ULocalConnectionToClient_t1215416419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToClient_Send_m3601749625 (ULocalConnectionToClient_t1215416419 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendByChannel_m113431922 (ULocalConnectionToClient_t1215416419 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendBytes_m4160796457 (ULocalConnectionToClient_t1215416419 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendWriter_m2160642453 (ULocalConnectionToClient_t1215416419 * __this, NetworkWriter_t3691904682 * ___writer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
