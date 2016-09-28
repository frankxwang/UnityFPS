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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1539766316;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2715432103;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3313246268;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t1087903355;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2511404062;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3863041596;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3461903410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297614.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1306794257.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C"  void Dictionary_2__ctor_m1579490711_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1579490711(__this, method) ((  void (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2__ctor_m1579490711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3465701006_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3465701006(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3465701006_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m78274657_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m78274657(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m78274657_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3963103336_gshared (Dictionary_2_t1539766316 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3963103336(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1539766316 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3963103336_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2271779388_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2271779388(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2271779388_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2218454616_gshared (Dictionary_2_t1539766316 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2218454616(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1539766316 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m2218454616_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1796647137_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1796647137(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1796647137_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m488270077_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m488270077(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m488270077_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1329786901_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1329786901(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1329786901_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m392512451_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m392512451(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m392512451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2767933798_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2767933798(__this, method) ((  bool (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2767933798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3452790995_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3452790995(__this, method) ((  bool (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m3452790995_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3871890311_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3871890311(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3871890311_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m943960822_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m943960822(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m943960822_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1429211547_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1429211547(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1429211547_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3122269367_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3122269367(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3122269367_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1513543988_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1513543988(__this, ___key0, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1513543988_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4245599741_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4245599741(__this, method) ((  bool (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4245599741_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m465618991_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m465618991(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m465618991_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3286353921_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3286353921(__this, method) ((  bool (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3286353921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m613243850_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2_t1028297614  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m613243850(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1539766316 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m613243850_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1633051260_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2_t1028297614  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1633051260(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1539766316 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1633051260_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2711268654_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2U5BU5D_t1087903355* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2711268654(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1539766316 *, KeyValuePair_2U5BU5D_t1087903355*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2711268654_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m315816097_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2_t1028297614  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m315816097(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1539766316 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m315816097_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2151629709_gshared (Dictionary_2_t1539766316 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2151629709(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2151629709_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m535117020_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m535117020(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m535117020_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4139513747_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4139513747(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4139513747_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3258276256_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3258276256(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3258276256_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3266987575_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3266987575(__this, method) ((  int32_t (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_get_Count_m3266987575_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C"  int64_t Dictionary_2_get_Item_m524482544_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m524482544(__this, ___key0, method) ((  int64_t (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m524482544_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m4107157271_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m4107157271(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m4107157271_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2799811855_gshared (Dictionary_2_t1539766316 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2799811855(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1539766316 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2799811855_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m262078088_gshared (Dictionary_2_t1539766316 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m262078088(__this, ___size0, method) ((  void (*) (Dictionary_2_t1539766316 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m262078088_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2661141636_gshared (Dictionary_2_t1539766316 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2661141636(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2661141636_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1028297614  Dictionary_2_make_pair_m4082713880_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m4082713880(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1028297614  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m4082713880_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2282311334_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2282311334(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m2282311334_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C"  int64_t Dictionary_2_pick_value_m3822247554_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3822247554(__this /* static, unused */, ___key0, ___value1, method) ((  int64_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m3822247554_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m469678795_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2U5BU5D_t1087903355* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m469678795(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1539766316 *, KeyValuePair_2U5BU5D_t1087903355*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m469678795_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C"  void Dictionary_2_Resize_m1777368449_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1777368449(__this, method) ((  void (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_Resize_m1777368449_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2426695934_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2426695934(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_Add_m2426695934_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C"  void Dictionary_2_Clear_m3280591298_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3280591298(__this, method) ((  void (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_Clear_m3280591298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m56465132_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m56465132(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m56465132_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1341887724_gshared (Dictionary_2_t1539766316 * __this, int64_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1341887724(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1539766316 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m1341887724_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3241434549_gshared (Dictionary_2_t1539766316 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3241434549(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1539766316 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m3241434549_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3071896527_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3071896527(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3071896527_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3817012868_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3817012868(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3817012868_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m772424517_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, int64_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m772424517(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1539766316 *, Il2CppObject *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m772424517_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C"  KeyCollection_t3863041596 * Dictionary_2_get_Keys_m602711798_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m602711798(__this, method) ((  KeyCollection_t3863041596 * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_get_Keys_m602711798_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C"  ValueCollection_t3461903410 * Dictionary_2_get_Values_m1153616018_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1153616018(__this, method) ((  ValueCollection_t3461903410 * (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_get_Values_m1153616018_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1732170241_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1732170241(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1732170241_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C"  int64_t Dictionary_2_ToTValue_m2134561693_gshared (Dictionary_2_t1539766316 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2134561693(__this, ___value0, method) ((  int64_t (*) (Dictionary_2_t1539766316 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2134561693_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m627969127_gshared (Dictionary_2_t1539766316 * __this, KeyValuePair_2_t1028297614  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m627969127(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1539766316 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m627969127_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C"  Enumerator_t1306794258  Dictionary_2_GetEnumerator_m3173078946_gshared (Dictionary_2_t1539766316 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3173078946(__this, method) ((  Enumerator_t1306794258  (*) (Dictionary_2_t1539766316 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3173078946_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m1193969305_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1193969305(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1193969305_gshared)(__this /* static, unused */, ___key0, ___value1, method)
