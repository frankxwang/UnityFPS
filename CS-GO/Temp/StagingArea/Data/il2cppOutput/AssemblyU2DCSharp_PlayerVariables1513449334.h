#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerVariables
struct  PlayerVariables_t1513449334  : public Il2CppObject
{
public:

public:
};

struct PlayerVariables_t1513449334_StaticFields
{
public:
	// UnityEngine.Color[] PlayerVariables::playerColors
	ColorU5BU5D_t3477081137* ___playerColors_0;
	// System.String[] PlayerVariables::playerColorNames
	StringU5BU5D_t2956870243* ___playerColorNames_1;
	// UnityEngine.Material[] PlayerVariables::playerMaterials
	MaterialU5BU5D_t3353847197* ___playerMaterials_2;

public:
	inline static int32_t get_offset_of_playerColors_0() { return static_cast<int32_t>(offsetof(PlayerVariables_t1513449334_StaticFields, ___playerColors_0)); }
	inline ColorU5BU5D_t3477081137* get_playerColors_0() const { return ___playerColors_0; }
	inline ColorU5BU5D_t3477081137** get_address_of_playerColors_0() { return &___playerColors_0; }
	inline void set_playerColors_0(ColorU5BU5D_t3477081137* value)
	{
		___playerColors_0 = value;
		Il2CppCodeGenWriteBarrier(&___playerColors_0, value);
	}

	inline static int32_t get_offset_of_playerColorNames_1() { return static_cast<int32_t>(offsetof(PlayerVariables_t1513449334_StaticFields, ___playerColorNames_1)); }
	inline StringU5BU5D_t2956870243* get_playerColorNames_1() const { return ___playerColorNames_1; }
	inline StringU5BU5D_t2956870243** get_address_of_playerColorNames_1() { return &___playerColorNames_1; }
	inline void set_playerColorNames_1(StringU5BU5D_t2956870243* value)
	{
		___playerColorNames_1 = value;
		Il2CppCodeGenWriteBarrier(&___playerColorNames_1, value);
	}

	inline static int32_t get_offset_of_playerMaterials_2() { return static_cast<int32_t>(offsetof(PlayerVariables_t1513449334_StaticFields, ___playerMaterials_2)); }
	inline MaterialU5BU5D_t3353847197* get_playerMaterials_2() const { return ___playerMaterials_2; }
	inline MaterialU5BU5D_t3353847197** get_address_of_playerMaterials_2() { return &___playerMaterials_2; }
	inline void set_playerMaterials_2(MaterialU5BU5D_t3353847197* value)
	{
		___playerMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerMaterials_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
