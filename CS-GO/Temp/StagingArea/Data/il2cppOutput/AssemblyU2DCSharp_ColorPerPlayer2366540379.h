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
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPerPlayer
struct  ColorPerPlayer_t2366540379  : public PunBehaviour_t1644375368
{
public:
	// UnityEngine.Color[] ColorPerPlayer::Colors
	ColorU5BU5D_t3477081137* ___Colors_4;
	// System.Boolean ColorPerPlayer::ShowColorLabel
	bool ___ShowColorLabel_5;
	// UnityEngine.Rect ColorPerPlayer::ColorLabelArea
	Rect_t1525428817  ___ColorLabelArea_6;
	// UnityEngine.Texture2D ColorPerPlayer::img
	Texture2D_t2509538522 * ___img_7;
	// UnityEngine.Color ColorPerPlayer::MyColor
	Color_t1588175760  ___MyColor_8;
	// System.Boolean ColorPerPlayer::afterOnJoinedRoom
	bool ___afterOnJoinedRoom_9;
	// System.Boolean ColorPerPlayer::<ColorPicked>k__BackingField
	bool ___U3CColorPickedU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_Colors_4() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___Colors_4)); }
	inline ColorU5BU5D_t3477081137* get_Colors_4() const { return ___Colors_4; }
	inline ColorU5BU5D_t3477081137** get_address_of_Colors_4() { return &___Colors_4; }
	inline void set_Colors_4(ColorU5BU5D_t3477081137* value)
	{
		___Colors_4 = value;
		Il2CppCodeGenWriteBarrier(&___Colors_4, value);
	}

	inline static int32_t get_offset_of_ShowColorLabel_5() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___ShowColorLabel_5)); }
	inline bool get_ShowColorLabel_5() const { return ___ShowColorLabel_5; }
	inline bool* get_address_of_ShowColorLabel_5() { return &___ShowColorLabel_5; }
	inline void set_ShowColorLabel_5(bool value)
	{
		___ShowColorLabel_5 = value;
	}

	inline static int32_t get_offset_of_ColorLabelArea_6() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___ColorLabelArea_6)); }
	inline Rect_t1525428817  get_ColorLabelArea_6() const { return ___ColorLabelArea_6; }
	inline Rect_t1525428817 * get_address_of_ColorLabelArea_6() { return &___ColorLabelArea_6; }
	inline void set_ColorLabelArea_6(Rect_t1525428817  value)
	{
		___ColorLabelArea_6 = value;
	}

	inline static int32_t get_offset_of_img_7() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___img_7)); }
	inline Texture2D_t2509538522 * get_img_7() const { return ___img_7; }
	inline Texture2D_t2509538522 ** get_address_of_img_7() { return &___img_7; }
	inline void set_img_7(Texture2D_t2509538522 * value)
	{
		___img_7 = value;
		Il2CppCodeGenWriteBarrier(&___img_7, value);
	}

	inline static int32_t get_offset_of_MyColor_8() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___MyColor_8)); }
	inline Color_t1588175760  get_MyColor_8() const { return ___MyColor_8; }
	inline Color_t1588175760 * get_address_of_MyColor_8() { return &___MyColor_8; }
	inline void set_MyColor_8(Color_t1588175760  value)
	{
		___MyColor_8 = value;
	}

	inline static int32_t get_offset_of_afterOnJoinedRoom_9() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___afterOnJoinedRoom_9)); }
	inline bool get_afterOnJoinedRoom_9() const { return ___afterOnJoinedRoom_9; }
	inline bool* get_address_of_afterOnJoinedRoom_9() { return &___afterOnJoinedRoom_9; }
	inline void set_afterOnJoinedRoom_9(bool value)
	{
		___afterOnJoinedRoom_9 = value;
	}

	inline static int32_t get_offset_of_U3CColorPickedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ColorPerPlayer_t2366540379, ___U3CColorPickedU3Ek__BackingField_10)); }
	inline bool get_U3CColorPickedU3Ek__BackingField_10() const { return ___U3CColorPickedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CColorPickedU3Ek__BackingField_10() { return &___U3CColorPickedU3Ek__BackingField_10; }
	inline void set_U3CColorPickedU3Ek__BackingField_10(bool value)
	{
		___U3CColorPickedU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
