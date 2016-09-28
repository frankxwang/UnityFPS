#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1933801609;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct  KeyValuePair_2_t2604377957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	NetworkHash128_t1719292676  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SpawnDelegate_t1933801609 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2604377957, ___key_0)); }
	inline NetworkHash128_t1719292676  get_key_0() const { return ___key_0; }
	inline NetworkHash128_t1719292676 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(NetworkHash128_t1719292676  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2604377957, ___value_1)); }
	inline SpawnDelegate_t1933801609 * get_value_1() const { return ___value_1; }
	inline SpawnDelegate_t1933801609 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SpawnDelegate_t1933801609 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
