#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t3910725371;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// System.String
struct String_t;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t3099185009;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t3321980459;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2067247591.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkClient
struct  NetworkClient_t3113766402  : public Il2CppObject
{
public:
	// System.Type UnityEngine.Networking.NetworkClient::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_1;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::m_HostTopology
	HostTopology_t1316030176 * ___m_HostTopology_4;
	// System.Boolean UnityEngine.Networking.NetworkClient::m_UseSimulator
	bool ___m_UseSimulator_5;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_6;
	// System.Single UnityEngine.Networking.NetworkClient::m_PacketLoss
	float ___m_PacketLoss_7;
	// System.String UnityEngine.Networking.NetworkClient::m_ServerIp
	String_t* ___m_ServerIp_8;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ServerPort
	int32_t ___m_ServerPort_9;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientId
	int32_t ___m_ClientId_10;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientConnectionId
	int32_t ___m_ClientConnectionId_11;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_StatResetTime
	int32_t ___m_StatResetTime_12;
	// System.Net.EndPoint UnityEngine.Networking.NetworkClient::m_RemoteEndPoint
	EndPoint_t1294049535 * ___m_RemoteEndPoint_13;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkClient::m_MessageHandlers
	NetworkMessageHandlers_t3321980459 * ___m_MessageHandlers_15;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::m_Connection
	NetworkConnection_t2182631957 * ___m_Connection_16;
	// System.Byte[] UnityEngine.Networking.NetworkClient::m_MsgBuffer
	ByteU5BU5D_t58506160* ___m_MsgBuffer_17;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkClient::m_MsgReader
	NetworkReader_t3536499450 * ___m_MsgReader_18;
	// UnityEngine.Networking.NetworkClient/ConnectState UnityEngine.Networking.NetworkClient::m_AsyncConnect
	int32_t ___m_AsyncConnect_19;
	// System.String UnityEngine.Networking.NetworkClient::m_RequestedServerHost
	String_t* ___m_RequestedServerHost_20;

public:
	inline static int32_t get_offset_of_m_NetworkConnectionClass_1() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_NetworkConnectionClass_1)); }
	inline Type_t * get_m_NetworkConnectionClass_1() const { return ___m_NetworkConnectionClass_1; }
	inline Type_t ** get_address_of_m_NetworkConnectionClass_1() { return &___m_NetworkConnectionClass_1; }
	inline void set_m_NetworkConnectionClass_1(Type_t * value)
	{
		___m_NetworkConnectionClass_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetworkConnectionClass_1, value);
	}

	inline static int32_t get_offset_of_m_HostTopology_4() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_HostTopology_4)); }
	inline HostTopology_t1316030176 * get_m_HostTopology_4() const { return ___m_HostTopology_4; }
	inline HostTopology_t1316030176 ** get_address_of_m_HostTopology_4() { return &___m_HostTopology_4; }
	inline void set_m_HostTopology_4(HostTopology_t1316030176 * value)
	{
		___m_HostTopology_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_HostTopology_4, value);
	}

	inline static int32_t get_offset_of_m_UseSimulator_5() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_UseSimulator_5)); }
	inline bool get_m_UseSimulator_5() const { return ___m_UseSimulator_5; }
	inline bool* get_address_of_m_UseSimulator_5() { return &___m_UseSimulator_5; }
	inline void set_m_UseSimulator_5(bool value)
	{
		___m_UseSimulator_5 = value;
	}

	inline static int32_t get_offset_of_m_SimulatedLatency_6() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_SimulatedLatency_6)); }
	inline int32_t get_m_SimulatedLatency_6() const { return ___m_SimulatedLatency_6; }
	inline int32_t* get_address_of_m_SimulatedLatency_6() { return &___m_SimulatedLatency_6; }
	inline void set_m_SimulatedLatency_6(int32_t value)
	{
		___m_SimulatedLatency_6 = value;
	}

	inline static int32_t get_offset_of_m_PacketLoss_7() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_PacketLoss_7)); }
	inline float get_m_PacketLoss_7() const { return ___m_PacketLoss_7; }
	inline float* get_address_of_m_PacketLoss_7() { return &___m_PacketLoss_7; }
	inline void set_m_PacketLoss_7(float value)
	{
		___m_PacketLoss_7 = value;
	}

	inline static int32_t get_offset_of_m_ServerIp_8() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_ServerIp_8)); }
	inline String_t* get_m_ServerIp_8() const { return ___m_ServerIp_8; }
	inline String_t** get_address_of_m_ServerIp_8() { return &___m_ServerIp_8; }
	inline void set_m_ServerIp_8(String_t* value)
	{
		___m_ServerIp_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ServerIp_8, value);
	}

	inline static int32_t get_offset_of_m_ServerPort_9() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_ServerPort_9)); }
	inline int32_t get_m_ServerPort_9() const { return ___m_ServerPort_9; }
	inline int32_t* get_address_of_m_ServerPort_9() { return &___m_ServerPort_9; }
	inline void set_m_ServerPort_9(int32_t value)
	{
		___m_ServerPort_9 = value;
	}

	inline static int32_t get_offset_of_m_ClientId_10() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_ClientId_10)); }
	inline int32_t get_m_ClientId_10() const { return ___m_ClientId_10; }
	inline int32_t* get_address_of_m_ClientId_10() { return &___m_ClientId_10; }
	inline void set_m_ClientId_10(int32_t value)
	{
		___m_ClientId_10 = value;
	}

	inline static int32_t get_offset_of_m_ClientConnectionId_11() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_ClientConnectionId_11)); }
	inline int32_t get_m_ClientConnectionId_11() const { return ___m_ClientConnectionId_11; }
	inline int32_t* get_address_of_m_ClientConnectionId_11() { return &___m_ClientConnectionId_11; }
	inline void set_m_ClientConnectionId_11(int32_t value)
	{
		___m_ClientConnectionId_11 = value;
	}

	inline static int32_t get_offset_of_m_StatResetTime_12() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_StatResetTime_12)); }
	inline int32_t get_m_StatResetTime_12() const { return ___m_StatResetTime_12; }
	inline int32_t* get_address_of_m_StatResetTime_12() { return &___m_StatResetTime_12; }
	inline void set_m_StatResetTime_12(int32_t value)
	{
		___m_StatResetTime_12 = value;
	}

	inline static int32_t get_offset_of_m_RemoteEndPoint_13() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_RemoteEndPoint_13)); }
	inline EndPoint_t1294049535 * get_m_RemoteEndPoint_13() const { return ___m_RemoteEndPoint_13; }
	inline EndPoint_t1294049535 ** get_address_of_m_RemoteEndPoint_13() { return &___m_RemoteEndPoint_13; }
	inline void set_m_RemoteEndPoint_13(EndPoint_t1294049535 * value)
	{
		___m_RemoteEndPoint_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_RemoteEndPoint_13, value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_15() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_MessageHandlers_15)); }
	inline NetworkMessageHandlers_t3321980459 * get_m_MessageHandlers_15() const { return ___m_MessageHandlers_15; }
	inline NetworkMessageHandlers_t3321980459 ** get_address_of_m_MessageHandlers_15() { return &___m_MessageHandlers_15; }
	inline void set_m_MessageHandlers_15(NetworkMessageHandlers_t3321980459 * value)
	{
		___m_MessageHandlers_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageHandlers_15, value);
	}

	inline static int32_t get_offset_of_m_Connection_16() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_Connection_16)); }
	inline NetworkConnection_t2182631957 * get_m_Connection_16() const { return ___m_Connection_16; }
	inline NetworkConnection_t2182631957 ** get_address_of_m_Connection_16() { return &___m_Connection_16; }
	inline void set_m_Connection_16(NetworkConnection_t2182631957 * value)
	{
		___m_Connection_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_Connection_16, value);
	}

	inline static int32_t get_offset_of_m_MsgBuffer_17() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_MsgBuffer_17)); }
	inline ByteU5BU5D_t58506160* get_m_MsgBuffer_17() const { return ___m_MsgBuffer_17; }
	inline ByteU5BU5D_t58506160** get_address_of_m_MsgBuffer_17() { return &___m_MsgBuffer_17; }
	inline void set_m_MsgBuffer_17(ByteU5BU5D_t58506160* value)
	{
		___m_MsgBuffer_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_MsgBuffer_17, value);
	}

	inline static int32_t get_offset_of_m_MsgReader_18() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_MsgReader_18)); }
	inline NetworkReader_t3536499450 * get_m_MsgReader_18() const { return ___m_MsgReader_18; }
	inline NetworkReader_t3536499450 ** get_address_of_m_MsgReader_18() { return &___m_MsgReader_18; }
	inline void set_m_MsgReader_18(NetworkReader_t3536499450 * value)
	{
		___m_MsgReader_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_MsgReader_18, value);
	}

	inline static int32_t get_offset_of_m_AsyncConnect_19() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_AsyncConnect_19)); }
	inline int32_t get_m_AsyncConnect_19() const { return ___m_AsyncConnect_19; }
	inline int32_t* get_address_of_m_AsyncConnect_19() { return &___m_AsyncConnect_19; }
	inline void set_m_AsyncConnect_19(int32_t value)
	{
		___m_AsyncConnect_19 = value;
	}

	inline static int32_t get_offset_of_m_RequestedServerHost_20() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402, ___m_RequestedServerHost_20)); }
	inline String_t* get_m_RequestedServerHost_20() const { return ___m_RequestedServerHost_20; }
	inline String_t** get_address_of_m_RequestedServerHost_20() { return &___m_RequestedServerHost_20; }
	inline void set_m_RequestedServerHost_20(String_t* value)
	{
		___m_RequestedServerHost_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_RequestedServerHost_20, value);
	}
};

