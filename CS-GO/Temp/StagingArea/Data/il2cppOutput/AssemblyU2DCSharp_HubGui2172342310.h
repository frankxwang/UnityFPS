#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_HubGui_DemoBtn3216290137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HubGui
struct  HubGui_t2172342310  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t2614611333 * ___Skin_2;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t3525329788  ___scrollPos_3;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription_4;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t3216290137  ___demoBtn_5;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t3216290137  ___webLink_6;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t1006925219 * ___m_Headline_7;

public:
	inline static int32_t get_offset_of_Skin_2() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___Skin_2)); }
	inline GUISkin_t2614611333 * get_Skin_2() const { return ___Skin_2; }
	inline GUISkin_t2614611333 ** get_address_of_Skin_2() { return &___Skin_2; }
	inline void set_Skin_2(GUISkin_t2614611333 * value)
	{
		___Skin_2 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_2, value);
	}

	inline static int32_t get_offset_of_scrollPos_3() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___scrollPos_3)); }
	inline Vector2_t3525329788  get_scrollPos_3() const { return ___scrollPos_3; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_3() { return &___scrollPos_3; }
	inline void set_scrollPos_3(Vector2_t3525329788  value)
	{
		___scrollPos_3 = value;
	}

	inline static int32_t get_offset_of_demoDescription_4() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___demoDescription_4)); }
	inline String_t* get_demoDescription_4() const { return ___demoDescription_4; }
	inline String_t** get_address_of_demoDescription_4() { return &___demoDescription_4; }
	inline void set_demoDescription_4(String_t* value)
	{
		___demoDescription_4 = value;
		Il2CppCodeGenWriteBarrier(&___demoDescription_4, value);
	}

	inline static int32_t get_offset_of_demoBtn_5() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___demoBtn_5)); }
	inline DemoBtn_t3216290137  get_demoBtn_5() const { return ___demoBtn_5; }
	inline DemoBtn_t3216290137 * get_address_of_demoBtn_5() { return &___demoBtn_5; }
	inline void set_demoBtn_5(DemoBtn_t3216290137  value)
	{
		___demoBtn_5 = value;
	}

	inline static int32_t get_offset_of_webLink_6() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___webLink_6)); }
	inline DemoBtn_t3216290137  get_webLink_6() const { return ___webLink_6; }
	inline DemoBtn_t3216290137 * get_address_of_webLink_6() { return &___webLink_6; }
	inline void set_webLink_6(DemoBtn_t3216290137  value)
	{
		___webLink_6 = value;
	}

	inline static int32_t get_offset_of_m_Headline_7() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___m_Headline_7)); }
	inline GUIStyle_t1006925219 * get_m_Headline_7() const { return ___m_Headline_7; }
	inline GUIStyle_t1006925219 ** get_address_of_m_Headline_7() { return &___m_Headline_7; }
	inline void set_m_Headline_7(GUIStyle_t1006925219 * value)
	{
		___m_Headline_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Headline_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
