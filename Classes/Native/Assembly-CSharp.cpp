#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AudioClip>
struct IEnumerable_1_t324F6D5024F0A5341B8062CCD5F6D264124591A4;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.PhysicMaterial>
struct IEnumerable_1_tE1946E2444AE016B50A65F8A8C456D20F0524ECD;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>
struct List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.PhysicMaterial[]
struct PhysicMaterialU5BU5D_t426E5FB088E715217CE61CA884312CC34BA0F9C0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFollowObject
struct CameraFollowObject_tD26259C51588E97DC500731BB96C04BC0B4271B9;
// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024;
// CameraScroll
struct CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Doors
struct Doors_t6968A795A842667118E468726FDC82FF10E86D1F;
// FirstPersonAIO
struct FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LevelChanger
struct LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5;
// LookAtTarget
struct LookAtTarget_t0C4C8B56D977A0B1EDE604D712836D5ED36CF375;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// OpenLink
struct OpenLink_t998B6C053DAA659363EDEFBE6B7A95EE9B6A28FB;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SkyboxSwitcher
struct SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThirdPersonCamera
struct ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// FirstPersonAIO/<CameraShake>d__94
struct U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0;
// FirstPersonAIO/AdvancedSettings
struct AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5;
// FirstPersonAIO/CrouchModifiers
struct CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4;
// FirstPersonAIO/DynamicFootStep
struct DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;

IL2CPP_EXTERN_C RuntimeClass* AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1D0840F7052EE904BCD7468BA7A2762E6A429F;
IL2CPP_EXTERN_C String_t* _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4700D25A7A2F5C718E3EF92A10B99BDFC2502323;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral62DB914C23AAEFF89485D66E094350B8F842F681;
IL2CPP_EXTERN_C String_t* _stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF21D1AFA791809AE91DC624664271989958A14;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral75DA06D0159A58DE837D92F8EFA1E3EE04A44D56;
IL2CPP_EXTERN_C String_t* _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB480F1D0898B9B35AB42527567FA69E41B1ADB;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DD28EEF76DEF63D3B3E88765AE5247496CAF8C;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralB03095694F762E200C6C3FE40C110AC541ADC08E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE;
IL2CPP_EXTERN_C String_t* _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A4A494D63F6F6A911FBCE5ED0D335B74A6A1BD;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD91838347598CBD58DB81010AD0E06C9EF6EFA;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1D199D3A55BF0356D541CB3048142A8D7E52521A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m13C85FD585C0679530F8B35D0B39D965702FD0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1E9AD091F9C98BEFECEB48E77CEB2BDE8ABA369B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m24A0089A857737AD75BC8658B9559CB66C04CC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mCCAD050FA4D1F38D705CCAA708CF427187C0FD58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mBEF990A222FAD532F463A209C0C5FBC272EA2444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>
struct List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PhysicMaterialU5BU5D_t426E5FB088E715217CE61CA884312CC34BA0F9C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PhysicMaterialU5BU5D_t426E5FB088E715217CE61CA884312CC34BA0F9C0* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// FirstPersonAIO/<CameraShake>d__94
struct U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0  : public RuntimeObject
{
	// System.Int32 FirstPersonAIO/<CameraShake>d__94::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirstPersonAIO/<CameraShake>d__94::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single FirstPersonAIO/<CameraShake>d__94::Duration
	float ___Duration_2;
	// System.Single FirstPersonAIO/<CameraShake>d__94::Magnitude
	float ___Magnitude_3;
	// FirstPersonAIO FirstPersonAIO/<CameraShake>d__94::<>4__this
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* ___U3CU3E4__this_4;
	// System.Single FirstPersonAIO/<CameraShake>d__94::<elapsed>5__1
	float ___U3CelapsedU3E5__1_5;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VrModeController VrModeController/<StartXR>d__10::<>4__this
	VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.CollisionDetectionMode
struct CollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459 
{
	// System.Int32 UnityEngine.CollisionDetectionMode::value__
	int32_t ___value___2;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t3132E5D974C485D3F3C97B7AF475965AB0C3F9C1 
{
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_tB70C7D1B9208B821C1C8A614BE904500B92C47D2 
{
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PhysicMaterialCombine
struct PhysicMaterialCombine_t0239ECEF48BF2D17708FB395B24C6F18DC049101 
{
	// System.Int32 UnityEngine.PhysicMaterialCombine::value__
	int32_t ___value___2;
};

// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t5AA443202C8B671F391534A002B7CF48A1412D23 
{
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RenderMode
struct RenderMode_tB63553E26C26A0B62C47B995F86AC41768494633 
{
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;
};

// UnityEngine.RigidbodyConstraints
struct RigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8 
{
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;
};

// UnityEngine.RigidbodyInterpolation
struct RigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8 
{
	// System.Int32 UnityEngine.RigidbodyInterpolation::value__
	int32_t ___value___2;
};

// UnityEngine.TouchPhase
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;
};

// UnityEngine.TouchType
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;
};

// UnityEngine.WrapMode
struct WrapMode_t6C6EABC32662DF078C3C977196618603C2F3A079 
{
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.CanvasScaler/ScaleMode
struct ScaleMode_t75E9A207156237F5D22C180106611A6AEB45D765 
{
	// System.Int32 UnityEngine.UI.CanvasScaler/ScaleMode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct ScreenMatchMode_t1BE0CA4F6DE4FDCD46F417DF0B7C1E6A19AB75ED 
{
	// System.Int32 UnityEngine.UI.CanvasScaler/ScreenMatchMode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.CanvasScaler/Unit
struct Unit_tAE478BD661DB092BBD04163BD94D5868EB99666F 
{
	// System.Int32 UnityEngine.UI.CanvasScaler/Unit::value__
	int32_t ___value___2;
};

// FirstPersonAIO/CameraInputMethod
struct CameraInputMethod_t849D6F55AEC98551C62FC54D30B3D90BC8EA1644 
{
	// System.Int32 FirstPersonAIO/CameraInputMethod::value__
	int32_t ___value___2;
};

// FirstPersonAIO/FSMode
struct FSMode_t9F55917B41EC7F3C33F156EA51F14292452283D6 
{
	// System.Int32 FirstPersonAIO/FSMode::value__
	int32_t ___value___2;
};

// FirstPersonAIO/InvertMouseInput
struct InvertMouseInput_tBFB03B482DA8061979C0694D5B18E5A9EB30598E 
{
	// System.Int32 FirstPersonAIO/InvertMouseInput::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// FirstPersonAIO/DynamicFootStep/matMode
struct matMode_t32376A82873444228ACD1362AC3A69434E41D4B9 
{
	// System.Int32 FirstPersonAIO/DynamicFootStep/matMode::value__
	int32_t ___value___2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// FirstPersonAIO/AdvancedSettings
struct AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5  : public RuntimeObject
{
	// System.Single FirstPersonAIO/AdvancedSettings::gravityMultiplier
	float ___gravityMultiplier_0;
	// UnityEngine.PhysicMaterial FirstPersonAIO/AdvancedSettings::zeroFrictionMaterial
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___zeroFrictionMaterial_1;
	// UnityEngine.PhysicMaterial FirstPersonAIO/AdvancedSettings::highFrictionMaterial
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___highFrictionMaterial_2;
	// System.Single FirstPersonAIO/AdvancedSettings::maxSlopeAngle
	float ___maxSlopeAngle_3;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingWalkable
	bool ___isTouchingWalkable_4;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingUpright
	bool ___isTouchingUpright_5;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingFlat
	bool ___isTouchingFlat_6;
	// System.Single FirstPersonAIO/AdvancedSettings::maxWallShear
	float ___maxWallShear_7;
	// System.Single FirstPersonAIO/AdvancedSettings::maxStepHeight
	float ___maxStepHeight_8;
	// System.Boolean FirstPersonAIO/AdvancedSettings::stairMiniHop
	bool ___stairMiniHop_9;
	// UnityEngine.RaycastHit FirstPersonAIO/AdvancedSettings::surfaceAngleCheck
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___surfaceAngleCheck_10;
	// UnityEngine.Vector3 FirstPersonAIO/AdvancedSettings::curntGroundNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___curntGroundNormal_11;
	// UnityEngine.Vector2 FirstPersonAIO/AdvancedSettings::moveDirRef
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___moveDirRef_12;
	// System.Single FirstPersonAIO/AdvancedSettings::lastKnownSlopeAngle
	float ___lastKnownSlopeAngle_13;
	// System.Single FirstPersonAIO/AdvancedSettings::FOVKickAmount
	float ___FOVKickAmount_14;
	// System.Single FirstPersonAIO/AdvancedSettings::changeTime
	float ___changeTime_15;
	// System.Single FirstPersonAIO/AdvancedSettings::fovRef
	float ___fovRef_16;
};

// FirstPersonAIO/CrouchModifiers
struct CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4  : public RuntimeObject
{
	// System.Boolean FirstPersonAIO/CrouchModifiers::useCrouch
	bool ___useCrouch_0;
	// System.Boolean FirstPersonAIO/CrouchModifiers::toggleCrouch
	bool ___toggleCrouch_1;
	// UnityEngine.KeyCode FirstPersonAIO/CrouchModifiers::crouchKey
	int32_t ___crouchKey_2;
	// System.Single FirstPersonAIO/CrouchModifiers::crouchWalkSpeedMultiplier
	float ___crouchWalkSpeedMultiplier_3;
	// System.Single FirstPersonAIO/CrouchModifiers::crouchJumpPowerMultiplier
	float ___crouchJumpPowerMultiplier_4;
	// System.Boolean FirstPersonAIO/CrouchModifiers::crouchOverride
	bool ___crouchOverride_5;
	// System.Single FirstPersonAIO/CrouchModifiers::colliderHeight
	float ___colliderHeight_6;
};

// FirstPersonAIO/DynamicFootStep
struct DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7  : public RuntimeObject
{
	// FirstPersonAIO/DynamicFootStep/matMode FirstPersonAIO/DynamicFootStep::materialMode
	int32_t ___materialMode_0;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::woodPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___woodPhysMat_1;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::metalAndGlassPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___metalAndGlassPhysMat_2;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::grassPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___grassPhysMat_3;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::dirtAndGravelPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___dirtAndGravelPhysMat_4;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::rockAndConcretePhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___rockAndConcretePhysMat_5;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::mudPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___mudPhysMat_6;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::customPhysMat
	List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* ___customPhysMat_7;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::woodMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___woodMat_8;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::metalAndGlassMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___metalAndGlassMat_9;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::grassMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___grassMat_10;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::dirtAndGravelMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___dirtAndGravelMat_11;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::rockAndConcreteMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___rockAndConcreteMat_12;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::mudMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___mudMat_13;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::customMat
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___customMat_14;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::currentClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___currentClipSet_15;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::woodClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___woodClipSet_16;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::metalAndGlassClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___metalAndGlassClipSet_17;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::grassClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___grassClipSet_18;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::dirtAndGravelClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___dirtAndGravelClipSet_19;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::rockAndConcreteClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___rockAndConcreteClipSet_20;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::mudClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___mudClipSet_21;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::customClipSet
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___customClipSet_22;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraFollowObject
struct CameraFollowObject_tD26259C51588E97DC500731BB96C04BC0B4271B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraFollowObject::TargetObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TargetObject_4;
	// System.Single CameraFollowObject::MoveSmoothTime
	float ___MoveSmoothTime_5;
	// System.Single CameraFollowObject::RotationSpeed
	float ___RotationSpeed_6;
	// UnityEngine.Vector3 CameraFollowObject::Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Offset_7;
	// System.Boolean CameraFollowObject::Enabled
	bool ___Enabled_8;
	// UnityEngine.Transform CameraFollowObject::myTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___myTransform_9;
	// UnityEngine.Vector3 CameraFollowObject::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_10;
};

// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
};

// CameraScroll
struct CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraScroll::speed
	float ___speed_4;
	// System.Single CameraScroll::acceleration
	float ___acceleration_5;
	// System.Single CameraScroll::lookSensitivity
	float ___lookSensitivity_6;
	// UnityEngine.Vector3 CameraScroll::<velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvelocityU3Ek__BackingField_7;
	// System.Single CameraScroll::yaw
	float ___yaw_8;
	// System.Single CameraScroll::pitch
	float ___pitch_9;
};

struct CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields
{
	// CameraScroll CameraScroll::main
	CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* ___main_10;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Doors
struct Doors_t6968A795A842667118E468726FDC82FF10E86D1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FirstPersonAIO
struct FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FirstPersonAIO::controllerPauseState
	bool ___controllerPauseState_4;
	// System.Boolean FirstPersonAIO::enableCameraMovement
	bool ___enableCameraMovement_5;
	// FirstPersonAIO/InvertMouseInput FirstPersonAIO::mouseInputInversion
	int32_t ___mouseInputInversion_6;
	// FirstPersonAIO/CameraInputMethod FirstPersonAIO::cameraInputMethod
	int32_t ___cameraInputMethod_7;
	// System.Single FirstPersonAIO::verticalRotationRange
	float ___verticalRotationRange_8;
	// System.Single FirstPersonAIO::mouseSensitivity
	float ___mouseSensitivity_9;
	// System.Single FirstPersonAIO::fOVToMouseSensitivity
	float ___fOVToMouseSensitivity_10;
	// System.Single FirstPersonAIO::cameraSmoothing
	float ___cameraSmoothing_11;
	// System.Boolean FirstPersonAIO::lockAndHideCursor
	bool ___lockAndHideCursor_12;
	// UnityEngine.Camera FirstPersonAIO::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_13;
	// System.Boolean FirstPersonAIO::enableCameraShake
	bool ___enableCameraShake_14;
	// UnityEngine.Vector3 FirstPersonAIO::cameraStartingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraStartingPosition_15;
	// System.Single FirstPersonAIO::baseCamFOV
	float ___baseCamFOV_16;
	// System.Boolean FirstPersonAIO::autoCrosshair
	bool ___autoCrosshair_17;
	// System.Boolean FirstPersonAIO::drawStaminaMeter
	bool ___drawStaminaMeter_18;
	// System.Single FirstPersonAIO::smoothRef
	float ___smoothRef_19;
	// UnityEngine.UI.Image FirstPersonAIO::StaminaMeter
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___StaminaMeter_20;
	// UnityEngine.UI.Image FirstPersonAIO::StaminaMeterBG
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___StaminaMeterBG_21;
	// UnityEngine.Sprite FirstPersonAIO::Crosshair
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Crosshair_22;
	// UnityEngine.Vector3 FirstPersonAIO::targetAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngles_23;
	// UnityEngine.Vector3 FirstPersonAIO::followAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___followAngles_24;
	// UnityEngine.Vector3 FirstPersonAIO::followVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___followVelocity_25;
	// UnityEngine.Vector3 FirstPersonAIO::originalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalRotation_26;
	// System.Boolean FirstPersonAIO::playerCanMove
	bool ___playerCanMove_27;
	// System.Boolean FirstPersonAIO::walkByDefault
	bool ___walkByDefault_28;
	// System.Single FirstPersonAIO::walkSpeed
	float ___walkSpeed_29;
	// UnityEngine.KeyCode FirstPersonAIO::sprintKey
	int32_t ___sprintKey_30;
	// System.Single FirstPersonAIO::sprintSpeed
	float ___sprintSpeed_31;
	// System.Single FirstPersonAIO::jumpPower
	float ___jumpPower_32;
	// System.Boolean FirstPersonAIO::canJump
	bool ___canJump_33;
	// System.Boolean FirstPersonAIO::canHoldJump
	bool ___canHoldJump_34;
	// System.Boolean FirstPersonAIO::jumpInput
	bool ___jumpInput_35;
	// System.Boolean FirstPersonAIO::didJump
	bool ___didJump_36;
	// System.Boolean FirstPersonAIO::useStamina
	bool ___useStamina_37;
	// System.Single FirstPersonAIO::staminaDepletionSpeed
	float ___staminaDepletionSpeed_38;
	// System.Single FirstPersonAIO::staminaLevel
	float ___staminaLevel_39;
	// System.Single FirstPersonAIO::speed
	float ___speed_40;
	// System.Single FirstPersonAIO::staminaInternal
	float ___staminaInternal_41;
	// System.Single FirstPersonAIO::walkSpeedInternal
	float ___walkSpeedInternal_42;
	// System.Single FirstPersonAIO::sprintSpeedInternal
	float ___sprintSpeedInternal_43;
	// System.Single FirstPersonAIO::jumpPowerInternal
	float ___jumpPowerInternal_44;
	// FirstPersonAIO/CrouchModifiers FirstPersonAIO::_crouchModifiers
	CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* ____crouchModifiers_45;
	// FirstPersonAIO/AdvancedSettings FirstPersonAIO::advanced
	AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* ___advanced_46;
	// UnityEngine.CapsuleCollider FirstPersonAIO::capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___capsule_47;
	// System.Boolean FirstPersonAIO::<IsGrounded>k__BackingField
	bool ___U3CIsGroundedU3Ek__BackingField_48;
	// UnityEngine.Vector2 FirstPersonAIO::inputXY
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputXY_49;
	// System.Boolean FirstPersonAIO::isCrouching
	bool ___isCrouching_50;
	// System.Single FirstPersonAIO::yVelocity
	float ___yVelocity_51;
	// System.Single FirstPersonAIO::checkedSlope
	float ___checkedSlope_52;
	// System.Boolean FirstPersonAIO::isSprinting
	bool ___isSprinting_53;
	// UnityEngine.Rigidbody FirstPersonAIO::fps_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___fps_Rigidbody_54;
	// System.Boolean FirstPersonAIO::useHeadbob
	bool ___useHeadbob_55;
	// UnityEngine.Transform FirstPersonAIO::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_56;
	// System.Boolean FirstPersonAIO::snapHeadjointToCapsul
	bool ___snapHeadjointToCapsul_57;
	// System.Single FirstPersonAIO::headbobFrequency
	float ___headbobFrequency_58;
	// System.Single FirstPersonAIO::headbobSwayAngle
	float ___headbobSwayAngle_59;
	// System.Single FirstPersonAIO::headbobHeight
	float ___headbobHeight_60;
	// System.Single FirstPersonAIO::headbobSideMovement
	float ___headbobSideMovement_61;
	// System.Single FirstPersonAIO::jumpLandIntensity
	float ___jumpLandIntensity_62;
	// UnityEngine.Vector3 FirstPersonAIO::originalLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalLocalPosition_63;
	// System.Single FirstPersonAIO::nextStepTime
	float ___nextStepTime_64;
	// System.Single FirstPersonAIO::headbobCycle
	float ___headbobCycle_65;
	// System.Single FirstPersonAIO::headbobFade
	float ___headbobFade_66;
	// System.Single FirstPersonAIO::springPosition
	float ___springPosition_67;
	// System.Single FirstPersonAIO::springVelocity
	float ___springVelocity_68;
	// System.Single FirstPersonAIO::springElastic
	float ___springElastic_69;
	// System.Single FirstPersonAIO::springDampen
	float ___springDampen_70;
	// System.Single FirstPersonAIO::springVelocityThreshold
	float ___springVelocityThreshold_71;
	// System.Single FirstPersonAIO::springPositionThreshold
	float ___springPositionThreshold_72;
	// UnityEngine.Vector3 FirstPersonAIO::previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPosition_73;
	// UnityEngine.Vector3 FirstPersonAIO::previousVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousVelocity_74;
	// UnityEngine.Vector3 FirstPersonAIO::miscRefVel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___miscRefVel_75;
	// System.Boolean FirstPersonAIO::previousGrounded
	bool ___previousGrounded_76;
	// UnityEngine.AudioSource FirstPersonAIO::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_77;
	// System.Boolean FirstPersonAIO::enableAudioSFX
	bool ___enableAudioSFX_78;
	// System.Single FirstPersonAIO::Volume
	float ___Volume_79;
	// UnityEngine.AudioClip FirstPersonAIO::jumpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___jumpSound_80;
	// UnityEngine.AudioClip FirstPersonAIO::landSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___landSound_81;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO::footStepSounds
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___footStepSounds_82;
	// FirstPersonAIO/FSMode FirstPersonAIO::fsmode
	int32_t ___fsmode_83;
	// FirstPersonAIO/DynamicFootStep FirstPersonAIO::dynamicFootstep
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* ___dynamicFootstep_84;
};

// LevelChanger
struct LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator LevelChanger::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.Int32 LevelChanger::levelToLoad
	int32_t ___levelToLoad_5;
};

// LookAtTarget
struct LookAtTarget_t0C4C8B56D977A0B1EDE604D712836D5ED36CF375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform LookAtTarget::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// OpenLink
struct OpenLink_t998B6C053DAA659363EDEFBE6B7A95EE9B6A28FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Player::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.CharacterController Player::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_5;
	// System.Single Player::speed
	float ___speed_6;
	// System.Single Player::turnSpeed
	float ___turnSpeed_7;
	// UnityEngine.Vector3 Player::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_8;
	// System.Single Player::gravity
	float ___gravity_9;
};

// SkyboxSwitcher
struct SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] SkyboxSwitcher::mats
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___mats_4;
	// System.Int32 SkyboxSwitcher::current
	int32_t ___current_5;
	// System.String SkyboxSwitcher::message
	String_t* ___message_6;
};

// ThirdPersonCamera
struct ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ThirdPersonCamera::lookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAt_6;
	// UnityEngine.Transform ThirdPersonCamera::camTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTransform_7;
	// System.Single ThirdPersonCamera::distance
	float ___distance_8;
	// System.Single ThirdPersonCamera::currentX
	float ___currentX_9;
	// System.Single ThirdPersonCamera::currentY
	float ___currentY_10;
	// System.Single ThirdPersonCamera::sensitivityX
	float ___sensitivityX_11;
	// System.Single ThirdPersonCamera::sensitivityY
	float ___sensitivityY_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m0729D4449C742FB5D6A31C299881BAC4E90D7FE9_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FirstPersonAIO::set_IsGrounded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_AddComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m13C85FD585C0679530F8B35D0B39D965702FD0F5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* GameObject_AddComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1D199D3A55BF0356D541CB3048142A8D7E52521A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_set_uiScaleMode_m064C83FFA35E2AED4E9FA7D5EC1AD19630D8FC2A (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_pixelPerfect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_pixelPerfect_m4610F1B69D813E93BC21F06E0FC4981A509963A5 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_m78BA71B067808944CAC6214299A5E6BC85691F4E (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_dynamicFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_dynamicFriction_mF41FC9F0BB5E70CF1AD4322FE67745AD612D7197 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_staticFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_staticFriction_m737457B7A2346BFB5D05BC7322F2A49823243011 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_frictionCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_frictionCombine_m4F81ED0AC04BF634B0ACB33629CDB16C2ECBD28D (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_bounceCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounceCombine_m64DBF7D0F9C447DD5E0D19A6A24F0F5945C0BB1D (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void FirstPersonAIO::ControllerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_ControllerPause_m6F4F96831903F88B141A62735E7A943B7DB8183C (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::MoveTowards(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3870C7533B9A504401C5B5D30B512FCEA5719B55_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single FirstPersonAIO::SlopeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonAIO_SlopeCheck_m98D7C085881D9A98719921C4BF1FB1F6C8566F62 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mD06405572DA58E97C9FE8386C54EEEDF3DCD6E07 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean FirstPersonAIO::get_IsGrounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m13E11AB2C411C4043259CAEB91F6BC9A9E0209F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.PhysicMaterial>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>::Contains(T)
inline bool List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD (List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8*, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.AudioClip>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.Material>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(T)
inline bool List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
inline int32_t List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::set_Item(System.Int32,T)
inline void List_1_set_Item_m24A0089A857737AD75BC8658B9559CB66C04CC0A (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___index0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void FirstPersonAIO/<CameraShake>d__94::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94__ctor_m9DEC2E2E36C3793CD94AC4105459FBAD7A2BC521 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint UnityEngine.Collision::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Collision::get_contactCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collision_get_contactCount_m063F555F6D8E5D1BC995C69306041280CE8BF150 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAIO/CrouchModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrouchModifiers__ctor_m633D49C979960AE3D35E06D66EA69B70B30F950A (CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAIO/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m928AFC1085371C3CCC1E0A2320D0D2E0D4B91981 (AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAIO/DynamicFootStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicFootStep__ctor_mD5DACF1F7BF43B1D8020DE49CA256DD09D53736D (DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void LevelChanger::FadeToLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_FadeToLevel_m1267C2279BB668B39CFFEE821F497D516D60A033 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerPressed_m69CFBBBFCA8AB8D960F1EE7CF6D98AFA9D5F761F (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_mDC8FA4227BDD5F2D8D38C56B765CFBDDFD37573C (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m57C87EDB46D59270106748ABCF8D5AC5505B5067 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraScroll::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void CameraScroll::set_velocity(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A_inline (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<UnityEngine.Material>(System.String)
inline MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Resources_LoadAll_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mCCAD050FA4D1F38D705CCAA708CF427187C0FD58 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m0729D4449C742FB5D6A31C299881BAC4E90D7FE9_gshared)(___path0, method);
}
// System.Void SkyboxSwitcher::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher_Load_mF6209FD9DF286AFCE821A9D147AA04ED869E536A (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1E9AD091F9C98BEFECEB48E77CEB2BDE8ABA369B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollowObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollowObject_Awake_m14EE44D4A94472A05F130CB2F7B21DCAE375BDF5 (CameraFollowObject_tD26259C51588E97DC500731BB96C04BC0B4271B9* __this, const RuntimeMethod* method) 
{
	{
		// myTransform = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___myTransform_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTransform_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraFollowObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollowObject_Update_m8E1A18757D2531A39116DADA561940F41670A224 (CameraFollowObject_tD26259C51588E97DC500731BB96C04BC0B4271B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		// if (TargetObject != null && Enabled)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___TargetObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___Enabled_8;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00b9;
		}
	}
	{
		// Vector3 targetPosition = TargetObject.TransformPoint(Offset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___TargetObject_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___Offset_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		V_1 = L_6;
		// myTransform.position = Vector3.SmoothDamp(myTransform.position, targetPosition, ref velocity, MoveSmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___myTransform_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___myTransform_9;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___velocity_10);
		float L_12 = __this->___MoveSmoothTime_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_9, L_10, L_11, L_12, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_13, NULL);
		// if (RotationSpeed > 0)
		float L_14 = __this->___RotationSpeed_6;
		V_2 = (bool)((((float)L_14) > ((float)(0.0f)))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00b8;
		}
	}
	{
		// Quaternion targetRotation = Quaternion.LookRotation(TargetObject.position - myTransform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___TargetObject_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___myTransform_9;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_17, L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_20, NULL);
		V_3 = L_21;
		// this.transform.rotation = Quaternion.Slerp(myTransform.rotation, targetRotation, Time.deltaTime * RotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___myTransform_9;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_3;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_27 = __this->___RotationSpeed_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_24, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_28, NULL);
	}

IL_00b8:
	{
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void CameraFollowObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollowObject__ctor_m099891492EA377A36083F3FA0D55002990804F43 (CameraFollowObject_tD26259C51588E97DC500731BB96C04BC0B4271B9* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSmoothTime = 0.3F;
		__this->___MoveSmoothTime_5 = (0.300000012f);
		// public float RotationSpeed = 6f;
		__this->___RotationSpeed_6 = (6.0f);
		// public Vector3 Offset = new Vector3(0f, 15f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (15.0f), (0.0f), /*hidden argument*/NULL);
		__this->___Offset_7 = L_0;
		// public bool Enabled = true;
		__this->___Enabled_8 = (bool)1;
		// private Vector3 velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___velocity_10 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Doors::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Doors_OnTriggerEnter_m72DD13CD05D1962FCFA7372541CE8468C10BA9DB (Doors_t6968A795A842667118E468726FDC82FF10E86D1F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___coll0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(coll.tag=="Player"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___coll0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// GetComponent<Animator>().Play("Door_open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, _stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B, NULL);
		// this.enabled=false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Doors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Doors__ctor_m1EB3E190D5EAC32258BA48B6DA082CA9FF978C7F (Doors_t6968A795A842667118E468726FDC82FF10E86D1F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean FirstPersonAIO::get_IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = __this->___U3CIsGroundedU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void FirstPersonAIO::set_IsGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsGroundedU3Ek__BackingField_48 = L_0;
		return;
	}
}
// System.Void FirstPersonAIO::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Awake_mEF29AB2A19BA5E1688D67D97611AAC42EC3492A9 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// originalRotation = transform.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___originalRotation_26 = L_2;
		// walkSpeedInternal = walkSpeed;
		float L_3 = __this->___walkSpeed_29;
		__this->___walkSpeedInternal_42 = L_3;
		// sprintSpeedInternal = sprintSpeed;
		float L_4 = __this->___sprintSpeed_31;
		__this->___sprintSpeedInternal_43 = L_4;
		// jumpPowerInternal = jumpPower;
		float L_5 = __this->___jumpPower_32;
		__this->___jumpPowerInternal_44 = L_5;
		// capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6;
		L_6 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___capsule_47 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___capsule_47), (void*)L_6);
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline(__this, (bool)1, NULL);
		// isCrouching = false;
		__this->___isCrouching_50 = (bool)0;
		// fps_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___fps_Rigidbody_54 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fps_Rigidbody_54), (void*)L_7);
		// fps_Rigidbody.interpolation = RigidbodyInterpolation.Extrapolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___fps_Rigidbody_54;
		NullCheck(L_8);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_8, 2, NULL);
		// fps_Rigidbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___fps_Rigidbody_54;
		NullCheck(L_9);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_9, 1, NULL);
		// _crouchModifiers.colliderHeight = capsule.height;
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_10 = __this->____crouchModifiers_45;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_11 = __this->___capsule_47;
		NullCheck(L_11);
		float L_12;
		L_12 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_11, NULL);
		NullCheck(L_10);
		L_10->___colliderHeight_6 = L_12;
		// }
		return;
	}
}
// System.Void FirstPersonAIO::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Start_mB6609F56D1C65D9564A371A4684BAA933F5009A2 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1D199D3A55BF0356D541CB3048142A8D7E52521A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m13C85FD585C0679530F8B35D0B39D965702FD0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF21D1AFA791809AE91DC624664271989958A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_1 = NULL;
	bool V_2 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B13_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B12_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B14_1 = NULL;
	{
		// if(autoCrosshair || drawStaminaMeter){
		bool L_0 = __this->___autoCrosshair_17;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___drawStaminaMeter_18;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_024a;
		}
	}
	{
		// Canvas canvas = new GameObject("AutoCrosshair").AddComponent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral6BF21D1AFA791809AE91DC624664271989958A14, NULL);
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = GameObject_AddComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m13C85FD585C0679530F8B35D0B39D965702FD0F5(L_3, GameObject_AddComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m13C85FD585C0679530F8B35D0B39D965702FD0F5_RuntimeMethod_var);
		V_1 = L_4;
		// canvas.gameObject.AddComponent<CanvasScaler>().uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_7;
		L_7 = GameObject_AddComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1D199D3A55BF0356D541CB3048142A8D7E52521A(L_6, GameObject_AddComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1D199D3A55BF0356D541CB3048142A8D7E52521A_RuntimeMethod_var);
		NullCheck(L_7);
		CanvasScaler_set_uiScaleMode_m064C83FFA35E2AED4E9FA7D5EC1AD19630D8FC2A(L_7, 1, NULL);
		// canvas.renderMode = RenderMode.ScreenSpaceOverlay;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8 = V_1;
		NullCheck(L_8);
		Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47(L_8, 0, NULL);
		// canvas.pixelPerfect = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_1;
		NullCheck(L_9);
		Canvas_set_pixelPerfect_m4610F1B69D813E93BC21F06E0FC4981A509963A5(L_9, (bool)1, NULL);
		// canvas.transform.SetParent(playerCamera.transform);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___playerCamera_13;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_13, NULL);
		// canvas.transform.position = Vector3.zero;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
		// if(autoCrosshair){
		bool L_17 = __this->___autoCrosshair_17;
		V_2 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		// Image crossHair = new GameObject("Crosshair").AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_19, _stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233, NULL);
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20;
		L_20 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_19, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_3 = L_20;
		// crossHair.sprite = Crosshair;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = V_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = __this->___Crosshair_22;
		NullCheck(L_21);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_21, L_22, NULL);
		// crossHair.rectTransform.sizeDelta = new Vector2(25,25);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = V_3;
		NullCheck(L_23);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (25.0f), (25.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_24, L_25, NULL);
		// crossHair.transform.SetParent(canvas.transform);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = V_3;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_27);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_27, L_29, NULL);
		// crossHair.transform.position = Vector3.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = V_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
	}

IL_00db:
	{
		// if(drawStaminaMeter){
		bool L_33 = __this->___drawStaminaMeter_18;
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0249;
		}
	}
	{
		// StaminaMeterBG = new GameObject("StaminaMeter").AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_35, _stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE, NULL);
		NullCheck(L_35);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36;
		L_36 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_35, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		__this->___StaminaMeterBG_21 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StaminaMeterBG_21), (void*)L_36);
		// StaminaMeter = new GameObject("Meter").AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_37, _stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3, NULL);
		NullCheck(L_37);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38;
		L_38 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_37, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		__this->___StaminaMeter_20 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StaminaMeter_20), (void*)L_38);
		// StaminaMeter.transform.SetParent(StaminaMeterBG.transform);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___StaminaMeter_20;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___StaminaMeterBG_21;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_40);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_40, L_42, NULL);
		// StaminaMeterBG.transform.SetParent(canvas.transform);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___StaminaMeterBG_21;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_45 = V_1;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_44);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_44, L_46, NULL);
		// StaminaMeterBG.transform.position = Vector3.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = __this->___StaminaMeterBG_21;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_48);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_49, NULL);
		// StaminaMeterBG.rectTransform.anchorMax = new Vector2(0.5f,0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___StaminaMeterBG_21;
		NullCheck(L_50);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51;
		L_51 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_50, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_51, L_52, NULL);
		// StaminaMeterBG.rectTransform.anchorMin = new Vector2(0.5f,0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = __this->___StaminaMeterBG_21;
		NullCheck(L_53);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54;
		L_54 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_55), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_54);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_54, L_55, NULL);
		// StaminaMeterBG.rectTransform.anchoredPosition = new Vector2(0,15);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_56 = __this->___StaminaMeterBG_21;
		NullCheck(L_56);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57;
		L_57 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), (0.0f), (15.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_57, L_58, NULL);
		// StaminaMeterBG.rectTransform.sizeDelta = new Vector2(250,6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = __this->___StaminaMeterBG_21;
		NullCheck(L_59);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60;
		L_60 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_59, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (250.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_60, L_61, NULL);
		// StaminaMeterBG.color = new Color(0,0,0,0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___StaminaMeterBG_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		memset((&L_63), 0, sizeof(L_63));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_63), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_62);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_63);
		// StaminaMeter.rectTransform.sizeDelta = new Vector2(250,6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___StaminaMeter_20;
		NullCheck(L_64);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65;
		L_65 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_64, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (250.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_65);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_65, L_66, NULL);
		// StaminaMeter.color = new Color(0,0,0,0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___StaminaMeter_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68;
		memset((&L_68), 0, sizeof(L_68));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_68), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_67, L_68);
	}

