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

// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t650485777;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t2769223534;
// System.Net.EndPoint
struct EndPoint_t1294049535;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp2071524623.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionSimula650485777.h"
#include "UnityEngine_UnityEngine_Networking_GlobalConfig2769223534.h"
#include "System_System_Net_EndPoint1294049535.h"

// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
extern "C"  void NetworkTransport__cctor_m2740266409 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddHost_m639728426 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHost_m2464600550 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology0, int32_t ___port1, String_t* ___ip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C"  void NetworkTransport_Init_m4205164368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Connect_m16029358 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Disconnect_m1220901079 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Send_m693132326 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t58506160* ___buffer3, int32_t ___size4, uint8_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveFromHost_m3433888570 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t58506160* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C"  bool NetworkTransport_RemoveHost_m4142727543 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  void NetworkTransport_ConnectAsNetworkHost_m414745677 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, uint64_t ___network3, uint64_t ___source4, uint16_t ___node5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveRelayEventFromHost_m4234015948 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, uint8_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m255385212 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, uint8_t* ___error8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C"  void NetworkTransport_GetConnectionInfo_m2410450444 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, String_t** ___address2, int32_t* ___port3, uint64_t* ___network4, uint16_t* ___dstNode5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C"  bool NetworkTransport_get_IsStarted_m2236951126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C"  int32_t NetworkTransport_ConnectWithSimulator_m317164795 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, ConnectionSimulatorConfig_t650485777 * ___conf5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C"  void NetworkTransport_Init_m2442450458 (Il2CppObject * __this /* static, unused */, GlobalConfig_t2769223534 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m2331428297 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology0, int32_t ___port1, String_t* ___ip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m1608577268 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m2165792304 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectEndPoint_m3025611817 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, EndPoint_t1294049535 * ___xboxOneEndPoint1, int32_t ___exceptionConnectionId2, uint8_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C"  bool NetworkTransport_DoesEndPointUsePlatformProtocols_m885513828 (Il2CppObject * __this /* static, unused */, EndPoint_t1294049535 * ___endPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_StartBroadcastDiscovery_m3640504762 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t58506160* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C"  void NetworkTransport_StopBroadcastDiscovery_m1711182289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionInfo_m1149228074 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t** ___address1, int32_t* ___port2, uint8_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionMessage_m2563651727 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t58506160* ___buffer1, int32_t ___bufferSize2, int32_t* ___receivedSize3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C"  void NetworkTransport_SetBroadcastCredentials_m3016945440 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___key1, int32_t ___version2, int32_t ___subversion3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
