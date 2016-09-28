#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID4044676526.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.Request
struct  Request_t2117242181  : public Il2CppObject
{
public:
	// System.Int32 UnityEngine.Networking.Match.Request::version
	int32_t ___version_0;
	// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::<sourceId>k__BackingField
	uint64_t ___U3CsourceIdU3Ek__BackingField_1;
	// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::<appId>k__BackingField
	uint64_t ___U3CappIdU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.Request::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(Request_t2117242181, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_U3CsourceIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t2117242181, ___U3CsourceIdU3Ek__BackingField_1)); }
	inline uint64_t get_U3CsourceIdU3Ek__BackingField_1() const { return ___U3CsourceIdU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CsourceIdU3Ek__BackingField_1() { return &___U3CsourceIdU3Ek__BackingField_1; }
	inline void set_U3CsourceIdU3Ek__BackingField_1(uint64_t value)
	{
		___U3CsourceIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CappIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_t2117242181, ___U3CappIdU3Ek__BackingField_2)); }
	inline uint64_t get_U3CappIdU3Ek__BackingField_2() const { return ___U3CappIdU3Ek__BackingField_2; }
	inline uint64_t* get_address_of_U3CappIdU3Ek__BackingField_2() { return &___U3CappIdU3Ek__BackingField_2; }
	inline void set_U3CappIdU3Ek__BackingField_2(uint64_t value)
	{
		___U3CappIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Request_t2117242181, ___U3CdomainU3Ek__BackingField_3)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_3() const { return ___U3CdomainU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_3() { return &___U3CdomainU3Ek__BackingField_3; }
	inline void set_U3CdomainU3Ek__BackingField_3(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
