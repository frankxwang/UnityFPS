#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t4012510768;

#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct  CRCMessage_t3099185009  : public MessageBase_t226723297
{
public:
	// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[] UnityEngine.Networking.NetworkSystem.CRCMessage::scripts
	CRCMessageEntryU5BU5D_t4012510768* ___scripts_0;

public:
	inline static int32_t get_offset_of_scripts_0() { return static_cast<int32_t>(offsetof(CRCMessage_t3099185009, ___scripts_0)); }
	inline CRCMessageEntryU5BU5D_t4012510768* get_scripts_0() const { return ___scripts_0; }
	inline CRCMessageEntryU5BU5D_t4012510768** get_address_of_scripts_0() { return &___scripts_0; }
	inline void set_scripts_0(CRCMessageEntryU5BU5D_t4012510768* value)
	{
		___scripts_0 = value;
		Il2CppCodeGenWriteBarrier(&___scripts_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
