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
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.LoaderAnime
struct  LoaderAnime_t840794690  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ExitGames.Demos.DemoAnimator.LoaderAnime::speed
	float ___speed_2;
	// System.Single ExitGames.Demos.DemoAnimator.LoaderAnime::radius
	float ___radius_3;
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.LoaderAnime::particles
	GameObject_t4012695102 * ___particles_4;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.LoaderAnime::_offset
	Vector3_t3525329789  ____offset_5;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.LoaderAnime::_transform
	Transform_t284553113 * ____transform_6;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.LoaderAnime::_particleTransform
	Transform_t284553113 * ____particleTransform_7;
	// System.Boolean ExitGames.Demos.DemoAnimator.LoaderAnime::_isAnimating
	bool ____isAnimating_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_particles_4() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ___particles_4)); }
	inline GameObject_t4012695102 * get_particles_4() const { return ___particles_4; }
	inline GameObject_t4012695102 ** get_address_of_particles_4() { return &___particles_4; }
	inline void set_particles_4(GameObject_t4012695102 * value)
	{
		___particles_4 = value;
		Il2CppCodeGenWriteBarrier(&___particles_4, value);
	}

	inline static int32_t get_offset_of__offset_5() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____offset_5)); }
	inline Vector3_t3525329789  get__offset_5() const { return ____offset_5; }
	inline Vector3_t3525329789 * get_address_of__offset_5() { return &____offset_5; }
	inline void set__offset_5(Vector3_t3525329789  value)
	{
		____offset_5 = value;
	}

	inline static int32_t get_offset_of__transform_6() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____transform_6)); }
	inline Transform_t284553113 * get__transform_6() const { return ____transform_6; }
	inline Transform_t284553113 ** get_address_of__transform_6() { return &____transform_6; }
	inline void set__transform_6(Transform_t284553113 * value)
	{
		____transform_6 = value;
		Il2CppCodeGenWriteBarrier(&____transform_6, value);
	}

	inline static int32_t get_offset_of__particleTransform_7() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____particleTransform_7)); }
	inline Transform_t284553113 * get__particleTransform_7() const { return ____particleTransform_7; }
	inline Transform_t284553113 ** get_address_of__particleTransform_7() { return &____particleTransform_7; }
	inline void set__particleTransform_7(Transform_t284553113 * value)
	{
		____particleTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&____particleTransform_7, value);
	}

	inline static int32_t get_offset_of__isAnimating_8() { return static_cast<int32_t>(offsetof(LoaderAnime_t840794690, ____isAnimating_8)); }
	inline bool get__isAnimating_8() const { return ____isAnimating_8; }
	inline bool* get_address_of__isAnimating_8() { return &____isAnimating_8; }
	inline void set__isAnimating_8(bool value)
	{
		____isAnimating_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
