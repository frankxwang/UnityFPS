#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t2102571196  : public Il2CppObject
{
public:

public:
};

struct CryptoConfig_t2102571196_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	Il2CppObject * ___lockObject_136;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t3875263730 * ___algorithms_137;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t3875263730 * ___oid_138;

public:
	inline static int32_t get_offset_of_lockObject_136() { return static_cast<int32_t>(offsetof(CryptoConfig_t2102571196_StaticFields, ___lockObject_136)); }
	inline Il2CppObject * get_lockObject_136() const { return ___lockObject_136; }
	inline Il2CppObject ** get_address_of_lockObject_136() { return &___lockObject_136; }
	inline void set_lockObject_136(Il2CppObject * value)
	{
		___lockObject_136 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_136, value);
	}

	inline static int32_t get_offset_of_algorithms_137() { return static_cast<int32_t>(offsetof(CryptoConfig_t2102571196_StaticFields, ___algorithms_137)); }
	inline Hashtable_t3875263730 * get_algorithms_137() const { return ___algorithms_137; }
	inline Hashtable_t3875263730 ** get_address_of_algorithms_137() { return &___algorithms_137; }
	inline void set_algorithms_137(Hashtable_t3875263730 * value)
	{
		___algorithms_137 = value;
		Il2CppCodeGenWriteBarrier(&___algorithms_137, value);
	}

	inline static int32_t get_offset_of_oid_138() { return static_cast<int32_t>(offsetof(CryptoConfig_t2102571196_StaticFields, ___oid_138)); }
	inline Hashtable_t3875263730 * get_oid_138() const { return ___oid_138; }
	inline Hashtable_t3875263730 ** get_address_of_oid_138() { return &___oid_138; }
	inline void set_oid_138(Hashtable_t3875263730 * value)
	{
		___oid_138 = value;
		Il2CppCodeGenWriteBarrier(&___oid_138, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
