#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerController
struct  PlayerController_t2299033606  : public Il2CppObject
{
public:
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_2;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_t1320523637 * ___unetView_3;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_t4012695102 * ___gameObject_4;

public:
	inline static int32_t get_offset_of_playerControllerId_2() { return static_cast<int32_t>(offsetof(PlayerController_t2299033606, ___playerControllerId_2)); }
	inline int16_t get_playerControllerId_2() const { return ___playerControllerId_2; }
	inline int16_t* get_address_of_playerControllerId_2() { return &___playerControllerId_2; }
	inline void set_playerControllerId_2(int16_t value)
	{
		___playerControllerId_2 = value;
	}

	inline static int32_t get_offset_of_unetView_3() { return static_cast<int32_t>(offsetof(PlayerController_t2299033606, ___unetView_3)); }
	inline NetworkIdentity_t1320523637 * get_unetView_3() const { return ___unetView_3; }
	inline NetworkIdentity_t1320523637 ** get_address_of_unetView_3() { return &___unetView_3; }
	inline void set_unetView_3(NetworkIdentity_t1320523637 * value)
	{
		___unetView_3 = value;
		Il2CppCodeGenWriteBarrier(&___unetView_3, value);
	}

	inline static int32_t get_offset_of_gameObject_4() { return static_cast<int32_t>(offsetof(PlayerController_t2299033606, ___gameObject_4)); }
	inline GameObject_t4012695102 * get_gameObject_4() const { return ___gameObject_4; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_4() { return &___gameObject_4; }
	inline void set_gameObject_4(GameObject_t4012695102 * value)
	{
		___gameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