struct NetworkClient_t3113766402_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::s_Clients
	List_1_t3910725371 * ___s_Clients_2;
	// System.Boolean UnityEngine.Networking.NetworkClient::s_IsActive
	bool ___s_IsActive_3;
	// UnityEngine.Networking.NetworkSystem.CRCMessage UnityEngine.Networking.NetworkClient::s_CRCMessage
	CRCMessage_t3099185009 * ___s_CRCMessage_14;

public:
	inline static int32_t get_offset_of_s_Clients_2() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402_StaticFields, ___s_Clients_2)); }
	inline List_1_t3910725371 * get_s_Clients_2() const { return ___s_Clients_2; }
	inline List_1_t3910725371 ** get_address_of_s_Clients_2() { return &___s_Clients_2; }
	inline void set_s_Clients_2(List_1_t3910725371 * value)
	{
		___s_Clients_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Clients_2, value);
	}

	inline static int32_t get_offset_of_s_IsActive_3() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402_StaticFields, ___s_IsActive_3)); }
	inline bool get_s_IsActive_3() const { return ___s_IsActive_3; }
	inline bool* get_address_of_s_IsActive_3() { return &___s_IsActive_3; }
	inline void set_s_IsActive_3(bool value)
	{
		___s_IsActive_3 = value;
	}

	inline static int32_t get_offset_of_s_CRCMessage_14() { return static_cast<int32_t>(offsetof(NetworkClient_t3113766402_StaticFields, ___s_CRCMessage_14)); }
	inline CRCMessage_t3099185009 * get_s_CRCMessage_14() const { return ___s_CRCMessage_14; }
	inline CRCMessage_t3099185009 ** get_address_of_s_CRCMessage_14() { return &___s_CRCMessage_14; }
	inline void set_s_CRCMessage_14(CRCMessage_t3099185009 * value)
	{
		___s_CRCMessage_14 = value;
		Il2CppCodeGenWriteBarrier(&___s_CRCMessage_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
