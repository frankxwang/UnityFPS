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

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t3026689721;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction999919624.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C"  void LayoutedWindow__ctor_m70994485 (LayoutedWindow_t3026689721 * __this, WindowFunction_t999919624 * ___f0, Rect_t1525428817  ___screenRect1, GUIContent_t2432841515 * ___content2, GUILayoutOptionU5BU5D_t1890718142* ___options3, GUIStyle_t1006925219 * ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C"  void LayoutedWindow_DoWindow_m1441924070 (LayoutedWindow_t3026689721 * __this, int32_t ___windowID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
