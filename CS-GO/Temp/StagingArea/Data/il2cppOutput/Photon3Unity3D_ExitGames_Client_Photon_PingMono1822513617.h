﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPing3684928106.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PingMono
struct  PingMono_t1822513617  : public PhotonPing_t3684928106
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.PingMono::sock
	Socket_t150013987 * ___sock_6;

public:
	inline static int32_t get_offset_of_sock_6() { return static_cast<int32_t>(offsetof(PingMono_t1822513617, ___sock_6)); }
	inline Socket_t150013987 * get_sock_6() const { return ___sock_6; }
	inline Socket_t150013987 ** get_address_of_sock_6() { return &___sock_6; }
	inline void set_sock_6(Socket_t150013987 * value)
	{
		___sock_6 = value;
		Il2CppCodeGenWriteBarrier(&___sock_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
