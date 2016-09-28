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
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBroadcastResult
struct  NetworkBroadcastResult_t3925257945 
{
public:
	// System.String UnityEngine.Networking.NetworkBroadcastResult::serverAddress
	String_t* ___serverAddress_0;
	// System.Byte[] UnityEngine.Networking.NetworkBroadcastResult::broadcastData
	ByteU5BU5D_t58506160* ___broadcastData_1;

public:
	inline static int32_t get_offset_of_serverAddress_0() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t3925257945, ___serverAddress_0)); }
	inline String_t* get_serverAddress_0() const { return ___serverAddress_0; }
	inline String_t** get_address_of_serverAddress_0() { return &___serverAddress_0; }
	inline void set_serverAddress_0(String_t* value)
	{
		___serverAddress_0 = value;
		Il2CppCodeGenWriteBarrier(&___serverAddress_0, value);
	}

	inline static int32_t get_offset_of_broadcastData_1() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t3925257945, ___broadcastData_1)); }
	inline ByteU5BU5D_t58506160* get_broadcastData_1() const { return ___broadcastData_1; }
	inline ByteU5BU5D_t58506160** get_address_of_broadcastData_1() { return &___broadcastData_1; }
	inline void set_broadcastData_1(ByteU5BU5D_t58506160* value)
	{
		___broadcastData_1 = value;
		Il2CppCodeGenWriteBarrier(&___broadcastData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t3925257945_marshaled_pinvoke
{
	char* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
// Native definition for marshalling of: UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t3925257945_marshaled_com
{
	uint16_t* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
