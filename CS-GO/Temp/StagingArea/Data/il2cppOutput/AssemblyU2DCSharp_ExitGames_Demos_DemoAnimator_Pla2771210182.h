#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.PlayerAnimatorManager
struct  PlayerAnimatorManager_t2771210182  : public MonoBehaviour_t4025988718
{
public:
	// System.Single ExitGames.Demos.DemoAnimator.PlayerAnimatorManager::DirectionDampTime
	float ___DirectionDampTime_3;
	// UnityEngine.Animator ExitGames.Demos.DemoAnimator.PlayerAnimatorManager::animator
	Animator_t792326996 * ___animator_4;

public:
	inline static int32_t get_offset_of_DirectionDampTime_3() { return static_cast<int32_t>(offsetof(PlayerAnimatorManager_t2771210182, ___DirectionDampTime_3)); }
	inline float get_DirectionDampTime_3() const { return ___DirectionDampTime_3; }
	inline float* get_address_of_DirectionDampTime_3() { return &___DirectionDampTime_3; }
	inline void set_DirectionDampTime_3(float value)
	{
		___DirectionDampTime_3 = value;
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PlayerAnimatorManager_t2771210182, ___animator_4)); }
	inline Animator_t792326996 * get_animator_4() const { return ___animator_4; }
	inline Animator_t792326996 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t792326996 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
