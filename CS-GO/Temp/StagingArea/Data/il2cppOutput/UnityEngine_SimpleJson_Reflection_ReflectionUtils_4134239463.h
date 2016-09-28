#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey2
struct  U3CGetConstructorByReflectionU3Ec__AnonStorey2_t4134239463  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey2::constructorInfo
	ConstructorInfo_t3542137334 * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CGetConstructorByReflectionU3Ec__AnonStorey2_t4134239463, ___constructorInfo_0)); }
	inline ConstructorInfo_t3542137334 * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t3542137334 ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t3542137334 * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___constructorInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
