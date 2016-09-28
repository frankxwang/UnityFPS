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

// MoveCam
struct  MoveCam_t2908194334  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 MoveCam::originalPos
	Vector3_t3525329789  ___originalPos_2;
	// UnityEngine.Vector3 MoveCam::randomPos
	Vector3_t3525329789  ___randomPos_3;
	// UnityEngine.Transform MoveCam::camTransform
	Transform_t284553113 * ___camTransform_4;
	// UnityEngine.Transform MoveCam::lookAt
	Transform_t284553113 * ___lookAt_5;

public:
	inline static int32_t get_offset_of_originalPos_2() { return static_cast<int32_t>(offsetof(MoveCam_t2908194334, ___originalPos_2)); }
	inline Vector3_t3525329789  get_originalPos_2() const { return ___originalPos_2; }
	inline Vector3_t3525329789 * get_address_of_originalPos_2() { return &___originalPos_2; }
	inline void set_originalPos_2(Vector3_t3525329789  value)
	{
		___originalPos_2 = value;
	}

	inline static int32_t get_offset_of_randomPos_3() { return static_cast<int32_t>(offsetof(MoveCam_t2908194334, ___randomPos_3)); }
	inline Vector3_t3525329789  get_randomPos_3() const { return ___randomPos_3; }
	inline Vector3_t3525329789 * get_address_of_randomPos_3() { return &___randomPos_3; }
	inline void set_randomPos_3(Vector3_t3525329789  value)
	{
		___randomPos_3 = value;
	}

	inline static int32_t get_offset_of_camTransform_4() { return static_cast<int32_t>(offsetof(MoveCam_t2908194334, ___camTransform_4)); }
	inline Transform_t284553113 * get_camTransform_4() const { return ___camTransform_4; }
	inline Transform_t284553113 ** get_address_of_camTransform_4() { return &___camTransform_4; }
	inline void set_camTransform_4(Transform_t284553113 * value)
	{
		___camTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___camTransform_4, value);
	}

	inline static int32_t get_offset_of_lookAt_5() { return static_cast<int32_t>(offsetof(MoveCam_t2908194334, ___lookAt_5)); }
	inline Transform_t284553113 * get_lookAt_5() const { return ___lookAt_5; }
	inline Transform_t284553113 ** get_address_of_lookAt_5() { return &___lookAt_5; }
	inline void set_lookAt_5(Transform_t284553113 * value)
	{
		___lookAt_5 = value;
		Il2CppCodeGenWriteBarrier(&___lookAt_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
