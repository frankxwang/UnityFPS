#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.CameraWork
struct  CameraWork_t2856068663  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::distance
	float ___distance_2;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::height
	float ___height_3;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::heightSmoothLag
	float ___heightSmoothLag_4;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.CameraWork::centerOffset
	Vector3_t3525329789  ___centerOffset_5;
	// System.Boolean ExitGames.Demos.DemoAnimator.CameraWork::followOnStart
	bool ___followOnStart_6;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.CameraWork::cameraTransform
	Transform_t284553113 * ___cameraTransform_7;
	// System.Boolean ExitGames.Demos.DemoAnimator.CameraWork::isFollowing
	bool ___isFollowing_8;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::heightVelocity
	float ___heightVelocity_9;
	// System.Single ExitGames.Demos.DemoAnimator.CameraWork::targetHeight
	float ___targetHeight_10;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_heightSmoothLag_4() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___heightSmoothLag_4)); }
	inline float get_heightSmoothLag_4() const { return ___heightSmoothLag_4; }
	inline float* get_address_of_heightSmoothLag_4() { return &___heightSmoothLag_4; }
	inline void set_heightSmoothLag_4(float value)
	{
		___heightSmoothLag_4 = value;
	}

	inline static int32_t get_offset_of_centerOffset_5() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___centerOffset_5)); }
	inline Vector3_t3525329789  get_centerOffset_5() const { return ___centerOffset_5; }
	inline Vector3_t3525329789 * get_address_of_centerOffset_5() { return &___centerOffset_5; }
	inline void set_centerOffset_5(Vector3_t3525329789  value)
	{
		___centerOffset_5 = value;
	}

	inline static int32_t get_offset_of_followOnStart_6() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___followOnStart_6)); }
	inline bool get_followOnStart_6() const { return ___followOnStart_6; }
	inline bool* get_address_of_followOnStart_6() { return &___followOnStart_6; }
	inline void set_followOnStart_6(bool value)
	{
		___followOnStart_6 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_7() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___cameraTransform_7)); }
	inline Transform_t284553113 * get_cameraTransform_7() const { return ___cameraTransform_7; }
	inline Transform_t284553113 ** get_address_of_cameraTransform_7() { return &___cameraTransform_7; }
	inline void set_cameraTransform_7(Transform_t284553113 * value)
	{
		___cameraTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_7, value);
	}

	inline static int32_t get_offset_of_isFollowing_8() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___isFollowing_8)); }
	inline bool get_isFollowing_8() const { return ___isFollowing_8; }
	inline bool* get_address_of_isFollowing_8() { return &___isFollowing_8; }
	inline void set_isFollowing_8(bool value)
	{
		___isFollowing_8 = value;
	}

	inline static int32_t get_offset_of_heightVelocity_9() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___heightVelocity_9)); }
	inline float get_heightVelocity_9() const { return ___heightVelocity_9; }
	inline float* get_address_of_heightVelocity_9() { return &___heightVelocity_9; }
	inline void set_heightVelocity_9(float value)
	{
		___heightVelocity_9 = value;
	}

	inline static int32_t get_offset_of_targetHeight_10() { return static_cast<int32_t>(offsetof(CameraWork_t2856068663, ___targetHeight_10)); }
	inline float get_targetHeight_10() const { return ___targetHeight_10; }
	inline float* get_address_of_targetHeight_10() { return &___targetHeight_10; }
	inline void set_targetHeight_10(float value)
	{
		___targetHeight_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
