struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 83 classes
	//0. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//20. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//23. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//24. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//28. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//29. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//33. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//34. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//35. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//36. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//37. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//38. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//39. NetworkManager
	//Skipping NetworkManager

	//40. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//41. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//42. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//43. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//44. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//45. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//46. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//50. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//51. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//57. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//58. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//59. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//60. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//61. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//62. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//63. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//64. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//65. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//66. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//67. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//68. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//69. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//70. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//71. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//72. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//73. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//76. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//77. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//78. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//79. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//80. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//81. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//82. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
