#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t11523773;
// UnityEngine.Component
struct Component_t2126946602;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t2923905571;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t2694415769;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t936895934;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "AssemblyU2DCSharp_ViewSynchronization2031220955.h"
#include "AssemblyU2DCSharp_OnSerializeTransform515884235.h"
#include "AssemblyU2DCSharp_OnSerializeRigidBody2202385356.h"
#include "AssemblyU2DCSharp_OwnershipOption3524843684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonView
struct  PhotonView_t1498838369  : public MonoBehaviour_t4025988718
{
public:
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_3;
	// System.Int32 PhotonView::group
	int32_t ___group_4;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_5;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_6;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t11523773* ___instantiationDataField_7;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t11523773* ___lastOnSerializeDataSent_8;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t11523773* ___lastOnSerializeDataReceived_9;
	// UnityEngine.Component PhotonView::observed
	Component_t2126946602 * ___observed_10;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_11;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_12;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_13;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_14;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t2923905571 * ___ObservedComponents_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t2694415769 * ___m_OnSerializeMethodInfos_16;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_17;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_18;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_19;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_20;
	// System.Boolean PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_21;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t936895934* ___RpcMonoBehaviours_22;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_23;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_24;

public:
	inline static int32_t get_offset_of_ownerId_3() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___ownerId_3)); }
	inline int32_t get_ownerId_3() const { return ___ownerId_3; }
	inline int32_t* get_address_of_ownerId_3() { return &___ownerId_3; }
	inline void set_ownerId_3(int32_t value)
	{
		___ownerId_3 = value;
	}

	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___group_4)); }
	inline int32_t get_group_4() const { return ___group_4; }
	inline int32_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(int32_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_5() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___mixedModeIsReliable_5)); }
	inline bool get_mixedModeIsReliable_5() const { return ___mixedModeIsReliable_5; }
	inline bool* get_address_of_mixedModeIsReliable_5() { return &___mixedModeIsReliable_5; }
	inline void set_mixedModeIsReliable_5(bool value)
	{
		___mixedModeIsReliable_5 = value;
	}

	inline static int32_t get_offset_of_prefixBackup_6() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___prefixBackup_6)); }
	inline int32_t get_prefixBackup_6() const { return ___prefixBackup_6; }
	inline int32_t* get_address_of_prefixBackup_6() { return &___prefixBackup_6; }
	inline void set_prefixBackup_6(int32_t value)
	{
		___prefixBackup_6 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_7() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___instantiationDataField_7)); }
	inline ObjectU5BU5D_t11523773* get_instantiationDataField_7() const { return ___instantiationDataField_7; }
	inline ObjectU5BU5D_t11523773** get_address_of_instantiationDataField_7() { return &___instantiationDataField_7; }
	inline void set_instantiationDataField_7(ObjectU5BU5D_t11523773* value)
	{
		___instantiationDataField_7 = value;
		Il2CppCodeGenWriteBarrier(&___instantiationDataField_7, value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_8() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___lastOnSerializeDataSent_8)); }
	inline ObjectU5BU5D_t11523773* get_lastOnSerializeDataSent_8() const { return ___lastOnSerializeDataSent_8; }
	inline ObjectU5BU5D_t11523773** get_address_of_lastOnSerializeDataSent_8() { return &___lastOnSerializeDataSent_8; }
	inline void set_lastOnSerializeDataSent_8(ObjectU5BU5D_t11523773* value)
	{
		___lastOnSerializeDataSent_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastOnSerializeDataSent_8, value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_t11523773* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_t11523773** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_t11523773* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastOnSerializeDataReceived_9, value);
	}

	inline static int32_t get_offset_of_observed_10() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___observed_10)); }
	inline Component_t2126946602 * get_observed_10() const { return ___observed_10; }
	inline Component_t2126946602 ** get_address_of_observed_10() { return &___observed_10; }
	inline void set_observed_10(Component_t2126946602 * value)
	{
		___observed_10 = value;
		Il2CppCodeGenWriteBarrier(&___observed_10, value);
	}

	inline static int32_t get_offset_of_synchronization_11() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___synchronization_11)); }
	inline int32_t get_synchronization_11() const { return ___synchronization_11; }
	inline int32_t* get_address_of_synchronization_11() { return &___synchronization_11; }
	inline void set_synchronization_11(int32_t value)
	{
		___synchronization_11 = value;
	}

	inline static int32_t get_offset_of_onSerializeTransformOption_12() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___onSerializeTransformOption_12)); }
	inline int32_t get_onSerializeTransformOption_12() const { return ___onSerializeTransformOption_12; }
	inline int32_t* get_address_of_onSerializeTransformOption_12() { return &___onSerializeTransformOption_12; }
	inline void set_onSerializeTransformOption_12(int32_t value)
	{
		___onSerializeTransformOption_12 = value;
	}

	inline static int32_t get_offset_of_onSerializeRigidBodyOption_13() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___onSerializeRigidBodyOption_13)); }
	inline int32_t get_onSerializeRigidBodyOption_13() const { return ___onSerializeRigidBodyOption_13; }
	inline int32_t* get_address_of_onSerializeRigidBodyOption_13() { return &___onSerializeRigidBodyOption_13; }
	inline void set_onSerializeRigidBodyOption_13(int32_t value)
	{
		___onSerializeRigidBodyOption_13 = value;
	}

	inline static int32_t get_offset_of_ownershipTransfer_14() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___ownershipTransfer_14)); }
	inline int32_t get_ownershipTransfer_14() const { return ___ownershipTransfer_14; }
	inline int32_t* get_address_of_ownershipTransfer_14() { return &___ownershipTransfer_14; }
	inline void set_ownershipTransfer_14(int32_t value)
	{
		___ownershipTransfer_14 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_15() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___ObservedComponents_15)); }
	inline List_1_t2923905571 * get_ObservedComponents_15() const { return ___ObservedComponents_15; }
	inline List_1_t2923905571 ** get_address_of_ObservedComponents_15() { return &___ObservedComponents_15; }
	inline void set_ObservedComponents_15(List_1_t2923905571 * value)
	{
		___ObservedComponents_15 = value;
		Il2CppCodeGenWriteBarrier(&___ObservedComponents_15, value);
	}

	inline static int32_t get_offset_of_m_OnSerializeMethodInfos_16() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___m_OnSerializeMethodInfos_16)); }
	inline Dictionary_2_t2694415769 * get_m_OnSerializeMethodInfos_16() const { return ___m_OnSerializeMethodInfos_16; }
	inline Dictionary_2_t2694415769 ** get_address_of_m_OnSerializeMethodInfos_16() { return &___m_OnSerializeMethodInfos_16; }
	inline void set_m_OnSerializeMethodInfos_16(Dictionary_2_t2694415769 * value)
	{
		___m_OnSerializeMethodInfos_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnSerializeMethodInfos_16, value);
	}

	inline static int32_t get_offset_of_viewIdField_17() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___viewIdField_17)); }
	inline int32_t get_viewIdField_17() const { return ___viewIdField_17; }
	inline int32_t* get_address_of_viewIdField_17() { return &___viewIdField_17; }
	inline void set_viewIdField_17(int32_t value)
	{
		___viewIdField_17 = value;
	}

	inline static int32_t get_offset_of_instantiationId_18() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___instantiationId_18)); }
	inline int32_t get_instantiationId_18() const { return ___instantiationId_18; }
	inline int32_t* get_address_of_instantiationId_18() { return &___instantiationId_18; }
	inline void set_instantiationId_18(int32_t value)
	{
		___instantiationId_18 = value;
	}

	inline static int32_t get_offset_of_didAwake_19() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___didAwake_19)); }
	inline bool get_didAwake_19() const { return ___didAwake_19; }
	inline bool* get_address_of_didAwake_19() { return &___didAwake_19; }
	inline void set_didAwake_19(bool value)
	{
		___didAwake_19 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_20() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___isRuntimeInstantiated_20)); }
	inline bool get_isRuntimeInstantiated_20() const { return ___isRuntimeInstantiated_20; }
	inline bool* get_address_of_isRuntimeInstantiated_20() { return &___isRuntimeInstantiated_20; }
	inline void set_isRuntimeInstantiated_20(bool value)
	{
		___isRuntimeInstantiated_20 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_21() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___removedFromLocalViewList_21)); }
	inline bool get_removedFromLocalViewList_21() const { return ___removedFromLocalViewList_21; }
	inline bool* get_address_of_removedFromLocalViewList_21() { return &___removedFromLocalViewList_21; }
	inline void set_removedFromLocalViewList_21(bool value)
	{
		___removedFromLocalViewList_21 = value;
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_22() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___RpcMonoBehaviours_22)); }
	inline MonoBehaviourU5BU5D_t936895934* get_RpcMonoBehaviours_22() const { return ___RpcMonoBehaviours_22; }
	inline MonoBehaviourU5BU5D_t936895934** get_address_of_RpcMonoBehaviours_22() { return &___RpcMonoBehaviours_22; }
	inline void set_RpcMonoBehaviours_22(MonoBehaviourU5BU5D_t936895934* value)
	{
		___RpcMonoBehaviours_22 = value;
		Il2CppCodeGenWriteBarrier(&___RpcMonoBehaviours_22, value);
	}

	inline static int32_t get_offset_of_OnSerializeMethodInfo_23() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___OnSerializeMethodInfo_23)); }
	inline MethodInfo_t * get_OnSerializeMethodInfo_23() const { return ___OnSerializeMethodInfo_23; }
	inline MethodInfo_t ** get_address_of_OnSerializeMethodInfo_23() { return &___OnSerializeMethodInfo_23; }
	inline void set_OnSerializeMethodInfo_23(MethodInfo_t * value)
	{
		___OnSerializeMethodInfo_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnSerializeMethodInfo_23, value);
	}

	inline static int32_t get_offset_of_failedToFindOnSerialize_24() { return static_cast<int32_t>(offsetof(PhotonView_t1498838369, ___failedToFindOnSerialize_24)); }
	inline bool get_failedToFindOnSerialize_24() const { return ___failedToFindOnSerialize_24; }
	inline bool* get_address_of_failedToFindOnSerialize_24() { return &___failedToFindOnSerialize_24; }
	inline void set_failedToFindOnSerialize_24(bool value)
	{
		___failedToFindOnSerialize_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
