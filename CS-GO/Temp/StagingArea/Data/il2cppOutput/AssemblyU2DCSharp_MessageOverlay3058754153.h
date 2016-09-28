#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageOverlay
struct  MessageOverlay_t3058754153  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] MessageOverlay::Objects
	GameObjectU5BU5D_t3499186955* ___Objects_2;

public:
	inline static int32_t get_offset_of_Objects_2() { return static_cast<int32_t>(offsetof(MessageOverlay_t3058754153, ___Objects_2)); }
	inline GameObjectU5BU5D_t3499186955* get_Objects_2() const { return ___Objects_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_Objects_2() { return &___Objects_2; }
	inline void set_Objects_2(GameObjectU5BU5D_t3499186955* value)
	{
		___Objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___Objects_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
