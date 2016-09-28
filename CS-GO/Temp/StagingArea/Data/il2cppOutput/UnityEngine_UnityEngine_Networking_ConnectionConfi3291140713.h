#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t292107700;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t3291140713  : public Il2CppObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_1;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_8;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_11;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_IsAcksLong
	bool ___m_IsAcksLong_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t292107700 * ___m_Channels_19;

public:
	inline static int32_t get_offset_of_m_PacketSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_PacketSize_1)); }
	inline uint16_t get_m_PacketSize_1() const { return ___m_PacketSize_1; }
	inline uint16_t* get_address_of_m_PacketSize_1() { return &___m_PacketSize_1; }
	inline void set_m_PacketSize_1(uint16_t value)
	{
		___m_PacketSize_1 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_FragmentSize_2)); }
	inline uint16_t get_m_FragmentSize_2() const { return ___m_FragmentSize_2; }
	inline uint16_t* get_address_of_m_FragmentSize_2() { return &___m_FragmentSize_2; }
	inline void set_m_FragmentSize_2(uint16_t value)
	{
		___m_FragmentSize_2 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_ResendTimeout_3)); }
	inline uint32_t get_m_ResendTimeout_3() const { return ___m_ResendTimeout_3; }
	inline uint32_t* get_address_of_m_ResendTimeout_3() { return &___m_ResendTimeout_3; }
	inline void set_m_ResendTimeout_3(uint32_t value)
	{
		___m_ResendTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_DisconnectTimeout_4)); }
	inline uint32_t get_m_DisconnectTimeout_4() const { return ___m_DisconnectTimeout_4; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_4() { return &___m_DisconnectTimeout_4; }
	inline void set_m_DisconnectTimeout_4(uint32_t value)
	{
		___m_DisconnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_ConnectTimeout_5)); }
	inline uint32_t get_m_ConnectTimeout_5() const { return ___m_ConnectTimeout_5; }
	inline uint32_t* get_address_of_m_ConnectTimeout_5() { return &___m_ConnectTimeout_5; }
	inline void set_m_ConnectTimeout_5(uint32_t value)
	{
		___m_ConnectTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_MinUpdateTimeout_6)); }
	inline uint32_t get_m_MinUpdateTimeout_6() const { return ___m_MinUpdateTimeout_6; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_6() { return &___m_MinUpdateTimeout_6; }
	inline void set_m_MinUpdateTimeout_6(uint32_t value)
	{
		___m_MinUpdateTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_PingTimeout_7)); }
	inline uint32_t get_m_PingTimeout_7() const { return ___m_PingTimeout_7; }
	inline uint32_t* get_address_of_m_PingTimeout_7() { return &___m_PingTimeout_7; }
	inline void set_m_PingTimeout_7(uint32_t value)
	{
		___m_PingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_ReducedPingTimeout_8)); }
	inline uint32_t get_m_ReducedPingTimeout_8() const { return ___m_ReducedPingTimeout_8; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_8() { return &___m_ReducedPingTimeout_8; }
	inline void set_m_ReducedPingTimeout_8(uint32_t value)
	{
		___m_ReducedPingTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_AllCostTimeout_9)); }
	inline uint32_t get_m_AllCostTimeout_9() const { return ___m_AllCostTimeout_9; }
	inline uint32_t* get_address_of_m_AllCostTimeout_9() { return &___m_AllCostTimeout_9; }
	inline void set_m_AllCostTimeout_9(uint32_t value)
	{
		___m_AllCostTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_NetworkDropThreshold_10)); }
	inline uint8_t get_m_NetworkDropThreshold_10() const { return ___m_NetworkDropThreshold_10; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_10() { return &___m_NetworkDropThreshold_10; }
	inline void set_m_NetworkDropThreshold_10(uint8_t value)
	{
		___m_NetworkDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_OverflowDropThreshold_11)); }
	inline uint8_t get_m_OverflowDropThreshold_11() const { return ___m_OverflowDropThreshold_11; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_11() { return &___m_OverflowDropThreshold_11; }
	inline void set_m_OverflowDropThreshold_11(uint8_t value)
	{
		___m_OverflowDropThreshold_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_MaxConnectionAttempt_12)); }
	inline uint8_t get_m_MaxConnectionAttempt_12() const { return ___m_MaxConnectionAttempt_12; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_12() { return &___m_MaxConnectionAttempt_12; }
	inline void set_m_MaxConnectionAttempt_12(uint8_t value)
	{
		___m_MaxConnectionAttempt_12 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_AckDelay_13)); }
	inline uint32_t get_m_AckDelay_13() const { return ___m_AckDelay_13; }
	inline uint32_t* get_address_of_m_AckDelay_13() { return &___m_AckDelay_13; }
	inline void set_m_AckDelay_13(uint32_t value)
	{
		___m_AckDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_MaxCombinedReliableMessageSize_14)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_14() const { return ___m_MaxCombinedReliableMessageSize_14; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_14() { return &___m_MaxCombinedReliableMessageSize_14; }
	inline void set_m_MaxCombinedReliableMessageSize_14(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_MaxCombinedReliableMessageCount_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_15() const { return ___m_MaxCombinedReliableMessageCount_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_15() { return &___m_MaxCombinedReliableMessageCount_15; }
	inline void set_m_MaxCombinedReliableMessageCount_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_MaxSentMessageQueueSize_16)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_16() const { return ___m_MaxSentMessageQueueSize_16; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_16() { return &___m_MaxSentMessageQueueSize_16; }
	inline void set_m_MaxSentMessageQueueSize_16(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_16 = value;
	}

	inline static int32_t get_offset_of_m_IsAcksLong_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_IsAcksLong_17)); }
	inline bool get_m_IsAcksLong_17() const { return ___m_IsAcksLong_17; }
	inline bool* get_address_of_m_IsAcksLong_17() { return &___m_IsAcksLong_17; }
	inline void set_m_IsAcksLong_17(bool value)
	{
		___m_IsAcksLong_17 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_UsePlatformSpecificProtocols_18)); }
	inline bool get_m_UsePlatformSpecificProtocols_18() const { return ___m_UsePlatformSpecificProtocols_18; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_18() { return &___m_UsePlatformSpecificProtocols_18; }
	inline void set_m_UsePlatformSpecificProtocols_18(bool value)
	{
		___m_UsePlatformSpecificProtocols_18 = value;
	}

	inline static int32_t get_offset_of_m_Channels_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t3291140713, ___m_Channels_19)); }
	inline List_1_t292107700 * get_m_Channels_19() const { return ___m_Channels_19; }
	inline List_1_t292107700 ** get_address_of_m_Channels_19() { return &___m_Channels_19; }
	inline void set_m_Channels_19(List_1_t292107700 * value)
	{
		___m_Channels_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Channels_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
