#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct  CRCMessageEntry_t2230829117 
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.CRCMessageEntry::name
	String_t* ___name_0;
	// System.Byte UnityEngine.Networking.NetworkSystem.CRCMessageEntry::channel
	uint8_t ___channel_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t2230829117, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t2230829117, ___channel_1)); }
	inline uint8_t get_channel_1() const { return ___channel_1; }
	inline uint8_t* get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(uint8_t value)
	{
		___channel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t2230829117_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___channel_1;
};
// Native definition for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t2230829117_marshaled_com
{
	uint16_t* ___name_0;
	uint8_t ___channel_1;
};