IL_0249:
	{
	}

IL_024a:
	{
		// cameraStartingPosition = playerCamera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_69 = __this->___playerCamera_13;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_70, NULL);
		__this->___cameraStartingPosition_15 = L_71;
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		bool L_72 = __this->___lockAndHideCursor_12;
		V_5 = L_72;
		bool L_73 = V_5;
		if (!L_73)
		{
			goto IL_027c;
		}
	}
	{
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
	}

IL_027c:
	{
		// baseCamFOV = playerCamera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_74 = __this->___playerCamera_13;
		NullCheck(L_74);
		float L_75;
		L_75 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_74, NULL);
		__this->___baseCamFOV_16 = L_75;
		// capsule.radius = capsule.height/4;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_76 = __this->___capsule_47;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_77 = __this->___capsule_47;
		NullCheck(L_77);
		float L_78;
		L_78 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_77, NULL);
		NullCheck(L_76);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_76, ((float)(L_78/(4.0f))), NULL);
		// staminaInternal = staminaLevel;
		float L_79 = __this->___staminaLevel_39;
		__this->___staminaInternal_41 = L_79;
		// advanced.zeroFrictionMaterial = new PhysicMaterial("Zero_Friction");
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_80 = __this->___advanced_46;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_81 = (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*)il2cpp_codegen_object_new(PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		PhysicMaterial__ctor_m78BA71B067808944CAC6214299A5E6BC85691F4E(L_81, _stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206, NULL);
		NullCheck(L_80);
		L_80->___zeroFrictionMaterial_1 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&L_80->___zeroFrictionMaterial_1), (void*)L_81);
		// advanced.zeroFrictionMaterial.dynamicFriction =0;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_82 = __this->___advanced_46;
		NullCheck(L_82);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_83 = L_82->___zeroFrictionMaterial_1;
		NullCheck(L_83);
		PhysicMaterial_set_dynamicFriction_mF41FC9F0BB5E70CF1AD4322FE67745AD612D7197(L_83, (0.0f), NULL);
		// advanced.zeroFrictionMaterial.staticFriction =0;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_84 = __this->___advanced_46;
		NullCheck(L_84);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_85 = L_84->___zeroFrictionMaterial_1;
		NullCheck(L_85);
		PhysicMaterial_set_staticFriction_m737457B7A2346BFB5D05BC7322F2A49823243011(L_85, (0.0f), NULL);
		// advanced.zeroFrictionMaterial.frictionCombine = PhysicMaterialCombine.Minimum;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_86 = __this->___advanced_46;
		NullCheck(L_86);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_87 = L_86->___zeroFrictionMaterial_1;
		NullCheck(L_87);
		PhysicMaterial_set_frictionCombine_m4F81ED0AC04BF634B0ACB33629CDB16C2ECBD28D(L_87, 2, NULL);
		// advanced.zeroFrictionMaterial.bounceCombine = PhysicMaterialCombine.Minimum;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_88 = __this->___advanced_46;
		NullCheck(L_88);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_89 = L_88->___zeroFrictionMaterial_1;
		NullCheck(L_89);
		PhysicMaterial_set_bounceCombine_m64DBF7D0F9C447DD5E0D19A6A24F0F5945C0BB1D(L_89, 2, NULL);
		// advanced.highFrictionMaterial = new PhysicMaterial("Max_Friction");
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_90 = __this->___advanced_46;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_91 = (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*)il2cpp_codegen_object_new(PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		PhysicMaterial__ctor_m78BA71B067808944CAC6214299A5E6BC85691F4E(L_91, _stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965, NULL);
		NullCheck(L_90);
		L_90->___highFrictionMaterial_2 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&L_90->___highFrictionMaterial_2), (void*)L_91);
		// advanced.highFrictionMaterial.dynamicFriction =1;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_92 = __this->___advanced_46;
		NullCheck(L_92);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_93 = L_92->___highFrictionMaterial_2;
		NullCheck(L_93);
		PhysicMaterial_set_dynamicFriction_mF41FC9F0BB5E70CF1AD4322FE67745AD612D7197(L_93, (1.0f), NULL);
		// advanced.highFrictionMaterial.staticFriction =1;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_94 = __this->___advanced_46;
		NullCheck(L_94);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_95 = L_94->___highFrictionMaterial_2;
		NullCheck(L_95);
		PhysicMaterial_set_staticFriction_m737457B7A2346BFB5D05BC7322F2A49823243011(L_95, (1.0f), NULL);
		// advanced.highFrictionMaterial.frictionCombine = PhysicMaterialCombine.Maximum;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_96 = __this->___advanced_46;
		NullCheck(L_96);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_97 = L_96->___highFrictionMaterial_2;
		NullCheck(L_97);
		PhysicMaterial_set_frictionCombine_m4F81ED0AC04BF634B0ACB33629CDB16C2ECBD28D(L_97, 3, NULL);
		// advanced.highFrictionMaterial.bounceCombine = PhysicMaterialCombine.Average;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_98 = __this->___advanced_46;
		NullCheck(L_98);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_99 = L_98->___highFrictionMaterial_2;
		NullCheck(L_99);
		PhysicMaterial_set_bounceCombine_m64DBF7D0F9C447DD5E0D19A6A24F0F5945C0BB1D(L_99, 0, NULL);
		// originalLocalPosition = snapHeadjointToCapsul ? new Vector3(head.localPosition.x, (capsule.height/2)*head.localScale.y ,head.localPosition.z) : head.localPosition;
		bool L_100 = __this->___snapHeadjointToCapsul_57;
		G_B12_0 = __this;
		if (L_100)
		{
			G_B13_0 = __this;
			goto IL_0396;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->___head_56;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_101, NULL);
		G_B14_0 = L_102;
		G_B14_1 = G_B12_0;
		goto IL_03dd;
	}

IL_0396:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = __this->___head_56;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_103, NULL);
		float L_105 = L_104.___x_2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_106 = __this->___capsule_47;
		NullCheck(L_106);
		float L_107;
		L_107 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_106, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = __this->___head_56;
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_108, NULL);
		float L_110 = L_109.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111 = __this->___head_56;
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_111, NULL);
		float L_113 = L_112.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		memset((&L_114), 0, sizeof(L_114));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_114), L_105, ((float)il2cpp_codegen_multiply(((float)(L_107/(2.0f))), L_110)), L_113, /*hidden argument*/NULL);
		G_B14_0 = L_114;
		G_B14_1 = G_B13_0;
	}

IL_03dd:
	{
		NullCheck(G_B14_1);
		G_B14_1->___originalLocalPosition_63 = G_B14_0;
		// if(GetComponent<AudioSource>() == null) { gameObject.AddComponent<AudioSource>(); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_115;
		L_115 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_115, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_116;
		bool L_117 = V_6;
		if (!L_117)
		{
			goto IL_0402;
		}
	}
	{
		// if(GetComponent<AudioSource>() == null) { gameObject.AddComponent<AudioSource>(); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118;
		L_118 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_118);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_119;
		L_119 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_118, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
	}

IL_0402:
	{
		// previousPosition = fps_Rigidbody.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_120 = __this->___fps_Rigidbody_54;
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_120, NULL);
		__this->___previousPosition_73 = L_121;
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_122;
		L_122 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_77 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_77), (void*)L_122);
		// }
		return;
	}
}
// System.Void FirstPersonAIO::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Update_mAACD51D75F8183051092DC323564B925EA8A0FF9 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	float G_B12_0 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B20_0 = 0.0f;
	float G_B18_0 = 0.0f;
	float G_B19_0 = 0.0f;
	int32_t G_B21_0 = 0;
	float G_B21_1 = 0.0f;
	int32_t G_B38_0 = 0;
	int32_t G_B42_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B50_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B49_0 = NULL;
	int32_t G_B51_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B51_1 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B55_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B54_0 = NULL;
	int32_t G_B56_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B56_1 = NULL;
	{
		// if(enableCameraMovement && !controllerPauseState){
		bool L_0 = __this->___enableCameraMovement_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___controllerPauseState_4;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_031b;
		}
	}
	{
		// float mouseYInput = 0;
		V_1 = (0.0f);
		// float mouseXInput = 0;
		V_2 = (0.0f);
		// float camFOV = playerCamera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___playerCamera_13;
		NullCheck(L_3);
		float L_4;
		L_4 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_3, NULL);
		V_3 = L_4;
		// if (cameraInputMethod == CameraInputMethod.Traditional || cameraInputMethod == CameraInputMethod.TraditionalWithConstraints){
		int32_t L_5 = __this->___cameraInputMethod_7;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_6 = __this->___cameraInputMethod_7;
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_00a5;
		}
	}
	{
		// mouseYInput = mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.X ? Input.GetAxis("Mouse Y") : -Input.GetAxis("Mouse Y");
		int32_t L_8 = __this->___mouseInputInversion_6;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9 = __this->___mouseInputInversion_6;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		float L_10;
		L_10 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		G_B12_0 = ((-L_10));
		goto IL_0078;
	}

IL_006e:
	{
		float L_11;
		L_11 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		G_B12_0 = L_11;
	}

IL_0078:
	{
		V_1 = G_B12_0;
		// mouseXInput = mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.Y ? Input.GetAxis("Mouse X") : -Input.GetAxis("Mouse X");
		int32_t L_12 = __this->___mouseInputInversion_6;
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_13 = __this->___mouseInputInversion_6;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0097;
		}
	}
	{
		float L_14;
		L_14 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		G_B16_0 = ((-L_14));
		goto IL_00a1;
	}

IL_0097:
	{
		float L_15;
		L_15 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		G_B16_0 = L_15;
	}

IL_00a1:
	{
		V_2 = G_B16_0;
		goto IL_00c9;
	}

IL_00a5:
	{
		// mouseXInput= Input.GetAxis("Horizontal") * (mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.Y ? 1 : -1);
		float L_16;
		L_16 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		int32_t L_17 = __this->___mouseInputInversion_6;
		G_B18_0 = L_16;
		if (!L_17)
		{
			G_B20_0 = L_16;
			goto IL_00c4;
		}
	}
	{
		int32_t L_18 = __this->___mouseInputInversion_6;
		G_B19_0 = G_B18_0;
		if ((((int32_t)L_18) == ((int32_t)2)))
		{
			G_B20_0 = G_B18_0;
			goto IL_00c4;
		}
	}
	{
		G_B21_0 = (-1);
		G_B21_1 = G_B19_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_00c5:
	{
		V_2 = ((float)il2cpp_codegen_multiply(G_B21_1, ((float)G_B21_0)));
	}

IL_00c9:
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___targetAngles_23);
		float L_20 = L_19->___y_3;
		V_5 = (bool)((((float)L_20) > ((float)(180.0f)))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_010d;
		}
	}
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___targetAngles_23);
		float* L_23 = (&L_22->___y_3);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		*((float*)L_24) = (float)((float)il2cpp_codegen_subtract(L_25, (360.0f)));
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___followAngles_24);
		float* L_27 = (&L_26->___y_3);
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		*((float*)L_28) = (float)((float)il2cpp_codegen_subtract(L_29, (360.0f)));
		goto IL_014f;
	}

IL_010d:
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___targetAngles_23);
		float L_31 = L_30->___y_3;
		V_6 = (bool)((((float)L_31) < ((float)(-180.0f)))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_014f;
		}
	}
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___targetAngles_23);
		float* L_34 = (&L_33->___y_3);
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		*((float*)L_35) = (float)((float)il2cpp_codegen_add(L_36, (360.0f)));
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___followAngles_24);
		float* L_38 = (&L_37->___y_3);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, (360.0f)));
	}

IL_014f:
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___targetAngles_23);
		float L_42 = L_41->___x_2;
		V_7 = (bool)((((float)L_42) > ((float)(180.0f)))? 1 : 0);
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_0193;
		}
	}
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___targetAngles_23);
		float* L_45 = (&L_44->___x_2);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		*((float*)L_46) = (float)((float)il2cpp_codegen_subtract(L_47, (360.0f)));
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___followAngles_24);
		float* L_49 = (&L_48->___x_2);
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		*((float*)L_50) = (float)((float)il2cpp_codegen_subtract(L_51, (360.0f)));
		goto IL_01d5;
	}

IL_0193:
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_52 = (&__this->___targetAngles_23);
		float L_53 = L_52->___x_2;
		V_8 = (bool)((((float)L_53) < ((float)(-180.0f)))? 1 : 0);
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_01d5;
		}
	}
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = (&__this->___targetAngles_23);
		float* L_56 = (&L_55->___x_2);
		float* L_57 = L_56;
		float L_58 = *((float*)L_57);
		*((float*)L_57) = (float)((float)il2cpp_codegen_add(L_58, (360.0f)));
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = (&__this->___followAngles_24);
		float* L_60 = (&L_59->___x_2);
		float* L_61 = L_60;
		float L_62 = *((float*)L_61);
		*((float*)L_61) = (float)((float)il2cpp_codegen_add(L_62, (360.0f)));
	}

IL_01d5:
	{
		// targetAngles.y += mouseXInput * (mouseSensitivity - ((baseCamFOV-camFOV)*fOVToMouseSensitivity)/6f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63 = (&__this->___targetAngles_23);
		float* L_64 = (&L_63->___y_3);
		float* L_65 = L_64;
		float L_66 = *((float*)L_65);
		float L_67 = V_2;
		float L_68 = __this->___mouseSensitivity_9;
		float L_69 = __this->___baseCamFOV_16;
		float L_70 = V_3;
		float L_71 = __this->___fOVToMouseSensitivity_10;
		*((float*)L_65) = (float)((float)il2cpp_codegen_add(L_66, ((float)il2cpp_codegen_multiply(L_67, ((float)il2cpp_codegen_subtract(L_68, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_69, L_70)), L_71))/(6.0f)))))))));
		// if (cameraInputMethod == CameraInputMethod.Traditional){ targetAngles.x += mouseYInput * (mouseSensitivity - ((baseCamFOV - camFOV) * fOVToMouseSensitivity) / 6f);}
		int32_t L_72 = __this->___cameraInputMethod_7;
		V_9 = (bool)((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_9;
		if (!L_73)
		{
			goto IL_0242;
		}
	}
	{
		// if (cameraInputMethod == CameraInputMethod.Traditional){ targetAngles.x += mouseYInput * (mouseSensitivity - ((baseCamFOV - camFOV) * fOVToMouseSensitivity) / 6f);}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&__this->___targetAngles_23);
		float* L_75 = (&L_74->___x_2);
		float* L_76 = L_75;
		float L_77 = *((float*)L_76);
		float L_78 = V_1;
		float L_79 = __this->___mouseSensitivity_9;
		float L_80 = __this->___baseCamFOV_16;
		float L_81 = V_3;
		float L_82 = __this->___fOVToMouseSensitivity_10;
		*((float*)L_76) = (float)((float)il2cpp_codegen_add(L_77, ((float)il2cpp_codegen_multiply(L_78, ((float)il2cpp_codegen_subtract(L_79, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_80, L_81)), L_82))/(6.0f)))))))));
		goto IL_0254;
	}

IL_0242:
	{
		// else {targetAngles.x = 0f;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&__this->___targetAngles_23);
		L_83->___x_2 = (0.0f);
	}

IL_0254:
	{
		// targetAngles.x = Mathf.Clamp(targetAngles.x, -0.5f * verticalRotationRange, 0.5f * verticalRotationRange);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84 = (&__this->___targetAngles_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = (&__this->___targetAngles_23);
		float L_86 = L_85->___x_2;
		float L_87 = __this->___verticalRotationRange_8;
		float L_88 = __this->___verticalRotationRange_8;
		float L_89;
		L_89 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_86, ((float)il2cpp_codegen_multiply((-0.5f), L_87)), ((float)il2cpp_codegen_multiply((0.5f), L_88)), NULL);
		L_84->___x_2 = L_89;
		// followAngles = Vector3.SmoothDamp(followAngles, targetAngles, ref followVelocity, (cameraSmoothing)/100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = __this->___followAngles_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = __this->___targetAngles_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = (&__this->___followVelocity_25);
		float L_93 = __this->___cameraSmoothing_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_90, L_91, L_92, ((float)(L_93/(100.0f))), NULL);
		__this->___followAngles_24 = L_94;
		// playerCamera.transform.localRotation = Quaternion.Euler(-followAngles.x + originalRotation.x,0,0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_95 = __this->___playerCamera_13;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_97 = (&__this->___followAngles_24);
		float L_98 = L_97->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = (&__this->___originalRotation_26);
		float L_100 = L_99->___x_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
		L_101 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((float)il2cpp_codegen_add(((-L_98)), L_100)), (0.0f), (0.0f), NULL);
		NullCheck(L_96);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_96, L_101, NULL);
		// transform.localRotation =  Quaternion.Euler(0, followAngles.y+originalRotation.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = (&__this->___followAngles_24);
		float L_104 = L_103->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_105 = (&__this->___originalRotation_26);
		float L_106 = L_105->___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)il2cpp_codegen_add(L_104, L_106)), (0.0f), NULL);
		NullCheck(L_102);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_102, L_107, NULL);
	}

IL_031b:
	{
		// if(canHoldJump ? (canJump && Input.GetButton("Jump")) : (Input.GetButtonDown("Jump") && canJump) ){
		bool L_108 = __this->___canHoldJump_34;
		if (L_108)
		{
			goto IL_033a;
		}
	}
	{
		bool L_109;
		L_109 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_109)
		{
			goto IL_0337;
		}
	}
	{
		bool L_110 = __this->___canJump_33;
		G_B38_0 = ((int32_t)(L_110));
		goto IL_0338;
	}

IL_0337:
	{
		G_B38_0 = 0;
	}

IL_0338:
	{
		G_B42_0 = G_B38_0;
		goto IL_034f;
	}

IL_033a:
	{
		bool L_111 = __this->___canJump_33;
		if (!L_111)
		{
			goto IL_034e;
		}
	}
	{
		bool L_112;
		L_112 = Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		G_B42_0 = ((int32_t)(L_112));
		goto IL_034f;
	}

IL_034e:
	{
		G_B42_0 = 0;
	}

IL_034f:
	{
		V_10 = (bool)G_B42_0;
		bool L_113 = V_10;
		if (!L_113)
		{
			goto IL_0360;
		}
	}
	{
		// jumpInput = true;
		__this->___jumpInput_35 = (bool)1;
		goto IL_0379;
	}

