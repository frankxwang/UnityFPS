#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct  AnimationParametersMessage_t225952631  : public MessageBase_t226723297
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::netId
	NetworkInstanceId_t3860307911  ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::parameters
	ByteU5BU5D_t58506160* ___parameters_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(AnimationParametersMessage_t225952631, ___netId_0)); }
	inline NetworkInstanceId_t3860307911  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3860307911 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3860307911  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(AnimationParametersMessage_t225952631, ___parameters_1)); }
	inline ByteU5BU5D_t58506160* get_parameters_1() const { return ___parameters_1; }
	inline ByteU5BU5D_t58506160** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(ByteU5BU5D_t58506160* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
