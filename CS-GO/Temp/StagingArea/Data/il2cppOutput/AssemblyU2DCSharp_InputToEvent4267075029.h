#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputToEvent
struct  InputToEvent_t4267075029  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t4012695102 * ___lastGo_2;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject_4;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t3525329788  ___pressedPosition_5;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t3525329788  ___currentPos_6;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging_7;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t3533968274 * ___m_Camera_8;

public:
	inline static int32_t get_offset_of_lastGo_2() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___lastGo_2)); }
	inline GameObject_t4012695102 * get_lastGo_2() const { return ___lastGo_2; }
	inline GameObject_t4012695102 ** get_address_of_lastGo_2() { return &___lastGo_2; }
	inline void set_lastGo_2(GameObject_t4012695102 * value)
	{
		___lastGo_2 = value;
		Il2CppCodeGenWriteBarrier(&___lastGo_2, value);
	}

	inline static int32_t get_offset_of_DetectPointedAtGameObject_4() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___DetectPointedAtGameObject_4)); }
	inline bool get_DetectPointedAtGameObject_4() const { return ___DetectPointedAtGameObject_4; }
	inline bool* get_address_of_DetectPointedAtGameObject_4() { return &___DetectPointedAtGameObject_4; }
	inline void set_DetectPointedAtGameObject_4(bool value)
	{
		___DetectPointedAtGameObject_4 = value;
	}

	inline static int32_t get_offset_of_pressedPosition_5() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___pressedPosition_5)); }
	inline Vector2_t3525329788  get_pressedPosition_5() const { return ___pressedPosition_5; }
	inline Vector2_t3525329788 * get_address_of_pressedPosition_5() { return &___pressedPosition_5; }
	inline void set_pressedPosition_5(Vector2_t3525329788  value)
	{
		___pressedPosition_5 = value;
	}

	inline static int32_t get_offset_of_currentPos_6() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___currentPos_6)); }
	inline Vector2_t3525329788  get_currentPos_6() const { return ___currentPos_6; }
	inline Vector2_t3525329788 * get_address_of_currentPos_6() { return &___currentPos_6; }
	inline void set_currentPos_6(Vector2_t3525329788  value)
	{
		___currentPos_6 = value;
	}

	inline static int32_t get_offset_of_Dragging_7() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___Dragging_7)); }
	inline bool get_Dragging_7() const { return ___Dragging_7; }
	inline bool* get_address_of_Dragging_7() { return &___Dragging_7; }
	inline void set_Dragging_7(bool value)
	{
		___Dragging_7 = value;
	}

	inline static int32_t get_offset_of_m_Camera_8() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029, ___m_Camera_8)); }
	inline Camera_t3533968274 * get_m_Camera_8() const { return ___m_Camera_8; }
	inline Camera_t3533968274 ** get_address_of_m_Camera_8() { return &___m_Camera_8; }
	inline void set_m_Camera_8(Camera_t3533968274 * value)
	{
		___m_Camera_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_8, value);
	}
};

struct InputToEvent_t4267075029_StaticFields
{
public:
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t3525329789  ___inputHitPos_3;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t4012695102 * ___U3CgoPointedAtU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_inputHitPos_3() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029_StaticFields, ___inputHitPos_3)); }
	inline Vector3_t3525329789  get_inputHitPos_3() const { return ___inputHitPos_3; }
	inline Vector3_t3525329789 * get_address_of_inputHitPos_3() { return &___inputHitPos_3; }
	inline void set_inputHitPos_3(Vector3_t3525329789  value)
	{
		___inputHitPos_3 = value;
	}

	inline static int32_t get_offset_of_U3CgoPointedAtU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputToEvent_t4267075029_StaticFields, ___U3CgoPointedAtU3Ek__BackingField_9)); }
	inline GameObject_t4012695102 * get_U3CgoPointedAtU3Ek__BackingField_9() const { return ___U3CgoPointedAtU3Ek__BackingField_9; }
	inline GameObject_t4012695102 ** get_address_of_U3CgoPointedAtU3Ek__BackingField_9() { return &___U3CgoPointedAtU3Ek__BackingField_9; }
	inline void set_U3CgoPointedAtU3Ek__BackingField_9(GameObject_t4012695102 * value)
	{
		___U3CgoPointedAtU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgoPointedAtU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