IL_0360:
	{
		// }else if(Input.GetButtonUp("Jump")){jumpInput = false;}
		bool L_114;
		L_114 = Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		V_11 = L_114;
		bool L_115 = V_11;
		if (!L_115)
		{
			goto IL_0379;
		}
	}
	{
		// }else if(Input.GetButtonUp("Jump")){jumpInput = false;}
		__this->___jumpInput_35 = (bool)0;
	}

IL_0379:
	{
		// if(_crouchModifiers.useCrouch){
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_116 = __this->____crouchModifiers_45;
		NullCheck(L_116);
		bool L_117 = L_116->___useCrouch_0;
		V_12 = L_117;
		bool L_118 = V_12;
		if (!L_118)
		{
			goto IL_03fe;
		}
	}
	{
		// if(!_crouchModifiers.toggleCrouch){ isCrouching = _crouchModifiers.crouchOverride || Input.GetKey(_crouchModifiers.crouchKey);}
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_119 = __this->____crouchModifiers_45;
		NullCheck(L_119);
		bool L_120 = L_119->___toggleCrouch_1;
		V_13 = (bool)((((int32_t)L_120) == ((int32_t)0))? 1 : 0);
		bool L_121 = V_13;
		if (!L_121)
		{
			goto IL_03c9;
		}
	}
	{
		// if(!_crouchModifiers.toggleCrouch){ isCrouching = _crouchModifiers.crouchOverride || Input.GetKey(_crouchModifiers.crouchKey);}
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_122 = __this->____crouchModifiers_45;
		NullCheck(L_122);
		bool L_123 = L_122->___crouchOverride_5;
		G_B49_0 = __this;
		if (L_123)
		{
			G_B50_0 = __this;
			goto IL_03c0;
		}
	}
	{
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_124 = __this->____crouchModifiers_45;
		NullCheck(L_124);
		int32_t L_125 = L_124->___crouchKey_2;
		bool L_126;
		L_126 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_125, NULL);
		G_B51_0 = ((int32_t)(L_126));
		G_B51_1 = G_B49_0;
		goto IL_03c1;
	}

IL_03c0:
	{
		G_B51_0 = 1;
		G_B51_1 = G_B50_0;
	}

IL_03c1:
	{
		NullCheck(G_B51_1);
		G_B51_1->___isCrouching_50 = (bool)G_B51_0;
		goto IL_03fd;
	}

IL_03c9:
	{
		// else if(Input.GetKeyDown(_crouchModifiers.crouchKey)){isCrouching = !isCrouching || _crouchModifiers.crouchOverride;}
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_127 = __this->____crouchModifiers_45;
		NullCheck(L_127);
		int32_t L_128 = L_127->___crouchKey_2;
		bool L_129;
		L_129 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_128, NULL);
		V_14 = L_129;
		bool L_130 = V_14;
		if (!L_130)
		{
			goto IL_03fd;
		}
	}
	{
		// else if(Input.GetKeyDown(_crouchModifiers.crouchKey)){isCrouching = !isCrouching || _crouchModifiers.crouchOverride;}
		bool L_131 = __this->___isCrouching_50;
		G_B54_0 = __this;
		if (!L_131)
		{
			G_B55_0 = __this;
			goto IL_03f6;
		}
	}
	{
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_132 = __this->____crouchModifiers_45;
		NullCheck(L_132);
		bool L_133 = L_132->___crouchOverride_5;
		G_B56_0 = ((int32_t)(L_133));
		G_B56_1 = G_B54_0;
		goto IL_03f7;
	}

IL_03f6:
	{
		G_B56_0 = 1;
		G_B56_1 = G_B55_0;
	}

IL_03f7:
	{
		NullCheck(G_B56_1);
		G_B56_1->___isCrouching_50 = (bool)G_B56_0;
	}

IL_03fd:
	{
	}

IL_03fe:
	{
		// if(Input.GetButtonDown("Cancel")){ControllerPause();}
		bool L_134;
		L_134 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, NULL);
		V_15 = L_134;
		bool L_135 = V_15;
		if (!L_135)
		{
			goto IL_0417;
		}
	}
	{
		// if(Input.GetButtonDown("Cancel")){ControllerPause();}
		FirstPersonAIO_ControllerPause_m6F4F96831903F88B141A62735E7A943B7DB8183C(__this, NULL);
	}

IL_0417:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_FixedUpdate_m3110CA2A33AE75E1E0D8BF12610F530B07952892 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m24A0089A857737AD75BC8658B9559CB66C04CC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_42;
	memset((&V_42), 0, sizeof(V_42));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_43;
	memset((&V_43), 0, sizeof(V_43));
	bool V_44 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_45;
	memset((&V_45), 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	float V_49 = 0.0f;
	bool V_50 = false;
	bool V_51 = false;
	bool V_52 = false;
	bool V_53 = false;
	bool V_54 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_55;
	memset((&V_55), 0, sizeof(V_55));
	bool V_56 = false;
	bool V_57 = false;
	bool V_58 = false;
	bool V_59 = false;
	bool V_60 = false;
	bool V_61 = false;
	bool V_62 = false;
	bool V_63 = false;
	bool V_64 = false;
	bool V_65 = false;
	bool V_66 = false;
	bool V_67 = false;
	bool V_68 = false;
	bool V_69 = false;
	int32_t V_70 = 0;
	bool V_71 = false;
	bool V_72 = false;
	bool V_73 = false;
	bool V_74 = false;
	bool V_75 = false;
	bool V_76 = false;
	bool V_77 = false;
	int32_t V_78 = 0;
	bool V_79 = false;
	bool V_80 = false;
	bool V_81 = false;
	bool V_82 = false;
	bool V_83 = false;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B8_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B2_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B3_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B4_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B6_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B9_1 = NULL;
	int32_t G_B19_0 = 0;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B32_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B28_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B30_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B29_0 = NULL;
	float G_B31_0 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B31_1 = NULL;
	float G_B38_0 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B38_1 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B37_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B33_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B35_0 = NULL;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B34_0 = NULL;
	float G_B36_0 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B36_1 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B49_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B53_0;
	memset((&G_B53_0), 0, sizeof(G_B53_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B52_0;
	memset((&G_B52_0), 0, sizeof(G_B52_0));
	float G_B54_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B54_1;
	memset((&G_B54_1), 0, sizeof(G_B54_1));
	int32_t G_B61_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	float G_B80_0 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B80_1 = NULL;
	float G_B79_0 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B79_1 = NULL;
	float G_B81_0 = 0.0f;
	float G_B81_1 = 0.0f;
	FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* G_B81_2 = NULL;
	int32_t G_B90_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B102_0 = 0;
	int32_t G_B108_0 = 0;
	int32_t G_B116_0 = 0;
	int32_t G_B120_0 = 0;
	int32_t G_B134_0 = 0;
	int32_t G_B138_0 = 0;
	int32_t G_B143_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B157_0;
	memset((&G_B157_0), 0, sizeof(G_B157_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B157_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B156_0;
	memset((&G_B156_0), 0, sizeof(G_B156_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B156_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B158_0;
	memset((&G_B158_0), 0, sizeof(G_B158_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B158_1;
	memset((&G_B158_1), 0, sizeof(G_B158_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B158_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B161_0;
	memset((&G_B161_0), 0, sizeof(G_B161_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B161_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B160_0;
	memset((&G_B160_0), 0, sizeof(G_B160_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B160_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B162_0;
	memset((&G_B162_0), 0, sizeof(G_B162_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B162_1;
	memset((&G_B162_1), 0, sizeof(G_B162_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B162_2 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B171_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B169_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B170_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B202_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B174_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B172_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B173_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B200_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B177_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B175_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B176_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B198_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B180_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B178_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B179_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B196_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B183_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B181_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B182_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B194_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B186_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B184_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B185_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B192_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B189_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B187_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B188_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B190_0 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B191_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B191_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B193_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B193_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B195_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B195_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B197_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B197_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B199_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B199_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B201_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B201_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B203_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B203_1 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B208_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B206_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B207_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B242_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B211_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B209_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B210_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B240_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B214_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B212_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B213_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B238_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B217_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B215_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B216_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B236_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B220_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B218_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B219_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B234_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B223_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B221_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B222_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B232_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B226_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B224_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B225_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B230_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B228_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B227_0 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B229_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B229_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B231_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B231_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B233_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B233_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B235_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B235_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B237_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B237_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B239_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B239_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B241_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B241_1 = NULL;
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* G_B243_0 = NULL;
	DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* G_B243_1 = NULL;
	int32_t G_B288_0 = 0;
	int32_t G_B305_0 = 0;
	{
		// if(useStamina){
		bool L_0 = __this->___useStamina_37;
		V_12 = L_0;
		bool L_1 = V_12;
		if (!L_1)
		{
			goto IL_0328;
		}
	}
	{
		// isSprinting = Input.GetKey(sprintKey) && !isCrouching && staminaInternal > 0 && (Mathf.Abs(fps_Rigidbody.velocity.x) > 0.01f || Mathf.Abs(fps_Rigidbody.velocity.z) > 0.01f);
		int32_t L_2 = __this->___sprintKey_30;
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_2, NULL);
		G_B2_0 = __this;
		if (!L_3)
		{
			G_B8_0 = __this;
			goto IL_0071;
		}
	}
	{
		bool L_4 = __this->___isCrouching_50;
		G_B3_0 = G_B2_0;
		if (L_4)
		{
			G_B8_0 = G_B2_0;
			goto IL_0071;
		}
	}
	{
		float L_5 = __this->___staminaInternal_41;
		G_B4_0 = G_B3_0;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			G_B8_0 = G_B3_0;
			goto IL_0071;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___fps_Rigidbody_54;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9;
		L_9 = fabsf(L_8);
		G_B5_0 = G_B4_0;
		if ((((float)L_9) > ((float)(0.00999999978f))))
		{
			G_B6_0 = G_B4_0;
			goto IL_006e;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___fps_Rigidbody_54;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___z_4;
		float L_13;
		L_13 = fabsf(L_12);
		G_B7_0 = ((((float)L_13) > ((float)(0.00999999978f)))? 1 : 0);
		G_B7_1 = G_B5_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_006f:
	{
		G_B9_0 = G_B7_0;
		G_B9_1 = G_B7_1;
		goto IL_0072;
	}

IL_0071:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0072:
	{
		NullCheck(G_B9_1);
		G_B9_1->___isSprinting_53 = (bool)G_B9_0;
		// if(isSprinting){
		bool L_14 = __this->___isSprinting_53;
		V_13 = L_14;
		bool L_15 = V_13;
		if (!L_15)
		{
			goto IL_0142;
		}
	}
	{
		// staminaInternal -= (staminaDepletionSpeed*2)*Time.deltaTime;
		float L_16 = __this->___staminaInternal_41;
		float L_17 = __this->___staminaDepletionSpeed_38;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___staminaInternal_41 = ((float)il2cpp_codegen_subtract(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (2.0f))), L_18))));
		// if(drawStaminaMeter){
		bool L_19 = __this->___drawStaminaMeter_18;
		V_14 = L_19;
		bool L_20 = V_14;
		if (!L_20)
		{
			goto IL_013f;
		}
	}
	{
		// StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0.5f),0.15f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___StaminaMeterBG_21;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___StaminaMeterBG_21;
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		L_24 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_23, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_25), (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline(L_24, L_25, (0.150000006f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_26, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_27);
		// StaminaMeter.color = Vector4.MoveTowards(StaminaMeter.color, new Vector4(1,1,1,1),0.15f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___StaminaMeter_20;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___StaminaMeter_20;
		NullCheck(L_29);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_29);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		L_31 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_30, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_32), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		L_33 = Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline(L_31, L_32, (0.150000006f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_33, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_34);
	}

IL_013f:
	{
		goto IL_01c1;
	}

IL_0142:
	{
		// }else if((!Input.GetKey(sprintKey)||Mathf.Abs(fps_Rigidbody.velocity.x)< 0.01f || Mathf.Abs(fps_Rigidbody.velocity.z)< 0.01f || isCrouching)&&staminaInternal<staminaLevel){
		int32_t L_35 = __this->___sprintKey_30;
		bool L_36;
		L_36 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_35, NULL);
		if (!L_36)
		{
			goto IL_018f;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = __this->___fps_Rigidbody_54;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_37, NULL);
		float L_39 = L_38.___x_2;
		float L_40;
		L_40 = fabsf(L_39);
		if ((((float)L_40) < ((float)(0.00999999978f))))
		{
			goto IL_018f;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = __this->___fps_Rigidbody_54;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_41, NULL);
		float L_43 = L_42.___z_4;
		float L_44;
		L_44 = fabsf(L_43);
		if ((((float)L_44) < ((float)(0.00999999978f))))
		{
			goto IL_018f;
		}
	}
	{
		bool L_45 = __this->___isCrouching_50;
		if (!L_45)
		{
			goto IL_019f;
		}
	}

IL_018f:
	{
		float L_46 = __this->___staminaInternal_41;
		float L_47 = __this->___staminaLevel_39;
		G_B19_0 = ((((float)L_46) < ((float)L_47))? 1 : 0);
		goto IL_01a0;
	}

IL_019f:
	{
		G_B19_0 = 0;
	}

IL_01a0:
	{
		V_15 = (bool)G_B19_0;
		bool L_48 = V_15;
		if (!L_48)
		{
			goto IL_01c1;
		}
	}
	{
		// staminaInternal += staminaDepletionSpeed*Time.deltaTime;
		float L_49 = __this->___staminaInternal_41;
		float L_50 = __this->___staminaDepletionSpeed_38;
		float L_51;
		L_51 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___staminaInternal_41 = ((float)il2cpp_codegen_add(L_49, ((float)il2cpp_codegen_multiply(L_50, L_51))));
	}

IL_01c1:
	{
		// if(drawStaminaMeter){
		bool L_52 = __this->___drawStaminaMeter_18;
		V_16 = L_52;
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_0309;
		}
	}
	{
		// if(staminaInternal==staminaLevel){ StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0),0.15f);
		float L_54 = __this->___staminaInternal_41;
		float L_55 = __this->___staminaLevel_39;
		V_18 = (bool)((((float)L_54) == ((float)L_55))? 1 : 0);
		bool L_56 = V_18;
		if (!L_56)
		{
			goto IL_0272;
		}
	}
	{
		// if(staminaInternal==staminaLevel){ StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0),0.15f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = __this->___StaminaMeterBG_21;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = __this->___StaminaMeterBG_21;
		NullCheck(L_58);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_58);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60;
		L_60 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_59, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_61), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62;
		L_62 = Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline(L_60, L_61, (0.150000006f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_62, NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_63);
		// StaminaMeter.color = Vector4.MoveTowards(StaminaMeter.color, new Vector4(1,1,1,0),0.15f);}
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___StaminaMeter_20;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_65 = __this->___StaminaMeter_20;
		NullCheck(L_65);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_65);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_67;
		L_67 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_66, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_68), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69;
		L_69 = Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline(L_67, L_68, (0.150000006f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70;
		L_70 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_69, NULL);
		NullCheck(L_64);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_64, L_70);
	}

IL_0272:
	{
		// float x = Mathf.Clamp(Mathf.SmoothDamp(StaminaMeter.transform.localScale.x,(staminaInternal/staminaLevel)*StaminaMeterBG.transform.localScale.x,ref smoothRef,(1)*Time.deltaTime,1),0.001f, StaminaMeterBG.transform.localScale.x);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___StaminaMeter_20;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_71, NULL);
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_72, NULL);
		float L_74 = L_73.___x_2;
		float L_75 = __this->___staminaInternal_41;
		float L_76 = __this->___staminaLevel_39;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_77 = __this->___StaminaMeterBG_21;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_78, NULL);
		float L_80 = L_79.___x_2;
		float* L_81 = (&__this->___smoothRef_19);
		float L_82;
		L_82 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_83;
		L_83 = Mathf_SmoothDamp_m3870C7533B9A504401C5B5D30B512FCEA5719B55_inline(L_74, ((float)il2cpp_codegen_multiply(((float)(L_75/L_76)), L_80)), L_81, ((float)il2cpp_codegen_multiply((1.0f), L_82)), (1.0f), NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_84 = __this->___StaminaMeterBG_21;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_85, NULL);
		float L_87 = L_86.___x_2;
		float L_88;
		L_88 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_83, (0.00100000005f), L_87, NULL);
		V_17 = L_88;
		// StaminaMeter.transform.localScale = new Vector3(x,1,1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_89 = __this->___StaminaMeter_20;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_89, NULL);
		float L_91 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_92), L_91, (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_90, L_92, NULL);
	}

IL_0309:
	{
		// staminaInternal = Mathf.Clamp(staminaInternal,0,staminaLevel);
		float L_93 = __this->___staminaInternal_41;
		float L_94 = __this->___staminaLevel_39;
		float L_95;
		L_95 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_93, (0.0f), L_94, NULL);
		__this->___staminaInternal_41 = L_95;
		goto IL_033b;
	}

IL_0328:
	{
		// } else{isSprinting = Input.GetKey(sprintKey);}
		int32_t L_96 = __this->___sprintKey_30;
		bool L_97;
		L_97 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_96, NULL);
		__this->___isSprinting_53 = L_97;
	}

IL_033b:
	{
		// Vector3 MoveDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_98;
		// speed = walkByDefault ? isCrouching ? walkSpeedInternal : (isSprinting ? sprintSpeedInternal : walkSpeedInternal) : (isSprinting ? walkSpeedInternal : sprintSpeedInternal);
		bool L_99 = __this->___walkByDefault_28;
		G_B28_0 = __this;
		if (L_99)
		{
			G_B32_0 = __this;
			goto IL_0362;
		}
	}
	{
		bool L_100 = __this->___isSprinting_53;
		G_B29_0 = G_B28_0;
		if (L_100)
		{
			G_B30_0 = G_B28_0;
			goto IL_035a;
		}
	}
	{
		float L_101 = __this->___sprintSpeedInternal_43;
		G_B31_0 = L_101;
		G_B31_1 = G_B29_0;
		goto IL_0360;
	}

IL_035a:
	{
		float L_102 = __this->___walkSpeedInternal_42;
		G_B31_0 = L_102;
		G_B31_1 = G_B30_0;
	}

IL_0360:
	{
		G_B38_0 = G_B31_0;
		G_B38_1 = G_B31_1;
		goto IL_0388;
	}

IL_0362:
	{
		bool L_103 = __this->___isCrouching_50;
		G_B33_0 = G_B32_0;
		if (L_103)
		{
			G_B37_0 = G_B32_0;
			goto IL_0382;
		}
	}
	{
		bool L_104 = __this->___isSprinting_53;
		G_B34_0 = G_B33_0;
		if (L_104)
		{
			G_B35_0 = G_B33_0;
			goto IL_037a;
		}
	}
	{
		float L_105 = __this->___walkSpeedInternal_42;
		G_B36_0 = L_105;
		G_B36_1 = G_B34_0;
		goto IL_0380;
	}

IL_037a:
	{
		float L_106 = __this->___sprintSpeedInternal_43;
		G_B36_0 = L_106;
		G_B36_1 = G_B35_0;
	}

IL_0380:
	{
		G_B38_0 = G_B36_0;
		G_B38_1 = G_B36_1;
		goto IL_0388;
	}

IL_0382:
	{
		float L_107 = __this->___walkSpeedInternal_42;
		G_B38_0 = L_107;
		G_B38_1 = G_B37_0;
	}

IL_0388:
	{
		NullCheck(G_B38_1);
		G_B38_1->___speed_40 = G_B38_0;
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_108 = __this->___advanced_46;
		NullCheck(L_108);
		float L_109 = L_108->___maxSlopeAngle_3;
		V_19 = (bool)((((float)L_109) > ((float)(0.0f)))? 1 : 0);
		bool L_110 = V_19;
		if (!L_110)
		{
			goto IL_0509;
		}
	}
	{
		// if(advanced.isTouchingUpright && advanced.isTouchingWalkable){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_111 = __this->___advanced_46;
		NullCheck(L_111);
		bool L_112 = L_111->___isTouchingUpright_5;
		if (!L_112)
		{
			goto IL_03c3;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_113 = __this->___advanced_46;
		NullCheck(L_113);
		bool L_114 = L_113->___isTouchingWalkable_4;
		G_B42_0 = ((int32_t)(L_114));
		goto IL_03c4;
	}

IL_03c3:
	{
		G_B42_0 = 0;
	}

IL_03c4:
	{
		V_20 = (bool)G_B42_0;
		bool L_115 = V_20;
		if (!L_115)
		{
			goto IL_0442;
		}
	}
	{
		// MoveDirection = (transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_116, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_118 = (&__this->___inputXY_49);
		float L_119 = L_118->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_117, L_119, NULL);
		float L_121 = __this->___speed_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_120, L_121, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_123, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_125 = (&__this->___inputXY_49);
		float L_126 = L_125->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_124, L_126, NULL);
		float L_128 = __this->___walkSpeedInternal_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_127, L_128, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_122, L_129, NULL);
		V_0 = L_130;
		// if(!didJump){fps_Rigidbody.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotation;}
		bool L_131 = __this->___didJump_36;
		V_21 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_21;
		if (!L_132)
		{
			goto IL_043c;
		}
	}
	{
		// if(!didJump){fps_Rigidbody.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotation;}
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_133 = __this->___fps_Rigidbody_54;
		NullCheck(L_133);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_133, ((int32_t)116), NULL);
	}

IL_043c:
	{
		goto IL_0506;
	}

IL_0442:
	{
		// else if(advanced.isTouchingUpright && !advanced.isTouchingWalkable){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_134 = __this->___advanced_46;
		NullCheck(L_134);
		bool L_135 = L_134->___isTouchingUpright_5;
		if (!L_135)
		{
			goto IL_045f;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_136 = __this->___advanced_46;
		NullCheck(L_136);
		bool L_137 = L_136->___isTouchingWalkable_4;
		G_B49_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_0460;
	}

IL_045f:
	{
		G_B49_0 = 0;
	}

IL_0460:
	{
		V_22 = (bool)G_B49_0;
		bool L_138 = V_22;
		if (!L_138)
		{
			goto IL_047b;
		}
	}
	{
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_139 = __this->___fps_Rigidbody_54;
		NullCheck(L_139);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_139, ((int32_t)112), NULL);
		goto IL_0506;
	}

IL_047b:
	{
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_140 = __this->___fps_Rigidbody_54;
		NullCheck(L_140);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_140, ((int32_t)112), NULL);
		// MoveDirection = ((transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal) * (fps_Rigidbody.velocity.y>0.01f ? SlopeCheck() : 0.8f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_141);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_141, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_143 = (&__this->___inputXY_49);
		float L_144 = L_143->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_142, L_144, NULL);
		float L_146 = __this->___speed_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_145, L_146, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_148, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_150 = (&__this->___inputXY_49);
		float L_151 = L_150->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_149, L_151, NULL);
		float L_153 = __this->___walkSpeedInternal_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_152, L_153, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_147, L_154, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_156 = __this->___fps_Rigidbody_54;
		NullCheck(L_156);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_156, NULL);
		float L_158 = L_157.___y_3;
		G_B52_0 = L_155;
		if ((((float)L_158) > ((float)(0.00999999978f))))
		{
			G_B53_0 = L_155;
			goto IL_04f9;
		}
	}
	{
		G_B54_0 = (0.800000012f);
		G_B54_1 = G_B52_0;
		goto IL_04ff;
	}

IL_04f9:
	{
		float L_159;
		L_159 = FirstPersonAIO_SlopeCheck_m98D7C085881D9A98719921C4BF1FB1F6C8566F62(__this, NULL);
		G_B54_0 = L_159;
		G_B54_1 = G_B53_0;
	}

IL_04ff:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B54_1, G_B54_0, NULL);
		V_0 = L_160;
	}

IL_0506:
	{
		goto IL_055d;
	}

IL_0509:
	{
		// MoveDirection = (transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161;
		L_161 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_161);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_161, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_163 = (&__this->___inputXY_49);
		float L_164 = L_163->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_162, L_164, NULL);
		float L_166 = __this->___speed_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_165, L_166, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168;
		L_168 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_168);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_168, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_170 = (&__this->___inputXY_49);
		float L_171 = L_170->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_169, L_171, NULL);
		float L_173 = __this->___walkSpeedInternal_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_172, L_173, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_167, L_174, NULL);
		V_0 = L_175;
	}

IL_055d:
	{
		// if(advanced.maxStepHeight > 0 && Physics.Raycast(transform.position - new Vector3(0,((capsule.height/2)*transform.localScale.y)-0.01f,0),MoveDirection,out WT,capsule.radius+0.15f,Physics.AllLayers,QueryTriggerInteraction.Ignore) && Vector3.Angle(WT.normal, Vector3.up)>88){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_176 = __this->___advanced_46;
		NullCheck(L_176);
		float L_177 = L_176->___maxStepHeight_8;
		if ((!(((float)L_177) > ((float)(0.0f)))))
		{
			goto IL_05ed;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_178;
		L_178 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_178);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
		L_179 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_178, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_180 = __this->___capsule_47;
		NullCheck(L_180);
		float L_181;
		L_181 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_180, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_182;
		L_182 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_182);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_182, NULL);
		float L_184 = L_183.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_185), (0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_181/(2.0f))), L_184)), (0.00999999978f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
		L_186 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_179, L_185, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = V_0;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_188 = __this->___capsule_47;
		NullCheck(L_188);
		float L_189;
		L_189 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_188, NULL);
		bool L_190;
		L_190 = Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210(L_186, L_187, (&V_1), ((float)il2cpp_codegen_add(L_189, (0.150000006f))), (-1), 1, NULL);
		if (!L_190)
		{
			goto IL_05ed;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191;
		L_191 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_193;
		L_193 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_191, L_192, NULL);
		G_B61_0 = ((((float)L_193) > ((float)(88.0f)))? 1 : 0);
		goto IL_05ee;
	}

IL_05ed:
	{
		G_B61_0 = 0;
	}

