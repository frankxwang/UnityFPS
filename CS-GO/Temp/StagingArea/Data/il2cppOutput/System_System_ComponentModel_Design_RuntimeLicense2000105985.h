﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "System_System_ComponentModel_LicenseContext3231004919.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t2000105985  : public LicenseContext_t3231004919
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t3875263730 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t3875263730 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t2000105985, ___extraassemblies_0)); }
	inline Hashtable_t3875263730 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t3875263730 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t3875263730 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier(&___extraassemblies_0, value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t2000105985, ___keys_1)); }
	inline Hashtable_t3875263730 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t3875263730 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t3875263730 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier(&___keys_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
