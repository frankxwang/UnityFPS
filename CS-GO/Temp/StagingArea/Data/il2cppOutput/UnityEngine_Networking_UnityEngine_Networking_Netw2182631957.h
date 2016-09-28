#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.ChannelBuffer[]
struct ChannelBufferU5BU5D_t1884298949;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t3095992575;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t4019212308;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t3321980459;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t2264029286;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t210528029;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkConnection
struct  NetworkConnection_t2182631957  : public Il2CppObject
{
public:
	// UnityEngine.Networking.ChannelBuffer[] UnityEngine.Networking.NetworkConnection::m_Channels
	ChannelBufferU5BU5D_t1884298949* ___m_Channels_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::m_PlayerControllers
	List_1_t3095992575 * ___m_PlayerControllers_2;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_NetMsg
	NetworkMessage_t1976735906 * ___m_NetMsg_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::m_VisList
	HashSet_1_t4019212308 * ___m_VisList_4;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkConnection::m_Writer
	NetworkWriter_t3691904682 * ___m_Writer_5;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkConnection::m_MessageHandlersDict
	Dictionary_2_t2200959304 * ___m_MessageHandlersDict_6;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkConnection::m_MessageHandlers
	NetworkMessageHandlers_t3321980459 * ___m_MessageHandlers_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::m_ClientOwnedObjects
	HashSet_1_t2264029286 * ___m_ClientOwnedObjects_8;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_MessageInfo
	NetworkMessage_t1976735906 * ___m_MessageInfo_9;
	// System.Int32 UnityEngine.Networking.NetworkConnection::hostId
	int32_t ___hostId_10;
	// System.Int32 UnityEngine.Networking.NetworkConnection::connectionId
	int32_t ___connectionId_11;
	// System.Boolean UnityEngine.Networking.NetworkConnection::isReady
	bool ___isReady_12;
	// System.String UnityEngine.Networking.NetworkConnection::address
	String_t* ___address_13;
	// System.Single UnityEngine.Networking.NetworkConnection::lastMessageTime
	float ___lastMessageTime_14;
	// System.Boolean UnityEngine.Networking.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_15;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::m_PacketStats
	Dictionary_2_t210528029 * ___m_PacketStats_16;
	// System.Boolean UnityEngine.Networking.NetworkConnection::m_Disposed
	bool ___m_Disposed_17;

public:
	inline static int32_t get_offset_of_m_Channels_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_Channels_1)); }
	inline ChannelBufferU5BU5D_t1884298949* get_m_Channels_1() const { return ___m_Channels_1; }
	inline ChannelBufferU5BU5D_t1884298949** get_address_of_m_Channels_1() { return &___m_Channels_1; }
	inline void set_m_Channels_1(ChannelBufferU5BU5D_t1884298949* value)
	{
		___m_Channels_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Channels_1, value);
	}

	inline static int32_t get_offset_of_m_PlayerControllers_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_PlayerControllers_2)); }
	inline List_1_t3095992575 * get_m_PlayerControllers_2() const { return ___m_PlayerControllers_2; }
	inline List_1_t3095992575 ** get_address_of_m_PlayerControllers_2() { return &___m_PlayerControllers_2; }
	inline void set_m_PlayerControllers_2(List_1_t3095992575 * value)
	{
		___m_PlayerControllers_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerControllers_2, value);
	}

	inline static int32_t get_offset_of_m_NetMsg_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_NetMsg_3)); }
	inline NetworkMessage_t1976735906 * get_m_NetMsg_3() const { return ___m_NetMsg_3; }
	inline NetworkMessage_t1976735906 ** get_address_of_m_NetMsg_3() { return &___m_NetMsg_3; }
	inline void set_m_NetMsg_3(NetworkMessage_t1976735906 * value)
	{
		___m_NetMsg_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetMsg_3, value);
	}

	inline static int32_t get_offset_of_m_VisList_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_VisList_4)); }
	inline HashSet_1_t4019212308 * get_m_VisList_4() const { return ___m_VisList_4; }
	inline HashSet_1_t4019212308 ** get_address_of_m_VisList_4() { return &___m_VisList_4; }
	inline void set_m_VisList_4(HashSet_1_t4019212308 * value)
	{
		___m_VisList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_VisList_4, value);
	}

	inline static int32_t get_offset_of_m_Writer_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_Writer_5)); }
	inline NetworkWriter_t3691904682 * get_m_Writer_5() const { return ___m_Writer_5; }
	inline NetworkWriter_t3691904682 ** get_address_of_m_Writer_5() { return &___m_Writer_5; }
	inline void set_m_Writer_5(NetworkWriter_t3691904682 * value)
	{
		___m_Writer_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Writer_5, value);
	}

	inline static int32_t get_offset_of_m_MessageHandlersDict_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_MessageHandlersDict_6)); }
	inline Dictionary_2_t2200959304 * get_m_MessageHandlersDict_6() const { return ___m_MessageHandlersDict_6; }
	inline Dictionary_2_t2200959304 ** get_address_of_m_MessageHandlersDict_6() { return &___m_MessageHandlersDict_6; }
	inline void set_m_MessageHandlersDict_6(Dictionary_2_t2200959304 * value)
	{
		___m_MessageHandlersDict_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageHandlersDict_6, value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_MessageHandlers_7)); }
	inline NetworkMessageHandlers_t3321980459 * get_m_MessageHandlers_7() const { return ___m_MessageHandlers_7; }
	inline NetworkMessageHandlers_t3321980459 ** get_address_of_m_MessageHandlers_7() { return &___m_MessageHandlers_7; }
	inline void set_m_MessageHandlers_7(NetworkMessageHandlers_t3321980459 * value)
	{
		___m_MessageHandlers_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageHandlers_7, value);
	}

	inline static int32_t get_offset_of_m_ClientOwnedObjects_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_ClientOwnedObjects_8)); }
	inline HashSet_1_t2264029286 * get_m_ClientOwnedObjects_8() const { return ___m_ClientOwnedObjects_8; }
	inline HashSet_1_t2264029286 ** get_address_of_m_ClientOwnedObjects_8() { return &___m_ClientOwnedObjects_8; }
	inline void set_m_ClientOwnedObjects_8(HashSet_1_t2264029286 * value)
	{
		___m_ClientOwnedObjects_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClientOwnedObjects_8, value);
	}

	inline static int32_t get_offset_of_m_MessageInfo_9() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_MessageInfo_9)); }
	inline NetworkMessage_t1976735906 * get_m_MessageInfo_9() const { return ___m_MessageInfo_9; }
	inline NetworkMessage_t1976735906 ** get_address_of_m_MessageInfo_9() { return &___m_MessageInfo_9; }
	inline void set_m_MessageInfo_9(NetworkMessage_t1976735906 * value)
	{
		___m_MessageInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_MessageInfo_9, value);
	}

	inline static int32_t get_offset_of_hostId_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___hostId_10)); }
	inline int32_t get_hostId_10() const { return ___hostId_10; }
	inline int32_t* get_address_of_hostId_10() { return &___hostId_10; }
	inline void set_hostId_10(int32_t value)
	{
		___hostId_10 = value;
	}

	inline static int32_t get_offset_of_connectionId_11() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___connectionId_11)); }
	inline int32_t get_connectionId_11() const { return ___connectionId_11; }
	inline int32_t* get_address_of_connectionId_11() { return &___connectionId_11; }
	inline void set_connectionId_11(int32_t value)
	{
		___connectionId_11 = value;
	}

	inline static int32_t get_offset_of_isReady_12() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___isReady_12)); }
	inline bool get_isReady_12() const { return ___isReady_12; }
	inline bool* get_address_of_isReady_12() { return &___isReady_12; }
	inline void set_isReady_12(bool value)
	{
		___isReady_12 = value;
	}

	inline static int32_t get_offset_of_address_13() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___address_13)); }
	inline String_t* get_address_13() const { return ___address_13; }
	inline String_t** get_address_of_address_13() { return &___address_13; }
	inline void set_address_13(String_t* value)
	{
		___address_13 = value;
		Il2CppCodeGenWriteBarrier(&___address_13, value);
	}

	inline static int32_t get_offset_of_lastMessageTime_14() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___lastMessageTime_14)); }
	inline float get_lastMessageTime_14() const { return ___lastMessageTime_14; }
	inline float* get_address_of_lastMessageTime_14() { return &___lastMessageTime_14; }
	inline void set_lastMessageTime_14(float value)
	{
		___lastMessageTime_14 = value;
	}

	inline static int32_t get_offset_of_logNetworkMessages_15() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___logNetworkMessages_15)); }
	inline bool get_logNetworkMessages_15() const { return ___logNetworkMessages_15; }
	inline bool* get_address_of_logNetworkMessages_15() { return &___logNetworkMessages_15; }
	inline void set_logNetworkMessages_15(bool value)
	{
		___logNetworkMessages_15 = value;
	}

	inline static int32_t get_offset_of_m_PacketStats_16() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_PacketStats_16)); }
	inline Dictionary_2_t210528029 * get_m_PacketStats_16() const { return ___m_PacketStats_16; }
	inline Dictionary_2_t210528029 ** get_address_of_m_PacketStats_16() { return &___m_PacketStats_16; }
	inline void set_m_PacketStats_16(Dictionary_2_t210528029 * value)
	{
		___m_PacketStats_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_PacketStats_16, value);
	}

	inline static int32_t get_offset_of_m_Disposed_17() { return static_cast<int32_t>(offsetof(NetworkConnection_t2182631957, ___m_Disposed_17)); }
	inline bool get_m_Disposed_17() const { return ___m_Disposed_17; }
	inline bool* get_address_of_m_Disposed_17() { return &___m_Disposed_17; }
	inline void set_m_Disposed_17(bool value)
	{
		___m_Disposed_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
