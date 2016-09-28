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

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo874704524.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct  ServerSimpleWrapper_t904063966  : public NetworkServerSimple_t874704524
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::m_Server
	NetworkServer_t3565652346 * ___m_Server_12;

public:
	inline static int32_t get_offset_of_m_Server_12() { return static_cast<int32_t>(offsetof(ServerSimpleWrapper_t904063966, ___m_Server_12)); }
	inline NetworkServer_t3565652346 * get_m_Server_12() const { return ___m_Server_12; }
	inline NetworkServer_t3565652346 ** get_address_of_m_Server_12() { return &___m_Server_12; }
	inline void set_m_Server_12(NetworkServer_t3565652346 * value)
	{
		___m_Server_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Server_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
