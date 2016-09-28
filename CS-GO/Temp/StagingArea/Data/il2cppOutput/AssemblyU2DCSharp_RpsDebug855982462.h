#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDebug
struct  RpsDebug_t855982462  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Button RpsDebug::ConnectionDebugButton
	Button_t990034267 * ___ConnectionDebugButton_2;
	// System.Boolean RpsDebug::ShowConnectionDebug
	bool ___ShowConnectionDebug_3;

public:
	inline static int32_t get_offset_of_ConnectionDebugButton_2() { return static_cast<int32_t>(offsetof(RpsDebug_t855982462, ___ConnectionDebugButton_2)); }
	inline Button_t990034267 * get_ConnectionDebugButton_2() const { return ___ConnectionDebugButton_2; }
	inline Button_t990034267 ** get_address_of_ConnectionDebugButton_2() { return &___ConnectionDebugButton_2; }
	inline void set_ConnectionDebugButton_2(Button_t990034267 * value)
	{
		___ConnectionDebugButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionDebugButton_2, value);
	}

	inline static int32_t get_offset_of_ShowConnectionDebug_3() { return static_cast<int32_t>(offsetof(RpsDebug_t855982462, ___ShowConnectionDebug_3)); }
	inline bool get_ShowConnectionDebug_3() const { return ___ShowConnectionDebug_3; }
	inline bool* get_address_of_ShowConnectionDebug_3() { return &___ShowConnectionDebug_3; }
	inline void set_ShowConnectionDebug_3(bool value)
	{
		___ShowConnectionDebug_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
