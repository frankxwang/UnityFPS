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

// UnityEngine.Networking.NetworkManager
struct NetworkManager_t1857071176;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t2769223534;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType>
struct List_1_t2389483089;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t979323062;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t411996224;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t3390828510;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t2758706898;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_LogFi759952076.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play1938427140.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo979323062.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo1974561481.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatc411996224.h"
#include "UnityEngine_UnityEngine_Networking_Match_ListMatch3390828510.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch2758706898.h"

// System.Void UnityEngine.Networking.NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m19706124 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::.cctor()
extern "C"  void NetworkManager__cctor_m128793633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_networkPort()
extern "C"  int32_t NetworkManager_get_networkPort_m414284248 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkPort(System.Int32)
extern "C"  void NetworkManager_set_networkPort_m1019540813 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_serverBindToIP()
extern "C"  bool NetworkManager_get_serverBindToIP_m1479657653 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindToIP(System.Boolean)
extern "C"  void NetworkManager_set_serverBindToIP_m1473159278 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_serverBindAddress()
extern "C"  String_t* NetworkManager_get_serverBindAddress_m3701719224 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindAddress(System.String)
extern "C"  void NetworkManager_set_serverBindAddress_m1558148865 (NetworkManager_t1857071176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_networkAddress()
extern "C"  String_t* NetworkManager_get_networkAddress_m3740478788 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkAddress(System.String)
extern "C"  void NetworkManager_set_networkAddress_m2405115367 (NetworkManager_t1857071176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_dontDestroyOnLoad()
extern "C"  bool NetworkManager_get_dontDestroyOnLoad_m3111226141 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_dontDestroyOnLoad(System.Boolean)
extern "C"  void NetworkManager_set_dontDestroyOnLoad_m384831378 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_runInBackground()
extern "C"  bool NetworkManager_get_runInBackground_m1252140301 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_runInBackground(System.Boolean)
extern "C"  void NetworkManager_set_runInBackground_m376888578 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_scriptCRCCheck()
extern "C"  bool NetworkManager_get_scriptCRCCheck_m2239931346 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkManager_set_scriptCRCCheck_m3672065227 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_sendPeerInfo()
extern "C"  bool NetworkManager_get_sendPeerInfo_m2188316011 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkManager_set_sendPeerInfo_m3637200676 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_maxDelay()
extern "C"  float NetworkManager_get_maxDelay_m3146941012 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxDelay(System.Single)
extern "C"  void NetworkManager_set_maxDelay_m3888909271 (NetworkManager_t1857071176 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LogFilter/FilterLevel UnityEngine.Networking.NetworkManager::get_logLevel()
extern "C"  int32_t NetworkManager_get_logLevel_m867128640 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_logLevel(UnityEngine.Networking.LogFilter/FilterLevel)
extern "C"  void NetworkManager_set_logLevel_m2024498239 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkManager::get_playerPrefab()
extern "C"  GameObject_t4012695102 * NetworkManager_get_playerPrefab_m2477348151 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkManager_set_playerPrefab_m1930241042 (NetworkManager_t1857071176 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_autoCreatePlayer()
extern "C"  bool NetworkManager_get_autoCreatePlayer_m992612575 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_autoCreatePlayer(System.Boolean)
extern "C"  void NetworkManager_set_autoCreatePlayer_m1882431128 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.PlayerSpawnMethod UnityEngine.Networking.NetworkManager::get_playerSpawnMethod()
extern "C"  int32_t NetworkManager_get_playerSpawnMethod_m1319712475 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerSpawnMethod(UnityEngine.Networking.PlayerSpawnMethod)
extern "C"  void NetworkManager_set_playerSpawnMethod_m3844787728 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_offlineScene()
extern "C"  String_t* NetworkManager_get_offlineScene_m2254606919 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_offlineScene(System.String)
extern "C"  void NetworkManager_set_offlineScene_m458789892 (NetworkManager_t1857071176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_onlineScene()
extern "C"  String_t* NetworkManager_get_onlineScene_m2076823037 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_onlineScene(System.String)
extern "C"  void NetworkManager_set_onlineScene_m1780758300 (NetworkManager_t1857071176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.Networking.NetworkManager::get_spawnPrefabs()
extern "C"  List_1_t514686775 * NetworkManager_get_spawnPrefabs_m1973798874 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.Networking.NetworkManager::get_startPositions()
extern "C"  List_1_t1081512082 * NetworkManager_get_startPositions_m1570885337 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_customConfig()
extern "C"  bool NetworkManager_get_customConfig_m3433535462 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_customConfig(System.Boolean)
extern "C"  void NetworkManager_set_customConfig_m1421237855 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.NetworkManager::get_connectionConfig()
extern "C"  ConnectionConfig_t3291140713 * NetworkManager_get_connectionConfig_m2609287921 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.GlobalConfig UnityEngine.Networking.NetworkManager::get_globalConfig()
extern "C"  GlobalConfig_t2769223534 * NetworkManager_get_globalConfig_m3023016443 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_maxConnections()
extern "C"  int32_t NetworkManager_get_maxConnections_m2421533770 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxConnections(System.Int32)
extern "C"  void NetworkManager_set_maxConnections_m1828689399 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType> UnityEngine.Networking.NetworkManager::get_channels()
extern "C"  List_1_t2389483089 * NetworkManager_get_channels_m753743410 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint UnityEngine.Networking.NetworkManager::get_secureTunnelEndpoint()
extern "C"  EndPoint_t1294049535 * NetworkManager_get_secureTunnelEndpoint_m3746957383 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_secureTunnelEndpoint(System.Net.EndPoint)
extern "C"  void NetworkManager_set_secureTunnelEndpoint_m2194324164 (NetworkManager_t1857071176 * __this, EndPoint_t1294049535 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useWebSockets()
extern "C"  bool NetworkManager_get_useWebSockets_m576036674 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useWebSockets(System.Boolean)
extern "C"  void NetworkManager_set_useWebSockets_m835456503 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useSimulator()
extern "C"  bool NetworkManager_get_useSimulator_m271595920 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useSimulator(System.Boolean)
extern "C"  void NetworkManager_set_useSimulator_m1942343305 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_simulatedLatency()
extern "C"  int32_t NetworkManager_get_simulatedLatency_m3177000919 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_simulatedLatency(System.Int32)
extern "C"  void NetworkManager_set_simulatedLatency_m1404946180 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_packetLossPercentage()
extern "C"  float NetworkManager_get_packetLossPercentage_m199473434 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_packetLossPercentage(System.Single)
extern "C"  void NetworkManager_set_packetLossPercentage_m2132182737 (NetworkManager_t1857071176 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_matchHost()
extern "C"  String_t* NetworkManager_get_matchHost_m1214789841 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchHost(System.String)
extern "C"  void NetworkManager_set_matchHost_m477058696 (NetworkManager_t1857071176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_matchPort()
extern "C"  int32_t NetworkManager_get_matchPort_m666648111 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchPort(System.Int32)
extern "C"  void NetworkManager_set_matchPort_m985999396 (NetworkManager_t1857071176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_clientLoadedScene()
extern "C"  bool NetworkManager_get_clientLoadedScene_m1895608939 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_clientLoadedScene(System.Boolean)
extern "C"  void NetworkManager_set_clientLoadedScene_m222647904 (NetworkManager_t1857071176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMigrationManager UnityEngine.Networking.NetworkManager::get_migrationManager()
extern "C"  NetworkMigrationManager_t979323062 * NetworkManager_get_migrationManager_m3217401683 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_numPlayers()
extern "C"  int32_t NetworkManager_get_numPlayers_m4251772805 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Awake()
extern "C"  void NetworkManager_Awake_m257311343 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::InitializeSingleton()
extern "C"  void NetworkManager_InitializeSingleton_m4098752005 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnValidate()
extern "C"  void NetworkManager_OnValidate_m157143117 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterServerMessages()
extern "C"  void NetworkManager_RegisterServerMessages_m1825049002 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetupMigrationManager(UnityEngine.Networking.NetworkMigrationManager)
extern "C"  void NetworkManager_SetupMigrationManager_m1238552476 (NetworkManager_t1857071176 * __this, NetworkMigrationManager_t979323062 * ___man0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m601545381 (NetworkManager_t1857071176 * __this, ConnectionConfig_t3291140713 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer()
extern "C"  bool NetworkManager_StartServer_m3151647421 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo)
extern "C"  bool NetworkManager_StartServer_m72922678 (NetworkManager_t1857071176 * __this, MatchInfo_t1974561481 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m2902664568 (NetworkManager_t1857071176 * __this, MatchInfo_t1974561481 * ___info0, ConnectionConfig_t3291140713 * ___config1, int32_t ___maxConnections2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterClientMessages(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_RegisterClientMessages_m1188458556 (NetworkManager_t1857071176 * __this, NetworkClient_t3113766402 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UseExternalClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_UseExternalClient_m4187732945 (NetworkManager_t1857071176 * __this, NetworkClient_t3113766402 * ___externalClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig)
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartClient_m3090087642 (NetworkManager_t1857071176 * __this, MatchInfo_t1974561481 * ___info0, ConnectionConfig_t3291140713 * ___config1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartClient_m576300625 (NetworkManager_t1857071176 * __this, MatchInfo_t1974561481 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient()
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartClient_m1483497240 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartHost_m3035180189 (NetworkManager_t1857071176 * __this, ConnectionConfig_t3291140713 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartHost_m3996211758 (NetworkManager_t1857071176 * __this, MatchInfo_t1974561481 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost()
extern "C"  NetworkClient_t3113766402 * NetworkManager_StartHost_m3218157749 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::ConnectLocalClient()
extern "C"  NetworkClient_t3113766402 * NetworkManager_ConnectLocalClient_m3924084739 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopHost()
extern "C"  void NetworkManager_StopHost_m3235417474 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopServer()
extern "C"  void NetworkManager_StopServer_m1360919069 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopClient()
extern "C"  void NetworkManager_StopClient_m890223781 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ServerChangeScene(System.String)
extern "C"  void NetworkManager_ServerChangeScene_m1322393087 (NetworkManager_t1857071176 * __this, String_t* ___newSceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ClientChangeScene(System.String,System.Boolean)
extern "C"  void NetworkManager_ClientChangeScene_m2885454870 (NetworkManager_t1857071176 * __this, String_t* ___newSceneName0, bool ___forceReload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::FinishLoadScene()
extern "C"  void NetworkManager_FinishLoadScene_m3233862173 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UpdateScene()
extern "C"  void NetworkManager_UpdateScene_m1866699757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnDestroy()
extern "C"  void NetworkManager_OnDestroy_m3655802885 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_RegisterStartPosition_m2545673867 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_UnRegisterStartPosition_m755942916 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::IsClientConnected()
extern "C"  bool NetworkManager_IsClientConnected_m3073496172 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Shutdown()
extern "C"  void NetworkManager_Shutdown_m1078771726 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerConnectInternal_m56246407 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerDisconnectInternal_m4105699651 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerReadyMessageInternal_m3590834747 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerAddPlayerMessageInternal_m2470048442 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerRemovePlayerMessageInternal_m1867216175 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerErrorInternal_m4177412585 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientConnectInternal_m41766671 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientDisconnectInternal_m2236614075 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientNotReadyMessageInternal_m3776804866 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientErrorInternal_m1831031409 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientSceneInternal_m3311649645 (NetworkManager_t1857071176 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerConnect_m3689803209 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerDisconnect_m594651021 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerReady_m2123984130 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkManager_OnServerAddPlayer_m1322413864 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, NetworkReader_t3536499450 * ___extraMessageReader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayer_m3436266352 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerInternal(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayerInternal_m310410483 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___playerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkManager::GetStartPosition()
extern "C"  Transform_t284553113 * NetworkManager_GetStartPosition_m3396544527 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkManager_OnServerRemovePlayer_m4041999234 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, PlayerController_t2299033606 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnServerError_m1600593168 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___errorCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkManager_OnServerSceneChanged_m4162506848 (NetworkManager_t1857071176 * __this, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientConnect_m1043196481 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientDisconnect_m2543237141 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnClientError_m3923191192 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___errorCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientNotReady_m1655197001 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientSceneChanged_m2689441985 (NetworkManager_t1857071176 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StartMatchMaker()
extern "C"  void NetworkManager_StartMatchMaker_m2379541035 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopMatchMaker()
extern "C"  void NetworkManager_StopMatchMaker_m2623437017 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetMatchHost(System.String,System.Int32,System.Boolean)
extern "C"  void NetworkManager_SetMatchHost_m3812803941 (NetworkManager_t1857071176 * __this, String_t* ___newHost0, int32_t ___port1, bool ___https2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartHost()
extern "C"  void NetworkManager_OnStartHost_m4036421301 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartServer()
extern "C"  void NetworkManager_OnStartServer_m2326450832 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_OnStartClient_m157304354 (NetworkManager_t1857071176 * __this, NetworkClient_t3113766402 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopServer()
extern "C"  void NetworkManager_OnStopServer_m4111614940 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopClient()
extern "C"  void NetworkManager_OnStopClient_m3640919652 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopHost()
extern "C"  void NetworkManager_OnStopHost_m2827107073 (NetworkManager_t1857071176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void NetworkManager_OnMatchCreate_m1170401102 (NetworkManager_t1857071176 * __this, CreateMatchResponse_t411996224 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse)
extern "C"  void NetworkManager_OnMatchList_m3523380882 (NetworkManager_t1857071176 * __this, ListMatchResponse_t3390828510 * ___matchList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void NetworkManager_OnMatchJoined_m2478981897 (NetworkManager_t1857071176 * __this, JoinMatchResponse_t2758706898 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
