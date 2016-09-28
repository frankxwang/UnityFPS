#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.LocalClient
struct LocalClient_t2051778943;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToClient
struct  ULocalConnectionToClient_t1215416419  : public NetworkConnection_t2182631957
{
public:
	// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::m_LocalClient
	LocalClient_t2051778943 * ___m_LocalClient_18;

public:
	inline static int32_t get_offset_of_m_LocalClient_18() { return static_cast<int32_t>(offsetof(ULocalConnectionToClient_t1215416419, ___m_LocalClient_18)); }
	inline LocalClient_t2051778943 * get_m_LocalClient_18() const { return ___m_LocalClient_18; }
	inline LocalClient_t2051778943 ** get_address_of_m_LocalClient_18() { return &___m_LocalClient_18; }
	inline void set_m_LocalClient_18(LocalClient_t2051778943 * value)
	{
		___m_LocalClient_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalClient_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
