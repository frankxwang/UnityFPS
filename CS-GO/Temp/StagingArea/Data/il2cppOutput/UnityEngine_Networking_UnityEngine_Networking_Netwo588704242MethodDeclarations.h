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

// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t588704242;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.NetworkLobbyPlayer::.ctor()
extern "C"  void NetworkLobbyPlayer__ctor_m3095444130 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyPlayer::get_slot()
extern "C"  uint8_t NetworkLobbyPlayer_get_slot_m3159823805 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_slot(System.Byte)
extern "C"  void NetworkLobbyPlayer_set_slot_m355814542 (NetworkLobbyPlayer_t588704242 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::get_readyToBegin()
extern "C"  bool NetworkLobbyPlayer_get_readyToBegin_m3366673224 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_readyToBegin(System.Boolean)
extern "C"  void NetworkLobbyPlayer_set_readyToBegin_m4277557057 (NetworkLobbyPlayer_t588704242 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::Start()
extern "C"  void NetworkLobbyPlayer_Start_m2042581922 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnStartClient()
extern "C"  void NetworkLobbyPlayer_OnStartClient_m3656427694 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendReadyToBeginMessage_m784130580 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendNotReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendNotReadyToBeginMessage_m3407562995 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendSceneLoadedMessage()
extern "C"  void NetworkLobbyPlayer_SendSceneLoadedMessage_m1716127072 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnLevelWasLoaded()
extern "C"  void NetworkLobbyPlayer_OnLevelWasLoaded_m2334894987 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::RemovePlayer()
extern "C"  void NetworkLobbyPlayer_RemovePlayer_m1865753767 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientEnterLobby()
extern "C"  void NetworkLobbyPlayer_OnClientEnterLobby_m2968790186 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientExitLobby()
extern "C"  void NetworkLobbyPlayer_OnClientExitLobby_m1721367470 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientReady(System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnClientReady_m1176103280 (NetworkLobbyPlayer_t588704242 * __this, bool ___readyState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkLobbyPlayer_OnSerialize_m861405740 (NetworkLobbyPlayer_t588704242 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnDeserialize_m3035905355 (NetworkLobbyPlayer_t588704242 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnGUI()
extern "C"  void NetworkLobbyPlayer_OnGUI_m2590842780 (NetworkLobbyPlayer_t588704242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
