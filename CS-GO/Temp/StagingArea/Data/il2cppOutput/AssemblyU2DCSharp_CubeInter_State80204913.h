﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeInter/State
struct  State_t80204913 
{
public:
	// System.Double CubeInter/State::timestamp
	double ___timestamp_0;
	// UnityEngine.Vector3 CubeInter/State::pos
	Vector3_t3525329789  ___pos_1;
	// UnityEngine.Quaternion CubeInter/State::rot
	Quaternion_t1891715979  ___rot_2;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(State_t80204913, ___timestamp_0)); }
	inline double get_timestamp_0() const { return ___timestamp_0; }
	inline double* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(double value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(State_t80204913, ___pos_1)); }
	inline Vector3_t3525329789  get_pos_1() const { return ___pos_1; }
	inline Vector3_t3525329789 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector3_t3525329789  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_rot_2() { return static_cast<int32_t>(offsetof(State_t80204913, ___rot_2)); }
	inline Quaternion_t1891715979  get_rot_2() const { return ___rot_2; }
	inline Quaternion_t1891715979 * get_address_of_rot_2() { return &___rot_2; }
	inline void set_rot_2(Quaternion_t1891715979  value)
	{
		___rot_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CubeInter/State
struct State_t80204913_marshaled_pinvoke
{
	double ___timestamp_0;
	Vector3_t3525329789_marshaled_pinvoke ___pos_1;
	Quaternion_t1891715979_marshaled_pinvoke ___rot_2;
};
// Native definition for marshalling of: CubeInter/State
struct State_t80204913_marshaled_com
{
	double ___timestamp_0;
	Vector3_t3525329789_marshaled_com ___pos_1;
	Quaternion_t1891715979_marshaled_com ___rot_2;
};
