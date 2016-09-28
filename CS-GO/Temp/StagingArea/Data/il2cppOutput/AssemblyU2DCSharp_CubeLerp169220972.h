#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeLerp
struct  CubeLerp_t169220972  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Vector3 CubeLerp::latestCorrectPos
	Vector3_t3525329789  ___latestCorrectPos_3;
	// UnityEngine.Vector3 CubeLerp::onUpdatePos
	Vector3_t3525329789  ___onUpdatePos_4;
	// System.Single CubeLerp::fraction
	float ___fraction_5;

public:
	inline static int32_t get_offset_of_latestCorrectPos_3() { return static_cast<int32_t>(offsetof(CubeLerp_t169220972, ___latestCorrectPos_3)); }
	inline Vector3_t3525329789  get_latestCorrectPos_3() const { return ___latestCorrectPos_3; }
	inline Vector3_t3525329789 * get_address_of_latestCorrectPos_3() { return &___latestCorrectPos_3; }
	inline void set_latestCorrectPos_3(Vector3_t3525329789  value)
	{
		___latestCorrectPos_3 = value;
	}

	inline static int32_t get_offset_of_onUpdatePos_4() { return static_cast<int32_t>(offsetof(CubeLerp_t169220972, ___onUpdatePos_4)); }
	inline Vector3_t3525329789  get_onUpdatePos_4() const { return ___onUpdatePos_4; }
	inline Vector3_t3525329789 * get_address_of_onUpdatePos_4() { return &___onUpdatePos_4; }
	inline void set_onUpdatePos_4(Vector3_t3525329789  value)
	{
		___onUpdatePos_4 = value;
	}

	inline static int32_t get_offset_of_fraction_5() { return static_cast<int32_t>(offsetof(CubeLerp_t169220972, ___fraction_5)); }
	inline float get_fraction_5() const { return ___fraction_5; }
	inline float* get_address_of_fraction_5() { return &___fraction_5; }
	inline void set_fraction_5(float value)
	{
		___fraction_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
