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

// UnityEngine.Networking.NetworkServerSimple
struct NetworkServerSimple_t874704524;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t1050810009;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

// System.Void UnityEngine.Networking.NetworkServerSimple::.ctor()
extern "C"  void NetworkServerSimple__ctor_m1236861304 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_listenPort()
extern "C"  int32_t NetworkServerSimple_get_listenPort_m1599825413 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_serverHostId()
extern "C"  int32_t NetworkServerSimple_get_serverHostId_m2667786915 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServerSimple::get_hostTopology()
extern "C"  HostTopology_t1316030176 * NetworkServerSimple_get_hostTopology_m3228380101 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServerSimple_set_useWebSockets_m650604387 (NetworkServerSimple_t874704524 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::get_connections()
extern "C"  ReadOnlyCollection_1_t1050810009 * NetworkServerSimple_get_connections_m2547990485 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServerSimple::get_handlers()
extern "C"  Dictionary_2_t2200959304 * NetworkServerSimple_get_handlers_m3748633122 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkServerSimple::get_messageBuffer()
extern "C"  ByteU5BU5D_t58506160* NetworkServerSimple_get_messageBuffer_m1965383242 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Initialize()
extern "C"  void NetworkServerSimple_Initialize_m2549186588 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServerSimple_Configure_m2377833942 (NetworkServerSimple_t874704524 * __this, ConnectionConfig_t3291140713 * ___config0, int32_t ___maxConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServerSimple_Configure_m1966592778 (NetworkServerSimple_t874704524 * __this, HostTopology_t1316030176 * ___topology0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.String,System.Int32)
extern "C"  bool NetworkServerSimple_Listen_m3356280374 (NetworkServerSimple_t874704524 * __this, String_t* ___ipAddress0, int32_t ___serverListenPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServerSimple_ListenRelay_m788664821 (NetworkServerSimple_t874704524 * __this, String_t* ___relayIp0, int32_t ___relayPort1, uint64_t ___netGuid2, uint64_t ___sourceId3, uint16_t ___nodeId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Stop()
extern "C"  void NetworkServerSimple_Stop_m3885673550 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandlerSafe_m1734711584 (NetworkServerSimple_t874704524 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandler_m1965862131 (NetworkServerSimple_t874704524 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::UpdateConnections()
extern "C"  void NetworkServerSimple_UpdateConnections_m537678050 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Update()
extern "C"  void NetworkServerSimple_Update_m1414856853 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkServerSimple::FindConnection(System.Int32)
extern "C"  NetworkConnection_t2182631957 * NetworkServerSimple_FindConnection_m681102338 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::SetConnectionAtIndex(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServerSimple_SetConnectionAtIndex_m3307505040 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::RemoveConnectionAtIndex(System.Int32)
extern "C"  bool NetworkServerSimple_RemoveConnectionAtIndex_m2324604118 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleConnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleConnect_m2084673966 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleDisconnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleDisconnect_m3784660774 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleData(System.Int32,System.Int32,System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleData_m3528086420 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, int32_t ___channelId1, int32_t ___receivedSize2, uint8_t ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::DisconnectAllConnections()
extern "C"  void NetworkServerSimple_DisconnectAllConnections_m2391027196 (NetworkServerSimple_t874704524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnectError(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_OnConnectError_m2203731583 (NetworkServerSimple_t874704524 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDataError_m3761679089 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnectError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDisconnectError_m1780978239 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnConnected_m3694947991 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnDisconnected_m3910385309 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServerSimple_OnData_m1100103084 (NetworkServerSimple_t874704524 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