IL_05ee:
	{
		V_23 = (bool)G_B61_0;
		bool L_194 = V_23;
		if (!L_194)
		{
			goto IL_06af;
		}
	}
	{
		// if(!Physics.Raycast(transform.position - new Vector3(0,((capsule.height/2)*transform.localScale.y)-(advanced.maxStepHeight),0),MoveDirection,out ST,capsule.radius+0.25f,Physics.AllLayers,QueryTriggerInteraction.Ignore)){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_195;
		L_195 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_195);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196;
		L_196 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_195, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_197 = __this->___capsule_47;
		NullCheck(L_197);
		float L_198;
		L_198 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_197, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_199;
		L_199 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_199, NULL);
		float L_201 = L_200.___y_3;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_202 = __this->___advanced_46;
		NullCheck(L_202);
		float L_203 = L_202->___maxStepHeight_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204;
		memset((&L_204), 0, sizeof(L_204));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_204), (0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)(L_198/(2.0f))), L_201)), L_203)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		L_205 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_196, L_204, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = V_0;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_207 = __this->___capsule_47;
		NullCheck(L_207);
		float L_208;
		L_208 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_207, NULL);
		bool L_209;
		L_209 = Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210(L_205, L_206, (&V_24), ((float)il2cpp_codegen_add(L_208, (0.25f))), (-1), 1, NULL);
		V_25 = (bool)((((int32_t)L_209) == ((int32_t)0))? 1 : 0);
		bool L_210 = V_25;
		if (!L_210)
		{
			goto IL_06ae;
		}
	}
	{
		// advanced.stairMiniHop = true;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_211 = __this->___advanced_46;
		NullCheck(L_211);
		L_211->___stairMiniHop_9 = (bool)1;
		// transform.position += new Vector3(0,advanced.maxStepHeight*1.2f,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_213 = L_212;
		NullCheck(L_213);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214;
		L_214 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_213, NULL);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_215 = __this->___advanced_46;
		NullCheck(L_215);
		float L_216 = L_215->___maxStepHeight_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_217;
		memset((&L_217), 0, sizeof(L_217));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_217), (0.0f), ((float)il2cpp_codegen_multiply(L_216, (1.20000005f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218;
		L_218 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_214, L_217, NULL);
		NullCheck(L_213);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_213, L_218, NULL);
	}

IL_06ae:
	{
	}

IL_06af:
	{
		// Debug.DrawRay(transform.position, MoveDirection,Color.red,0,false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_219;
		L_219 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_219);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		L_220 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_219, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_222;
		L_222 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mD06405572DA58E97C9FE8386C54EEEDF3DCD6E07(L_220, L_221, L_222, (0.0f), (bool)0, NULL);
		// float horizontalInput = Input.GetAxis("Horizontal");
		float L_223;
		L_223 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_2 = L_223;
		// float verticalInput = Input.GetAxis("Vertical");
		float L_224;
		L_224 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_3 = L_224;
		// inputXY = new Vector2(horizontalInput, verticalInput);
		float L_225 = V_2;
		float L_226 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_227;
		memset((&L_227), 0, sizeof(L_227));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_227), L_225, L_226, /*hidden argument*/NULL);
		__this->___inputXY_49 = L_227;
		// if(inputXY.magnitude > 1) { inputXY.Normalize(); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_228 = (&__this->___inputXY_49);
		float L_229;
		L_229 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_228, NULL);
		V_26 = (bool)((((float)L_229) > ((float)(1.0f)))? 1 : 0);
		bool L_230 = V_26;
		if (!L_230)
		{
			goto IL_0715;
		}
	}
	{
		// if(inputXY.magnitude > 1) { inputXY.Normalize(); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_231 = (&__this->___inputXY_49);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_231, NULL);
	}

IL_0715:
	{
		// yVelocity = fps_Rigidbody.velocity.y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_232 = __this->___fps_Rigidbody_54;
		NullCheck(L_232);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		L_233 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_232, NULL);
		float L_234 = L_233.___y_3;
		__this->___yVelocity_51 = L_234;
		// if(IsGrounded && jumpInput && jumpPowerInternal > 0 && !didJump){
		bool L_235;
		L_235 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		if (!L_235)
		{
			goto IL_0753;
		}
	}
	{
		bool L_236 = __this->___jumpInput_35;
		if (!L_236)
		{
			goto IL_0753;
		}
	}
	{
		float L_237 = __this->___jumpPowerInternal_44;
		if ((!(((float)L_237) > ((float)(0.0f)))))
		{
			goto IL_0753;
		}
	}
	{
		bool L_238 = __this->___didJump_36;
		G_B72_0 = ((((int32_t)L_238) == ((int32_t)0))? 1 : 0);
		goto IL_0754;
	}

IL_0753:
	{
		G_B72_0 = 0;
	}

IL_0754:
	{
		V_27 = (bool)G_B72_0;
		bool L_239 = V_27;
		if (!L_239)
		{
			goto IL_083c;
		}
	}
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_240 = __this->___advanced_46;
		NullCheck(L_240);
		float L_241 = L_240->___maxSlopeAngle_3;
		V_28 = (bool)((((float)L_241) > ((float)(0.0f)))? 1 : 0);
		bool L_242 = V_28;
		if (!L_242)
		{
			goto IL_0818;
		}
	}
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_243 = __this->___advanced_46;
		NullCheck(L_243);
		bool L_244 = L_243->___isTouchingFlat_6;
		if (L_244)
		{
			goto IL_0794;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_245 = __this->___advanced_46;
		NullCheck(L_245);
		bool L_246 = L_245->___isTouchingWalkable_4;
		G_B77_0 = ((int32_t)(L_246));
		goto IL_0795;
	}

IL_0794:
	{
		G_B77_0 = 1;
	}

IL_0795:
	{
		V_29 = (bool)G_B77_0;
		bool L_247 = V_29;
		if (!L_247)
		{
			goto IL_0815;
		}
	}
	{
		// didJump=true;
		__this->___didJump_36 = (bool)1;
		// jumpInput=false;
		__this->___jumpInput_35 = (bool)0;
		// yVelocity += fps_Rigidbody.velocity.y<0.01f? jumpPowerInternal : jumpPowerInternal/3;
		float L_248 = __this->___yVelocity_51;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_249 = __this->___fps_Rigidbody_54;
		NullCheck(L_249);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
		L_250 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_249, NULL);
		float L_251 = L_250.___y_3;
		G_B79_0 = L_248;
		G_B79_1 = __this;
		if ((((float)L_251) < ((float)(0.00999999978f))))
		{
			G_B80_0 = L_248;
			G_B80_1 = __this;
			goto IL_07d6;
		}
	}
	{
		float L_252 = __this->___jumpPowerInternal_44;
		G_B81_0 = ((float)(L_252/(3.0f)));
		G_B81_1 = G_B79_0;
		G_B81_2 = G_B79_1;
		goto IL_07dc;
	}

IL_07d6:
	{
		float L_253 = __this->___jumpPowerInternal_44;
		G_B81_0 = L_253;
		G_B81_1 = G_B80_0;
		G_B81_2 = G_B80_1;
	}

IL_07dc:
	{
		NullCheck(G_B81_2);
		G_B81_2->___yVelocity_51 = ((float)il2cpp_codegen_add(G_B81_1, G_B81_0));
		// advanced.isTouchingWalkable = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_254 = __this->___advanced_46;
		NullCheck(L_254);
		L_254->___isTouchingWalkable_4 = (bool)0;
		// advanced.isTouchingFlat = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_255 = __this->___advanced_46;
		NullCheck(L_255);
		L_255->___isTouchingFlat_6 = (bool)0;
		// advanced.isTouchingUpright = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_256 = __this->___advanced_46;
		NullCheck(L_256);
		L_256->___isTouchingUpright_5 = (bool)0;
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_257 = __this->___fps_Rigidbody_54;
		NullCheck(L_257);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_257, ((int32_t)112), NULL);
	}

IL_0815:
	{
		goto IL_083b;
	}

IL_0818:
	{
		// didJump=true;
		__this->___didJump_36 = (bool)1;
		// jumpInput=false;
		__this->___jumpInput_35 = (bool)0;
		// yVelocity += jumpPowerInternal;
		float L_258 = __this->___yVelocity_51;
		float L_259 = __this->___jumpPowerInternal_44;
		__this->___yVelocity_51 = ((float)il2cpp_codegen_add(L_258, L_259));
	}

IL_083b:
	{
	}

IL_083c:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_260 = __this->___advanced_46;
		NullCheck(L_260);
		float L_261 = L_260->___maxSlopeAngle_3;
		V_30 = (bool)((((float)L_261) > ((float)(0.0f)))? 1 : 0);
		bool L_262 = V_30;
		if (!L_262)
		{
			goto IL_08e7;
		}
	}
	{
		// if(!didJump && advanced.lastKnownSlopeAngle>5 && advanced.isTouchingWalkable){
		bool L_263 = __this->___didJump_36;
		if (L_263)
		{
			goto IL_087f;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_264 = __this->___advanced_46;
		NullCheck(L_264);
		float L_265 = L_264->___lastKnownSlopeAngle_13;
		if ((!(((float)L_265) > ((float)(5.0f)))))
		{
			goto IL_087f;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_266 = __this->___advanced_46;
		NullCheck(L_266);
		bool L_267 = L_266->___isTouchingWalkable_4;
		G_B90_0 = ((int32_t)(L_267));
		goto IL_0880;
	}

IL_087f:
	{
		G_B90_0 = 0;
	}

IL_0880:
	{
		V_31 = (bool)G_B90_0;
		bool L_268 = V_31;
		if (!L_268)
		{
			goto IL_08a1;
		}
	}
	{
		// yVelocity *= SlopeCheck()/4;
		float L_269 = __this->___yVelocity_51;
		float L_270;
		L_270 = FirstPersonAIO_SlopeCheck_m98D7C085881D9A98719921C4BF1FB1F6C8566F62(__this, NULL);
		__this->___yVelocity_51 = ((float)il2cpp_codegen_multiply(L_269, ((float)(L_270/(4.0f)))));
	}

IL_08a1:
	{
		// if(advanced.isTouchingUpright && !advanced.isTouchingWalkable && !didJump){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_271 = __this->___advanced_46;
		NullCheck(L_271);
		bool L_272 = L_271->___isTouchingUpright_5;
		if (!L_272)
		{
			goto IL_08c6;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_273 = __this->___advanced_46;
		NullCheck(L_273);
		bool L_274 = L_273->___isTouchingWalkable_4;
		if (L_274)
		{
			goto IL_08c6;
		}
	}
	{
		bool L_275 = __this->___didJump_36;
		G_B96_0 = ((((int32_t)L_275) == ((int32_t)0))? 1 : 0);
		goto IL_08c7;
	}

IL_08c6:
	{
		G_B96_0 = 0;
	}

IL_08c7:
	{
		V_32 = (bool)G_B96_0;
		bool L_276 = V_32;
		if (!L_276)
		{
			goto IL_08e6;
		}
	}
	{
		// yVelocity +=  Physics.gravity.y;
		float L_277 = __this->___yVelocity_51;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_278;
		L_278 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_279 = L_278.___y_3;
		__this->___yVelocity_51 = ((float)il2cpp_codegen_add(L_277, L_279));
	}

IL_08e6:
	{
	}

IL_08e7:
	{
		// if(playerCanMove && !controllerPauseState){
		bool L_280 = __this->___playerCanMove_27;
		if (!L_280)
		{
			goto IL_08fa;
		}
	}
	{
		bool L_281 = __this->___controllerPauseState_4;
		G_B102_0 = ((((int32_t)L_281) == ((int32_t)0))? 1 : 0);
		goto IL_08fb;
	}

IL_08fa:
	{
		G_B102_0 = 0;
	}

IL_08fb:
	{
		V_33 = (bool)G_B102_0;
		bool L_282 = V_33;
		if (!L_282)
		{
			goto IL_0927;
		}
	}
	{
		// fps_Rigidbody.velocity = MoveDirection+(Vector3.up * yVelocity);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_283 = __this->___fps_Rigidbody_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_285;
		L_285 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_286 = __this->___yVelocity_51;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_287;
		L_287 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_285, L_286, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_288;
		L_288 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_284, L_287, NULL);
		NullCheck(L_283);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_283, L_288, NULL);
		goto IL_093a;
	}

IL_0927:
	{
		// } else{fps_Rigidbody.velocity = Vector3.zero;}
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_289 = __this->___fps_Rigidbody_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_290;
		L_290 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_289);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_289, L_290, NULL);
	}

IL_093a:
	{
		// if(inputXY.magnitude > 0 || !IsGrounded) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_291 = (&__this->___inputXY_49);
		float L_292;
		L_292 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_291, NULL);
		if ((((float)L_292) > ((float)(0.0f))))
		{
			goto IL_0957;
		}
	}
	{
		bool L_293;
		L_293 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		G_B108_0 = ((((int32_t)L_293) == ((int32_t)0))? 1 : 0);
		goto IL_0958;
	}

IL_0957:
	{
		G_B108_0 = 1;
	}

IL_0958:
	{
		V_34 = (bool)G_B108_0;
		bool L_294 = V_34;
		if (!L_294)
		{
			goto IL_0979;
		}
	}
	{
		// capsule.sharedMaterial = advanced.zeroFrictionMaterial;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_295 = __this->___capsule_47;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_296 = __this->___advanced_46;
		NullCheck(L_296);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_297 = L_296->___zeroFrictionMaterial_1;
		NullCheck(L_295);
		Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED(L_295, L_297, NULL);
		goto IL_0992;
	}

IL_0979:
	{
		// } else { capsule.sharedMaterial = advanced.highFrictionMaterial; }
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_298 = __this->___capsule_47;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_299 = __this->___advanced_46;
		NullCheck(L_299);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_300 = L_299->___highFrictionMaterial_2;
		NullCheck(L_298);
		Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED(L_298, L_300, NULL);
	}

IL_0992:
	{
		// fps_Rigidbody.AddForce(Physics.gravity * (advanced.gravityMultiplier - 1));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_301 = __this->___fps_Rigidbody_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_302;
		L_302 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_303 = __this->___advanced_46;
		NullCheck(L_303);
		float L_304 = L_303->___gravityMultiplier_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_305;
		L_305 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_302, ((float)il2cpp_codegen_subtract(L_304, (1.0f))), NULL);
		NullCheck(L_301);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_301, L_305, NULL);
		// if(advanced.FOVKickAmount>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_306 = __this->___advanced_46;
		NullCheck(L_306);
		float L_307 = L_306->___FOVKickAmount_14;
		V_35 = (bool)((((float)L_307) > ((float)(0.0f)))? 1 : 0);
		bool L_308 = V_35;
		if (!L_308)
		{
			goto IL_0b0d;
		}
	}
	{
		// if(isSprinting && !isCrouching && playerCamera.fieldOfView != (baseCamFOV+(advanced.FOVKickAmount*2)-0.01f)){
		bool L_309 = __this->___isSprinting_53;
		if (!L_309)
		{
			goto IL_0a15;
		}
	}
	{
		bool L_310 = __this->___isCrouching_50;
		if (L_310)
		{
			goto IL_0a15;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_311 = __this->___playerCamera_13;
		NullCheck(L_311);
		float L_312;
		L_312 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_311, NULL);
		float L_313 = __this->___baseCamFOV_16;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_314 = __this->___advanced_46;
		NullCheck(L_314);
		float L_315 = L_314->___FOVKickAmount_14;
		G_B116_0 = ((((int32_t)((((float)L_312) == ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_313, ((float)il2cpp_codegen_multiply(L_315, (2.0f))))), (0.00999999978f)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a16;
	}

IL_0a15:
	{
		G_B116_0 = 0;
	}

IL_0a16:
	{
		V_36 = (bool)G_B116_0;
		bool L_316 = V_36;
		if (!L_316)
		{
			goto IL_0ab0;
		}
	}
	{
		// if(Mathf.Abs(fps_Rigidbody.velocity.x)> 0.5f || Mathf.Abs(fps_Rigidbody.velocity.z)> 0.5f){
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_317 = __this->___fps_Rigidbody_54;
		NullCheck(L_317);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_318;
		L_318 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_317, NULL);
		float L_319 = L_318.___x_2;
		float L_320;
		L_320 = fabsf(L_319);
		if ((((float)L_320) > ((float)(0.5f))))
		{
			goto IL_0a5a;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_321 = __this->___fps_Rigidbody_54;
		NullCheck(L_321);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_322;
		L_322 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_321, NULL);
		float L_323 = L_322.___z_4;
		float L_324;
		L_324 = fabsf(L_323);
		G_B120_0 = ((((float)L_324) > ((float)(0.5f)))? 1 : 0);
		goto IL_0a5b;
	}

IL_0a5a:
	{
		G_B120_0 = 1;
	}

IL_0a5b:
	{
		V_37 = (bool)G_B120_0;
		bool L_325 = V_37;
		if (!L_325)
		{
			goto IL_0aad;
		}
	}
	{
		// playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV+(advanced.FOVKickAmount*2),ref advanced.fovRef,advanced.changeTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_326 = __this->___playerCamera_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_327 = __this->___playerCamera_13;
		NullCheck(L_327);
		float L_328;
		L_328 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_327, NULL);
		float L_329 = __this->___baseCamFOV_16;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_330 = __this->___advanced_46;
		NullCheck(L_330);
		float L_331 = L_330->___FOVKickAmount_14;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_332 = __this->___advanced_46;
		NullCheck(L_332);
		float* L_333 = (&L_332->___fovRef_16);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_334 = __this->___advanced_46;
		NullCheck(L_334);
		float L_335 = L_334->___changeTime_15;
		float L_336;
		L_336 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(L_328, ((float)il2cpp_codegen_add(L_329, ((float)il2cpp_codegen_multiply(L_331, (2.0f))))), L_333, L_335, NULL);
		NullCheck(L_326);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_326, L_336, NULL);
	}

IL_0aad:
	{
		goto IL_0b0c;
	}

IL_0ab0:
	{
		// else if(playerCamera.fieldOfView != baseCamFOV){ playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV,ref advanced.fovRef,advanced.changeTime*0.5f);}
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_337 = __this->___playerCamera_13;
		NullCheck(L_337);
		float L_338;
		L_338 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_337, NULL);
		float L_339 = __this->___baseCamFOV_16;
		V_38 = (bool)((((int32_t)((((float)L_338) == ((float)L_339))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_340 = V_38;
		if (!L_340)
		{
			goto IL_0b0c;
		}
	}
	{
		// else if(playerCamera.fieldOfView != baseCamFOV){ playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV,ref advanced.fovRef,advanced.changeTime*0.5f);}
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_341 = __this->___playerCamera_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_342 = __this->___playerCamera_13;
		NullCheck(L_342);
		float L_343;
		L_343 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_342, NULL);
		float L_344 = __this->___baseCamFOV_16;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_345 = __this->___advanced_46;
		NullCheck(L_345);
		float* L_346 = (&L_345->___fovRef_16);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_347 = __this->___advanced_46;
		NullCheck(L_347);
		float L_348 = L_347->___changeTime_15;
		float L_349;
		L_349 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(L_343, L_344, L_346, ((float)il2cpp_codegen_multiply(L_348, (0.5f))), NULL);
		NullCheck(L_341);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_341, L_349, NULL);
	}

IL_0b0c:
	{
	}

IL_0b0d:
	{
		// if(_crouchModifiers.useCrouch) {
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_350 = __this->____crouchModifiers_45;
		NullCheck(L_350);
		bool L_351 = L_350->___useCrouch_0;
		V_39 = L_351;
		bool L_352 = V_39;
		if (!L_352)
		{
			goto IL_0bf3;
		}
	}
	{
		// if(isCrouching) {
		bool L_353 = __this->___isCrouching_50;
		V_40 = L_353;
		bool L_354 = V_40;
		if (!L_354)
		{
			goto IL_0b9a;
		}
	}
	{
		// capsule.height = Mathf.MoveTowards(capsule.height, _crouchModifiers.colliderHeight/1.5f, 5*Time.deltaTime);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_355 = __this->___capsule_47;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_356 = __this->___capsule_47;
		NullCheck(L_356);
		float L_357;
		L_357 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_356, NULL);
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_358 = __this->____crouchModifiers_45;
		NullCheck(L_358);
		float L_359 = L_358->___colliderHeight_6;
		float L_360;
		L_360 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_361;
		L_361 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_357, ((float)(L_359/(1.5f))), ((float)il2cpp_codegen_multiply((5.0f), L_360)), NULL);
		NullCheck(L_355);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_355, L_361, NULL);
		// walkSpeedInternal = walkSpeed*_crouchModifiers.crouchWalkSpeedMultiplier;
		float L_362 = __this->___walkSpeed_29;
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_363 = __this->____crouchModifiers_45;
		NullCheck(L_363);
		float L_364 = L_363->___crouchWalkSpeedMultiplier_3;
		__this->___walkSpeedInternal_42 = ((float)il2cpp_codegen_multiply(L_362, L_364));
		// jumpPowerInternal = jumpPower* _crouchModifiers.crouchJumpPowerMultiplier;
		float L_365 = __this->___jumpPower_32;
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_366 = __this->____crouchModifiers_45;
		NullCheck(L_366);
		float L_367 = L_366->___crouchJumpPowerMultiplier_4;
		__this->___jumpPowerInternal_44 = ((float)il2cpp_codegen_multiply(L_365, L_367));
		goto IL_0bf2;
	}

IL_0b9a:
	{
		// capsule.height = Mathf.MoveTowards(capsule.height, _crouchModifiers.colliderHeight, 5*Time.deltaTime);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_368 = __this->___capsule_47;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_369 = __this->___capsule_47;
		NullCheck(L_369);
		float L_370;
		L_370 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_369, NULL);
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_371 = __this->____crouchModifiers_45;
		NullCheck(L_371);
		float L_372 = L_371->___colliderHeight_6;
		float L_373;
		L_373 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_374;
		L_374 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_370, L_372, ((float)il2cpp_codegen_multiply((5.0f), L_373)), NULL);
		NullCheck(L_368);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_368, L_374, NULL);
		// walkSpeedInternal = walkSpeed;
		float L_375 = __this->___walkSpeed_29;
		__this->___walkSpeedInternal_42 = L_375;
		// sprintSpeedInternal = sprintSpeed;
		float L_376 = __this->___sprintSpeed_31;
		__this->___sprintSpeedInternal_43 = L_376;
		// jumpPowerInternal = jumpPower;
		float L_377 = __this->___jumpPower_32;
		__this->___jumpPowerInternal_44 = L_377;
	}

IL_0bf2:
	{
	}

IL_0bf3:
	{
		// float yPos = 0;
		V_4 = (0.0f);
		// float xPos = 0;
		V_5 = (0.0f);
		// float zTilt = 0;
		V_6 = (0.0f);
		// float xTilt = 0;
		V_7 = (0.0f);
		// float bobSwayFactor = 0;
		V_8 = (0.0f);
		// float bobFactor = 0;
		V_9 = (0.0f);
		// float strideLangthen = 0;
		V_10 = (0.0f);
		// float flatVel = 0;
		V_11 = (0.0f);
		// if(useHeadbob == true || enableAudioSFX){
		bool L_378 = __this->___useHeadbob_55;
		if (L_378)
		{
			goto IL_0c3b;
		}
	}
	{
		bool L_379 = __this->___enableAudioSFX_78;
		G_B134_0 = ((int32_t)(L_379));
		goto IL_0c3c;
	}

IL_0c3b:
	{
		G_B134_0 = 1;
	}

IL_0c3c:
	{
		V_41 = (bool)G_B134_0;
		bool L_380 = V_41;
		if (!L_380)
		{
			goto IL_0f5e;
		}
	}
	{
		// Vector3 vel = (fps_Rigidbody.position - previousPosition) / Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_381 = __this->___fps_Rigidbody_54;
		NullCheck(L_381);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_382;
		L_382 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_381, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_383 = __this->___previousPosition_73;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_384;
		L_384 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_382, L_383, NULL);
		float L_385;
		L_385 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_386;
		L_386 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_384, L_385, NULL);
		V_42 = L_386;
		// Vector3 velChange = vel - previousVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_387 = V_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_388 = __this->___previousVelocity_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_389;
		L_389 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_387, L_388, NULL);
		V_43 = L_389;
		// previousPosition = fps_Rigidbody.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_390 = __this->___fps_Rigidbody_54;
		NullCheck(L_390);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_391;
		L_391 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_390, NULL);
		__this->___previousPosition_73 = L_391;
		// previousVelocity = vel;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_392 = V_42;
		__this->___previousVelocity_74 = L_392;
		// springVelocity -= velChange.y;
		float L_393 = __this->___springVelocity_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_394 = V_43;
		float L_395 = L_394.___y_3;
		__this->___springVelocity_68 = ((float)il2cpp_codegen_subtract(L_393, L_395));
		// springVelocity -= springPosition * springElastic;
		float L_396 = __this->___springVelocity_68;
		float L_397 = __this->___springPosition_67;
		float L_398 = __this->___springElastic_69;
		__this->___springVelocity_68 = ((float)il2cpp_codegen_subtract(L_396, ((float)il2cpp_codegen_multiply(L_397, L_398))));
		// springVelocity *= springDampen;
		float L_399 = __this->___springVelocity_68;
		float L_400 = __this->___springDampen_70;
		__this->___springVelocity_68 = ((float)il2cpp_codegen_multiply(L_399, L_400));
		// springPosition += springVelocity * Time.deltaTime;
		float L_401 = __this->___springPosition_67;
		float L_402 = __this->___springVelocity_68;
		float L_403;
		L_403 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___springPosition_67 = ((float)il2cpp_codegen_add(L_401, ((float)il2cpp_codegen_multiply(L_402, L_403))));
		// springPosition = Mathf.Clamp(springPosition, -0.3f, 0.3f);
		float L_404 = __this->___springPosition_67;
		float L_405;
		L_405 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_404, (-0.300000012f), (0.300000012f), NULL);
		__this->___springPosition_67 = L_405;
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		float L_406 = __this->___springVelocity_68;
		float L_407;
		L_407 = fabsf(L_406);
		float L_408 = __this->___springVelocityThreshold_71;
		if ((!(((float)L_407) < ((float)L_408))))
		{
			goto IL_0d2d;
		}
	}
	{
		float L_409 = __this->___springPosition_67;
		float L_410;
		L_410 = fabsf(L_409);
		float L_411 = __this->___springPositionThreshold_72;
		G_B138_0 = ((((float)L_410) < ((float)L_411))? 1 : 0);
		goto IL_0d2e;
	}

IL_0d2d:
	{
		G_B138_0 = 0;
	}

IL_0d2e:
	{
		V_44 = (bool)G_B138_0;
		bool L_412 = V_44;
		if (!L_412)
		{
			goto IL_0d4c;
		}
	}
	{
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		__this->___springPosition_67 = (0.0f);
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		__this->___springVelocity_68 = (0.0f);
	}

