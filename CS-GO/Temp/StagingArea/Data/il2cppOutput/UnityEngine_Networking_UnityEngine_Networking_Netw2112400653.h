#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct  ClientAuthorityMessage_t2112400653  : public MessageBase_t226723297
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::netId
	NetworkInstanceId_t3860307911  ___netId_0;
	// System.Boolean UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::authority
	bool ___authority_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ClientAuthorityMessage_t2112400653, ___netId_0)); }
	inline NetworkInstanceId_t3860307911  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3860307911 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3860307911  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_authority_1() { return static_cast<int32_t>(offsetof(ClientAuthorityMessage_t2112400653, ___authority_1)); }
	inline bool get_authority_1() const { return ___authority_1; }
	inline bool* get_address_of_authority_1() { return &___authority_1; }
	inline void set_authority_1(bool value)
	{
		___authority_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
