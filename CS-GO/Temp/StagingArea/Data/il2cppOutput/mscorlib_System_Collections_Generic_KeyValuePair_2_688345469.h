﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.WeakObjectWrapper
struct WeakObjectWrapper_t2550797893;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t3624531974;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct  KeyValuePair_2_t688345469 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	WeakObjectWrapper_t2550797893 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	LinkedList_1_t3624531974 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t688345469, ___key_0)); }
	inline WeakObjectWrapper_t2550797893 * get_key_0() const { return ___key_0; }
	inline WeakObjectWrapper_t2550797893 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(WeakObjectWrapper_t2550797893 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t688345469, ___value_1)); }
	inline LinkedList_1_t3624531974 * get_value_1() const { return ___value_1; }
	inline LinkedList_1_t3624531974 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LinkedList_1_t3624531974 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
