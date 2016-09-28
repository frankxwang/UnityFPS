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

// UnityEngine.Networking.LocalClient
struct LocalClient_t2051778943;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"

// System.Void UnityEngine.Networking.LocalClient::.ctor()
extern "C"  void LocalClient__ctor_m1603469285 (LocalClient_t2051778943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Disconnect()
extern "C"  void LocalClient_Disconnect_m807991259 (LocalClient_t2051778943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InternalConnectLocalServer(System.Boolean)
extern "C"  void LocalClient_InternalConnectLocalServer_m1413322839 (LocalClient_t2051778943 * __this, bool ___generateConnectMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Update()
extern "C"  void LocalClient_Update_m4189769672 (LocalClient_t2051778943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::AddLocalPlayer(UnityEngine.Networking.PlayerController)
extern "C"  void LocalClient_AddLocalPlayer_m4187741256 (LocalClient_t2051778943 * __this, PlayerController_t2299033606 * ___localPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Byte[],System.Int32)
extern "C"  void LocalClient_PostInternalMessage_m3871875643 (LocalClient_t2051778943 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Int16)
extern "C"  void LocalClient_PostInternalMessage_m899796888 (LocalClient_t2051778943 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::ProcessInternalMessages()
extern "C"  void LocalClient_ProcessInternalMessages_m2334973499 (LocalClient_t2051778943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  void LocalClient_InvokeHandlerOnClient_m1197928464 (LocalClient_t2051778943 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
extern "C"  void LocalClient_InvokeBytesOnClient_m19278958 (LocalClient_t2051778943 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
