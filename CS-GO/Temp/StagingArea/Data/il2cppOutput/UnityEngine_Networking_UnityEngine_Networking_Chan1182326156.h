#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.Queue`1<UnityEngine.Networking.ChannelPacket>
struct Queue_1_t3272666824;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelPacket>
struct List_1_t2361538253;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1564579284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ChannelBuffer
struct  ChannelBuffer_t1182326156  : public Il2CppObject
{
public:
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ChannelBuffer::m_Connection
	NetworkConnection_t2182631957 * ___m_Connection_3;
	// UnityEngine.Networking.ChannelPacket UnityEngine.Networking.ChannelBuffer::m_CurrentPacket
	ChannelPacket_t1564579284  ___m_CurrentPacket_4;
	// System.Single UnityEngine.Networking.ChannelBuffer::m_LastFlushTime
	float ___m_LastFlushTime_5;
	// System.Byte UnityEngine.Networking.ChannelBuffer::m_ChannelId
	uint8_t ___m_ChannelId_6;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::m_MaxPacketSize
	int32_t ___m_MaxPacketSize_7;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_IsReliable
	bool ___m_IsReliable_8;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_IsBroken
	bool ___m_IsBroken_9;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::m_MaxPendingPacketCount
	int32_t ___m_MaxPendingPacketCount_10;
	// System.Collections.Generic.Queue`1<UnityEngine.Networking.ChannelPacket> UnityEngine.Networking.ChannelBuffer::m_PendingPackets
	Queue_1_t3272666824 * ___m_PendingPackets_11;
	// System.Single UnityEngine.Networking.ChannelBuffer::maxDelay
	float ___maxDelay_14;
	// System.Single UnityEngine.Networking.ChannelBuffer::m_LastBufferedMessageCountTimer
	float ___m_LastBufferedMessageCountTimer_15;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_Disposed
	bool ___m_Disposed_17;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numMsgsOut>k__BackingField
	int32_t ___U3CnumMsgsOutU3Ek__BackingField_18;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBufferedMsgsOut>k__BackingField
	int32_t ___U3CnumBufferedMsgsOutU3Ek__BackingField_19;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBytesOut>k__BackingField
	int32_t ___U3CnumBytesOutU3Ek__BackingField_20;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numMsgsIn>k__BackingField
	int32_t ___U3CnumMsgsInU3Ek__BackingField_21;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBytesIn>k__BackingField
	int32_t ___U3CnumBytesInU3Ek__BackingField_22;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBufferedPerSecond>k__BackingField
	int32_t ___U3CnumBufferedPerSecondU3Ek__BackingField_23;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<lastBufferedPerSecond>k__BackingField
	int32_t ___U3ClastBufferedPerSecondU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Connection_3() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_Connection_3)); }
	inline NetworkConnection_t2182631957 * get_m_Connection_3() const { return ___m_Connection_3; }
	inline NetworkConnection_t2182631957 ** get_address_of_m_Connection_3() { return &___m_Connection_3; }
	inline void set_m_Connection_3(NetworkConnection_t2182631957 * value)
	{
		___m_Connection_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Connection_3, value);
	}

	inline static int32_t get_offset_of_m_CurrentPacket_4() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_CurrentPacket_4)); }
	inline ChannelPacket_t1564579284  get_m_CurrentPacket_4() const { return ___m_CurrentPacket_4; }
	inline ChannelPacket_t1564579284 * get_address_of_m_CurrentPacket_4() { return &___m_CurrentPacket_4; }
	inline void set_m_CurrentPacket_4(ChannelPacket_t1564579284  value)
	{
		___m_CurrentPacket_4 = value;
	}

	inline static int32_t get_offset_of_m_LastFlushTime_5() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_LastFlushTime_5)); }
	inline float get_m_LastFlushTime_5() const { return ___m_LastFlushTime_5; }
	inline float* get_address_of_m_LastFlushTime_5() { return &___m_LastFlushTime_5; }
	inline void set_m_LastFlushTime_5(float value)
	{
		___m_LastFlushTime_5 = value;
	}

	inline static int32_t get_offset_of_m_ChannelId_6() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_ChannelId_6)); }
	inline uint8_t get_m_ChannelId_6() const { return ___m_ChannelId_6; }
	inline uint8_t* get_address_of_m_ChannelId_6() { return &___m_ChannelId_6; }
	inline void set_m_ChannelId_6(uint8_t value)
	{
		___m_ChannelId_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_7() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_MaxPacketSize_7)); }
	inline int32_t get_m_MaxPacketSize_7() const { return ___m_MaxPacketSize_7; }
	inline int32_t* get_address_of_m_MaxPacketSize_7() { return &___m_MaxPacketSize_7; }
	inline void set_m_MaxPacketSize_7(int32_t value)
	{
		___m_MaxPacketSize_7 = value;
	}

	inline static int32_t get_offset_of_m_IsReliable_8() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_IsReliable_8)); }
	inline bool get_m_IsReliable_8() const { return ___m_IsReliable_8; }
	inline bool* get_address_of_m_IsReliable_8() { return &___m_IsReliable_8; }
	inline void set_m_IsReliable_8(bool value)
	{
		___m_IsReliable_8 = value;
	}

	inline static int32_t get_offset_of_m_IsBroken_9() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_IsBroken_9)); }
	inline bool get_m_IsBroken_9() const { return ___m_IsBroken_9; }
	inline bool* get_address_of_m_IsBroken_9() { return &___m_IsBroken_9; }
	inline void set_m_IsBroken_9(bool value)
	{
		___m_IsBroken_9 = value;
	}

	inline static int32_t get_offset_of_m_MaxPendingPacketCount_10() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_MaxPendingPacketCount_10)); }
	inline int32_t get_m_MaxPendingPacketCount_10() const { return ___m_MaxPendingPacketCount_10; }
	inline int32_t* get_address_of_m_MaxPendingPacketCount_10() { return &___m_MaxPendingPacketCount_10; }
	inline void set_m_MaxPendingPacketCount_10(int32_t value)
	{
		___m_MaxPendingPacketCount_10 = value;
	}

	inline static int32_t get_offset_of_m_PendingPackets_11() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_PendingPackets_11)); }
	inline Queue_1_t3272666824 * get_m_PendingPackets_11() const { return ___m_PendingPackets_11; }
	inline Queue_1_t3272666824 ** get_address_of_m_PendingPackets_11() { return &___m_PendingPackets_11; }
	inline void set_m_PendingPackets_11(Queue_1_t3272666824 * value)
	{
		___m_PendingPackets_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_PendingPackets_11, value);
	}

	inline static int32_t get_offset_of_maxDelay_14() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___maxDelay_14)); }
	inline float get_maxDelay_14() const { return ___maxDelay_14; }
	inline float* get_address_of_maxDelay_14() { return &___maxDelay_14; }
	inline void set_maxDelay_14(float value)
	{
		___maxDelay_14 = value;
	}

	inline static int32_t get_offset_of_m_LastBufferedMessageCountTimer_15() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_LastBufferedMessageCountTimer_15)); }
	inline float get_m_LastBufferedMessageCountTimer_15() const { return ___m_LastBufferedMessageCountTimer_15; }
	inline float* get_address_of_m_LastBufferedMessageCountTimer_15() { return &___m_LastBufferedMessageCountTimer_15; }
	inline void set_m_LastBufferedMessageCountTimer_15(float value)
	{
		___m_LastBufferedMessageCountTimer_15 = value;
	}

	inline static int32_t get_offset_of_m_Disposed_17() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___m_Disposed_17)); }
	inline bool get_m_Disposed_17() const { return ___m_Disposed_17; }
	inline bool* get_address_of_m_Disposed_17() { return &___m_Disposed_17; }
	inline void set_m_Disposed_17(bool value)
	{
		___m_Disposed_17 = value;
	}

	inline static int32_t get_offset_of_U3CnumMsgsOutU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumMsgsOutU3Ek__BackingField_18)); }
	inline int32_t get_U3CnumMsgsOutU3Ek__BackingField_18() const { return ___U3CnumMsgsOutU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CnumMsgsOutU3Ek__BackingField_18() { return &___U3CnumMsgsOutU3Ek__BackingField_18; }
	inline void set_U3CnumMsgsOutU3Ek__BackingField_18(int32_t value)
	{
		___U3CnumMsgsOutU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CnumBufferedMsgsOutU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumBufferedMsgsOutU3Ek__BackingField_19)); }
	inline int32_t get_U3CnumBufferedMsgsOutU3Ek__BackingField_19() const { return ___U3CnumBufferedMsgsOutU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CnumBufferedMsgsOutU3Ek__BackingField_19() { return &___U3CnumBufferedMsgsOutU3Ek__BackingField_19; }
	inline void set_U3CnumBufferedMsgsOutU3Ek__BackingField_19(int32_t value)
	{
		___U3CnumBufferedMsgsOutU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CnumBytesOutU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumBytesOutU3Ek__BackingField_20)); }
	inline int32_t get_U3CnumBytesOutU3Ek__BackingField_20() const { return ___U3CnumBytesOutU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CnumBytesOutU3Ek__BackingField_20() { return &___U3CnumBytesOutU3Ek__BackingField_20; }
	inline void set_U3CnumBytesOutU3Ek__BackingField_20(int32_t value)
	{
		___U3CnumBytesOutU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CnumMsgsInU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumMsgsInU3Ek__BackingField_21)); }
	inline int32_t get_U3CnumMsgsInU3Ek__BackingField_21() const { return ___U3CnumMsgsInU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CnumMsgsInU3Ek__BackingField_21() { return &___U3CnumMsgsInU3Ek__BackingField_21; }
	inline void set_U3CnumMsgsInU3Ek__BackingField_21(int32_t value)
	{
		___U3CnumMsgsInU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CnumBytesInU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumBytesInU3Ek__BackingField_22)); }
	inline int32_t get_U3CnumBytesInU3Ek__BackingField_22() const { return ___U3CnumBytesInU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CnumBytesInU3Ek__BackingField_22() { return &___U3CnumBytesInU3Ek__BackingField_22; }
	inline void set_U3CnumBytesInU3Ek__BackingField_22(int32_t value)
	{
		___U3CnumBytesInU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CnumBufferedPerSecondU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3CnumBufferedPerSecondU3Ek__BackingField_23)); }
	inline int32_t get_U3CnumBufferedPerSecondU3Ek__BackingField_23() const { return ___U3CnumBufferedPerSecondU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CnumBufferedPerSecondU3Ek__BackingField_23() { return &___U3CnumBufferedPerSecondU3Ek__BackingField_23; }
	inline void set_U3CnumBufferedPerSecondU3Ek__BackingField_23(int32_t value)
	{
		___U3CnumBufferedPerSecondU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClastBufferedPerSecondU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156, ___U3ClastBufferedPerSecondU3Ek__BackingField_24)); }
	inline int32_t get_U3ClastBufferedPerSecondU3Ek__BackingField_24() const { return ___U3ClastBufferedPerSecondU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3ClastBufferedPerSecondU3Ek__BackingField_24() { return &___U3ClastBufferedPerSecondU3Ek__BackingField_24; }
	inline void set_U3ClastBufferedPerSecondU3Ek__BackingField_24(int32_t value)
	{
		___U3ClastBufferedPerSecondU3Ek__BackingField_24 = value;
	}
};

