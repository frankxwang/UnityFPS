#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Networking_ReactorModel3262025552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.GlobalConfig
struct  GlobalConfig_t2769223534  : public Il2CppObject
{
public:
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_ThreadAwakeTimeout
	uint32_t ___m_ThreadAwakeTimeout_0;
	// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::m_ReactorModel
	int32_t ___m_ReactorModel_1;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumReceivedMessages
	uint16_t ___m_ReactorMaximumReceivedMessages_2;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumSentMessages
	uint16_t ___m_ReactorMaximumSentMessages_3;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxPacketSize
	uint16_t ___m_MaxPacketSize_4;

public:
	inline static int32_t get_offset_of_m_ThreadAwakeTimeout_0() { return static_cast<int32_t>(offsetof(GlobalConfig_t2769223534, ___m_ThreadAwakeTimeout_0)); }
	inline uint32_t get_m_ThreadAwakeTimeout_0() const { return ___m_ThreadAwakeTimeout_0; }
	inline uint32_t* get_address_of_m_ThreadAwakeTimeout_0() { return &___m_ThreadAwakeTimeout_0; }
	inline void set_m_ThreadAwakeTimeout_0(uint32_t value)
	{
		___m_ThreadAwakeTimeout_0 = value;
	}

	inline static int32_t get_offset_of_m_ReactorModel_1() { return static_cast<int32_t>(offsetof(GlobalConfig_t2769223534, ___m_ReactorModel_1)); }
	inline int32_t get_m_ReactorModel_1() const { return ___m_ReactorModel_1; }
	inline int32_t* get_address_of_m_ReactorModel_1() { return &___m_ReactorModel_1; }
	inline void set_m_ReactorModel_1(int32_t value)
	{
		___m_ReactorModel_1 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumReceivedMessages_2() { return static_cast<int32_t>(offsetof(GlobalConfig_t2769223534, ___m_ReactorMaximumReceivedMessages_2)); }
	inline uint16_t get_m_ReactorMaximumReceivedMessages_2() const { return ___m_ReactorMaximumReceivedMessages_2; }
	inline uint16_t* get_address_of_m_ReactorMaximumReceivedMessages_2() { return &___m_ReactorMaximumReceivedMessages_2; }
	inline void set_m_ReactorMaximumReceivedMessages_2(uint16_t value)
	{
		___m_ReactorMaximumReceivedMessages_2 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumSentMessages_3() { return static_cast<int32_t>(offsetof(GlobalConfig_t2769223534, ___m_ReactorMaximumSentMessages_3)); }
	inline uint16_t get_m_ReactorMaximumSentMessages_3() const { return ___m_ReactorMaximumSentMessages_3; }
	inline uint16_t* get_address_of_m_ReactorMaximumSentMessages_3() { return &___m_ReactorMaximumSentMessages_3; }
	inline void set_m_ReactorMaximumSentMessages_3(uint16_t value)
	{
		___m_ReactorMaximumSentMessages_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_4() { return static_cast<int32_t>(offsetof(GlobalConfig_t2769223534, ___m_MaxPacketSize_4)); }
	inline uint16_t get_m_MaxPacketSize_4() const { return ___m_MaxPacketSize_4; }
	inline uint16_t* get_address_of_m_MaxPacketSize_4() { return &___m_MaxPacketSize_4; }
	inline void set_m_MaxPacketSize_4(uint16_t value)
	{
		___m_MaxPacketSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
