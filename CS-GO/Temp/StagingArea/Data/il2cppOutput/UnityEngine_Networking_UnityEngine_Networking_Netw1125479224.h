#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkLobbyManager/PendingPlayer
struct  PendingPlayer_t1125479224 
{
public:
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::conn
	NetworkConnection_t2182631957 * ___conn_0;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager/PendingPlayer::lobbyPlayer
	GameObject_t4012695102 * ___lobbyPlayer_1;

public:
	inline static int32_t get_offset_of_conn_0() { return static_cast<int32_t>(offsetof(PendingPlayer_t1125479224, ___conn_0)); }
	inline NetworkConnection_t2182631957 * get_conn_0() const { return ___conn_0; }
	inline NetworkConnection_t2182631957 ** get_address_of_conn_0() { return &___conn_0; }
	inline void set_conn_0(NetworkConnection_t2182631957 * value)
	{
		___conn_0 = value;
		Il2CppCodeGenWriteBarrier(&___conn_0, value);
	}

	inline static int32_t get_offset_of_lobbyPlayer_1() { return static_cast<int32_t>(offsetof(PendingPlayer_t1125479224, ___lobbyPlayer_1)); }
	inline GameObject_t4012695102 * get_lobbyPlayer_1() const { return ___lobbyPlayer_1; }
	inline GameObject_t4012695102 ** get_address_of_lobbyPlayer_1() { return &___lobbyPlayer_1; }
	inline void set_lobbyPlayer_1(GameObject_t4012695102 * value)
	{
		___lobbyPlayer_1 = value;
		Il2CppCodeGenWriteBarrier(&___lobbyPlayer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