struct ChannelBuffer_t1182326156_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelPacket> UnityEngine.Networking.ChannelBuffer::s_FreePackets
	List_1_t2361538253 * ___s_FreePackets_12;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::pendingPacketCount
	int32_t ___pendingPacketCount_13;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.ChannelBuffer::s_SendWriter
	NetworkWriter_t3691904682 * ___s_SendWriter_16;

public:
	inline static int32_t get_offset_of_s_FreePackets_12() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156_StaticFields, ___s_FreePackets_12)); }
	inline List_1_t2361538253 * get_s_FreePackets_12() const { return ___s_FreePackets_12; }
	inline List_1_t2361538253 ** get_address_of_s_FreePackets_12() { return &___s_FreePackets_12; }
	inline void set_s_FreePackets_12(List_1_t2361538253 * value)
	{
		___s_FreePackets_12 = value;
		Il2CppCodeGenWriteBarrier(&___s_FreePackets_12, value);
	}

	inline static int32_t get_offset_of_pendingPacketCount_13() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156_StaticFields, ___pendingPacketCount_13)); }
	inline int32_t get_pendingPacketCount_13() const { return ___pendingPacketCount_13; }
	inline int32_t* get_address_of_pendingPacketCount_13() { return &___pendingPacketCount_13; }
	inline void set_pendingPacketCount_13(int32_t value)
	{
		___pendingPacketCount_13 = value;
	}

	inline static int32_t get_offset_of_s_SendWriter_16() { return static_cast<int32_t>(offsetof(ChannelBuffer_t1182326156_StaticFields, ___s_SendWriter_16)); }
	inline NetworkWriter_t3691904682 * get_s_SendWriter_16() const { return ___s_SendWriter_16; }
	inline NetworkWriter_t3691904682 ** get_address_of_s_SendWriter_16() { return &___s_SendWriter_16; }
	inline void set_s_SendWriter_16(NetworkWriter_t3691904682 * value)
	{
		___s_SendWriter_16 = value;
		Il2CppCodeGenWriteBarrier(&___s_SendWriter_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
