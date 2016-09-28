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

// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t979323062;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t744059576;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct Dictionary_2_t301885528;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t3864036965;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t1580343381;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo1974561481.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4199235281.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3864036965.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1580343381.h"

// System.Void UnityEngine.Networking.NetworkMigrationManager::.ctor()
extern "C"  void NetworkMigrationManager__ctor_m435808910 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AddPendingPlayer(UnityEngine.GameObject,System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  void NetworkMigrationManager_AddPendingPlayer_m343460376 (NetworkMigrationManager_t979323062 * __this, GameObject_t4012695102 * ___obj0, int32_t ___connectionId1, NetworkInstanceId_t3860307911  ___netId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkMigrationManager::FindPendingPlayer(System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  GameObject_t4012695102 * NetworkMigrationManager_FindPendingPlayer_m291414195 (NetworkMigrationManager_t979323062 * __this, int32_t ___connectionId0, NetworkInstanceId_t3860307911  ___netId1, int16_t ___playerControllerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::RemovePendingPlayer(System.Int32)
extern "C"  void NetworkMigrationManager_RemovePendingPlayer_m2578285041 (NetworkMigrationManager_t979323062 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostMigration()
extern "C"  bool NetworkMigrationManager_get_hostMigration_m1606637019 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_hostMigration(System.Boolean)
extern "C"  void NetworkMigrationManager_set_hostMigration_m250307500 (NetworkMigrationManager_t979323062 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_showGUI()
extern "C"  bool NetworkMigrationManager_get_showGUI_m1802275027 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_showGUI(System.Boolean)
extern "C"  void NetworkMigrationManager_set_showGUI_m3847307300 (NetworkMigrationManager_t979323062 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetX()
extern "C"  int32_t NetworkMigrationManager_get_offsetX_m4025312 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetX(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetX_m3011880997 (NetworkMigrationManager_t979323062 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetY()
extern "C"  int32_t NetworkMigrationManager_get_offsetY_m4026273 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetY(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetY_m224465510 (NetworkMigrationManager_t979323062 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkMigrationManager::get_client()
extern "C"  NetworkClient_t3113766402 * NetworkMigrationManager_get_client_m3975614475 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingToBecomeNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingToBecomeNewHost_m574393542 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingToBecomeNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingToBecomeNewHost_m2699274595 (NetworkMigrationManager_t979323062 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingReconnectToNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingReconnectToNewHost_m3414007192 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingReconnectToNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingReconnectToNewHost_m3669509545 (NetworkMigrationManager_t979323062 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_disconnectedFromHost()
extern "C"  bool NetworkMigrationManager_get_disconnectedFromHost_m707371962 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostWasShutdown()
extern "C"  bool NetworkMigrationManager_get_hostWasShutdown_m2663156524 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Match.MatchInfo UnityEngine.Networking.NetworkMigrationManager::get_matchInfo()
extern "C"  MatchInfo_t1974561481 * NetworkMigrationManager_get_matchInfo_m2539969190 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_oldServerConnectionId()
extern "C"  int32_t NetworkMigrationManager_get_oldServerConnectionId_m447188670 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkMigrationManager::get_newHostAddress()
extern "C"  String_t* NetworkMigrationManager_get_newHostAddress_m1788883502 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_newHostAddress(System.String)
extern "C"  void NetworkMigrationManager_set_newHostAddress_m647660195 (NetworkMigrationManager_t979323062 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkMigrationManager::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t744059576* NetworkMigrationManager_get_peers_m3567690210 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers> UnityEngine.Networking.NetworkMigrationManager::get_pendingPlayers()
extern "C"  Dictionary_2_t301885528 * NetworkMigrationManager_get_pendingPlayers_m952382421 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Start()
extern "C"  void NetworkMigrationManager_Start_m3677913998 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Reset(System.Int32)
extern "C"  void NetworkMigrationManager_Reset_m471468556 (NetworkMigrationManager_t979323062 * __this, int32_t ___reconnectId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AssignAuthorityCallback(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkMigrationManager_AssignAuthorityCallback_m2809366236 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___conn0, NetworkIdentity_t1320523637 * ___uv1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Initialize(UnityEngine.Networking.NetworkClient,UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkMigrationManager_Initialize_m3710973039 (NetworkMigrationManager_t979323062 * __this, NetworkClient_t3113766402 * ___newClient0, MatchInfo_t1974561481 * ___newMatchInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::DisablePlayerObjects()
extern "C"  void NetworkMigrationManager_DisablePlayerObjects_m3309705505 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::SendPeerInfo()
extern "C"  void NetworkMigrationManager_SendPeerInfo_m412259022 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerClientAuthority_m1328157587 (NetworkMigrationManager_t979323062 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerInfo(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerInfo_m772562097 (NetworkMigrationManager_t979323062 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayerMessage_m756101807 (NetworkMigrationManager_t979323062 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectObjectForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  bool NetworkMigrationManager_ReconnectObjectForConnection_m2491010725 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___newConnection0, GameObject_t4012695102 * ___oldObject1, int32_t ___oldConnectionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  bool NetworkMigrationManager_ReconnectPlayerForConnection_m651368686 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___newConnection0, GameObject_t4012695102 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::LostHostOnClient(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkMigrationManager_LostHostOnClient_m2749333425 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::LostHostOnHost()
extern "C"  void NetworkMigrationManager_LostHostOnHost_m997934121 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::BecomeNewHost(System.Int32)
extern "C"  bool NetworkMigrationManager_BecomeNewHost_m2684760016 (NetworkMigrationManager_t979323062 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnClientDisconnectedFromHost(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption&)
extern "C"  void NetworkMigrationManager_OnClientDisconnectedFromHost_m699601846 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t* ___sceneChange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerHostShutdown()
extern "C"  void NetworkMigrationManager_OnServerHostShutdown_m3959455286 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m1384684799 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___newConnection0, GameObject_t4012695102 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m4111741689 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___newConnection0, GameObject_t4012695102 * ___oldPlayer1, int32_t ___oldConnectionId2, int16_t ___playerControllerId3, NetworkReader_t3536499450 * ___extraMessageReader4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectObject(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  void NetworkMigrationManager_OnServerReconnectObject_m870285808 (NetworkMigrationManager_t979323062 * __this, NetworkConnection_t2182631957 * ___newConnection0, GameObject_t4012695102 * ___oldObject1, int32_t ___oldConnectionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeersUpdated(UnityEngine.Networking.NetworkSystem.PeerListMessage)
extern "C"  void NetworkMigrationManager_OnPeersUpdated_m381121068 (NetworkMigrationManager_t979323062 * __this, PeerListMessage_t3864036965 * ___peers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnAuthorityUpdated(UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void NetworkMigrationManager_OnAuthorityUpdated_m3965439595 (NetworkMigrationManager_t979323062 * __this, GameObject_t4012695102 * ___go0, int32_t ___connectionId1, bool ___authorityState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::FindNewHost(UnityEngine.Networking.NetworkSystem.PeerInfoMessage&,System.Boolean&)
extern "C"  bool NetworkMigrationManager_FindNewHost_m1068880209 (NetworkMigrationManager_t979323062 * __this, PeerInfoMessage_t1580343381 ** ___newHostInfo0, bool* ___youAreNewHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIHost()
extern "C"  void NetworkMigrationManager_OnGUIHost_m877579216 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIClient()
extern "C"  void NetworkMigrationManager_OnGUIClient_m2750390131 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUI()
extern "C"  void NetworkMigrationManager_OnGUI_m4226174856 (NetworkMigrationManager_t979323062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
