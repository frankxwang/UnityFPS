#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Numeric.BigInteger
struct  BigInteger_t2113513851  : public Il2CppObject
{
public:
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t2133601851* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2113513851, ___data_1)); }
	inline UInt32U5BU5D_t2133601851* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2133601851** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2133601851* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(BigInteger_t2113513851, ___dataLength_2)); }
	inline int32_t get_dataLength_2() const { return ___dataLength_2; }
	inline int32_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int32_t value)
	{
		___dataLength_2 = value;
	}
};

struct BigInteger_t2113513851_StaticFields
{
public:
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t1809983122* ___primesBelow2000_0;

public:
	inline static int32_t get_offset_of_primesBelow2000_0() { return static_cast<int32_t>(offsetof(BigInteger_t2113513851_StaticFields, ___primesBelow2000_0)); }
	inline Int32U5BU5D_t1809983122* get_primesBelow2000_0() const { return ___primesBelow2000_0; }
	inline Int32U5BU5D_t1809983122** get_address_of_primesBelow2000_0() { return &___primesBelow2000_0; }
	inline void set_primesBelow2000_0(Int32U5BU5D_t1809983122* value)
	{
		___primesBelow2000_0 = value;
		Il2CppCodeGenWriteBarrier(&___primesBelow2000_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