IL_0d4c:
	{
		// flatVel = new Vector3(vel.x, 0.0f, vel.z).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_413 = V_42;
		float L_414 = L_413.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_415 = V_42;
		float L_416 = L_415.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_417;
		memset((&L_417), 0, sizeof(L_417));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_417), L_414, (0.0f), L_416, /*hidden argument*/NULL);
		V_45 = L_417;
		float L_418;
		L_418 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_45), NULL);
		V_11 = L_418;
		// strideLangthen = 1 + (flatVel * ((headbobFrequency*2)/10));
		float L_419 = V_11;
		float L_420 = __this->___headbobFrequency_58;
		V_10 = ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_419, ((float)(((float)il2cpp_codegen_multiply(L_420, (2.0f)))/(10.0f)))))));
		// headbobCycle += (flatVel / strideLangthen) * (Time.deltaTime / headbobFrequency);
		float L_421 = __this->___headbobCycle_65;
		float L_422 = V_11;
		float L_423 = V_10;
		float L_424;
		L_424 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_425 = __this->___headbobFrequency_58;
		__this->___headbobCycle_65 = ((float)il2cpp_codegen_add(L_421, ((float)il2cpp_codegen_multiply(((float)(L_422/L_423)), ((float)(L_424/L_425))))));
		// bobFactor = Mathf.Sin(headbobCycle * Mathf.PI * 2);
		float L_426 = __this->___headbobCycle_65;
		float L_427;
		L_427 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_426, (3.14159274f))), (2.0f))));
		V_9 = L_427;
		// bobSwayFactor = Mathf.Sin(Mathf.PI * (2 * headbobCycle + 0.5f));
		float L_428 = __this->___headbobCycle_65;
		float L_429;
		L_429 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((2.0f), L_428)), (0.5f))))));
		V_8 = L_429;
		// bobFactor = 1 - (bobFactor * 0.5f + 1);
		float L_430 = V_9;
		V_9 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_430, (0.5f))), (1.0f)))));
		// bobFactor *= bobFactor;
		float L_431 = V_9;
		float L_432 = V_9;
		V_9 = ((float)il2cpp_codegen_multiply(L_431, L_432));
		// yPos = 0;
		V_4 = (0.0f);
		// xPos = 0;
		V_5 = (0.0f);
		// zTilt = 0;
		V_6 = (0.0f);
		// if(jumpLandIntensity>0 && !advanced.stairMiniHop){xTilt = -springPosition * (jumpLandIntensity*5.5f);}
		float L_433 = __this->___jumpLandIntensity_62;
		if ((!(((float)L_433) > ((float)(0.0f)))))
		{
			goto IL_0e32;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_434 = __this->___advanced_46;
		NullCheck(L_434);
		bool L_435 = L_434->___stairMiniHop_9;
		G_B143_0 = ((((int32_t)L_435) == ((int32_t)0))? 1 : 0);
		goto IL_0e33;
	}

IL_0e32:
	{
		G_B143_0 = 0;
	}

IL_0e33:
	{
		V_46 = (bool)G_B143_0;
		bool L_436 = V_46;
		if (!L_436)
		{
			goto IL_0e53;
		}
	}
	{
		// if(jumpLandIntensity>0 && !advanced.stairMiniHop){xTilt = -springPosition * (jumpLandIntensity*5.5f);}
		float L_437 = __this->___springPosition_67;
		float L_438 = __this->___jumpLandIntensity_62;
		V_7 = ((float)il2cpp_codegen_multiply(((-L_437)), ((float)il2cpp_codegen_multiply(L_438, (5.5f)))));
		goto IL_0e72;
	}

IL_0e53:
	{
		// else if(!advanced.stairMiniHop){xTilt = -springPosition;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_439 = __this->___advanced_46;
		NullCheck(L_439);
		bool L_440 = L_439->___stairMiniHop_9;
		V_47 = (bool)((((int32_t)L_440) == ((int32_t)0))? 1 : 0);
		bool L_441 = V_47;
		if (!L_441)
		{
			goto IL_0e72;
		}
	}
	{
		// else if(!advanced.stairMiniHop){xTilt = -springPosition;}
		float L_442 = __this->___springPosition_67;
		V_7 = ((-L_442));
	}

IL_0e72:
	{
		// if(IsGrounded){
		bool L_443;
		L_443 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_48 = L_443;
		bool L_444 = V_48;
		if (!L_444)
		{
			goto IL_0f5d;
		}
	}
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_445 = V_42;
		float L_446 = L_445.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_447 = V_42;
		float L_448 = L_447.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_449;
		memset((&L_449), 0, sizeof(L_449));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_449), L_446, (0.0f), L_448, /*hidden argument*/NULL);
		V_45 = L_449;
		float L_450;
		L_450 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_45), NULL);
		V_50 = (bool)((((float)L_450) < ((float)(0.100000001f)))? 1 : 0);
		bool L_451 = V_50;
		if (!L_451)
		{
			goto IL_0ecf;
		}
	}
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		float L_452 = __this->___headbobFade_66;
		float L_453;
		L_453 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_452, (0.0f), (0.5f), NULL);
		__this->___headbobFade_66 = L_453;
		goto IL_0eec;
	}

IL_0ecf:
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		float L_454 = __this->___headbobFade_66;
		float L_455;
		L_455 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_456;
		L_456 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_454, (1.0f), L_455, NULL);
		__this->___headbobFade_66 = L_456;
	}

IL_0eec:
	{
		// float speedHeightFactor = 1 + (flatVel * 0.3f);
		float L_457 = V_11;
		V_49 = ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_457, (0.300000012f)))));
		// xPos = -(headbobSideMovement/10) * headbobFade *bobSwayFactor;
		float L_458 = __this->___headbobSideMovement_61;
		float L_459 = __this->___headbobFade_66;
		float L_460 = V_8;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-((float)(L_458/(10.0f))))), L_459)), L_460));
		// yPos = springPosition * (jumpLandIntensity/10) + bobFactor * (headbobHeight/10) * headbobFade * speedHeightFactor;
		float L_461 = __this->___springPosition_67;
		float L_462 = __this->___jumpLandIntensity_62;
		float L_463 = V_9;
		float L_464 = __this->___headbobHeight_60;
		float L_465 = __this->___headbobFade_66;
		float L_466 = V_49;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_461, ((float)(L_462/(10.0f))))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_463, ((float)(L_464/(10.0f))))), L_465)), L_466))));
		// zTilt = bobSwayFactor * (headbobSwayAngle/10) * headbobFade;
		float L_467 = V_8;
		float L_468 = __this->___headbobSwayAngle_59;
		float L_469 = __this->___headbobFade_66;
		V_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_467, ((float)(L_468/(10.0f))))), L_469));
	}

IL_0f5d:
	{
	}

IL_0f5e:
	{
		// if(useHeadbob == true){
		bool L_470 = __this->___useHeadbob_55;
		V_51 = L_470;
		bool L_471 = V_51;
		if (!L_471)
		{
			goto IL_10e4;
		}
	}
	{
		// if(fps_Rigidbody.velocity.magnitude >0.1f){
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_472 = __this->___fps_Rigidbody_54;
		NullCheck(L_472);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_473;
		L_473 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_472, NULL);
		V_45 = L_473;
		float L_474;
		L_474 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_45), NULL);
		V_52 = (bool)((((float)L_474) > ((float)(0.100000001f)))? 1 : 0);
		bool L_475 = V_52;
		if (!L_475)
		{
			goto IL_102d;
		}
	}
	{
		// head.localPosition = Vector3.MoveTowards(head.localPosition, snapHeadjointToCapsul ? (new Vector3(originalLocalPosition.x,(capsule.height/2)*head.localScale.y,originalLocalPosition.z)  + new Vector3(xPos, yPos, 0)) : originalLocalPosition + new Vector3(xPos, yPos, 0),0.5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_476 = __this->___head_56;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_477 = __this->___head_56;
		NullCheck(L_477);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_478;
		L_478 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_477, NULL);
		bool L_479 = __this->___snapHeadjointToCapsul_57;
		G_B156_0 = L_478;
		G_B156_1 = L_476;
		if (L_479)
		{
			G_B157_0 = L_478;
			G_B157_1 = L_476;
			goto IL_0fc7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_480 = __this->___originalLocalPosition_63;
		float L_481 = V_5;
		float L_482 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_483;
		memset((&L_483), 0, sizeof(L_483));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_483), L_481, L_482, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_484;
		L_484 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_480, L_483, NULL);
		G_B158_0 = L_484;
		G_B158_1 = G_B156_0;
		G_B158_2 = G_B156_1;
		goto IL_1017;
	}

IL_0fc7:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_485 = (&__this->___originalLocalPosition_63);
		float L_486 = L_485->___x_2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_487 = __this->___capsule_47;
		NullCheck(L_487);
		float L_488;
		L_488 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_487, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_489 = __this->___head_56;
		NullCheck(L_489);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_490;
		L_490 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_489, NULL);
		float L_491 = L_490.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_492 = (&__this->___originalLocalPosition_63);
		float L_493 = L_492->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_494;
		memset((&L_494), 0, sizeof(L_494));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_494), L_486, ((float)il2cpp_codegen_multiply(((float)(L_488/(2.0f))), L_491)), L_493, /*hidden argument*/NULL);
		float L_495 = V_5;
		float L_496 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_497;
		memset((&L_497), 0, sizeof(L_497));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_497), L_495, L_496, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_498;
		L_498 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_494, L_497, NULL);
		G_B158_0 = L_498;
		G_B158_1 = G_B157_0;
		G_B158_2 = G_B157_1;
	}

IL_1017:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_499;
		L_499 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(G_B158_1, G_B158_0, (0.5f), NULL);
		NullCheck(G_B158_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B158_2, L_499, NULL);
		goto IL_10c9;
	}

IL_102d:
	{
		// head.localPosition = Vector3.SmoothDamp(head.localPosition, snapHeadjointToCapsul ? (new Vector3(originalLocalPosition.x,(capsule.height/2)*head.localScale.y,originalLocalPosition.z)  + new Vector3(xPos, yPos, 0)) : originalLocalPosition + new Vector3(xPos, yPos, 0),ref miscRefVel, 0.15f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_500 = __this->___head_56;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_501 = __this->___head_56;
		NullCheck(L_501);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_502;
		L_502 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_501, NULL);
		bool L_503 = __this->___snapHeadjointToCapsul_57;
		G_B160_0 = L_502;
		G_B160_1 = L_500;
		if (L_503)
		{
			G_B161_0 = L_502;
			G_B161_1 = L_500;
			goto IL_1062;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_504 = __this->___originalLocalPosition_63;
		float L_505 = V_5;
		float L_506 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_507;
		memset((&L_507), 0, sizeof(L_507));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_507), L_505, L_506, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_508;
		L_508 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_504, L_507, NULL);
		G_B162_0 = L_508;
		G_B162_1 = G_B160_0;
		G_B162_2 = G_B160_1;
		goto IL_10b2;
	}

IL_1062:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_509 = (&__this->___originalLocalPosition_63);
		float L_510 = L_509->___x_2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_511 = __this->___capsule_47;
		NullCheck(L_511);
		float L_512;
		L_512 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_511, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_513 = __this->___head_56;
		NullCheck(L_513);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_514;
		L_514 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_513, NULL);
		float L_515 = L_514.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_516 = (&__this->___originalLocalPosition_63);
		float L_517 = L_516->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_518;
		memset((&L_518), 0, sizeof(L_518));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_518), L_510, ((float)il2cpp_codegen_multiply(((float)(L_512/(2.0f))), L_515)), L_517, /*hidden argument*/NULL);
		float L_519 = V_5;
		float L_520 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_521;
		memset((&L_521), 0, sizeof(L_521));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_521), L_519, L_520, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_522;
		L_522 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_518, L_521, NULL);
		G_B162_0 = L_522;
		G_B162_1 = G_B161_0;
		G_B162_2 = G_B161_1;
	}

IL_10b2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_523 = (&__this->___miscRefVel_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_524;
		L_524 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(G_B162_1, G_B162_0, L_523, (0.150000006f), NULL);
		NullCheck(G_B162_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B162_2, L_524, NULL);
	}

IL_10c9:
	{
		// head.localRotation = Quaternion.Euler(xTilt, 0, zTilt);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_525 = __this->___head_56;
		float L_526 = V_7;
		float L_527 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_528;
		L_528 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_526, (0.0f), L_527, NULL);
		NullCheck(L_525);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_525, L_528, NULL);
	}

IL_10e4:
	{
		// if(enableAudioSFX){
		bool L_529 = __this->___enableAudioSFX_78;
		V_53 = L_529;
		bool L_530 = V_53;
		if (!L_530)
		{
			goto IL_1a68;
		}
	}
	{
		// if(fsmode == FSMode.Dynamic)
		int32_t L_531 = __this->___fsmode_83;
		V_54 = (bool)((((int32_t)L_531) == ((int32_t)1))? 1 : 0);
		bool L_532 = V_54;
		if (!L_532)
		{
			goto IL_191d;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_55), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(Physics.Raycast(transform.position, Vector3.down, out hit)){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_533;
		L_533 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_533);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_534;
		L_534 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_533, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_535;
		L_535 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		bool L_536;
		L_536 = Physics_Raycast_m13E11AB2C411C4043259CAEB91F6BC9A9E0209F2(L_534, L_535, (&V_55), NULL);
		V_56 = L_536;
		bool L_537 = V_56;
		if (!L_537)
		{
			goto IL_17ba;
		}
	}
	{
		// if(dynamicFootstep.materialMode == DynamicFootStep.matMode.physicMaterial){
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_538 = __this->___dynamicFootstep_84;
		NullCheck(L_538);
		int32_t L_539 = L_538->___materialMode_0;
		V_57 = (bool)((((int32_t)L_539) == ((int32_t)0))? 1 : 0);
		bool L_540 = V_57;
		if (!L_540)
		{
			goto IL_1397;
		}
	}
	{
		// dynamicFootstep.currentClipSet = (dynamicFootstep.woodPhysMat.Any() && dynamicFootstep.woodPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.woodClipSet.Any()) ? // If standing on Wood
		// dynamicFootstep.woodClipSet : ((dynamicFootstep.grassPhysMat.Any() && dynamicFootstep.grassPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.grassClipSet.Any()) ? // If standing on Grass
		// dynamicFootstep.grassClipSet : ((dynamicFootstep.metalAndGlassPhysMat.Any() && dynamicFootstep.metalAndGlassPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.metalAndGlassClipSet.Any()) ? // If standing on Metal/Glass
		// dynamicFootstep.metalAndGlassClipSet : ((dynamicFootstep.rockAndConcretePhysMat.Any() && dynamicFootstep.rockAndConcretePhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.rockAndConcreteClipSet.Any()) ? // If standing on Rock/Concrete
		// dynamicFootstep.rockAndConcreteClipSet : ((dynamicFootstep.dirtAndGravelPhysMat.Any() && dynamicFootstep.dirtAndGravelPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.dirtAndGravelClipSet.Any()) ? // If standing on Dirt/Gravle
		// dynamicFootstep.dirtAndGravelClipSet : ((dynamicFootstep.mudPhysMat.Any() && dynamicFootstep.mudPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.mudClipSet.Any())? // If standing on Mud
		// dynamicFootstep.mudClipSet : ((dynamicFootstep.customPhysMat.Any() && dynamicFootstep.customPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.customClipSet.Any())? // If standing on the custom material
		// dynamicFootstep.customClipSet : footStepSounds)))))); // If material is unknown, fall back
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_541 = __this->___dynamicFootstep_84;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_542 = __this->___dynamicFootstep_84;
		NullCheck(L_542);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_543 = L_542->___woodPhysMat_1;
		bool L_544;
		L_544 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_543, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B169_0 = L_541;
		if (!L_544)
		{
			G_B171_0 = L_541;
			goto IL_1193;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_545 = __this->___dynamicFootstep_84;
		NullCheck(L_545);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_546 = L_545->___woodPhysMat_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_547;
		L_547 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_547);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_548;
		L_548 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_547, NULL);
		NullCheck(L_546);
		bool L_549;
		L_549 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_546, L_548, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B170_0 = G_B169_0;
		if (!L_549)
		{
			G_B171_0 = G_B169_0;
			goto IL_1193;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_550 = __this->___dynamicFootstep_84;
		NullCheck(L_550);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_551 = L_550->___woodClipSet_16;
		bool L_552;
		L_552 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_551, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B171_0 = G_B170_0;
		if (L_552)
		{
			G_B202_0 = G_B170_0;
			goto IL_1381;
		}
	}

IL_1193:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_553 = __this->___dynamicFootstep_84;
		NullCheck(L_553);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_554 = L_553->___grassPhysMat_3;
		bool L_555;
		L_555 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_554, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B172_0 = G_B171_0;
		if (!L_555)
		{
			G_B174_0 = G_B171_0;
			goto IL_11d8;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_556 = __this->___dynamicFootstep_84;
		NullCheck(L_556);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_557 = L_556->___grassPhysMat_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_558;
		L_558 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_558);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_559;
		L_559 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_558, NULL);
		NullCheck(L_557);
		bool L_560;
		L_560 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_557, L_559, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B173_0 = G_B172_0;
		if (!L_560)
		{
			G_B174_0 = G_B172_0;
			goto IL_11d8;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_561 = __this->___dynamicFootstep_84;
		NullCheck(L_561);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_562 = L_561->___grassClipSet_18;
		bool L_563;
		L_563 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_562, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B174_0 = G_B173_0;
		if (L_563)
		{
			G_B200_0 = G_B173_0;
			goto IL_1374;
		}
	}

IL_11d8:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_564 = __this->___dynamicFootstep_84;
		NullCheck(L_564);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_565 = L_564->___metalAndGlassPhysMat_2;
		bool L_566;
		L_566 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_565, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B175_0 = G_B174_0;
		if (!L_566)
		{
			G_B177_0 = G_B174_0;
			goto IL_121d;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_567 = __this->___dynamicFootstep_84;
		NullCheck(L_567);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_568 = L_567->___metalAndGlassPhysMat_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_569;
		L_569 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_569);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_570;
		L_570 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_569, NULL);
		NullCheck(L_568);
		bool L_571;
		L_571 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_568, L_570, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B176_0 = G_B175_0;
		if (!L_571)
		{
			G_B177_0 = G_B175_0;
			goto IL_121d;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_572 = __this->___dynamicFootstep_84;
		NullCheck(L_572);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_573 = L_572->___metalAndGlassClipSet_17;
		bool L_574;
		L_574 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_573, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B177_0 = G_B176_0;
		if (L_574)
		{
			G_B198_0 = G_B176_0;
			goto IL_1367;
		}
	}

IL_121d:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_575 = __this->___dynamicFootstep_84;
		NullCheck(L_575);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_576 = L_575->___rockAndConcretePhysMat_5;
		bool L_577;
		L_577 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_576, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B178_0 = G_B177_0;
		if (!L_577)
		{
			G_B180_0 = G_B177_0;
			goto IL_1262;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_578 = __this->___dynamicFootstep_84;
		NullCheck(L_578);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_579 = L_578->___rockAndConcretePhysMat_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_580;
		L_580 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_580);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_581;
		L_581 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_580, NULL);
		NullCheck(L_579);
		bool L_582;
		L_582 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_579, L_581, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B179_0 = G_B178_0;
		if (!L_582)
		{
			G_B180_0 = G_B178_0;
			goto IL_1262;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_583 = __this->___dynamicFootstep_84;
		NullCheck(L_583);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_584 = L_583->___rockAndConcreteClipSet_20;
		bool L_585;
		L_585 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_584, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B180_0 = G_B179_0;
		if (L_585)
		{
			G_B196_0 = G_B179_0;
			goto IL_135a;
		}
	}

IL_1262:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_586 = __this->___dynamicFootstep_84;
		NullCheck(L_586);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_587 = L_586->___dirtAndGravelPhysMat_4;
		bool L_588;
		L_588 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_587, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B181_0 = G_B180_0;
		if (!L_588)
		{
			G_B183_0 = G_B180_0;
			goto IL_12a7;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_589 = __this->___dynamicFootstep_84;
		NullCheck(L_589);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_590 = L_589->___dirtAndGravelPhysMat_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_591;
		L_591 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_591);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_592;
		L_592 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_591, NULL);
		NullCheck(L_590);
		bool L_593;
		L_593 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_590, L_592, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B182_0 = G_B181_0;
		if (!L_593)
		{
			G_B183_0 = G_B181_0;
			goto IL_12a7;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_594 = __this->___dynamicFootstep_84;
		NullCheck(L_594);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_595 = L_594->___dirtAndGravelClipSet_19;
		bool L_596;
		L_596 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_595, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B183_0 = G_B182_0;
		if (L_596)
		{
			G_B194_0 = G_B182_0;
			goto IL_134d;
		}
	}

IL_12a7:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_597 = __this->___dynamicFootstep_84;
		NullCheck(L_597);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_598 = L_597->___mudPhysMat_6;
		bool L_599;
		L_599 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_598, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B184_0 = G_B183_0;
		if (!L_599)
		{
			G_B186_0 = G_B183_0;
			goto IL_12e9;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_600 = __this->___dynamicFootstep_84;
		NullCheck(L_600);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_601 = L_600->___mudPhysMat_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_602;
		L_602 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_602);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_603;
		L_603 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_602, NULL);
		NullCheck(L_601);
		bool L_604;
		L_604 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_601, L_603, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B185_0 = G_B184_0;
		if (!L_604)
		{
			G_B186_0 = G_B184_0;
			goto IL_12e9;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_605 = __this->___dynamicFootstep_84;
		NullCheck(L_605);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_606 = L_605->___mudClipSet_21;
		bool L_607;
		L_607 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_606, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B186_0 = G_B185_0;
		if (L_607)
		{
			G_B192_0 = G_B185_0;
			goto IL_1340;
		}
	}

IL_12e9:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_608 = __this->___dynamicFootstep_84;
		NullCheck(L_608);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_609 = L_608->___customPhysMat_7;
		bool L_610;
		L_610 = Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72(L_609, Enumerable_Any_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mDA1BB9ADDDC8CAC92AB73D34B341A12E0BB93B72_RuntimeMethod_var);
		G_B187_0 = G_B186_0;
		if (!L_610)
		{
			G_B189_0 = G_B186_0;
			goto IL_132b;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_611 = __this->___dynamicFootstep_84;
		NullCheck(L_611);
		List_1_t8805F1606FB70B7C15543AA89D8548092FA70DD8* L_612 = L_611->___customPhysMat_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_613;
		L_613 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_613);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_614;
		L_614 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_613, NULL);
		NullCheck(L_612);
		bool L_615;
		L_615 = List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD(L_612, L_614, List_1_Contains_m26781925AA9915731BF15A6AC2CD0ED0AF59BFBD_RuntimeMethod_var);
		G_B188_0 = G_B187_0;
		if (!L_615)
		{
			G_B189_0 = G_B187_0;
			goto IL_132b;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_616 = __this->___dynamicFootstep_84;
		NullCheck(L_616);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_617 = L_616->___customClipSet_22;
		bool L_618;
		L_618 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_617, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B189_0 = G_B188_0;
		if (L_618)
		{
			G_B190_0 = G_B188_0;
			goto IL_1333;
		}
	}

IL_132b:
	{
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_619 = __this->___footStepSounds_82;
		G_B191_0 = L_619;
		G_B191_1 = G_B189_0;
		goto IL_133e;
	}

IL_1333:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_620 = __this->___dynamicFootstep_84;
		NullCheck(L_620);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_621 = L_620->___customClipSet_22;
		G_B191_0 = L_621;
		G_B191_1 = G_B190_0;
	}

IL_133e:
	{
		G_B193_0 = G_B191_0;
		G_B193_1 = G_B191_1;
		goto IL_134b;
	}

IL_1340:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_622 = __this->___dynamicFootstep_84;
		NullCheck(L_622);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_623 = L_622->___mudClipSet_21;
		G_B193_0 = L_623;
		G_B193_1 = G_B192_0;
	}

IL_134b:
	{
		G_B195_0 = G_B193_0;
		G_B195_1 = G_B193_1;
		goto IL_1358;
	}

IL_134d:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_624 = __this->___dynamicFootstep_84;
		NullCheck(L_624);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_625 = L_624->___dirtAndGravelClipSet_19;
		G_B195_0 = L_625;
		G_B195_1 = G_B194_0;
	}

IL_1358:
	{
		G_B197_0 = G_B195_0;
		G_B197_1 = G_B195_1;
		goto IL_1365;
	}

IL_135a:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_626 = __this->___dynamicFootstep_84;
		NullCheck(L_626);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_627 = L_626->___rockAndConcreteClipSet_20;
		G_B197_0 = L_627;
		G_B197_1 = G_B196_0;
	}

IL_1365:
	{
		G_B199_0 = G_B197_0;
		G_B199_1 = G_B197_1;
		goto IL_1372;
	}

IL_1367:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_628 = __this->___dynamicFootstep_84;
		NullCheck(L_628);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_629 = L_628->___metalAndGlassClipSet_17;
		G_B199_0 = L_629;
		G_B199_1 = G_B198_0;
	}

IL_1372:
	{
		G_B201_0 = G_B199_0;
		G_B201_1 = G_B199_1;
		goto IL_137f;
	}

IL_1374:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_630 = __this->___dynamicFootstep_84;
		NullCheck(L_630);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_631 = L_630->___grassClipSet_18;
		G_B201_0 = L_631;
		G_B201_1 = G_B200_0;
	}

IL_137f:
	{
		G_B203_0 = G_B201_0;
		G_B203_1 = G_B201_1;
		goto IL_138c;
	}

IL_1381:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_632 = __this->___dynamicFootstep_84;
		NullCheck(L_632);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_633 = L_632->___woodClipSet_16;
		G_B203_0 = L_633;
		G_B203_1 = G_B202_0;
	}

IL_138c:
	{
		NullCheck(G_B203_1);
		G_B203_1->___currentClipSet_15 = G_B203_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B203_1->___currentClipSet_15), (void*)G_B203_0);
		goto IL_162f;
	}

IL_1397:
	{
		// }else if (hit.collider.GetComponent<MeshRenderer>()){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_634;
		L_634 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_634);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_635;
		L_635 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_634, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_636;
		L_636 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_635, NULL);
		V_58 = L_636;
		bool L_637 = V_58;
		if (!L_637)
		{
			goto IL_162f;
		}
	}
	{
		// dynamicFootstep.currentClipSet = (dynamicFootstep.woodMat.Any() && dynamicFootstep.woodMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.woodClipSet.Any()) ? // If standing on Wood
		// dynamicFootstep.woodClipSet : ((dynamicFootstep.grassMat.Any() && dynamicFootstep.grassMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.grassClipSet.Any()) ? // If standing on Grass
		// dynamicFootstep.grassClipSet : ((dynamicFootstep.metalAndGlassMat.Any() && dynamicFootstep.metalAndGlassMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.metalAndGlassClipSet.Any()) ? // If standing on Metal/Glass
		// dynamicFootstep.metalAndGlassClipSet : ((dynamicFootstep.rockAndConcreteMat.Any() && dynamicFootstep.rockAndConcreteMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.rockAndConcreteClipSet.Any()) ? // If standing on Rock/Concrete
		// dynamicFootstep.rockAndConcreteClipSet : ((dynamicFootstep.dirtAndGravelMat.Any() && dynamicFootstep.dirtAndGravelMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.dirtAndGravelClipSet.Any()) ? // If standing on Dirt/Gravle
		// dynamicFootstep.dirtAndGravelClipSet : ((dynamicFootstep.mudMat.Any() && dynamicFootstep.mudMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.mudClipSet.Any())? // If standing on Mud
		// dynamicFootstep.mudClipSet : ((dynamicFootstep.customMat.Any() && dynamicFootstep.customMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.customClipSet.Any())? // If standing on the custom material
		// dynamicFootstep.customClipSet : footStepSounds.Any() ? footStepSounds : null)))))); // If material is unknown, fall back
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_638 = __this->___dynamicFootstep_84;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_639 = __this->___dynamicFootstep_84;
		NullCheck(L_639);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_640 = L_639->___woodMat_8;
		bool L_641;
		L_641 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_640, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B206_0 = L_638;
		if (!L_641)
		{
			G_B208_0 = L_638;
			goto IL_1402;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_642 = __this->___dynamicFootstep_84;
		NullCheck(L_642);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_643 = L_642->___woodMat_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_644;
		L_644 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_644);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_645;
		L_645 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_644, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_645);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_646;
		L_646 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_645, NULL);
		NullCheck(L_643);
		bool L_647;
		L_647 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_643, L_646, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B207_0 = G_B206_0;
		if (!L_647)
		{
			G_B208_0 = G_B206_0;
			goto IL_1402;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_648 = __this->___dynamicFootstep_84;
		NullCheck(L_648);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_649 = L_648->___woodClipSet_16;
		bool L_650;
		L_650 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_649, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B208_0 = G_B207_0;
		if (L_650)
		{
			G_B242_0 = G_B207_0;
			goto IL_161e;
		}
	}

