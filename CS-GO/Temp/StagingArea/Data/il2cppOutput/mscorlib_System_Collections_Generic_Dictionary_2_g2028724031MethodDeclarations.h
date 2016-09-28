#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct Dictionary_2_t2028724031;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkInstanceId>
struct IEqualityComparer_1_t1889607266;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct IDictionary_2_t3204389818;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.NetworkInstanceId>
struct ICollection_1_t31172001;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkInstanceId,System.Object>[]
struct KeyValuePair_2U5BU5D_t1177668028;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkInstanceId,System.Object>>
struct IEnumerator_1_t3000361777;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct KeyCollection_t57032015;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct ValueCollection_t3950861125;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21517255329.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1795751972.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2865329992_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2865329992(__this, method) ((  void (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2__ctor_m2865329992_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3732994495_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3732994495(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3732994495_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m4069405520_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m4069405520(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4069405520_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3635839129_gshared (Dictionary_2_t2028724031 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3635839129(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2028724031 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3635839129_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4008656557_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m4008656557(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4008656557_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1904393353_gshared (Dictionary_2_t2028724031 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1904393353(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2028724031 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m1904393353_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3961133712_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3961133712(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3961133712_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4117748204_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4117748204(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4117748204_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m3010726790_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3010726790(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m3010726790_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m868042484_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m868042484(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m868042484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2829134293_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2829134293(__this, method) ((  bool (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2829134293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2900575876_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2900575876(__this, method) ((  bool (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2900575876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2247577398_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2247577398(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2247577398_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m572073701_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m572073701(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m572073701_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3629096012_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3629096012(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3629096012_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3755054566_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3755054566(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3755054566_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m335022883_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m335022883(__this, ___key0, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m335022883_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486(__this, method) ((  bool (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2275235314_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2275235314(__this, method) ((  bool (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2275235314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2496498233_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2_t1517255329  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2496498233(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2028724031 *, KeyValuePair_2_t1517255329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2496498233_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4251839085_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2_t1517255329  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4251839085(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2028724031 *, KeyValuePair_2_t1517255329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4251839085_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2U5BU5D_t1177668028* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2028724031 *, KeyValuePair_2U5BU5D_t1177668028*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2_t1517255329  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2028724031 *, KeyValuePair_2_t1517255329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388_gshared (Dictionary_2_t2028724031 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3922561803_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3922561803(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3922561803_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4002897256_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4002897256(__this, method) ((  int32_t (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_get_Count_m4002897256_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m1265530399_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1265530399(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , const MethodInfo*))Dictionary_2_get_Item_m1265530399_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3138866952_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3138866952(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3138866952_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m631246528_gshared (Dictionary_2_t2028724031 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m631246528(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2028724031 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m631246528_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3220511991_gshared (Dictionary_2_t2028724031 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3220511991(__this, ___size0, method) ((  void (*) (Dictionary_2_t2028724031 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3220511991_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2903145651_gshared (Dictionary_2_t2028724031 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2903145651(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2903145651_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1517255329  Dictionary_2_make_pair_m3604002119_gshared (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m3604002119(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1517255329  (*) (Il2CppObject * /* static, unused */, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m3604002119_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::pick_key(TKey,TValue)
extern "C"  NetworkInstanceId_t3860307911  Dictionary_2_pick_key_m1118535319_gshared (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1118535319(__this /* static, unused */, ___key0, ___value1, method) ((  NetworkInstanceId_t3860307911  (*) (Il2CppObject * /* static, unused */, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m1118535319_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m925951283_gshared (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m925951283(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m925951283_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2150319036_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2U5BU5D_t1177668028* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2150319036(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2028724031 *, KeyValuePair_2U5BU5D_t1177668028*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2150319036_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m2983680496_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2983680496(__this, method) ((  void (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_Resize_m2983680496_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2879090285_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2879090285(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m2879090285_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m271463283_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m271463283(__this, method) ((  void (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_Clear_m271463283_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2606551133_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2606551133(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , const MethodInfo*))Dictionary_2_ContainsKey_m2606551133_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m4193168861_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m4193168861(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m4193168861_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3924257510_gshared (Dictionary_2_t2028724031 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3924257510(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2028724031 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m3924257510_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1944382_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1944382(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1944382_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m49275507_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m49275507(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , const MethodInfo*))Dictionary_2_Remove_m49275507_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m99974070_gshared (Dictionary_2_t2028724031 * __this, NetworkInstanceId_t3860307911  ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m99974070(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2028724031 *, NetworkInstanceId_t3860307911 , Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m99974070_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Keys()
extern "C"  KeyCollection_t57032015 * Dictionary_2_get_Keys_m3457051045_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3457051045(__this, method) ((  KeyCollection_t57032015 * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_get_Keys_m3457051045_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Values()
extern "C"  ValueCollection_t3950861125 * Dictionary_2_get_Values_m1956817537_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1956817537(__this, method) ((  ValueCollection_t3950861125 * (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_get_Values_m1956817537_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ToTKey(System.Object)
extern "C"  NetworkInstanceId_t3860307911  Dictionary_2_ToTKey_m568394226_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m568394226(__this, ___key0, method) ((  NetworkInstanceId_t3860307911  (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m568394226_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m3533232718_gshared (Dictionary_2_t2028724031 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3533232718(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t2028724031 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3533232718_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1107556438_gshared (Dictionary_2_t2028724031 * __this, KeyValuePair_2_t1517255329  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1107556438(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2028724031 *, KeyValuePair_2_t1517255329 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1107556438_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1795751973  Dictionary_2_GetEnumerator_m1573238227_gshared (Dictionary_2_t2028724031 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1573238227(__this, method) ((  Enumerator_t1795751973  (*) (Dictionary_2_t2028724031 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1573238227_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m1108432266_gshared (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1108432266(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, NetworkInstanceId_t3860307911 , Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1108432266_gshared)(__this /* static, unused */, ___key0, ___value1, method)
