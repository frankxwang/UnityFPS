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

// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t3910725371;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// System.String
struct String_t;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo1974561481.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"

// System.Void UnityEngine.Networking.NetworkClient::.ctor()
extern "C"  void NetworkClient__ctor_m3056515266 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.cctor()
extern "C"  void NetworkClient__cctor_m4075563819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::get_allClients()
extern "C"  List_1_t3910725371 * NetworkClient_get_allClients_m3758041691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C"  bool NetworkClient_get_active_m1501449599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetHandlers(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient_SetHandlers_m450307106 (NetworkClient_t3113766402 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::get_connection()
extern "C"  NetworkConnection_t2182631957 * NetworkClient_get_connection_m743904375 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_hostId()
extern "C"  int32_t NetworkClient_get_hostId_m2013719606 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_numChannels()
extern "C"  int32_t NetworkClient_get_numChannels_m3833465125 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_isConnected()
extern "C"  bool NetworkClient_get_isConnected_m1433706056 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkClient_Configure_m340987040 (NetworkClient_t3113766402 * __this, ConnectionConfig_t3291140713 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkClient_Configure_m2046054144 (NetworkClient_t3113766402 * __this, HostTopology_t1316030176 * ___topology0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_Connect_m1782442563 (NetworkClient_t3113766402 * __this, MatchInfo_t1974561481 * ___matchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::ReconnectToNewHost(System.String,System.Int32)
extern "C"  bool NetworkClient_ReconnectToNewHost_m321563963 (NetworkClient_t3113766402 * __this, String_t* ___serverIp0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithSimulator(System.String,System.Int32,System.Int32,System.Single)
extern "C"  void NetworkClient_ConnectWithSimulator_m672318641 (NetworkClient_t3113766402 * __this, String_t* ___serverIp0, int32_t ___serverPort1, int32_t ___latency2, float ___packetLoss3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::IsValidIpV6(System.String)
extern "C"  bool NetworkClient_IsValidIpV6_m348105335 (Il2CppObject * __this /* static, unused */, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.String,System.Int32)
extern "C"  void NetworkClient_Connect_m358203679 (NetworkClient_t3113766402 * __this, String_t* ___serverIp0, int32_t ___serverPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.Net.EndPoint)
extern "C"  void NetworkClient_Connect_m373424803 (NetworkClient_t3113766402 * __this, EndPoint_t1294049535 * ___secureTunnelEndPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect()
extern "C"  void NetworkClient_PrepareForConnect_m3398279592 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect(System.Boolean)
extern "C"  void NetworkClient_PrepareForConnect_m3355726111 (NetworkClient_t3113766402 * __this, bool ___usePlatformSpecificProtocols0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetHostAddressesCallback(System.IAsyncResult)
extern "C"  void NetworkClient_GetHostAddressesCallback_m3122730232 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ContinueConnect()
extern "C"  void NetworkClient_ContinueConnect_m2872113315 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithRelay(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_ConnectWithRelay_m2130065692 (NetworkClient_t3113766402 * __this, MatchInfo_t1974561481 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Disconnect()
extern "C"  void NetworkClient_Disconnect_m926892318 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_Send_m2259061582 (NetworkClient_t3113766402 * __this, int16_t ___msgType0, MessageBase_t226723297 * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Shutdown()
extern "C"  void NetworkClient_Shutdown_m1468798104 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Update()
extern "C"  void NetworkClient_Update_m1989554827 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateConnectError(System.Int32)
extern "C"  void NetworkClient_GenerateConnectError_m252875942 (NetworkClient_t3113766402 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDataError(System.Int32)
extern "C"  void NetworkClient_GenerateDataError_m494621562 (NetworkClient_t3113766402 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDisconnectError(System.Int32)
extern "C"  void NetworkClient_GenerateDisconnectError_m4192758216 (NetworkClient_t3113766402 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateError(System.Int32)
extern "C"  void NetworkClient_GenerateError_m1276535940 (NetworkClient_t3113766402 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterSystemHandlers(System.Boolean)
extern "C"  void NetworkClient_RegisterSystemHandlers_m663487796 (NetworkClient_t3113766402 * __this, bool ___localClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::OnCRC(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkClient_OnCRC_m3425837121 (NetworkClient_t3113766402 * __this, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandler_m2253020989 (NetworkClient_t3113766402 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandlerSafe_m1919751786 (NetworkClient_t3113766402 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::AddClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkClient_AddClient_m4010452534 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::RemoveClient(UnityEngine.Networking.NetworkClient)
extern "C"  bool NetworkClient_RemoveClient_m3970244809 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UpdateClients()
extern "C"  void NetworkClient_UpdateClients_m2934156319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetActive(System.Boolean)
extern "C"  void NetworkClient_SetActive_m2219534815 (Il2CppObject * __this /* static, unused */, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