IL_1402:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_651 = __this->___dynamicFootstep_84;
		NullCheck(L_651);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_652 = L_651->___grassMat_10;
		bool L_653;
		L_653 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_652, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B209_0 = G_B208_0;
		if (!L_653)
		{
			G_B211_0 = G_B208_0;
			goto IL_144c;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_654 = __this->___dynamicFootstep_84;
		NullCheck(L_654);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_655 = L_654->___grassMat_10;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_656;
		L_656 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_656);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_657;
		L_657 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_656, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_657);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_658;
		L_658 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_657, NULL);
		NullCheck(L_655);
		bool L_659;
		L_659 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_655, L_658, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B210_0 = G_B209_0;
		if (!L_659)
		{
			G_B211_0 = G_B209_0;
			goto IL_144c;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_660 = __this->___dynamicFootstep_84;
		NullCheck(L_660);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_661 = L_660->___grassClipSet_18;
		bool L_662;
		L_662 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_661, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B211_0 = G_B210_0;
		if (L_662)
		{
			G_B240_0 = G_B210_0;
			goto IL_1611;
		}
	}

IL_144c:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_663 = __this->___dynamicFootstep_84;
		NullCheck(L_663);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_664 = L_663->___metalAndGlassMat_9;
		bool L_665;
		L_665 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_664, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B212_0 = G_B211_0;
		if (!L_665)
		{
			G_B214_0 = G_B211_0;
			goto IL_1496;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_666 = __this->___dynamicFootstep_84;
		NullCheck(L_666);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_667 = L_666->___metalAndGlassMat_9;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_668;
		L_668 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_668);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_669;
		L_669 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_668, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_669);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_670;
		L_670 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_669, NULL);
		NullCheck(L_667);
		bool L_671;
		L_671 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_667, L_670, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B213_0 = G_B212_0;
		if (!L_671)
		{
			G_B214_0 = G_B212_0;
			goto IL_1496;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_672 = __this->___dynamicFootstep_84;
		NullCheck(L_672);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_673 = L_672->___metalAndGlassClipSet_17;
		bool L_674;
		L_674 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_673, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B214_0 = G_B213_0;
		if (L_674)
		{
			G_B238_0 = G_B213_0;
			goto IL_1604;
		}
	}

IL_1496:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_675 = __this->___dynamicFootstep_84;
		NullCheck(L_675);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_676 = L_675->___rockAndConcreteMat_12;
		bool L_677;
		L_677 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_676, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B215_0 = G_B214_0;
		if (!L_677)
		{
			G_B217_0 = G_B214_0;
			goto IL_14e0;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_678 = __this->___dynamicFootstep_84;
		NullCheck(L_678);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_679 = L_678->___rockAndConcreteMat_12;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_680;
		L_680 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_680);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_681;
		L_681 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_680, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_681);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_682;
		L_682 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_681, NULL);
		NullCheck(L_679);
		bool L_683;
		L_683 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_679, L_682, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B216_0 = G_B215_0;
		if (!L_683)
		{
			G_B217_0 = G_B215_0;
			goto IL_14e0;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_684 = __this->___dynamicFootstep_84;
		NullCheck(L_684);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_685 = L_684->___rockAndConcreteClipSet_20;
		bool L_686;
		L_686 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_685, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B217_0 = G_B216_0;
		if (L_686)
		{
			G_B236_0 = G_B216_0;
			goto IL_15f7;
		}
	}

IL_14e0:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_687 = __this->___dynamicFootstep_84;
		NullCheck(L_687);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_688 = L_687->___dirtAndGravelMat_11;
		bool L_689;
		L_689 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_688, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B218_0 = G_B217_0;
		if (!L_689)
		{
			G_B220_0 = G_B217_0;
			goto IL_152a;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_690 = __this->___dynamicFootstep_84;
		NullCheck(L_690);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_691 = L_690->___dirtAndGravelMat_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_692;
		L_692 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_692);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_693;
		L_693 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_692, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_693);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_694;
		L_694 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_693, NULL);
		NullCheck(L_691);
		bool L_695;
		L_695 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_691, L_694, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B219_0 = G_B218_0;
		if (!L_695)
		{
			G_B220_0 = G_B218_0;
			goto IL_152a;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_696 = __this->___dynamicFootstep_84;
		NullCheck(L_696);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_697 = L_696->___dirtAndGravelClipSet_19;
		bool L_698;
		L_698 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_697, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B220_0 = G_B219_0;
		if (L_698)
		{
			G_B234_0 = G_B219_0;
			goto IL_15ea;
		}
	}

IL_152a:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_699 = __this->___dynamicFootstep_84;
		NullCheck(L_699);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_700 = L_699->___mudMat_13;
		bool L_701;
		L_701 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_700, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B221_0 = G_B220_0;
		if (!L_701)
		{
			G_B223_0 = G_B220_0;
			goto IL_1571;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_702 = __this->___dynamicFootstep_84;
		NullCheck(L_702);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_703 = L_702->___mudMat_13;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_704;
		L_704 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_704);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_705;
		L_705 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_704, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_705);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_706;
		L_706 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_705, NULL);
		NullCheck(L_703);
		bool L_707;
		L_707 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_703, L_706, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B222_0 = G_B221_0;
		if (!L_707)
		{
			G_B223_0 = G_B221_0;
			goto IL_1571;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_708 = __this->___dynamicFootstep_84;
		NullCheck(L_708);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_709 = L_708->___mudClipSet_21;
		bool L_710;
		L_710 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_709, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B223_0 = G_B222_0;
		if (L_710)
		{
			G_B232_0 = G_B222_0;
			goto IL_15dd;
		}
	}

IL_1571:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_711 = __this->___dynamicFootstep_84;
		NullCheck(L_711);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_712 = L_711->___customMat_14;
		bool L_713;
		L_713 = Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE(L_712, Enumerable_Any_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mA4A40535D9D53C41D836D9EA6E01B8F3585082AE_RuntimeMethod_var);
		G_B224_0 = G_B223_0;
		if (!L_713)
		{
			G_B226_0 = G_B223_0;
			goto IL_15b8;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_714 = __this->___dynamicFootstep_84;
		NullCheck(L_714);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_715 = L_714->___customMat_14;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_716;
		L_716 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_55), NULL);
		NullCheck(L_716);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_717;
		L_717 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_716, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_717);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_718;
		L_718 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_717, NULL);
		NullCheck(L_715);
		bool L_719;
		L_719 = List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E(L_715, L_718, List_1_Contains_m7A8C2ED86DA266B355DC9A0F0E03A62A26E56B3E_RuntimeMethod_var);
		G_B225_0 = G_B224_0;
		if (!L_719)
		{
			G_B226_0 = G_B224_0;
			goto IL_15b8;
		}
	}
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_720 = __this->___dynamicFootstep_84;
		NullCheck(L_720);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_721 = L_720->___customClipSet_22;
		bool L_722;
		L_722 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_721, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B226_0 = G_B225_0;
		if (L_722)
		{
			G_B230_0 = G_B225_0;
			goto IL_15d0;
		}
	}

IL_15b8:
	{
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_723 = __this->___footStepSounds_82;
		bool L_724;
		L_724 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_723, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		G_B227_0 = G_B226_0;
		if (L_724)
		{
			G_B228_0 = G_B226_0;
			goto IL_15c8;
		}
	}
	{
		G_B229_0 = ((List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*)(NULL));
		G_B229_1 = G_B227_0;
		goto IL_15ce;
	}

IL_15c8:
	{
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_725 = __this->___footStepSounds_82;
		G_B229_0 = L_725;
		G_B229_1 = G_B228_0;
	}

IL_15ce:
	{
		G_B231_0 = G_B229_0;
		G_B231_1 = G_B229_1;
		goto IL_15db;
	}

IL_15d0:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_726 = __this->___dynamicFootstep_84;
		NullCheck(L_726);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_727 = L_726->___customClipSet_22;
		G_B231_0 = L_727;
		G_B231_1 = G_B230_0;
	}

IL_15db:
	{
		G_B233_0 = G_B231_0;
		G_B233_1 = G_B231_1;
		goto IL_15e8;
	}

IL_15dd:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_728 = __this->___dynamicFootstep_84;
		NullCheck(L_728);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_729 = L_728->___mudClipSet_21;
		G_B233_0 = L_729;
		G_B233_1 = G_B232_0;
	}

IL_15e8:
	{
		G_B235_0 = G_B233_0;
		G_B235_1 = G_B233_1;
		goto IL_15f5;
	}

IL_15ea:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_730 = __this->___dynamicFootstep_84;
		NullCheck(L_730);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_731 = L_730->___dirtAndGravelClipSet_19;
		G_B235_0 = L_731;
		G_B235_1 = G_B234_0;
	}

IL_15f5:
	{
		G_B237_0 = G_B235_0;
		G_B237_1 = G_B235_1;
		goto IL_1602;
	}

IL_15f7:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_732 = __this->___dynamicFootstep_84;
		NullCheck(L_732);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_733 = L_732->___rockAndConcreteClipSet_20;
		G_B237_0 = L_733;
		G_B237_1 = G_B236_0;
	}

IL_1602:
	{
		G_B239_0 = G_B237_0;
		G_B239_1 = G_B237_1;
		goto IL_160f;
	}

IL_1604:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_734 = __this->___dynamicFootstep_84;
		NullCheck(L_734);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_735 = L_734->___metalAndGlassClipSet_17;
		G_B239_0 = L_735;
		G_B239_1 = G_B238_0;
	}

IL_160f:
	{
		G_B241_0 = G_B239_0;
		G_B241_1 = G_B239_1;
		goto IL_161c;
	}

IL_1611:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_736 = __this->___dynamicFootstep_84;
		NullCheck(L_736);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_737 = L_736->___grassClipSet_18;
		G_B241_0 = L_737;
		G_B241_1 = G_B240_0;
	}

IL_161c:
	{
		G_B243_0 = G_B241_0;
		G_B243_1 = G_B241_1;
		goto IL_1629;
	}

IL_161e:
	{
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_738 = __this->___dynamicFootstep_84;
		NullCheck(L_738);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_739 = L_738->___woodClipSet_16;
		G_B243_0 = L_739;
		G_B243_1 = G_B242_0;
	}

IL_1629:
	{
		NullCheck(G_B243_1);
		G_B243_1->___currentClipSet_15 = G_B243_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B243_1->___currentClipSet_15), (void*)G_B243_0);
	}

IL_162f:
	{
		// if(IsGrounded)
		bool L_740;
		L_740 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_59 = L_740;
		bool L_741 = V_59;
		if (!L_741)
		{
			goto IL_1747;
		}
	}
	{
		// if(!previousGrounded)
		bool L_742 = __this->___previousGrounded_76;
		V_60 = (bool)((((int32_t)L_742) == ((int32_t)0))? 1 : 0);
		bool L_743 = V_60;
		if (!L_743)
		{
			goto IL_16bd;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()) { audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_744 = __this->___dynamicFootstep_84;
		NullCheck(L_744);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_745 = L_744->___currentClipSet_15;
		bool L_746;
		L_746 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_745, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		V_61 = L_746;
		bool L_747 = V_61;
		if (!L_747)
		{
			goto IL_16a5;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()) { audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_748 = __this->___audioSource_77;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_749 = __this->___dynamicFootstep_84;
		NullCheck(L_749);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_750 = L_749->___currentClipSet_15;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_751 = __this->___dynamicFootstep_84;
		NullCheck(L_751);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_752 = L_751->___currentClipSet_15;
		NullCheck(L_752);
		int32_t L_753;
		L_753 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_752, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_754;
		L_754 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_753, NULL);
		NullCheck(L_750);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_755;
		L_755 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_750, L_754, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		float L_756 = __this->___Volume_79;
		NullCheck(L_748);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_748, L_755, ((float)(L_756/(10.0f))), NULL);
	}

IL_16a5:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_757 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_757, (0.5f)));
		goto IL_173d;
	}

IL_16bd:
	{
		// if(headbobCycle > nextStepTime)
		float L_758 = __this->___headbobCycle_65;
		float L_759 = __this->___nextStepTime_64;
		V_62 = (bool)((((float)L_758) > ((float)L_759))? 1 : 0);
		bool L_760 = V_62;
		if (!L_760)
		{
			goto IL_173c;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_761 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_761, (0.5f)));
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_762 = __this->___dynamicFootstep_84;
		NullCheck(L_762);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_763 = L_762->___currentClipSet_15;
		bool L_764;
		L_764 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_763, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		V_63 = L_764;
		bool L_765 = V_63;
		if (!L_765)
		{
			goto IL_173b;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_766 = __this->___audioSource_77;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_767 = __this->___dynamicFootstep_84;
		NullCheck(L_767);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_768 = L_767->___currentClipSet_15;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_769 = __this->___dynamicFootstep_84;
		NullCheck(L_769);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_770 = L_769->___currentClipSet_15;
		NullCheck(L_770);
		int32_t L_771;
		L_771 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_770, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_772;
		L_772 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_771, NULL);
		NullCheck(L_768);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_773;
		L_773 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_768, L_772, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		float L_774 = __this->___Volume_79;
		NullCheck(L_766);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_766, L_773, ((float)(L_774/(10.0f))), NULL);
	}

IL_173b:
	{
	}

IL_173c:
	{
	}

IL_173d:
	{
		// previousGrounded = true;
		__this->___previousGrounded_76 = (bool)1;
		goto IL_17b4;
	}

IL_1747:
	{
		// if(previousGrounded)
		bool L_775 = __this->___previousGrounded_76;
		V_64 = L_775;
		bool L_776 = V_64;
		if (!L_776)
		{
			goto IL_17ac;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_777 = __this->___dynamicFootstep_84;
		NullCheck(L_777);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_778 = L_777->___currentClipSet_15;
		bool L_779;
		L_779 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_778, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		V_65 = L_779;
		bool L_780 = V_65;
		if (!L_780)
		{
			goto IL_17ab;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_781 = __this->___audioSource_77;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_782 = __this->___dynamicFootstep_84;
		NullCheck(L_782);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_783 = L_782->___currentClipSet_15;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_784 = __this->___dynamicFootstep_84;
		NullCheck(L_784);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_785 = L_784->___currentClipSet_15;
		NullCheck(L_785);
		int32_t L_786;
		L_786 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_785, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_787;
		L_787 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_786, NULL);
		NullCheck(L_783);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_788;
		L_788 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_783, L_787, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		float L_789 = __this->___Volume_79;
		NullCheck(L_781);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_781, L_788, ((float)(L_789/(10.0f))), NULL);
	}

IL_17ab:
	{
	}

IL_17ac:
	{
		// previousGrounded = false;
		__this->___previousGrounded_76 = (bool)0;
	}

IL_17b4:
	{
		goto IL_1917;
	}

IL_17ba:
	{
		// dynamicFootstep.currentClipSet = footStepSounds;
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_790 = __this->___dynamicFootstep_84;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_791 = __this->___footStepSounds_82;
		NullCheck(L_790);
		L_790->___currentClipSet_15 = L_791;
		Il2CppCodeGenWriteBarrier((void**)(&L_790->___currentClipSet_15), (void*)L_791);
		// if(IsGrounded)
		bool L_792;
		L_792 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_66 = L_792;
		bool L_793 = V_66;
		if (!L_793)
		{
			goto IL_18ce;
		}
	}
	{
		// if(!previousGrounded)
		bool L_794 = __this->___previousGrounded_76;
		V_67 = (bool)((((int32_t)L_794) == ((int32_t)0))? 1 : 0);
		bool L_795 = V_67;
		if (!L_795)
		{
			goto IL_1835;
		}
	}
	{
		// if(landSound){ audioSource.PlayOneShot(landSound,Volume/10); }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_796 = __this->___landSound_81;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_797;
		L_797 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_796, NULL);
		V_68 = L_797;
		bool L_798 = V_68;
		if (!L_798)
		{
			goto IL_181d;
		}
	}
	{
		// if(landSound){ audioSource.PlayOneShot(landSound,Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_799 = __this->___audioSource_77;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_800 = __this->___landSound_81;
		float L_801 = __this->___Volume_79;
		NullCheck(L_799);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_799, L_800, ((float)(L_801/(10.0f))), NULL);
	}

IL_181d:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_802 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_802, (0.5f)));
		goto IL_18c4;
	}

IL_1835:
	{
		// if(headbobCycle > nextStepTime)
		float L_803 = __this->___headbobCycle_65;
		float L_804 = __this->___nextStepTime_64;
		V_69 = (bool)((((float)L_803) > ((float)L_804))? 1 : 0);
		bool L_805 = V_69;
		if (!L_805)
		{
			goto IL_18c3;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_806 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_806, (0.5f)));
		// int n = Random.Range(0, footStepSounds.Count);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_807 = __this->___footStepSounds_82;
		NullCheck(L_807);
		int32_t L_808;
		L_808 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_807, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_809;
		L_809 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_808, NULL);
		V_70 = L_809;
		// if(footStepSounds.Any()){ audioSource.PlayOneShot(footStepSounds[n],Volume/10); }
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_810 = __this->___footStepSounds_82;
		bool L_811;
		L_811 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_810, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		V_71 = L_811;
		bool L_812 = V_71;
		if (!L_812)
		{
			goto IL_18a8;
		}
	}
	{
		// if(footStepSounds.Any()){ audioSource.PlayOneShot(footStepSounds[n],Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_813 = __this->___audioSource_77;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_814 = __this->___footStepSounds_82;
		int32_t L_815 = V_70;
		NullCheck(L_814);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_816;
		L_816 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_814, L_815, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		float L_817 = __this->___Volume_79;
		NullCheck(L_813);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_813, L_816, ((float)(L_817/(10.0f))), NULL);
	}

IL_18a8:
	{
		// footStepSounds[n] = footStepSounds[0];
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_818 = __this->___footStepSounds_82;
		int32_t L_819 = V_70;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_820 = __this->___footStepSounds_82;
		NullCheck(L_820);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_821;
		L_821 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_820, 0, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		NullCheck(L_818);
		List_1_set_Item_m24A0089A857737AD75BC8658B9559CB66C04CC0A(L_818, L_819, L_821, List_1_set_Item_m24A0089A857737AD75BC8658B9559CB66C04CC0A_RuntimeMethod_var);
	}

IL_18c3:
	{
	}

IL_18c4:
	{
		// previousGrounded = true;
		__this->___previousGrounded_76 = (bool)1;
		goto IL_1916;
	}

IL_18ce:
	{
		// if(previousGrounded)
		bool L_822 = __this->___previousGrounded_76;
		V_72 = L_822;
		bool L_823 = V_72;
		if (!L_823)
		{
			goto IL_190e;
		}
	}
	{
		// if(jumpSound){ audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_824 = __this->___jumpSound_80;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_825;
		L_825 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_824, NULL);
		V_73 = L_825;
		bool L_826 = V_73;
		if (!L_826)
		{
			goto IL_190d;
		}
	}
	{
		// if(jumpSound){ audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_827 = __this->___audioSource_77;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_828 = __this->___jumpSound_80;
		float L_829 = __this->___Volume_79;
		NullCheck(L_827);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_827, L_828, ((float)(L_829/(10.0f))), NULL);
	}

IL_190d:
	{
	}

IL_190e:
	{
		// previousGrounded = false;
		__this->___previousGrounded_76 = (bool)0;
	}

IL_1916:
	{
	}

IL_1917:
	{
		goto IL_1a67;
	}

IL_191d:
	{
		// if(IsGrounded)
		bool L_830;
		L_830 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_74 = L_830;
		bool L_831 = V_74;
		if (!L_831)
		{
			goto IL_1a1e;
		}
	}
	{
		// if(!previousGrounded)
		bool L_832 = __this->___previousGrounded_76;
		V_75 = (bool)((((int32_t)L_832) == ((int32_t)0))? 1 : 0);
		bool L_833 = V_75;
		if (!L_833)
		{
			goto IL_1987;
		}
	}
	{
		// if(landSound) { audioSource.PlayOneShot(landSound,Volume/10); }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_834 = __this->___landSound_81;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_835;
		L_835 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_834, NULL);
		V_76 = L_835;
		bool L_836 = V_76;
		if (!L_836)
		{
			goto IL_196f;
		}
	}
	{
		// if(landSound) { audioSource.PlayOneShot(landSound,Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_837 = __this->___audioSource_77;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_838 = __this->___landSound_81;
		float L_839 = __this->___Volume_79;
		NullCheck(L_837);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_837, L_838, ((float)(L_839/(10.0f))), NULL);
	}

IL_196f:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_840 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_840, (0.5f)));
		goto IL_1a14;
	}

IL_1987:
	{
		// if(headbobCycle > nextStepTime)
		float L_841 = __this->___headbobCycle_65;
		float L_842 = __this->___nextStepTime_64;
		V_77 = (bool)((((float)L_841) > ((float)L_842))? 1 : 0);
		bool L_843 = V_77;
		if (!L_843)
		{
			goto IL_1a13;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_844 = __this->___headbobCycle_65;
		__this->___nextStepTime_64 = ((float)il2cpp_codegen_add(L_844, (0.5f)));
		// int n = Random.Range(0, footStepSounds.Count);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_845 = __this->___footStepSounds_82;
		NullCheck(L_845);
		int32_t L_846;
		L_846 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_845, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_847;
		L_847 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_846, NULL);
		V_78 = L_847;
		// if(footStepSounds.Any() && footStepSounds[n] != null){ audioSource.PlayOneShot(footStepSounds[n],Volume/10);}
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_848 = __this->___footStepSounds_82;
		bool L_849;
		L_849 = Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E(L_848, Enumerable_Any_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m2303CAB49773B55E7BA690381C16353DD8BEBA1E_RuntimeMethod_var);
		if (!L_849)
		{
			goto IL_19e4;
		}
	}
	{
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_850 = __this->___footStepSounds_82;
		int32_t L_851 = V_78;
		NullCheck(L_850);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_852;
		L_852 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_850, L_851, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_853;
		L_853 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_852, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B288_0 = ((int32_t)(L_853));
		goto IL_19e5;
	}

IL_19e4:
	{
		G_B288_0 = 0;
	}

IL_19e5:
	{
		V_79 = (bool)G_B288_0;
		bool L_854 = V_79;
		if (!L_854)
		{
			goto IL_1a12;
		}
	}
	{
		// if(footStepSounds.Any() && footStepSounds[n] != null){ audioSource.PlayOneShot(footStepSounds[n],Volume/10);}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_855 = __this->___audioSource_77;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_856 = __this->___footStepSounds_82;
		int32_t L_857 = V_78;
		NullCheck(L_856);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_858;
		L_858 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_856, L_857, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		float L_859 = __this->___Volume_79;
		NullCheck(L_855);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_855, L_858, ((float)(L_859/(10.0f))), NULL);
	}

IL_1a12:
	{
	}

IL_1a13:
	{
	}

IL_1a14:
	{
		// previousGrounded = true;
		__this->___previousGrounded_76 = (bool)1;
		goto IL_1a66;
	}

IL_1a1e:
	{
		// if(previousGrounded)
		bool L_860 = __this->___previousGrounded_76;
		V_80 = L_860;
		bool L_861 = V_80;
		if (!L_861)
		{
			goto IL_1a5e;
		}
	}
	{
		// if(jumpSound) { audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_862 = __this->___jumpSound_80;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_863;
		L_863 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_862, NULL);
		V_81 = L_863;
		bool L_864 = V_81;
		if (!L_864)
		{
			goto IL_1a5d;
		}
	}
	{
		// if(jumpSound) { audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_865 = __this->___audioSource_77;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_866 = __this->___jumpSound_80;
		float L_867 = __this->___Volume_79;
		NullCheck(L_865);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_865, L_866, ((float)(L_867/(10.0f))), NULL);
	}

IL_1a5d:
	{
	}

IL_1a5e:
	{
		// previousGrounded = false;
		__this->___previousGrounded_76 = (bool)0;
	}

IL_1a66:
	{
	}

IL_1a67:
	{
	}

IL_1a68:
	{
		// IsGrounded = false;
		FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline(__this, (bool)0, NULL);
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_868 = __this->___advanced_46;
		NullCheck(L_868);
		float L_869 = L_868->___maxSlopeAngle_3;
		V_82 = (bool)((((float)L_869) > ((float)(0.0f)))? 1 : 0);
		bool L_870 = V_82;
		if (!L_870)
		{
			goto IL_1ae5;
		}
	}
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable || advanced.isTouchingUpright){didJump = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_871 = __this->___advanced_46;
		NullCheck(L_871);
		bool L_872 = L_871->___isTouchingFlat_6;
		if (L_872)
		{
			goto IL_1ab0;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_873 = __this->___advanced_46;
		NullCheck(L_873);
		bool L_874 = L_873->___isTouchingWalkable_4;
		if (L_874)
		{
			goto IL_1ab0;
		}
	}
	{
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_875 = __this->___advanced_46;
		NullCheck(L_875);
		bool L_876 = L_875->___isTouchingUpright_5;
		G_B305_0 = ((int32_t)(L_876));
		goto IL_1ab1;
	}

IL_1ab0:
	{
		G_B305_0 = 1;
	}

IL_1ab1:
	{
		V_83 = (bool)G_B305_0;
		bool L_877 = V_83;
		if (!L_877)
		{
			goto IL_1ac0;
		}
	}
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable || advanced.isTouchingUpright){didJump = false;}
		__this->___didJump_36 = (bool)0;
	}

IL_1ac0:
	{
		// advanced.isTouchingWalkable = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_878 = __this->___advanced_46;
		NullCheck(L_878);
		L_878->___isTouchingWalkable_4 = (bool)0;
		// advanced.isTouchingUpright = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_879 = __this->___advanced_46;
		NullCheck(L_879);
		L_879->___isTouchingUpright_5 = (bool)0;
		// advanced.isTouchingFlat = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_880 = __this->___advanced_46;
		NullCheck(L_880);
		L_880->___isTouchingFlat_6 = (bool)0;
	}

