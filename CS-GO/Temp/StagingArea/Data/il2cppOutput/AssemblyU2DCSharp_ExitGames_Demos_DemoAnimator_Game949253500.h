#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Demos.DemoAnimator.GameManager
struct GameManager_t949253500;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.GameManager
struct  GameManager_t949253500  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.GameManager::playerPrefab
	GameObject_t4012695102 * ___playerPrefab_4;
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.GameManager::instance
	GameObject_t4012695102 * ___instance_5;

public:
	inline static int32_t get_offset_of_playerPrefab_4() { return static_cast<int32_t>(offsetof(GameManager_t949253500, ___playerPrefab_4)); }
	inline GameObject_t4012695102 * get_playerPrefab_4() const { return ___playerPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_playerPrefab_4() { return &___playerPrefab_4; }
	inline void set_playerPrefab_4(GameObject_t4012695102 * value)
	{
		___playerPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_4, value);
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GameManager_t949253500, ___instance_5)); }
	inline GameObject_t4012695102 * get_instance_5() const { return ___instance_5; }
	inline GameObject_t4012695102 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GameObject_t4012695102 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

struct GameManager_t949253500_StaticFields
{
public:
	// ExitGames.Demos.DemoAnimator.GameManager ExitGames.Demos.DemoAnimator.GameManager::Instance
	GameManager_t949253500 * ___Instance_3;

public:
	inline static int32_t get_offset_of_Instance_3() { return static_cast<int32_t>(offsetof(GameManager_t949253500_StaticFields, ___Instance_3)); }
	inline GameManager_t949253500 * get_Instance_3() const { return ___Instance_3; }
	inline GameManager_t949253500 ** get_address_of_Instance_3() { return &___Instance_3; }
	inline void set_Instance_3(GameManager_t949253500 * value)
	{
		___Instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
