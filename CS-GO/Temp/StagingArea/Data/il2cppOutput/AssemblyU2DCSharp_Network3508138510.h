#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Network
struct  Network_t3508138510  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject Network::player
	GameObject_t4012695102 * ___player_3;
	// System.Boolean Network::connected
	bool ___connected_4;
	// System.String Network::roomName
	String_t* ___roomName_5;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(Network_t3508138510, ___player_3)); }
	inline GameObject_t4012695102 * get_player_3() const { return ___player_3; }
	inline GameObject_t4012695102 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t4012695102 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_connected_4() { return static_cast<int32_t>(offsetof(Network_t3508138510, ___connected_4)); }
	inline bool get_connected_4() const { return ___connected_4; }
	inline bool* get_address_of_connected_4() { return &___connected_4; }
	inline void set_connected_4(bool value)
	{
		___connected_4 = value;
	}

	inline static int32_t get_offset_of_roomName_5() { return static_cast<int32_t>(offsetof(Network_t3508138510, ___roomName_5)); }
	inline String_t* get_roomName_5() const { return ___roomName_5; }
	inline String_t** get_address_of_roomName_5() { return &___roomName_5; }
	inline void set_roomName_5(String_t* value)
	{
		___roomName_5 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