IL_1ae5:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FirstPersonAIO::CameraShake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirstPersonAIO_CameraShake_mDA7A6856105667575A41F85E805D45EFE5580FAA (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, float ___Duration0, float ___Magnitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* L_0 = (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0*)il2cpp_codegen_object_new(U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCameraShakeU3Ed__94__ctor_m9DEC2E2E36C3793CD94AC4105459FBAD7A2BC521(L_0, 0, NULL);
		U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* L_2 = L_1;
		float L_3 = ___Duration0;
		NullCheck(L_2);
		L_2->___Duration_2 = L_3;
		U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* L_4 = L_2;
		float L_5 = ___Magnitude1;
		NullCheck(L_4);
		L_4->___Magnitude_3 = L_5;
		return L_4;
	}
}
// System.Void FirstPersonAIO::RotateCamera(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_RotateCamera_m308D6FF9E8F9FCAC849DE796CE41EC95F95BFAA8 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Rotation0, bool ___Snap1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// enableCameraMovement = !enableCameraMovement;
		bool L_0 = __this->___enableCameraMovement_5;
		__this->___enableCameraMovement_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		bool L_1 = ___Snap1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___Rotation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		__this->___followAngles_24 = L_4;
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___Rotation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		__this->___targetAngles_23 = L_6;
		goto IL_003f;
	}

IL_0031:
	{
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___Rotation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		__this->___targetAngles_23 = L_8;
	}

IL_003f:
	{
		// enableCameraMovement = !enableCameraMovement;
		bool L_9 = __this->___enableCameraMovement_5;
		__this->___enableCameraMovement_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void FirstPersonAIO::ControllerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_ControllerPause_m6F4F96831903F88B141A62735E7A943B7DB8183C (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// controllerPauseState = !controllerPauseState;
		bool L_0 = __this->___controllerPauseState_4;
		__this->___controllerPauseState_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(lockAndHideCursor){
		bool L_1 = __this->___lockAndHideCursor_12;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// Cursor.lockState = controllerPauseState? CursorLockMode.None : CursorLockMode.Locked;
		bool L_3 = __this->___controllerPauseState_4;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B4_0, NULL);
		// Cursor.visible = controllerPauseState;
		bool L_4 = __this->___controllerPauseState_4;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4(L_4, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Single FirstPersonAIO::SlopeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonAIO_SlopeCheck_m98D7C085881D9A98719921C4BF1FB1F6C8566F62 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// advanced.lastKnownSlopeAngle = Mathf.MoveTowards(advanced.lastKnownSlopeAngle, Vector3.Angle(advanced.curntGroundNormal, Vector3.up),5f);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_0 = __this->___advanced_46;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_1 = __this->___advanced_46;
		NullCheck(L_1);
		float L_2 = L_1->___lastKnownSlopeAngle_13;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_3 = __this->___advanced_46;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___curntGroundNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_6;
		L_6 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_4, L_5, NULL);
		float L_7;
		L_7 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_2, L_6, (5.0f), NULL);
		NullCheck(L_0);
		L_0->___lastKnownSlopeAngle_13 = L_7;
		// return new AnimationCurve(new Keyframe(-90.0f, 1.0f), new Keyframe(0.0f, 1.0f), new Keyframe(advanced.maxSlopeAngle+15, 0f),new Keyframe(advanced.maxWallShear, 0.0f),new Keyframe(advanced.maxWallShear+0.1f, 1.0f),new Keyframe(90, 1.0f)){preWrapMode = WrapMode.Clamp, postWrapMode = WrapMode.ClampForever}.Evaluate(advanced.lastKnownSlopeAngle);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_8 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)6);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_8;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (-90.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_11 = L_9;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_12), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_12);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_13 = L_11;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_14 = __this->___advanced_46;
		NullCheck(L_14);
		float L_15 = L_14->___maxSlopeAngle_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_16), ((float)il2cpp_codegen_add(L_15, (15.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_16);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_17 = L_13;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_18 = __this->___advanced_46;
		NullCheck(L_18);
		float L_19 = L_18->___maxWallShear_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_20), L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_20);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_21 = L_17;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_22 = __this->___advanced_46;
		NullCheck(L_22);
		float L_23 = L_22->___maxWallShear_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_24), ((float)il2cpp_codegen_add(L_23, (0.100000001f))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_24);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_25 = L_21;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_26), (90.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_26);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_27, L_25, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27;
		NullCheck(L_28);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_28, 1, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = L_28;
		NullCheck(L_29);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_29, 8, NULL);
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_30 = __this->___advanced_46;
		NullCheck(L_30);
		float L_31 = L_30->___lastKnownSlopeAngle_13;
		NullCheck(L_29);
		float L_32;
		L_32 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_29, L_31, NULL);
		V_0 = L_32;
		goto IL_0106;
	}

IL_0106:
	{
		// }
		float L_33 = V_0;
		return L_33;
	}
}
// System.Void FirstPersonAIO::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionEnter_mA6B1FC14544CD8F45AA41B70B55D5BCC59A7C19D (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___CollisionData0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		V_0 = 0;
		goto IL_016c;
	}

IL_0008:
	{
		// float a = Vector3.Angle(CollisionData.GetContact(i).normal, Vector3.up);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___CollisionData0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_2;
		L_2 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_0, L_1, NULL);
		V_2 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_5;
		L_5 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// if(CollisionData.GetContact(i).point.y <  transform.position.y - ((capsule.height/2) - capsule.radius*0.95f)){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___CollisionData0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_8;
		L_8 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_2), NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14 = __this->___capsule_47;
		NullCheck(L_14);
		float L_15;
		L_15 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_14, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_16 = __this->___capsule_47;
		NullCheck(L_16);
		float L_17;
		L_17 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_16, NULL);
		V_3 = (bool)((((float)L_10) < ((float)((float)il2cpp_codegen_subtract(L_13, ((float)il2cpp_codegen_subtract(((float)(L_15/(2.0f))), ((float)il2cpp_codegen_multiply(L_17, (0.949999988f)))))))))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0167;
		}
	}
	{
		// if(!IsGrounded){
		bool L_19;
		L_19 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline(__this, (bool)1, NULL);
		// advanced.stairMiniHop = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_21 = __this->___advanced_46;
		NullCheck(L_21);
		L_21->___stairMiniHop_9 = (bool)0;
		// if(didJump && a <= 70){didJump = false;}
		bool L_22 = __this->___didJump_36;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		float L_23 = V_1;
		G_B6_0 = ((((int32_t)((!(((float)L_23) <= ((float)(70.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B6_0 = 0;
	}

IL_00af:
	{
		V_5 = (bool)G_B6_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		// if(didJump && a <= 70){didJump = false;}
		__this->___didJump_36 = (bool)0;
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_25 = __this->___advanced_46;
		NullCheck(L_25);
		float L_26 = L_25->___maxSlopeAngle_3;
		V_6 = (bool)((((float)L_26) > ((float)(0.0f)))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0166;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		float L_28 = V_1;
		V_7 = (bool)((((float)L_28) < ((float)(5.0999999f)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_0105;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_30 = __this->___advanced_46;
		NullCheck(L_30);
		L_30->___isTouchingFlat_6 = (bool)1;
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_31 = __this->___advanced_46;
		NullCheck(L_31);
		L_31->___isTouchingWalkable_4 = (bool)1;
		goto IL_014b;
	}

IL_0105:
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		float L_32 = V_1;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_33 = __this->___advanced_46;
		NullCheck(L_33);
		float L_34 = L_33->___maxSlopeAngle_3;
		V_8 = (bool)((((float)L_32) < ((float)((float)il2cpp_codegen_add(L_34, (0.100000001f)))))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_012f;
		}
	}
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_36 = __this->___advanced_46;
		NullCheck(L_36);
		L_36->___isTouchingWalkable_4 = (bool)1;
		goto IL_014b;
	}

IL_012f:
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		float L_37 = V_1;
		V_9 = (bool)((((float)L_37) < ((float)(90.0f)))? 1 : 0);
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_014b;
		}
	}
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_39 = __this->___advanced_46;
		NullCheck(L_39);
		L_39->___isTouchingUpright_5 = (bool)1;
	}

IL_014b:
	{
		// advanced.curntGroundNormal = CollisionData.GetContact(i).normal;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_40 = __this->___advanced_46;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_41 = ___CollisionData0;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_43;
		L_43 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_41, L_42, NULL);
		V_2 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_2), NULL);
		NullCheck(L_40);
		L_40->___curntGroundNormal_11 = L_44;
	}

IL_0166:
	{
	}

IL_0167:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_016c:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_46 = V_0;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_47 = ___CollisionData0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Collision_get_contactCount_m063F555F6D8E5D1BC995C69306041280CE8BF150(L_47, NULL);
		V_10 = (bool)((((int32_t)L_46) < ((int32_t)L_48))? 1 : 0);
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionStay_m9A7C2770AA300AC770713469DE77A64C43B8E28F (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___CollisionData0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		V_0 = 0;
		goto IL_0147;
	}

IL_0008:
	{
		// float a = Vector3.Angle(CollisionData.GetContact(i).normal, Vector3.up);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___CollisionData0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_2;
		L_2 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_0, L_1, NULL);
		V_2 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_5;
		L_5 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// if(CollisionData.GetContact(i).point.y <  transform.position.y - ((capsule.height/2) - capsule.radius*0.95f)){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___CollisionData0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_8;
		L_8 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_2), NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14 = __this->___capsule_47;
		NullCheck(L_14);
		float L_15;
		L_15 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_14, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_16 = __this->___capsule_47;
		NullCheck(L_16);
		float L_17;
		L_17 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_16, NULL);
		V_3 = (bool)((((float)L_10) < ((float)((float)il2cpp_codegen_subtract(L_13, ((float)il2cpp_codegen_subtract(((float)(L_15/(2.0f))), ((float)il2cpp_codegen_multiply(L_17, (0.949999988f)))))))))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0142;
		}
	}
	{
		// if(!IsGrounded){
		bool L_19;
		L_19 = FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline(__this, (bool)1, NULL);
		// advanced.stairMiniHop = false;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_21 = __this->___advanced_46;
		NullCheck(L_21);
		L_21->___stairMiniHop_9 = (bool)0;
	}

IL_009a:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_22 = __this->___advanced_46;
		NullCheck(L_22);
		float L_23 = L_22->___maxSlopeAngle_3;
		V_5 = (bool)((((float)L_23) > ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0141;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		float L_25 = V_1;
		V_6 = (bool)((((float)L_25) < ((float)(5.0999999f)))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00e0;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_27 = __this->___advanced_46;
		NullCheck(L_27);
		L_27->___isTouchingFlat_6 = (bool)1;
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_28 = __this->___advanced_46;
		NullCheck(L_28);
		L_28->___isTouchingWalkable_4 = (bool)1;
		goto IL_0126;
	}

IL_00e0:
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		float L_29 = V_1;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_30 = __this->___advanced_46;
		NullCheck(L_30);
		float L_31 = L_30->___maxSlopeAngle_3;
		V_7 = (bool)((((float)L_29) < ((float)((float)il2cpp_codegen_add(L_31, (0.100000001f)))))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_010a;
		}
	}
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_33 = __this->___advanced_46;
		NullCheck(L_33);
		L_33->___isTouchingWalkable_4 = (bool)1;
		goto IL_0126;
	}

IL_010a:
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		float L_34 = V_1;
		V_8 = (bool)((((float)L_34) < ((float)(90.0f)))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_0126;
		}
	}
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_36 = __this->___advanced_46;
		NullCheck(L_36);
		L_36->___isTouchingUpright_5 = (bool)1;
	}

IL_0126:
	{
		// advanced.curntGroundNormal = CollisionData.GetContact(i).normal;
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_37 = __this->___advanced_46;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_38 = ___CollisionData0;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_40;
		L_40 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_38, L_39, NULL);
		V_2 = L_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_2), NULL);
		NullCheck(L_37);
		L_37->___curntGroundNormal_11 = L_41;
	}

IL_0141:
	{
	}

IL_0142:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0147:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_43 = V_0;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_44 = ___CollisionData0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Collision_get_contactCount_m063F555F6D8E5D1BC995C69306041280CE8BF150(L_44, NULL);
		V_9 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionExit_m57A043486CAB50584CA6A5B25B060615E1DF1CB4 (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___CollisionData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// IsGrounded = false;
		FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline(__this, (bool)0, NULL);
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_0 = __this->___advanced_46;
		NullCheck(L_0);
		float L_1 = L_0->___maxSlopeAngle_3;
		V_0 = (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_3 = __this->___advanced_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		NullCheck(L_3);
		L_3->___curntGroundNormal_11 = L_4;
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_5 = __this->___advanced_46;
		NullCheck(L_5);
		L_5->___lastKnownSlopeAngle_13 = (0.0f);
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_6 = __this->___advanced_46;
		NullCheck(L_6);
		L_6->___isTouchingWalkable_4 = (bool)0;
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_7 = __this->___advanced_46;
		NullCheck(L_7);
		L_7->___isTouchingUpright_5 = (bool)0;
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO__ctor_mE39DFF052CE9D46A5A77E97D9F1A0576F669EA2B (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool controllerPauseState = false;
		__this->___controllerPauseState_4 = (bool)0;
		// public bool enableCameraMovement = true;
		__this->___enableCameraMovement_5 = (bool)1;
		// public InvertMouseInput mouseInputInversion = InvertMouseInput.None;
		__this->___mouseInputInversion_6 = 0;
		// public CameraInputMethod cameraInputMethod =CameraInputMethod.Traditional;
		__this->___cameraInputMethod_7 = 0;
		// public float verticalRotationRange = 170;
		__this->___verticalRotationRange_8 = (170.0f);
		// public float mouseSensitivity = 10;
		__this->___mouseSensitivity_9 = (10.0f);
		// public  float   fOVToMouseSensitivity = 1;
		__this->___fOVToMouseSensitivity_10 = (1.0f);
		// public float cameraSmoothing = 5f;
		__this->___cameraSmoothing_11 = (5.0f);
		// public bool lockAndHideCursor = false;
		__this->___lockAndHideCursor_12 = (bool)0;
		// public bool enableCameraShake=false;
		__this->___enableCameraShake_14 = (bool)0;
		// public bool autoCrosshair = false;
		__this->___autoCrosshair_17 = (bool)0;
		// public bool drawStaminaMeter = true;
		__this->___drawStaminaMeter_18 = (bool)1;
		// public bool playerCanMove = true;
		__this->___playerCanMove_27 = (bool)1;
		// public bool walkByDefault = true;
		__this->___walkByDefault_28 = (bool)1;
		// public float walkSpeed = 4f;
		__this->___walkSpeed_29 = (4.0f);
		// public KeyCode sprintKey = KeyCode.LeftShift;
		__this->___sprintKey_30 = ((int32_t)304);
		// public float sprintSpeed = 8f;
		__this->___sprintSpeed_31 = (8.0f);
		// public float jumpPower = 5f;
		__this->___jumpPower_32 = (5.0f);
		// public bool canJump = true;
		__this->___canJump_33 = (bool)1;
		// public bool useStamina = true;
		__this->___useStamina_37 = (bool)1;
		// public float staminaDepletionSpeed = 5f;
		__this->___staminaDepletionSpeed_38 = (5.0f);
		// public float staminaLevel = 50;
		__this->___staminaLevel_39 = (50.0f);
		// public CrouchModifiers _crouchModifiers = new CrouchModifiers();
		CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* L_0 = (CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4*)il2cpp_codegen_object_new(CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CrouchModifiers__ctor_m633D49C979960AE3D35E06D66EA69B70B30F950A(L_0, NULL);
		__this->____crouchModifiers_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____crouchModifiers_45), (void*)L_0);
		// public AdvancedSettings advanced = new AdvancedSettings();
		AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* L_1 = (AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5*)il2cpp_codegen_object_new(AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AdvancedSettings__ctor_m928AFC1085371C3CCC1E0A2320D0D2E0D4B91981(L_1, NULL);
		__this->___advanced_46 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___advanced_46), (void*)L_1);
		// bool isSprinting = false;
		__this->___isSprinting_53 = (bool)0;
		// public bool useHeadbob = true;
		__this->___useHeadbob_55 = (bool)1;
		// public Transform head = null;
		__this->___head_56 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_56), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// public bool snapHeadjointToCapsul = true;
		__this->___snapHeadjointToCapsul_57 = (bool)1;
		// public float headbobFrequency = 1.5f;
		__this->___headbobFrequency_58 = (1.5f);
		// public float headbobSwayAngle = 5f;
		__this->___headbobSwayAngle_59 = (5.0f);
		// public float headbobHeight = 3f;
		__this->___headbobHeight_60 = (3.0f);
		// public float headbobSideMovement =5f;
		__this->___headbobSideMovement_61 = (5.0f);
		// public float jumpLandIntensity =3f;
		__this->___jumpLandIntensity_62 = (3.0f);
		// private float nextStepTime = 0.5f;
		__this->___nextStepTime_64 = (0.5f);
		// private float headbobCycle = 0.0f;
		__this->___headbobCycle_65 = (0.0f);
		// private float headbobFade = 0.0f;
		__this->___headbobFade_66 = (0.0f);
		// private float springPosition = 0.0f;
		__this->___springPosition_67 = (0.0f);
		// private float springVelocity = 0.0f;
		__this->___springVelocity_68 = (0.0f);
		// private float springElastic = 1.1f;
		__this->___springElastic_69 = (1.10000002f);
		// private float springDampen = 0.8f;
		__this->___springDampen_70 = (0.800000012f);
		// private float springVelocityThreshold = 0.05f;
		__this->___springVelocityThreshold_71 = (0.0500000007f);
		// private float springPositionThreshold = 0.05f;
		__this->___springPositionThreshold_72 = (0.0500000007f);
		// Vector3 previousVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___previousVelocity_74 = L_2;
		// public bool enableAudioSFX = true;
		__this->___enableAudioSFX_78 = (bool)1;
		// public float Volume = 5f;
		__this->___Volume_79 = (5.0f);
		// public AudioClip jumpSound = null;
		__this->___jumpSound_80 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpSound_80), (void*)(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL);
		// public AudioClip landSound = null;
		__this->___landSound_81 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landSound_81), (void*)(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL);
		// public List<AudioClip> footStepSounds = null;
		__this->___footStepSounds_82 = (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___footStepSounds_82), (void*)(List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*)NULL);
		// public DynamicFootStep dynamicFootstep = new DynamicFootStep();
		DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* L_3 = (DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7*)il2cpp_codegen_object_new(DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DynamicFootStep__ctor_mD5DACF1F7BF43B1D8020DE49CA256DD09D53736D(L_3, NULL);
		__this->___dynamicFootstep_84 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dynamicFootstep_84), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FirstPersonAIO/CrouchModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrouchModifiers__ctor_m633D49C979960AE3D35E06D66EA69B70B30F950A (CrouchModifiers_t2DE9783ADCBB033B492172302FA8243A57EA3BB4* __this, const RuntimeMethod* method) 
{
	{
		// public bool useCrouch = true;
		__this->___useCrouch_0 = (bool)1;
		// public bool toggleCrouch = false;
		__this->___toggleCrouch_1 = (bool)0;
		// public KeyCode crouchKey = KeyCode.LeftControl;
		__this->___crouchKey_2 = ((int32_t)306);
		// public float crouchWalkSpeedMultiplier = 0.5f;
		__this->___crouchWalkSpeedMultiplier_3 = (0.5f);
		// public float crouchJumpPowerMultiplier = 0f;
		__this->___crouchJumpPowerMultiplier_4 = (0.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FirstPersonAIO/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m928AFC1085371C3CCC1E0A2320D0D2E0D4B91981 (AdvancedSettings_tBBCDDFF3644A7AC2F9D8900BA32B4D307FAB92B5* __this, const RuntimeMethod* method) 
{
	{
		// public float gravityMultiplier = 1.0f;
		__this->___gravityMultiplier_0 = (1.0f);
		// public float maxSlopeAngle = 55;
		__this->___maxSlopeAngle_3 = (55.0f);
		// public float maxWallShear = 89;
		__this->___maxWallShear_7 = (89.0f);
		// public float maxStepHeight = 0.2f;
		__this->___maxStepHeight_8 = (0.200000003f);
		// internal bool stairMiniHop = false;
		__this->___stairMiniHop_9 = (bool)0;
		// public float FOVKickAmount = 2.5f;
		__this->___FOVKickAmount_14 = (2.5f);
		// public float changeTime = 0.75f;
		__this->___changeTime_15 = (0.75f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FirstPersonAIO/DynamicFootStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicFootStep__ctor_mD5DACF1F7BF43B1D8020DE49CA256DD09D53736D (DynamicFootStep_t3BF52C52B13FA2792BBCF950A2FBE78966BF95D7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FirstPersonAIO/<CameraShake>d__94::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94__ctor_m9DEC2E2E36C3793CD94AC4105459FBAD7A2BC521 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirstPersonAIO/<CameraShake>d__94::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94_System_IDisposable_Dispose_mE1C9F10334B22A8B07161738BE4CDE7C0B64859B (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirstPersonAIO/<CameraShake>d__94::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCameraShakeU3Ed__94_MoveNext_mB8BF8F87269271806D05165C1F6EA5B9E1613F36 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00ec;
	}

IL_0022:
	{
		goto IL_0115;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsed =0;
		__this->___U3CelapsedU3E5__1_5 = (0.0f);
		goto IL_011d;
	}

IL_0041:
	{
		// playerCamera.transform.localPosition =Vector3.MoveTowards(playerCamera.transform.localPosition, new Vector3(cameraStartingPosition.x+ Random.Range(-1,1)*Magnitude,cameraStartingPosition.y+Random.Range(-1,1)*Magnitude,cameraStartingPosition.z), Magnitude*2);
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_2 = __this->___U3CU3E4__this_4;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = L_2->___playerCamera_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_5 = __this->___U3CU3E4__this_4;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___playerCamera_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_9 = __this->___U3CU3E4__this_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___cameraStartingPosition_15);
		float L_11 = L_10->___x_2;
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 1, NULL);
		float L_13 = __this->___Magnitude_3;
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_14 = __this->___U3CU3E4__this_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&L_14->___cameraStartingPosition_15);
		float L_16 = L_15->___y_3;
		int32_t L_17;
		L_17 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 1, NULL);
		float L_18 = __this->___Magnitude_3;
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_19 = __this->___U3CU3E4__this_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___cameraStartingPosition_15);
		float L_21 = L_20->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)L_12), L_13)))), ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(((float)L_17), L_18)))), L_21, /*hidden argument*/NULL);
		float L_23 = __this->___Magnitude_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_8, L_22, ((float)il2cpp_codegen_multiply(L_23, (2.0f))), NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_24, NULL);
		// yield return new WaitForSecondsRealtime(0.001f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_25 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_25, (0.00100000005f), NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ec:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsed += Time.deltaTime;
		float L_26 = __this->___U3CelapsedU3E5__1_5;
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CelapsedU3E5__1_5 = ((float)il2cpp_codegen_add(L_26, L_27));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0115:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_011d:
	{
		// while(elapsed<Duration && enableCameraShake){
		float L_28 = __this->___U3CelapsedU3E5__1_5;
		float L_29 = __this->___Duration_2;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0138;
		}
	}
	{
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_30 = __this->___U3CU3E4__this_4;
		NullCheck(L_30);
		bool L_31 = L_30->___enableCameraShake_14;
		G_B13_0 = ((int32_t)(L_31));
		goto IL_0139;
	}

IL_0138:
	{
		G_B13_0 = 0;
	}

IL_0139:
	{
		V_1 = (bool)G_B13_0;
		bool L_32 = V_1;
		if (L_32)
		{
			goto IL_0041;
		}
	}
	{
		// playerCamera.transform.localPosition = cameraStartingPosition;
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_33 = __this->___U3CU3E4__this_4;
		NullCheck(L_33);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = L_33->___playerCamera_13;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* L_36 = __this->___U3CU3E4__this_4;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36->___cameraStartingPosition_15;
		NullCheck(L_35);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_35, L_37, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FirstPersonAIO/<CameraShake>d__94::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCameraShakeU3Ed__94_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C393E336A1F1578967CC7128F465F5577DA8DC7 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirstPersonAIO/<CameraShake>d__94::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mBEF990A222FAD532F463A209C0C5FBC272EA2444 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mBEF990A222FAD532F463A209C0C5FBC272EA2444_RuntimeMethod_var)));
	}
}
// System.Object FirstPersonAIO/<CameraShake>d__94::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_get_Current_m3F1927884B2BA030C4B76F9B1662B7E33D3E91C6 (U3CCameraShakeU3Ed__94_tFDF8EDA83C249A1A947A51F46CD55548332528C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_Start_m7324FCED7CB63D969A65C67F486DFA44A1EEFF9D (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62DB914C23AAEFF89485D66E094350B8F842F681);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke ("FadeToPlanet", 11);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral62DB914C23AAEFF89485D66E094350B8F842F681, (11.0f), NULL);
		// }
		return;
	}
}
// System.Void LevelChanger::FadeToPlanet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_FadeToPlanet_mA72A7DE1C2EAE7D14DA3EA440CE8795DB6539B9F (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
{
	{
		// FadeToLevel(1);
		LevelChanger_FadeToLevel_m1267C2279BB668B39CFFEE821F497D516D60A033(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void LevelChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_Update_mDF3D0C96B942A3AA748ED920AC0B462C6A209046 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// FadeToLevel(1);
		LevelChanger_FadeToLevel_m1267C2279BB668B39CFFEE821F497D516D60A033(__this, 1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void LevelChanger::FadeToLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_FadeToLevel_m1267C2279BB668B39CFFEE821F497D516D60A033 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelToLoad = levelIndex;
		int32_t L_0 = ___levelIndex0;
		__this->___levelToLoad_5 = L_0;
		// animator.SetTrigger("FadeOut");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_4;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB, NULL);
		// }
		return;
	}
}
// System.Void LevelChanger::onFadeComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_onFadeComplete_m913FDB94BFA13E2DA403FF941E92452CB2A33AB1 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(levelToLoad);
		int32_t L_0 = __this->___levelToLoad_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger__ctor_mB270139778576777011D448087CDFAA0EEB941A1 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LookAtTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget_Update_m20FEC5E1902C63BF17E49AF8F892462D866F8828 (LookAtTarget_t0C4C8B56D977A0B1EDE604D712836D5ED36CF375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_4;
		NullCheck(L_3);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_3, L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void LookAtTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtTarget__ctor_mAE3AAB49B9CE47F00D1E666E7F3BD76D2EFC8E37 (LookAtTarget_t0C4C8B56D977A0B1EDE604D712836D5ED36CF375* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenLink::OpenURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenLink_OpenURL_m9223BC5622FB7762B58AA1DF78F1B40A5F45F17C (OpenLink_t998B6C053DAA659363EDEFBE6B7A95EE9B6A28FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DD28EEF76DEF63D3B3E88765AE5247496CAF8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://lavnch.com");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteralA7DD28EEF76DEF63D3B3E88765AE5247496CAF8C, NULL);
		// }
		return;
	}
}
// System.Void OpenLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenLink__ctor_m0ACE261A8E862C296C42223F722D2F4EDAF9B08A (OpenLink_t998B6C053DAA659363EDEFBE6B7A95EE9B6A28FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_mF19D284A593E4627CD4F22A58C11FB87B6627FF4 (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B14_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B13_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_1, L_3, (&V_0), (10.0f), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0082;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0050;
		}
	}
	{
		goto IL_005b;
	}

IL_0050:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B4_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_005b:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		__this->____gazedAtObject_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_14);
		// _gazedAtObject.SendMessage("OnPointerEnter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____gazedAtObject_5;
		NullCheck(L_15);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_15, _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240, NULL);
	}

