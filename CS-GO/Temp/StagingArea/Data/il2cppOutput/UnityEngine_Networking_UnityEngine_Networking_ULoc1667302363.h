#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3565652346;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToServer
struct  ULocalConnectionToServer_t1667302363  : public NetworkConnection_t2182631957
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.ULocalConnectionToServer::m_LocalServer
	NetworkServer_t3565652346 * ___m_LocalServer_18;

public:
	inline static int32_t get_offset_of_m_LocalServer_18() { return static_cast<int32_t>(offsetof(ULocalConnectionToServer_t1667302363, ___m_LocalServer_18)); }
	inline NetworkServer_t3565652346 * get_m_LocalServer_18() const { return ___m_LocalServer_18; }
	inline NetworkServer_t3565652346 ** get_address_of_m_LocalServer_18() { return &___m_LocalServer_18; }
	inline void set_m_LocalServer_18(NetworkServer_t3565652346 * value)
	{
		___m_LocalServer_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalServer_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
