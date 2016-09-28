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

// UnityEngine.Networking.NetworkLobbyManager
struct NetworkLobbyManager_t2243710638;
// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t588704242;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo588704242.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"

// System.Void UnityEngine.Networking.NetworkLobbyManager::.ctor()
extern "C"  void NetworkLobbyManager__ctor_m2959910806 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::.cctor()
extern "C"  void NetworkLobbyManager__cctor_m1080825559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::get_showLobbyGUI()
extern "C"  bool NetworkLobbyManager_get_showLobbyGUI_m2218894151 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_showLobbyGUI(System.Boolean)
extern "C"  void NetworkLobbyManager_set_showLobbyGUI_m2082122404 (NetworkLobbyManager_t2243710638 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayers()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayers_m3409601773 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayers_m79347530 (NetworkLobbyManager_t2243710638 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayersPerConnection()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayersPerConnection_m757341584 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayersPerConnection(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayersPerConnection_m1781833173 (NetworkLobbyManager_t2243710638 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_minPlayers()
extern "C"  int32_t NetworkLobbyManager_get_minPlayers_m3884027839 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_minPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_minPlayers_m353255196 (NetworkLobbyManager_t2243710638 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkLobbyPlayer UnityEngine.Networking.NetworkLobbyManager::get_lobbyPlayerPrefab()
extern "C"  NetworkLobbyPlayer_t588704242 * NetworkLobbyManager_get_lobbyPlayerPrefab_m2928700735 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyPlayerPrefab(UnityEngine.Networking.NetworkLobbyPlayer)
extern "C"  void NetworkLobbyManager_set_lobbyPlayerPrefab_m742630836 (NetworkLobbyManager_t2243710638 * __this, NetworkLobbyPlayer_t588704242 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::get_gamePlayerPrefab()
extern "C"  GameObject_t4012695102 * NetworkLobbyManager_get_gamePlayerPrefab_m1419685885 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_gamePlayerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_set_gamePlayerPrefab_m2251694298 (NetworkLobbyManager_t2243710638 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_lobbyScene()
extern "C"  String_t* NetworkLobbyManager_get_lobbyScene_m3759387792 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyScene(System.String)
extern "C"  void NetworkLobbyManager_set_lobbyScene_m3129215105 (NetworkLobbyManager_t2243710638 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_playScene()
extern "C"  String_t* NetworkLobbyManager_get_playScene_m2565770976 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_playScene(System.String)
extern "C"  void NetworkLobbyManager_set_playScene_m897305139 (NetworkLobbyManager_t2243710638 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnValidate()
extern "C"  void NetworkLobbyManager_OnValidate_m3173277699 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyManager::FindSlot()
extern "C"  uint8_t NetworkLobbyManager_FindSlot_m3076113 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::SceneLoadedForPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_SceneLoadedForPlayer_m275332960 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, GameObject_t4012695102 * ___lobbyPlayerGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::CheckConnectionIsReadyToBegin(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t NetworkLobbyManager_CheckConnectionIsReadyToBegin_m171879710 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CheckReadyToBegin()
extern "C"  void NetworkLobbyManager_CheckReadyToBegin_m580260967 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerReturnToLobby()
extern "C"  void NetworkLobbyManager_ServerReturnToLobby_m1407590844 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientEnterLobby()
extern "C"  void NetworkLobbyManager_CallOnClientEnterLobby_m1793153332 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientExitLobby()
extern "C"  void NetworkLobbyManager_CallOnClientExitLobby_m1129254372 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::SendReturnToLobby()
extern "C"  bool NetworkLobbyManager_SendReturnToLobby_m498238601 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerConnect_m889351635 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerDisconnect_m2081534787 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnServerAddPlayer_m1742695974 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkLobbyManager_OnServerRemovePlayer_m1305676728 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, PlayerController_t2299033606 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerChangeScene(System.String)
extern "C"  void NetworkLobbyManager_ServerChangeScene_m3380197045 (NetworkLobbyManager_t2243710638 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnServerSceneChanged_m1837036522 (NetworkLobbyManager_t2243710638 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReadyToBeginMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReadyToBeginMessage_m3486992808 (NetworkLobbyManager_t2243710638 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneLoadedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerSceneLoadedMessage_m125351184 (NetworkLobbyManager_t2243710638 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReturnToLobbyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReturnToLobbyMessage_m2081116778 (NetworkLobbyManager_t2243710638 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartServer()
extern "C"  void NetworkLobbyManager_OnStartServer_m980983578 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartHost()
extern "C"  void NetworkLobbyManager_OnStartHost_m3047312831 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopHost()
extern "C"  void NetworkLobbyManager_OnStopHost_m1548274359 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnStartClient_m3954185644 (NetworkLobbyManager_t2243710638 * __this, NetworkClient_t3113766402 * ___lobbyClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientConnect_m2537712203 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientDisconnect_m4030120907 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopClient()
extern "C"  void NetworkLobbyManager_OnStopClient_m3043328154 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientSceneChanged_m1360631543 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientReadyToBegin(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientReadyToBegin_m2833090035 (NetworkLobbyManager_t2243710638 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientAddPlayerFailedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientAddPlayerFailedMessage_m2206259862 (NetworkLobbyManager_t2243710638 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartHost()
extern "C"  void NetworkLobbyManager_OnLobbyStartHost_m1020635233 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopHost()
extern "C"  void NetworkLobbyManager_OnLobbyStopHost_m97424341 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartServer()
extern "C"  void NetworkLobbyManager_OnLobbyStartServer_m3258964284 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerConnect_m1506925941 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerDisconnect_m597788769 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnLobbyServerSceneChanged_m2679490828 (NetworkLobbyManager_t2243710638 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateLobbyPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t4012695102 * NetworkLobbyManager_OnLobbyServerCreateLobbyPlayer_m1182724572 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateGamePlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t4012695102 * NetworkLobbyManager_OnLobbyServerCreateGamePlayer_m1298728140 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayerRemoved(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayerRemoved_m3108503495 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneLoadedForPlayer(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkLobbyManager_OnLobbyServerSceneLoadedForPlayer_m2790064237 (NetworkLobbyManager_t2243710638 * __this, GameObject_t4012695102 * ___lobbyPlayer0, GameObject_t4012695102 * ___gamePlayer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayersReady()
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayersReady_m786221567 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientEnter()
extern "C"  void NetworkLobbyManager_OnLobbyClientEnter_m581063364 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientExit()
extern "C"  void NetworkLobbyManager_OnLobbyClientExit_m3075704916 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientConnect_m3155286509 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientDisconnect_m2546374889 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnLobbyStartClient_m4264322766 (NetworkLobbyManager_t2243710638 * __this, NetworkClient_t3113766402 * ___lobbyClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopClient()
extern "C"  void NetworkLobbyManager_OnLobbyStopClient_m345864760 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientSceneChanged_m1409850517 (NetworkLobbyManager_t2243710638 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientAddPlayerFailed()
extern "C"  void NetworkLobbyManager_OnLobbyClientAddPlayerFailed_m62772779 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnGUI()
extern "C"  void NetworkLobbyManager_OnGUI_m2455309456 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::TryToAddPlayer()
extern "C"  void NetworkLobbyManager_TryToAddPlayer_m884190618 (NetworkLobbyManager_t2243710638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