IL_007f:
	{
		goto IL_00a2;
	}

IL_0082:
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16;
		G_B8_0 = L_17;
		if (L_17)
		{
			G_B9_0 = L_17;
			goto IL_008f;
		}
	}
	{
		goto IL_009a;
	}

IL_008f:
	{
		NullCheck(G_B9_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B9_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_009a:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_00a2:
	{
		// if (Google.XR.Cardboard.Api.IsTriggerPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Api_get_IsTriggerPressed_m69CFBBBFCA8AB8D960F1EE7CF6D98AFA9D5F761F(NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClick");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20;
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		goto IL_00c3;
	}

IL_00b8:
	{
		NullCheck(G_B14_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B14_0, _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A, NULL);
	}

IL_00c3:
	{
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_m5C4B443EB7C8A518306BF27BD947D938FDF5162D (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0012:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0023:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Api_get_IsTriggerHeldPressed_mDC8FA4227BDD5F2D8D38C56B765CFBDDFD37573C(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m57C87EDB46D59270106748ABCF8D5AC5505B5067(NULL);
	}

IL_0034:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181(NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9(NULL);
	}

IL_0045:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, L_6, NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_7))%L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		V_2 = L_13;
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-3.14159274f), (3.14159274f), NULL);
		V_3 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((2.5f), (3.5f), NULL);
		V_4 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (3.5f), NULL);
		V_5 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_3;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_4;
		float L_20 = V_5;
		float L_21 = V_3;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), ((float)il2cpp_codegen_multiply(L_18, L_19)), L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		// transform.parent.localPosition = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_26, NULL);
		// randomSib.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnter_m5D028066A6B28C2770924AE0C5A2A926E807FC42 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExit_mB2F968E3432A4B5E90ABFCE7E6B025A39041809F (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClick_m42836A892DD52FE0C121F5E37231BF198052017E (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B6_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B7_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____myRenderer_10;
		bool L_6 = ___gazedAt0;
		G_B5_0 = L_5;
		if (L_6)
		{
			G_B6_0 = L_5;
			goto IL_0034;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___InactiveMaterial_4;
		G_B7_0 = L_7;
		G_B7_1 = G_B5_0;
		goto IL_003a;
	}

IL_0034:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___GazedAtMaterial_5;
		G_B7_0 = L_8;
		G_B7_1 = G_B6_0;
	}

IL_003a:
	{
		NullCheck(G_B7_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B7_1, G_B7_0, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68(L_1, NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m74BA18251EC46C03AEA24946AA8C407FFDE59B95((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_mE4C80F59F7FF02CA643B0D724C438F6FEA67FF45(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsCloseButtonPressed_mC28924584BA21D0D43A70F653B0EB4D8D3B07243(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_001e:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Api_get_IsGearButtonPressed_m8540FA1043E27D6060562CCC3BAA981C44840D7D(NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m371ED7B4C434B76565DB7BDA17BEBE4FD15AAABF(NULL);
	}

IL_002f:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m83F022BEB169C4FEB5C7B0BA60BE01720F66A0D7(NULL);
		goto IL_004d;
	}

IL_0038:
	{
		// if (_isScreenTouched)
		bool L_6;
		L_6 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_mB46D084A72E424893880704455CFF9ACE09B3181(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_m5DA3605CEC870761621AB02E80829CE88BAFA2F9(NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0049;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_00ab;
	}

IL_0078:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_11;
		L_11 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_11);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_12;
		L_12 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_11, NULL);
		NullCheck(L_12);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_12, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_00ab:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 CameraScroll::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvelocityU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void CameraScroll::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvelocityU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void CameraScroll::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScroll_Awake_mE9F15B4D8346A4A9D8A43482997C1D0A1100955B (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void Awake() { main = this; }
		((CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields*)il2cpp_codegen_static_fields_for(CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var))->___main_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields*)il2cpp_codegen_static_fields_for(CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var))->___main_10), (void*)__this);
		// void Awake() { main = this; }
		return;
	}
}
// System.Void CameraScroll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScroll_Update_mAA2FEBBEC80D0089E56CC9A4FC312E3FE8AD42DE (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		// speed *= 1 + Input.GetAxis("Mouse ScrollWheel");
		float L_0 = __this->___speed_4;
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		__this->___speed_4 = ((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_add((1.0f), L_1))));
		// speed = Mathf.Clamp(speed, 1f, 1000f);
		float L_2 = __this->___speed_4;
		float L_3;
		L_3 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_2, (1.0f), (1000.0f), NULL);
		__this->___speed_4 = L_3;
		// if (Input.GetKeyDown("r")) { acceleration /= 2f; }
		bool L_4;
		L_4 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// if (Input.GetKeyDown("r")) { acceleration /= 2f; }
		float L_6 = __this->___acceleration_5;
		__this->___acceleration_5 = ((float)(L_6/(2.0f)));
	}

IL_005b:
	{
		// if (Input.GetKeyDown("t")) { acceleration *= 2f; }
		bool L_7;
		L_7 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		// if (Input.GetKeyDown("t")) { acceleration *= 2f; }
		float L_9 = __this->___acceleration_5;
		__this->___acceleration_5 = ((float)il2cpp_codegen_multiply(L_9, (2.0f)));
	}

IL_007d:
	{
		// acceleration = Mathf.Clamp(acceleration, 1f/8f, 8f);
		float L_10 = __this->___acceleration_5;
		float L_11;
		L_11 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_10, (0.125f), (8.0f), NULL);
		__this->___acceleration_5 = L_11;
		// Vector3 input = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Input.GetKey("a")) { input.x = -1; }
		bool L_12;
		L_12 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00bc;
		}
	}
	{
		// if (Input.GetKey("a")) { input.x = -1; }
		(&V_0)->___x_2 = (-1.0f);
	}

IL_00bc:
	{
		// if (Input.GetKey("d")) { input.x =  1; }
		bool L_14;
		L_14 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00da;
		}
	}
	{
		// if (Input.GetKey("d")) { input.x =  1; }
		(&V_0)->___x_2 = (1.0f);
	}

IL_00da:
	{
		// if (Input.GetKey("q")) { input.y = -1; }
		bool L_16;
		L_16 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00f8;
		}
	}
	{
		// if (Input.GetKey("q")) { input.y = -1; }
		(&V_0)->___y_3 = (-1.0f);
	}

IL_00f8:
	{
		// if (Input.GetKey("e")) { input.y =  1; }
		bool L_18;
		L_18 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0116;
		}
	}
	{
		// if (Input.GetKey("e")) { input.y =  1; }
		(&V_0)->___y_3 = (1.0f);
	}

IL_0116:
	{
		// if (Input.GetKey("s")) { input.z = -1; }
		bool L_20;
		L_20 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0134;
		}
	}
	{
		// if (Input.GetKey("s")) { input.z = -1; }
		(&V_0)->___z_4 = (-1.0f);
	}

IL_0134:
	{
		// if (Input.GetKey("w")) { input.z =  1; }
		bool L_22;
		L_22 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0152;
		}
	}
	{
		// if (Input.GetKey("w")) { input.z =  1; }
		(&V_0)->___z_4 = (1.0f);
	}

IL_0152:
	{
		// transform.rotation = Quaternion.Euler(pitch, yaw, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_25 = __this->___pitch_9;
		float L_26 = __this->___yaw_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_25, L_26, (0.0f), NULL);
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_27, NULL);
		// if (input.magnitude > 0) {
		float L_28;
		L_28 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_9 = (bool)((((float)L_28) > ((float)(0.0f)))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_01b9;
		}
	}
	{
		// velocity = Vector3.Lerp(velocity, transform.rotation * input, Time.deltaTime * acceleration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_32, L_33, NULL);
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_36 = __this->___acceleration_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_30, L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A_inline(__this, L_37, NULL);
	}

IL_01b9:
	{
		// if (Input.GetKey("b")) { velocity = Vector3.zero; }
		bool L_38;
		L_38 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_01d7;
		}
	}
	{
		// if (Input.GetKey("b")) { velocity = Vector3.zero; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A_inline(__this, L_40, NULL);
	}

IL_01d7:
	{
		// if (Input.GetKey("n")) { velocity = Vector3.Lerp(velocity, Vector3.zero, Time.deltaTime * acceleration); }
		bool L_41;
		L_41 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, NULL);
		V_11 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_020c;
		}
	}
	{
		// if (Input.GetKey("n")) { velocity = Vector3.Lerp(velocity, Vector3.zero, Time.deltaTime * acceleration); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		float L_45;
		L_45 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_46 = __this->___acceleration_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_43, L_44, ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A_inline(__this, L_47, NULL);
	}

IL_020c:
	{
		// transform.position += velocity * Time.deltaTime * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = L_48;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline(__this, NULL);
		float L_52;
		L_52 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_51, L_52, NULL);
		float L_54 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_53, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_50, L_55, NULL);
		NullCheck(L_49);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_49, L_56, NULL);
		// if (Input.GetMouseButton(1)) {
		bool L_57;
		L_57 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		V_12 = L_57;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_02f4;
		}
	}
	{
		// yaw += Input.GetAxis("Mouse X") * lookSensitivity;
		float L_59 = __this->___yaw_8;
		float L_60;
		L_60 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_61 = __this->___lookSensitivity_6;
		__this->___yaw_8 = ((float)il2cpp_codegen_add(L_59, ((float)il2cpp_codegen_multiply(L_60, L_61))));
		// pitch -= Input.GetAxis("Mouse Y") * lookSensitivity;
		float L_62 = __this->___pitch_9;
		float L_63;
		L_63 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_64 = __this->___lookSensitivity_6;
		__this->___pitch_9 = ((float)il2cpp_codegen_subtract(L_62, ((float)il2cpp_codegen_multiply(L_63, L_64))));
		// if (yaw > 360) { yaw -= 360; }
		float L_65 = __this->___yaw_8;
		V_13 = (bool)((((float)L_65) > ((float)(360.0f)))? 1 : 0);
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_02b1;
		}
	}
	{
		// if (yaw > 360) { yaw -= 360; }
		float L_67 = __this->___yaw_8;
		__this->___yaw_8 = ((float)il2cpp_codegen_subtract(L_67, (360.0f)));
	}

IL_02b1:
	{
		// if (yaw < 0) { yaw += 360; }
		float L_68 = __this->___yaw_8;
		V_14 = (bool)((((float)L_68) < ((float)(0.0f)))? 1 : 0);
		bool L_69 = V_14;
		if (!L_69)
		{
			goto IL_02d8;
		}
	}
	{
		// if (yaw < 0) { yaw += 360; }
		float L_70 = __this->___yaw_8;
		__this->___yaw_8 = ((float)il2cpp_codegen_add(L_70, (360.0f)));
	}

IL_02d8:
	{
		// pitch = Mathf.Clamp(pitch, -89, 89);
		float L_71 = __this->___pitch_9;
		float L_72;
		L_72 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_71, (-89.0f), (89.0f), NULL);
		__this->___pitch_9 = L_72;
	}

IL_02f4:
	{
		// }
		return;
	}
}
// System.Void CameraScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScroll__ctor_mA2379952BE3319884E1460B004442C9490FEAE57 (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 55;
		__this->___speed_4 = (55.0f);
		// public float acceleration = 2f;
		__this->___acceleration_5 = (2.0f);
		// public float lookSensitivity = 5;
		__this->___lookSensitivity_6 = (5.0f);
		// float yaw = 0;
		__this->___yaw_8 = (0.0f);
		// float pitch = 0;
		__this->___pitch_9 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkyboxSwitcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher_Start_m2CFFB6B2FEB4D3749838FDFF003DA2A010E6AAF3 (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mCCAD050FA4D1F38D705CCAA708CF427187C0FD58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mats = Resources.LoadAll<Material>("");
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0;
		L_0 = Resources_LoadAll_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mCCAD050FA4D1F38D705CCAA708CF427187C0FD58(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, Resources_LoadAll_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mCCAD050FA4D1F38D705CCAA708CF427187C0FD58_RuntimeMethod_var);
		__this->___mats_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mats_4), (void*)L_0);
		// Load(0);
		SkyboxSwitcher_Load_mF6209FD9DF286AFCE821A9D147AA04ED869E536A(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void SkyboxSwitcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher_Update_m2A7268F1955F9A4F5F5E519E475E0A43D2D6FA77 (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (Input.GetKeyDown("[")) { Load(--current); }
		bool L_0;
		L_0 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (Input.GetKeyDown("[")) { Load(--current); }
		int32_t L_2 = __this->___current_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->___current_5 = L_3;
		int32_t L_4 = V_1;
		SkyboxSwitcher_Load_mF6209FD9DF286AFCE821A9D147AA04ED869E536A(__this, L_4, NULL);
	}

IL_0029:
	{
		// if (Input.GetKeyDown("]")) { Load(++current); }
		bool L_5;
		L_5 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// if (Input.GetKeyDown("]")) { Load(++current); }
		int32_t L_7 = __this->___current_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		__this->___current_5 = L_8;
		int32_t L_9 = V_1;
		SkyboxSwitcher_Load_mF6209FD9DF286AFCE821A9D147AA04ED869E536A(__this, L_9, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void SkyboxSwitcher::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher_OnGUI_m0A84A2246BADB3C898917DEEDAE9DB3041A06CED (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03095694F762E200C6C3FE40C110AC541ADC08E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A4A494D63F6F6A911FBCE5ED0D335B74A6A1BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD91838347598CBD58DB81010AD0E06C9EF6EFA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string readout = "Speed (mouse wheel): " + CameraScroll.main.speed;
		CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* L_0 = ((CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields*)il2cpp_codegen_static_fields_for(CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var))->___main_10;
		NullCheck(L_0);
		float* L_1 = (&L_0->___speed_4);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC8A4A494D63F6F6A911FBCE5ED0D335B74A6A1BD, L_2, NULL);
		V_0 = L_3;
		// readout += "\nAcceleration (r/t): " + CameraScroll.main.acceleration;
		String_t* L_4 = V_0;
		CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* L_5 = ((CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields*)il2cpp_codegen_static_fields_for(CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var))->___main_10;
		NullCheck(L_5);
		float* L_6 = (&L_5->___acceleration_5);
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_4, _stringLiteralCCD91838347598CBD58DB81010AD0E06C9EF6EFA, L_7, NULL);
		V_0 = L_8;
		// readout += "\nVelocity: " + CameraScroll.main.velocity;
		String_t* L_9 = V_0;
		CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* L_10 = ((CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_StaticFields*)il2cpp_codegen_static_fields_for(CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E_il2cpp_TypeInfo_var))->___main_10;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline(L_10, NULL);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_9, _stringLiteralB03095694F762E200C6C3FE40C110AC541ADC08E, L_12, NULL);
		V_0 = L_13;
		// readout += "\n" + mats[current].name;
		String_t* L_14 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15 = __this->___mats_4;
		int32_t L_16 = __this->___current_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_14, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_19, NULL);
		V_0 = L_20;
		// GUI.Box(new Rect(0, 0, Screen.width, Screen.height * .1f), readout);
		int32_t L_21;
		L_21 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_22;
		L_22 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_23), (0.0f), (0.0f), ((float)L_21), ((float)il2cpp_codegen_multiply(((float)L_22), (0.100000001f))), /*hidden argument*/NULL);
		String_t* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_23, L_24, NULL);
		// GUI.Box(new Rect(0, Screen.height * .9f, Screen.width, Screen.height * .1f), message);
		int32_t L_25;
		L_25 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_26;
		L_26 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_27;
		L_27 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_28), (0.0f), ((float)il2cpp_codegen_multiply(((float)L_25), (0.899999976f))), ((float)L_26), ((float)il2cpp_codegen_multiply(((float)L_27), (0.100000001f))), /*hidden argument*/NULL);
		String_t* L_29 = __this->___message_6;
		GUI_Box_m1E4D5FE4B7911725059CE0A2674B88CFAD279365(L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void SkyboxSwitcher::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher_Load_mF6209FD9DF286AFCE821A9D147AA04ED869E536A (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700D25A7A2F5C718E3EF92A10B99BDFC2502323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FB480F1D0898B9B35AB42527567FA69E41B1ADB);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (i < 0) { i = mats.Length + i; }
		int32_t L_0 = ___i0;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (i < 0) { i = mats.Length + i; }
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2 = __this->___mats_4;
		NullCheck(L_2);
		int32_t L_3 = ___i0;
		___i0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3));
	}

IL_0017:
	{
		// i = i % mats.Length;
		int32_t L_4 = ___i0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = __this->___mats_4;
		NullCheck(L_5);
		___i0 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		// current = i;
		int32_t L_6 = ___i0;
		__this->___current_5 = L_6;
		// Material mat = mats[i];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = __this->___mats_4;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		// RenderSettings.skybox = mat;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_0;
		RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4(L_11, NULL);
		// float step = mat.GetFloat("_StepSize");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_0;
		NullCheck(L_12);
		float L_13;
		L_13 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_12, _stringLiteral4700D25A7A2F5C718E3EF92A10B99BDFC2502323, NULL);
		V_1 = L_13;
		// mat.SetFloat("_CamScroll", 55 * Mathf.Sign(step));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_0;
		float L_15 = V_1;
		float L_16;
		L_16 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_15, NULL);
		NullCheck(L_14);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_14, _stringLiteral9FB480F1D0898B9B35AB42527567FA69E41B1ADB, ((float)il2cpp_codegen_multiply((55.0f), L_16)), NULL);
		// }
		return;
	}
}
// System.Void SkyboxSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSwitcher__ctor_m80C0C040AFD0EEF7B9A483867653C917D0DFF611 (SkyboxSwitcher_t4CD28CB412B84BB23C195699A24C07F2660075DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DA06D0159A58DE837D92F8EFA1E3EE04A44D56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int current = 0;
		__this->___current_5 = 0;
		//     string message =
		// @"Press '[' and ']' to change the skybox.
		// Right-Click and drag to look around (You will need 'Mouse X/Mouse Y/Mouse ScrollWheel' axis in Input Manager)
		// WASDQE to move the camera. Press b to stop, and n to slow down.";
		__this->___message_6 = _stringLiteral75DA06D0159A58DE837D92F8EFA1E3EE04A44D56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_6), (void*)_stringLiteral75DA06D0159A58DE837D92F8EFA1E3EE04A44D56);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1E9AD091F9C98BEFECEB48E77CEB2BDE8ABA369B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent <CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___controller_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_5), (void*)L_0);
		// anim = gameObject.GetComponentInChildren<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = GameObject_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1E9AD091F9C98BEFECEB48E77CEB2BDE8ABA369B(L_1, GameObject_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1E9AD091F9C98BEFECEB48E77CEB2BDE8ABA369B_RuntimeMethod_var);
		__this->___anim_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1D0840F7052EE904BCD7468BA7A2762E6A429F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Input.GetKey ("w")) {
		bool L_0;
		L_0 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// anim.SetInteger ("AnimationPar", 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_4;
		NullCheck(L_2);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_2, _stringLiteral3F1D0840F7052EE904BCD7468BA7A2762E6A429F, 1, NULL);
		goto IL_0039;
	}

IL_0025:
	{
		// anim.SetInteger ("AnimationPar", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_4;
		NullCheck(L_3);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_3, _stringLiteral3F1D0840F7052EE904BCD7468BA7A2762E6A429F, 0, NULL);
	}

IL_0039:
	{
		// if(controller.isGrounded){
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___controller_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		// moveDirection = transform.forward * Input.GetAxis("Vertical") * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9;
		L_9 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		float L_11 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		__this->___moveDirection_8 = L_12;
	}

IL_0075:
	{
		// float turn = Input.GetAxis("Horizontal");
		float L_13;
		L_13 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_13;
		// transform.Rotate(0, turn * turnSpeed * Time.deltaTime, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_15 = V_0;
		float L_16 = __this->___turnSpeed_7;
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_14);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_14, (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17)), (0.0f), NULL);
		// controller.Move(moveDirection * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_18 = __this->___controller_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___moveDirection_8;
		float L_20;
		L_20 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_20, NULL);
		NullCheck(L_18);
		int32_t L_22;
		L_22 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_18, L_21, NULL);
		// moveDirection.y -= gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___moveDirection_8);
		float* L_24 = (&L_23->___y_3);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->___gravity_9;
		float L_28;
		L_28 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_25) = (float)((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28))));
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 600.0f;
		__this->___speed_6 = (600.0f);
		// public float turnSpeed = 400.0f;
		__this->___turnSpeed_7 = (400.0f);
		// private Vector3 moveDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___moveDirection_8 = L_0;
		// public float gravity = 20.0f;
		__this->___gravity_9 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThirdPersonCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_Start_mE2FC15434019950C381369A92548C5D46BCF262D (ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188* __this, const RuntimeMethod* method) 
{
	{
		// camTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___camTransform_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camTransform_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void ThirdPersonCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_Update_m40AA198061B33777E3A59EAF1A3E06CB7C7A5FD8 (ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentX += Input.GetAxis("Mouse X");
		float L_0 = __this->___currentX_9;
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		__this->___currentX_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// currentY += Input.GetAxis("Mouse Y");
		float L_2 = __this->___currentY_10;
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___currentY_10 = ((float)il2cpp_codegen_add(L_2, L_3));
		// currentY = Mathf.Clamp(currentY, Y_ANGLE_MIN, Y_ANGLE_MAX);
		float L_4 = __this->___currentY_10;
		float L_5;
		L_5 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, (0.0f), (50.0f), NULL);
		__this->___currentY_10 = L_5;
		// }
		return;
	}
}
// System.Void ThirdPersonCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera_LateUpdate_m5095BCCB221A60F24F049EBA9BE88A94CBFDC33C (ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 dir = new Vector3(0, 0, -distance);
		float L_0 = __this->___distance_8;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), ((-L_0)), NULL);
		// Quaternion rotation = Quaternion.Euler(currentY, currentX, 0);
		float L_1 = __this->___currentY_10;
		float L_2 = __this->___currentX_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_1, L_2, (0.0f), NULL);
		V_1 = L_3;
		// camTransform.position = lookAt.position + rotation * dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___camTransform_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___lookAt_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_9, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// camTransform.LookAt(lookAt.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___camTransform_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___lookAt_6;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_11);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void ThirdPersonCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCamera__ctor_m2E8C5C13416542EFF52DDEB73DBA2C9CC8F5983D (ThirdPersonCamera_tF767EACAF9F7717E2752064876830BFF30DED188* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_8 = (5.0f);
		// private float currentX = 0.0f;
		__this->___currentX_9 = (0.0f);
		// private float currentY = 45.0f;
		__this->___currentY_10 = (45.0f);
		// private float sensitivityX = 20.0f;
		__this->___sensitivityX_11 = (20.0f);
		// private float sensitivityY = 20.0f;
		__this->___sensitivityY_12 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_mFEB413092B00E97A8C0E6FD21C1717398A556389_inline (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsGroundedU3Ek__BackingField_48 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_MoveTowards_m0F760C4C2E699AB9CB65320305306AA916BBCB1B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___target1;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___current0;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___target1;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___current0;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___target1;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___current0;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___target1;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___current0;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		if ((((float)L_24) == ((float)(0.0f))))
		{
			goto IL_006a;
		}
	}
	{
		float L_25 = ___maxDistanceDelta2;
		if ((!(((float)L_25) >= ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		float L_26 = V_4;
		float L_27 = ___maxDistanceDelta2;
		float L_28 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_26) <= ((float)((float)il2cpp_codegen_multiply(L_27, L_28)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B4_0 = 0;
	}

IL_0068:
	{
		G_B6_0 = G_B4_0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = 1;
	}

IL_006b:
	{
		V_6 = (bool)G_B6_0;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0076;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = ___target1;
		V_7 = L_30;
		goto IL_00be;
	}

IL_0076:
	{
		float L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = sqrt(((double)L_31));
		V_5 = ((float)L_32);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = ___current0;
		float L_34 = L_33.___x_1;
		float L_35 = V_0;
		float L_36 = V_5;
		float L_37 = ___maxDistanceDelta2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = ___current0;
		float L_39 = L_38.___y_2;
		float L_40 = V_1;
		float L_41 = V_5;
		float L_42 = ___maxDistanceDelta2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = ___current0;
		float L_44 = L_43.___z_3;
		float L_45 = V_2;
		float L_46 = V_5;
		float L_47 = ___maxDistanceDelta2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48 = ___current0;
		float L_49 = L_48.___w_4;
		float L_50 = V_3;
		float L_51 = V_5;
		float L_52 = ___maxDistanceDelta2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_53), ((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(((float)(L_35/L_36)), L_37)))), ((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply(((float)(L_40/L_41)), L_42)))), ((float)il2cpp_codegen_add(L_44, ((float)il2cpp_codegen_multiply(((float)(L_45/L_46)), L_47)))), ((float)il2cpp_codegen_add(L_49, ((float)il2cpp_codegen_multiply(((float)(L_50/L_51)), L_52)))), /*hidden argument*/NULL);
		V_7 = L_53;
		goto IL_00be;
	}

IL_00be:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = V_7;
		return L_54;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___v0;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3870C7533B9A504401C5B5D30B512FCEA5719B55_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = ___maxSpeed4;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0016;
	}

IL_0016:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m1A8F441E8B920A01E74F7C252A0A655A9418A987_inline (FirstPersonAIO_t456CB9A8FD05FF9E2A46CF0087F370D01A1B9E9F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = __this->___U3CIsGroundedU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraScroll_get_velocity_mBEC65C441401D76F87FE3033D0F447AFF67BE41C_inline (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvelocityU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraScroll_set_velocity_mC2A8790816BB9EF6A4CB94DF3EC3D26484F15B0A_inline (CameraScroll_tC103692325D5920693E9F1DB45E24D6B6F3B427E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 velocity { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvelocityU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
