#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
struct InterfaceActionInvoker21
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, invokeData.method);
	}
};

// System.Int32[][][]
struct Int32U5BU5DU5BU5DU5BU5D_tC95EE6BAED85577D712DCE75822B22F0A721E8E9;
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t2BF10552B9D5F9DD1D25251FEA28836F853B3402;
// System.Boolean[][]
struct BooleanU5BU5DU5BU5D_t71F0B22F93E41A588932E9FAA6BDC06D731064CC;
// Image[][]
struct ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672;
// System.SByte[][]
struct SByteU5BU5DU5BU5D_t9042899DE0306D67CDDEDC06C44CEFAD76730699;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// AvPosition[]
struct AvPositionU5BU5D_t7B6577B62565DE770F977CF05CF3E67B36EE26B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Command[]
struct CommandU5BU5D_t4A0C12B655C3B219F2389698F80224F19FA52B94;
// Image[]
struct ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// MyVector[]
struct MyVectorU5BU5D_t5FE2B41BB671ADD61156AD7564F51284B9441A5F;
// PositionTran[]
struct PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Tile[]
struct TileU5BU5D_tF9596405933A24DA27939A6D59B87CB4731E1F64;
// Animal
struct Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// AvCamera
struct AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000;
// AvMain
struct AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C;
// AvPosition
struct AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4;
// Avatar
struct Avatar_t5280686025A629043829B8D5A31541F05B328D76;
// AvatarData
struct AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF;
// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB;
// BigImgInfo
struct BigImgInfo_t3ECEEED4312026789584321939172F15E69944F3;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// Bus
struct Bus_tBCBE72E4F1674F1EBF536BB782E4C229FD0B1EDE;
// CameraList
struct CameraList_t80828FC1C01324BAB92EE05AFC68A6EEFF426B5E;
// ChatPopup
struct ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0;
// Command
struct Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1;
// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972;
// ElementPlayer
struct ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2;
// Face
struct Face_t5C5DBF9CEE15220B8DA723C66F0932E413930E46;
// FarmScr
struct FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C;
// FontX
struct FontX_t31077A1C08A398E3B861843A50BE103531A54518;
// FrameImage
struct FrameImage_t22B8F29B26087709566812A258AB227B26817986;
// GlobalService
struct GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// IAction
struct IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74;
// IKbAction
struct IKbAction_t86C699504075D9AB486C8C4AC7BB9E92163BAF5C;
// IMessageHandler
struct IMessageHandler_tE2435F3BA6206C5F62BBB471453E1B1754461043;
// IPaint
struct IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F;
// Image
struct Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908;
// ImageIcon
struct ImageIcon_t1D316E47B60148033D7EFDA4677CDC9CAAC46A8C;
// IndexPlayer
struct IndexPlayer_t37D1205C9FEA077608610DD84B65C03FCAC30D61;
// InputDlg
struct InputDlg_t6F73BE4C724386EBC959FAF67DC93E27990D4C83;
// Kiss
struct Kiss_t2AAB6E5363ED5CB4FF3AD1CFC8A866A69FA3E825;
// LoadMap
struct LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C;
// LoginScr
struct LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// MapScr
struct MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// MenuCenter
struct MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F;
// MenuIcon
struct MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9;
// MenuLeft
struct MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9;
// MenuMain
struct MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A;
// MenuNPC
struct MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1;
// MenuOn
struct MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785;
// MenuSub
struct MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C;
// Message
struct Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640;
// MessageScr
struct MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B;
// MiniMap
struct MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A;
// MsgDlg
struct MsgDlg_t18C7F17B45CFF10B5E71FEDA2D94FE2C0A5259CE;
// MyGraphics
struct MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56;
// MyHashTable
struct MyHashTable_t03FB795CF8B8588EB81514182487084E49CD03E7;
// MyObject
struct MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD;
// MyScreen
struct MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C;
// MyVector
struct MyVector_t5E551DE127AB217F3BF51644B186993381C11E30;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// OptionScr
struct OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5;
// PaintPopup
struct PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107;
// PopupName
struct PopupName_tA9042619222332BF79057C264A7EAB6146B7B995;
// PopupShop
struct PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865;
// PositionTran
struct PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755;
// ServerListScr
struct ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE;
// Session_ME
struct Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB;
// StarFruitObj
struct StarFruitObj_tEE67E8E49D3B407F2BCCEBDBED8C305DB444E612;
// System.String
struct String_t;
// SubObject
struct SubObject_t4770BAA51A1FAC412389CD37E25FEC3EBFEA0CF1;
// T
struct T_t31AD343159665D2C3F238EC9A9CCA0278D064887;
// TField
struct TField_t56E19AE85CA63279C53042EF348814217A9F0E70;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Welcome
struct Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD;
// myReader
struct myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56;
// myWriter
struct myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E;
// MediumPaint/CommandPointer
struct CommandPointer_t19053C3A33E8A6C25C6CB2C5282C12B59D6C7185;
// MediumPaint/CommandPointerGo
struct CommandPointerGo_t684940C03366F43B792CF98E2406FA991F0BA49A;
// MediumPaint/IActionPointer
struct IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F;
// MediumPaint/IActionPointerGO
struct IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3;
// MessageScr/IActionChat
struct IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B;
// MiniMap/IActionRequestOK
struct IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032;
// MiniMap/IActionRequestReg
struct IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0;
// Session_ME/Sender
struct Sender_tF2641EB36B3ECC16C299E33A2F99C8C4178BBE64;

IL2CPP_EXTERN_C RuntimeClass* Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Avatar_t5280686025A629043829B8D5A31541F05B328D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TField_t56E19AE85CA63279C53042EF348814217A9F0E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24B4B683CE7D5956ED5339FC8010DF5033E9C4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral321F0E984A373499381A63B327E068CF1A41FCDC;
IL2CPP_EXTERN_C String_t* _stringLiteral3957E1855C9E8111C71222DF8E491C5026B5C07A;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3C1862FE7040F6B726BB3A96FD00A7D892DDE2;
IL2CPP_EXTERN_C String_t* _stringLiteral419B76CA25654FDC3FF3BCE9983B88422FB5FF5B;
IL2CPP_EXTERN_C String_t* _stringLiteral511550B56F48B3A16D50B08A6B7D85B84B5A175E;
IL2CPP_EXTERN_C String_t* _stringLiteral521A1685AEBD2FF7566B0D96D59D042FAF2E91FE;
IL2CPP_EXTERN_C String_t* _stringLiteral54ACF5274E3FF190C766CEEAA1EE2472A7296FCC;
IL2CPP_EXTERN_C String_t* _stringLiteral58131C17FBC2934EAEC76F377EA06AE733B07642;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8FF26D2FFEFAC564C2896A438395703CE7C8D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6849B7213D1DC335F28D5E89B275375FEA1B973B;
IL2CPP_EXTERN_C String_t* _stringLiteral69E025D105AFF8BAA46923243464D19A5E1BD604;
IL2CPP_EXTERN_C String_t* _stringLiteral6C06BC0E9FDD024ABCE1A9F23F83A2BEE67CFBB9;
IL2CPP_EXTERN_C String_t* _stringLiteral70860459425A49A7D18F21FA4517AD9A8B962D93;
IL2CPP_EXTERN_C String_t* _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01;
IL2CPP_EXTERN_C String_t* _stringLiteral74BA6D4CD3CD6FCAE7EA5D140CA6D84DDE58B4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral7722FC709001ABC7B5FF3DF1FC4C940A68179FDA;
IL2CPP_EXTERN_C String_t* _stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3461526C43CECAA51FCD61A07B36369F1BD426;
IL2CPP_EXTERN_C String_t* _stringLiteral81A2B2184C5083D71635D18FE335CC842862D793;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8FBB696A9B69EB96EE352D19CA7564D0D6A55F20;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F4E209A3CCCD66CC274B3A3FEE370AD1ABC545;
IL2CPP_EXTERN_C String_t* _stringLiteralD720DE3699A6BAB394126CFDD31F8FE4FB874067;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAB30083AAA4D89852CF64C6002117D47772AE5;
IL2CPP_EXTERN_C String_t* _stringLiteralDBAB29C7286EE0FC0E107C936B4EBC2C3AC973F2;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4B4F52EE81DA85F9A3587CFAA4DB9236B4216F;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;

struct ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AvCamera
struct AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000  : public RuntimeObject
{
	// System.Single AvCamera::xCam
	float ___xCam_1;
	// System.Single AvCamera::yCam
	float ___yCam_2;
	// System.Single AvCamera::xTo
	float ___xTo_3;
	// System.Single AvCamera::yTo
	float ___yTo_4;
	// System.Single AvCamera::xLimit
	float ___xLimit_5;
	// System.Single AvCamera::yLimit
	float ___yLimit_6;
	// System.Int64 AvCamera::timeDelay
	int64_t ___timeDelay_7;
	// System.Single AvCamera::cmvx
	float ___cmvx_8;
	// System.Single AvCamera::cmdx
	float ___cmdx_9;
	// System.Single AvCamera::cmvy
	float ___cmvy_10;
	// System.Single AvCamera::cmdy
	float ___cmdy_11;
	// Base AvCamera::followPlayer
	Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___followPlayer_17;
	// System.Single AvCamera::hdFarm
	float ___hdFarm_18;
	// System.Single AvCamera::vY
	float ___vY_19;
	// System.Single AvCamera::vX
	float ___vX_20;
};

// AvMain
struct AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C  : public RuntimeObject
{
	// Command AvMain::left
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___left_14;
	// Command AvMain::center
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___center_15;
	// Command AvMain::right
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___right_16;
	// System.Boolean AvMain::isHide
	bool ___isHide_17;
	// System.Boolean AvMain::isTran
	bool ___isTran_18;
};

// AvPosition
struct AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4  : public RuntimeObject
{
	// System.Int32 AvPosition::x
	int32_t ___x_0;
	// System.Int32 AvPosition::y
	int32_t ___y_1;
	// System.Int32 AvPosition::anchor
	int32_t ___anchor_2;
	// System.Int32 AvPosition::xTo
	int32_t ___xTo_3;
	// System.Int32 AvPosition::yTo
	int32_t ___yTo_4;
	// System.SByte AvPosition::depth
	int8_t ___depth_5;
	// System.Int16 AvPosition::index
	int16_t ___index_6;
};

// Canvas
struct Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64  : public RuntimeObject
{
	// System.Int64 Canvas::lastTimePress
	int64_t ___lastTimePress_85;
	// System.Single Canvas::xTouch
	float ___xTouch_87;
	// System.Single Canvas::yTouch
	float ___yTouch_88;
	// System.Int32 Canvas::countDown
	int32_t ___countDown_92;
	// System.Int32 Canvas::num
	int32_t ___num_93;
};

// Command
struct Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1  : public RuntimeObject
{
	// System.String Command::caption
	String_t* ___caption_0;
	// IAction Command::action
	RuntimeObject* ___action_1;
	// IKbAction Command::ipaction
	RuntimeObject* ___ipaction_2;
	// System.SByte Command::indexMenu
	int8_t ___indexMenu_3;
	// System.SByte Command::subIndex
	int8_t ___subIndex_4;
	// System.SByte Command::indexImage
	int8_t ___indexImage_5;
	// System.Int32 Command::x
	int32_t ___x_6;
	// System.Int32 Command::y
	int32_t ___y_7;
	// AvMain Command::pointer
	AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* ___pointer_8;
};

// ElementPlayer
struct ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2  : public RuntimeObject
{
	// System.Int32 ElementPlayer::IDPlayer
	int32_t ___IDPlayer_0;
	// System.String ElementPlayer::name
	String_t* ___name_1;
	// System.String ElementPlayer::subText
	String_t* ___subText_2;
	// MyVector ElementPlayer::text
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___text_3;
	// IAction ElementPlayer::action
	RuntimeObject* ___action_4;
	// System.Int16 ElementPlayer::numSMS
	int16_t ___numSMS_5;
};

// FontX
struct FontX_t31077A1C08A398E3B861843A50BE103531A54518  : public RuntimeObject
{
};

// FrameImage
struct FrameImage_t22B8F29B26087709566812A258AB227B26817986  : public RuntimeObject
{
	// System.Int32 FrameImage::frameWidth
	int32_t ___frameWidth_0;
	// System.Int32 FrameImage::frameHeight
	int32_t ___frameHeight_1;
	// System.Int32 FrameImage::nFrame
	int32_t ___nFrame_2;
	// Image FrameImage::imgFrame
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgFrame_3;
};

// GameMidlet
struct GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F  : public RuntimeObject
{
};

// GlobalLogicHandler
struct GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2  : public RuntimeObject
{
	// System.Boolean GlobalLogicHandler::isCon
	bool ___isCon_0;
};

// GlobalService
struct GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72  : public RuntimeObject
{
};

// Image
struct Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908  : public RuntimeObject
{
	// UnityEngine.Texture2D Image::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_2;
	// System.Int32 Image::w
	int32_t ___w_12;
	// System.Int32 Image::h
	int32_t ___h_13;
};

// ImageIcon
struct ImageIcon_t1D316E47B60148033D7EFDA4677CDC9CAAC46A8C  : public RuntimeObject
{
	// Image ImageIcon::img
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___img_0;
	// System.Int16 ImageIcon::w
	int16_t ___w_1;
	// System.Int16 ImageIcon::h
	int16_t ___h_2;
	// System.Int32 ImageIcon::count
	int32_t ___count_3;
};

// LoadMap
struct LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C  : public RuntimeObject
{
	// AvPosition[] LoadMap::clound
	AvPositionU5BU5D_t7B6577B62565DE770F977CF05CF3E67B36EE26B2* ___clound_110;
	// Image[] LoadMap::imgClound
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgClound_127;
	// System.Int32 LoadMap::hBG
	int32_t ___hBG_128;
	// Image LoadMap::imgTreeBg
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgTreeBg_129;
	// System.Int32 LoadMap::countRndSound
	int32_t ___countRndSound_132;
	// System.Int64 LoadMap::timeCurSound
	int64_t ___timeCurSound_133;
	// System.Int32 LoadMap::pxLast
	int32_t ___pxLast_141;
	// System.Int32 LoadMap::pyLast
	int32_t ___pyLast_142;
	// System.Single LoadMap::pa
	float ___pa_143;
	// System.Single LoadMap::pb
	float ___pb_144;
	// System.Single LoadMap::dyTran
	float ___dyTran_145;
	// System.Single LoadMap::dxTran
	float ___dxTran_146;
	// System.Boolean LoadMap::transY
	bool ___transY_147;
	// System.Boolean LoadMap::transX
	bool ___transX_148;
	// System.Int64 LoadMap::count
	int64_t ___count_149;
	// System.Int64 LoadMap::timeDelay
	int64_t ___timeDelay_150;
	// System.Int64 LoadMap::timePointY
	int64_t ___timePointY_151;
	// System.Int64 LoadMap::timePointX
	int64_t ___timePointX_152;
	// System.SByte LoadMap::iTop
	int8_t ___iTop_153;
	// System.SByte LoadMap::iLeft
	int8_t ___iLeft_154;
	// System.Int32 LoadMap::xFirFocus
	int32_t ___xFirFocus_155;
	// System.Int32 LoadMap::yFirFocus
	int32_t ___yFirFocus_156;
	// System.Int32 LoadMap::xfirDu
	int32_t ___xfirDu_157;
	// System.Int32 LoadMap::yfirDu
	int32_t ___yfirDu_158;
	// System.Int32 LoadMap::xLastDu
	int32_t ___xLastDu_159;
	// System.Int32 LoadMap::yLastDu
	int32_t ___yLastDu_160;
	// System.Boolean[][] LoadMap::used
	BooleanU5BU5DU5BU5D_t71F0B22F93E41A588932E9FAA6BDC06D731064CC* ___used_161;
	// System.Int16[] LoadMap::to
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___to_162;
	// System.Int16[] LoadMap::from
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___from_163;
	// System.Int16[] LoadMap::mPath
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___mPath_164;
	// MyObject LoadMap::player
	MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* ___player_169;
	// MyObject LoadMap::obj
	MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* ___obj_170;
	// MyObject LoadMap::dynamic
	MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* ___dynamic_171;
	// Base LoadMap::temp1
	Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___temp1_172;
	// SubObject LoadMap::temp2
	SubObject_t4770BAA51A1FAC412389CD37E25FEC3EBFEA0CF1* ___temp2_173;
	// System.Int32 LoadMap::p
	int32_t ___p_174;
	// System.Int32 LoadMap::o
	int32_t ___o_175;
	// System.Int32 LoadMap::d
	int32_t ___d_176;
	// Image LoadMap::imgDayDien0
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgDayDien0_178;
	// Image LoadMap::imgDayDien1
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgDayDien1_179;
	// Image LoadMap::imgDayDien2
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgDayDien2_180;
};

// Message
struct Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640  : public RuntimeObject
{
	// System.SByte Message::command
	int8_t ___command_0;
	// myReader Message::dis
	myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56* ___dis_1;
	// myWriter Message::dos
	myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* ___dos_2;
};

// MyGraphics
struct MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56  : public RuntimeObject
{
	// System.Single MyGraphics::r
	float ___r_6;
	// System.Single MyGraphics::g
	float ___g_7;
	// System.Single MyGraphics::b
	float ___b_8;
	// System.Single MyGraphics::clipX
	float ___clipX_9;
	// System.Single MyGraphics::clipY
	float ___clipY_10;
	// System.Single MyGraphics::clipW
	float ___clipW_11;
	// System.Single MyGraphics::clipH
	float ___clipH_12;
	// System.Boolean MyGraphics::isClip
	bool ___isClip_13;
	// System.Boolean MyGraphics::isTranslate
	bool ___isTranslate_14;
	// System.Single MyGraphics::translateX
	float ___translateX_15;
	// System.Single MyGraphics::translateY
	float ___translateY_16;
	// System.Single MyGraphics::areaTexture
	float ___areaTexture_17;
	// System.Single MyGraphics::clipTX
	float ___clipTX_19;
	// System.Single MyGraphics::clipTY
	float ___clipTY_20;
	// System.Int32 MyGraphics::currentBGColor
	int32_t ___currentBGColor_21;
};

// MyObject
struct MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD  : public RuntimeObject
{
	// System.Int32 MyObject::x
	int32_t ___x_0;
	// System.Int32 MyObject::y
	int32_t ___y_1;
	// System.SByte MyObject::catagory
	int8_t ___catagory_13;
	// System.Int16 MyObject::height
	int16_t ___height_14;
	// System.Int16 MyObject::w
	int16_t ___w_15;
	// System.Int16 MyObject::h
	int16_t ___h_16;
	// System.Int16 MyObject::index
	int16_t ___index_17;
};

// MyVector
struct MyVector_t5E551DE127AB217F3BF51644B186993381C11E30  : public RuntimeObject
{
	// System.Collections.ArrayList MyVector::a
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___a_0;
};

// PaintPopup
struct PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107  : public RuntimeObject
{
	// System.Int32 PaintPopup::h
	int32_t ___h_3;
	// System.Int32 PaintPopup::w
	int32_t ___w_4;
	// System.Int32 PaintPopup::x
	int32_t ___x_5;
	// System.Int32 PaintPopup::y
	int32_t ___y_6;
	// System.Int32 PaintPopup::numTab
	int32_t ___numTab_7;
	// System.Int32 PaintPopup::wTab
	int32_t ___wTab_8;
	// System.Int32 PaintPopup::wSub
	int32_t ___wSub_9;
	// System.Int32 PaintPopup::focusTab
	int32_t ___focusTab_10;
	// System.Int32 PaintPopup::maxTab
	int32_t ___maxTab_11;
	// System.Int32[] PaintPopup::colorTab
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colorTab_12;
	// System.Int32[] PaintPopup::count
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___count_13;
	// System.String PaintPopup::name
	String_t* ___name_14;
	// System.String[] PaintPopup::nameList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameList_15;
	// System.SByte PaintPopup::countCloseTab
	int8_t ___countCloseTab_17;
	// System.SByte PaintPopup::countName
	int8_t ___countName_18;
	// System.Int32 PaintPopup::wName
	int32_t ___wName_19;
	// System.Boolean PaintPopup::isMenu
	bool ___isMenu_21;
	// System.Boolean PaintPopup::isFull
	bool ___isFull_22;
	// Image[][] PaintPopup::imgIcon
	ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* ___imgIcon_33;
	// System.Int32 PaintPopup::countTempName
	int32_t ___countTempName_34;
	// System.Int32 PaintPopup::pxLast
	int32_t ___pxLast_35;
	// System.Int32 PaintPopup::vY
	int32_t ___vY_36;
	// System.Int32 PaintPopup::timePoint
	int32_t ___timePoint_37;
	// System.Int32 PaintPopup::countTouch
	int32_t ___countTouch_38;
	// System.Int32 PaintPopup::timeDelay
	int32_t ___timeDelay_39;
	// System.Int32 PaintPopup::dxTran
	int32_t ___dxTran_40;
	// System.Int32 PaintPopup::timeOpen
	int32_t ___timeOpen_41;
	// System.Int32 PaintPopup::indexFocus
	int32_t ___indexFocus_42;
	// System.Single PaintPopup::pa
	float ___pa_43;
	// System.Single PaintPopup::vX
	float ___vX_44;
	// System.Boolean PaintPopup::isG
	bool ___isG_45;
	// System.Boolean PaintPopup::trans
	bool ___trans_46;
	// System.Boolean PaintPopup::isHide
	bool ___isHide_47;
};

// PositionMap
struct PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028  : public RuntimeObject
{
	// System.Int32 PositionMap::x
	int32_t ___x_0;
	// System.Int32 PositionMap::y
	int32_t ___y_1;
	// System.SByte PositionMap::id
	int8_t ___id_2;
	// System.String PositionMap::text
	String_t* ___text_3;
	// System.Int16 PositionMap::idImg
	int16_t ___idImg_4;
	// System.Int16 PositionMap::price
	int16_t ___price_5;
	// System.SByte PositionMap::typeMoney
	int8_t ___typeMoney_6;
	// System.Int32 PositionMap::count
	int32_t ___count_7;
};

// PositionTran
struct PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755  : public RuntimeObject
{
	// System.Int32 PositionTran::x
	int32_t ___x_0;
	// System.Int32 PositionTran::y
	int32_t ___y_1;
	// System.Int32 PositionTran::xTo
	int32_t ___xTo_2;
	// System.Int32 PositionTran::yTo
	int32_t ___yTo_3;
	// System.Int32 PositionTran::cmdx
	int32_t ___cmdx_4;
	// System.Int32 PositionTran::cmvx
	int32_t ___cmvx_5;
	// System.Int32 PositionTran::cmdy
	int32_t ___cmdy_6;
	// System.Int32 PositionTran::cmvy
	int32_t ___cmvy_7;
};

// Session_ME
struct Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB  : public RuntimeObject
{
	// System.String Session_ME::host
	String_t* ___host_22;
	// System.Int32 Session_ME::port
	int32_t ___port_23;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// T
struct T_t31AD343159665D2C3F238EC9A9CCA0278D064887  : public RuntimeObject
{
};

// TField
struct TField_t56E19AE85CA63279C53042EF348814217A9F0E70  : public RuntimeObject
{
	// System.Boolean TField::UpperCaseEnable
	bool ___UpperCaseEnable_0;
	// System.String TField::name
	String_t* ___name_1;
	// System.Int32 TField::x
	int32_t ___x_6;
	// System.Int32 TField::y
	int32_t ___y_7;
	// System.Int32 TField::width
	int32_t ___width_8;
	// System.Int32 TField::height
	int32_t ___height_9;
	// System.Boolean TField::isFocus
	bool ___isFocus_10;
	// System.Boolean TField::lockArrow
	bool ___lockArrow_11;
	// System.Boolean TField::paintFocus
	bool ___paintFocus_12;
	// System.Boolean TField::isChangeFocus
	bool ___isChangeFocus_13;
	// System.Boolean TField::isUser
	bool ___isUser_25;
	// IAction TField::action
	RuntimeObject* ___action_27;
	// System.String TField::text
	String_t* ___text_31;
	// System.String TField::passwordText
	String_t* ___passwordText_32;
	// System.String TField::paintedText
	String_t* ___paintedText_33;
	// System.Int32 TField::caretPos
	int32_t ___caretPos_34;
	// System.Int32 TField::counter
	int32_t ___counter_35;
	// System.Int32 TField::maxTextLenght
	int32_t ___maxTextLenght_36;
	// System.Int32 TField::offsetX
	int32_t ___offsetX_37;
	// System.Int32 TField::keyInActiveState
	int32_t ___keyInActiveState_39;
	// System.Int32 TField::indexOfActiveChar
	int32_t ___indexOfActiveChar_40;
	// System.Int32 TField::showCaretCounter
	int32_t ___showCaretCounter_41;
	// System.Int32 TField::inputType
	int32_t ___inputType_42;
	// System.SByte TField::indexEraser
	int8_t ___indexEraser_53;
	// System.String TField::sDefaust
	String_t* ___sDefaust_56;
	// AvMain TField::parent
	AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* ___parent_59;
	// Command TField::cmdClear
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdClear_61;
	// System.Int32 TField::indexDau
	int32_t ___indexDau_63;
	// System.Int32 TField::indexTemplate
	int32_t ___indexTemplate_64;
	// System.Int32 TField::indexCong
	int32_t ___indexCong_65;
	// System.Int64 TField::timeDau
	int64_t ___timeDau_66;
	// System.String TField::tempScr
	String_t* ___tempScr_68;
	// System.Boolean TField::openVirtual
	bool ___openVirtual_69;
	// System.Boolean TField::autoScaleScreen
	bool ___autoScaleScreen_70;
	// System.Boolean TField::showSubTextField
	bool ___showSubTextField_71;
	// System.Boolean TField::isTransTF
	bool ___isTransTF_72;
};

// TextMsg
struct TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455  : public RuntimeObject
{
	// System.String[] TextMsg::text
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___text_0;
	// System.Boolean TextMsg::isOwner
	bool ___isOwner_1;
	// System.Int16 TextMsg::wPopup
	int16_t ___wPopup_2;
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

// ipKeyboard
struct ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174  : public RuntimeObject
{
};

// myReader
struct myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56  : public RuntimeObject
{
	// System.SByte[] myReader::buffer
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___buffer_0;
	// System.Int32 myReader::posRead
	int32_t ___posRead_1;
	// System.Int32 myReader::posMark
	int32_t ___posMark_2;
};

// myWriter
struct myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E  : public RuntimeObject
{
	// System.SByte[] myWriter::buffer
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___buffer_0;
	// System.Int32 myWriter::posWrite
	int32_t ___posWrite_1;
	// System.Int32 myWriter::lenght
	int32_t ___lenght_2;
};

// MediumPaint/IActionPointer
struct IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F  : public RuntimeObject
{
	// Base MediumPaint/IActionPointer::b
	Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___b_0;
};

// MediumPaint/IActionPointerGO
struct IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3  : public RuntimeObject
{
};

// MessageScr/IActionChat
struct IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B  : public RuntimeObject
{
};

// MiniMap/IActionRequestOK
struct IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032  : public RuntimeObject
{
	// System.String MiniMap/IActionRequestOK::des
	String_t* ___des_0;
};

// MiniMap/IActionRequestReg
struct IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0  : public RuntimeObject
{
	// System.String MiniMap/IActionRequestReg::des
	String_t* ___des_0;
};

// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB  : public MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD
{
	// System.Int32 Base::IDDB
	int32_t ___IDDB_25;
	// System.String Base::name
	String_t* ___name_26;
	// System.Int32 Base::frame
	int32_t ___frame_27;
	// System.SByte Base::g
	int8_t ___g_28;
	// System.SByte Base::vhy
	int8_t ___vhy_29;
	// System.SByte Base::vh
	int8_t ___vh_30;
	// System.Int32 Base::xCur
	int32_t ___xCur_31;
	// System.Int32 Base::yCur
	int32_t ___yCur_32;
	// System.Int32 Base::vx
	int32_t ___vx_33;
	// System.Int32 Base::vy
	int32_t ___vy_34;
	// System.Int32 Base::v
	int32_t ___v_35;
	// System.SByte Base::action
	int8_t ___action_36;
	// System.SByte Base::direct
	int8_t ___direct_39;
	// ChatPopup Base::chat
	ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0* ___chat_40;
	// MyVector Base::listChat
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listChat_41;
	// System.Boolean Base::ableShow
	bool ___ableShow_42;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972  : public AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// MenuMain
struct MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A  : public AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C
{
};

// MyScreen
struct MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C  : public AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C
{
	// System.Int32 MyScreen::selected
	int32_t ___selected_29;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Welcome
struct Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD  : public AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C
{
	// System.Int32 Welcome::x
	int32_t ___x_26;
	// System.Int32 Welcome::y
	int32_t ___y_27;
	// System.Int32 Welcome::wPopup
	int32_t ___wPopup_28;
	// System.Int32 Welcome::next
	int32_t ___next_29;
	// System.String[][] Welcome::chats
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___chats_30;
	// System.Byte Welcome::num
	uint8_t ___num_32;
	// System.String[][] Welcome::textFish
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textFish_35;
	// System.String[][] Welcome::textShop
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textShop_37;
	// System.String[][] Welcome::textMiniMap
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textMiniMap_40;
	// System.String[][] Welcome::textMapScr
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textMapScr_44;
	// System.String[][] Welcome::textFarmPath
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textFarmPath_46;
	// System.String[][] Welcome::textFarm
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textFarm_50;
	// System.String[][] Welcome::textKhuMuaSam
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textKhuMuaSam_53;
	// SubObject Welcome::subPath
	SubObject_t4770BAA51A1FAC412389CD37E25FEC3EBFEA0CF1* ___subPath_55;
	// System.String[][] Welcome::textTask
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textTask_56;
	// System.String[][] Welcome::textCasino
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___textCasino_59;
	// AvPosition Welcome::posPopup
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posPopup_60;
};

// MediumPaint/CommandPointer
struct CommandPointer_t19053C3A33E8A6C25C6CB2C5282C12B59D6C7185  : public Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1
{
	// Base MediumPaint/CommandPointer::b
	Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___b_9;
};

// MediumPaint/CommandPointerGo
struct CommandPointerGo_t684940C03366F43B792CF98E2406FA991F0BA49A  : public Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1
{
};

// Animal
struct Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF  : public Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB
{
	// System.Int32 Animal::disTrans
	int32_t ___disTrans_50;
	// System.Int32 Animal::angle
	int32_t ___angle_51;
	// System.Int32 Animal::distant
	int32_t ___distant_52;
	// System.Int32 Animal::period
	int32_t ___period_53;
	// System.Int32 Animal::cycle
	int32_t ___cycle_54;
	// System.Boolean Animal::isEat
	bool ___isEat_55;
	// System.Int32 Animal::bornTime
	int32_t ___bornTime_56;
	// System.Int32 Animal::health
	int32_t ___health_57;
	// System.Boolean Animal::isHarvest
	bool ___isHarvest_58;
	// System.Boolean Animal::hunger
	bool ___hunger_59;
	// System.Boolean[] Animal::disease
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___disease_60;
	// System.SByte Animal::species
	int8_t ___species_61;
	// System.SByte Animal::harvestPer
	int8_t ___harvestPer_62;
	// System.SByte Animal::hDelta
	int8_t ___hDelta_63;
	// System.SByte Animal::indexFr
	int8_t ___indexFr_64;
	// AvPosition Animal::posNext
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posNext_65;
	// System.Int32 Animal::numEggOne
	int32_t ___numEggOne_66;
	// System.Boolean Animal::isStand
	bool ___isStand_67;
	// System.Int32 Animal::timeStand
	int32_t ___timeStand_68;
};

// Avatar
struct Avatar_t5280686025A629043829B8D5A31541F05B328D76  : public Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB
{
	// System.SByte Avatar::cFrame
	int8_t ___cFrame_43;
	// System.Int32[] Avatar::money
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___money_44;
	// System.Int32 Avatar::luongKhoa
	int32_t ___luongKhoa_45;
	// System.String Avatar::strMoney
	String_t* ___strMoney_46;
	// System.SByte Avatar::gender
	int8_t ___gender_47;
	// System.SByte Avatar::maxJump
	int8_t ___maxJump_48;
	// MyVector Avatar::seriPart
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___seriPart_49;
	// MyVector Avatar::emotionList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___emotionList_50;
	// MyVector Avatar::moveList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___moveList_51;
	// System.SByte Avatar::ySat
	int8_t ___ySat_52;
	// System.Int32 Avatar::friendShip
	int32_t ___friendShip_53;
	// System.Int32 Avatar::idFrom
	int32_t ___idFrom_54;
	// System.Int32 Avatar::idTo
	int32_t ___idTo_55;
	// System.Int32 Avatar::idGift
	int32_t ___idGift_56;
	// System.String Avatar::showName
	String_t* ___showName_57;
	// System.String Avatar::text2
	String_t* ___text2_58;
	// System.Int32 Avatar::exp
	int32_t ___exp_59;
	// System.Boolean Avatar::isReady
	bool ___isReady_60;
	// System.Boolean Avatar::isLeave
	bool ___isLeave_61;
	// System.SByte Avatar::typeHome
	int8_t ___typeHome_62;
	// System.SByte Avatar::perLvMain
	int8_t ___perLvMain_63;
	// System.SByte Avatar::perLvFarm
	int8_t ___perLvFarm_64;
	// System.SByte Avatar::dirFirst
	int8_t ___dirFirst_65;
	// System.Int16 Avatar::lvFarm
	int16_t ___lvFarm_66;
	// System.Int16 Avatar::lvMain
	int16_t ___lvMain_67;
	// System.Boolean Avatar::isLoad
	bool ___isLoad_68;
	// System.Boolean Avatar::isSetAction
	bool ___isSetAction_69;
	// System.Int32 Avatar::task
	int32_t ___task_85;
	// System.Int32 Avatar::isJumps
	int32_t ___isJumps_86;
	// System.Int32 Avatar::numSleep
	int32_t ___numSleep_87;
	// System.Int16 Avatar::feel
	int16_t ___feel_96;
	// System.Int16 Avatar::numFeel
	int16_t ___numFeel_97;
	// System.Int16 Avatar::firFeel
	int16_t ___firFeel_98;
	// System.Int16 Avatar::wName
	int16_t ___wName_99;
	// System.Int16 Avatar::nFrame
	int16_t ___nFrame_100;
	// System.Int16 Avatar::idPet
	int16_t ___idPet_102;
	// System.Int16 Avatar::hungerPet
	int16_t ___hungerPet_103;
	// System.Int16 Avatar::idImg
	int16_t ___idImg_104;
	// System.Int16 Avatar::timeTask
	int16_t ___timeTask_105;
	// System.Int16 Avatar::idWedding
	int16_t ___idWedding_106;
	// System.Int16 Avatar::idStatus
	int16_t ___idStatus_107;
	// System.Int32 Avatar::angle
	int32_t ___angle_108;
	// System.SByte Avatar::blogNews
	int8_t ___blogNews_109;
	// System.Boolean Avatar::isHit
	bool ___isHit_110;
	// System.Boolean Avatar::isNo
	bool ___isNo_111;
	// System.SByte Avatar::fight
	int8_t ___fight_113;
	// System.SByte Avatar::countDefent
	int8_t ___countDefent_114;
	// System.Int16 Avatar::hp
	int16_t ___hp_115;
	// System.Int16 Avatar::mp
	int16_t ___mp_116;
	// System.Int16 Avatar::plusHP
	int16_t ___plusHP_117;
	// System.Int16 Avatar::plusMP
	int16_t ___plusMP_118;
	// System.Int16 Avatar::maxHP
	int16_t ___maxHP_119;
	// System.Int16 Avatar::maxMP
	int16_t ___maxMP_120;
	// System.Int16 Avatar::defence
	int16_t ___defence_121;
	// Avatar Avatar::focus
	Avatar_t5280686025A629043829B8D5A31541F05B328D76* ___focus_122;
	// System.SByte Avatar::timeHit
	int8_t ___timeHit_125;
	// Kiss Avatar::kiss
	Kiss_t2AAB6E5363ED5CB4FF3AD1CFC8A866A69FA3E825* ___kiss_126;
	// System.String[] Avatar::textChat
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textChat_127;
	// System.Int32 Avatar::countChat
	int32_t ___countChat_128;
	// System.SByte[] Avatar::indexP
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___indexP_129;
	// System.Int16 Avatar::timeEmotion
	int16_t ___timeEmotion_137;
	// System.Int32 Avatar::indexChat
	int32_t ___indexChat_138;
	// System.Int32 Avatar::pa
	int32_t ___pa_139;
	// System.Int32 Avatar::pb
	int32_t ___pb_140;
};

// FarmScr
struct FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.String FarmScr::nameFarm
	String_t* ___nameFarm_42;
	// AvPosition[] FarmScr::posTree
	AvPositionU5BU5D_t7B6577B62565DE770F977CF05CF3E67B36EE26B2* ___posTree_61;
	// MyVector FarmScr::listHound
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listHound_62;
	// System.SByte[] FarmScr::typeCell
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___typeCell_65;
	// System.Byte[] FarmScr::typeCell1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___typeCell1_66;
	// AvPosition FarmScr::posDoing
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posDoing_73;
	// System.Int32 FarmScr::t
	int32_t ___t_79;
	// System.Int32 FarmScr::timeLimit
	int32_t ___timeLimit_84;
	// System.Int64 FarmScr::curTime
	int64_t ___curTime_85;
	// MyVector FarmScr::listAction
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listAction_90;
	// Command FarmScr::cmdSelected
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdSelected_91;
	// Command FarmScr::cmdNextSteal
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdNextSteal_98;
	// Command FarmScr::cmdCloseSteal
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdCloseSteal_99;
	// Command FarmScr::cmdStreal
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdStreal_100;
	// MyVector FarmScr::listLeftMenu
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listLeftMenu_108;
	// Animal FarmScr::aniDoing
	Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF* ___aniDoing_109;
	// System.Int64 FarmScr::timeDoing
	int64_t ___timeDoing_110;
	// System.Int32 FarmScr::tempTime
	int32_t ___tempTime_111;
	// System.Int32 FarmScr::repeatTime
	int32_t ___repeatTime_112;
	// System.Boolean FarmScr::isSelectedCell
	bool ___isSelectedCell_114;
	// System.Boolean FarmScr::isChamSoc
	bool ___isChamSoc_115;
	// System.Boolean FarmScr::isTrans
	bool ___isTrans_118;
	// MyVector FarmScr::listSelectedCell
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listSelectedCell_119;
	// System.Boolean FarmScr::isTran
	bool ___isTran_120;
	// System.Int32 FarmScr::n
	int32_t ___n_121;
	// System.Boolean FarmScr::isJoin
	bool ___isJoin_132;
	// System.Int32 FarmScr::ii
	int32_t ___ii_133;
	// System.Int32 FarmScr::indexAuto
	int32_t ___indexAuto_134;
};

// HouseScr
struct HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.Int32 HouseScr::x
	int32_t ___x_41;
	// System.Int32 HouseScr::y
	int32_t ___y_42;
	// System.Int32 HouseScr::selected
	int32_t ___selected_43;
	// Command HouseScr::cmdBrick
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdBrick_44;
	// Command HouseScr::cmdFinish
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdFinish_45;
	// Command HouseScr::cmdMenu
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdMenu_46;
	// Command HouseScr::cmdRotate
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdRotate_47;
	// MyScreen HouseScr::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_48;
	// MyVector HouseScr::listItem
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listItem_51;
	// System.SByte HouseScr::typeHome
	int8_t ___typeHome_52;
	// System.Int32 HouseScr::indexName
	int32_t ___indexName_53;
	// System.Int32 HouseScr::isSelectedItem
	int32_t ___isSelectedItem_54;
	// System.Int32 HouseScr::idHouse
	int32_t ___idHouse_55;
	// Tile[] HouseScr::listTile
	TileU5BU5D_tF9596405933A24DA27939A6D59B87CB4731E1F64* ___listTile_60;
	// AvPosition HouseScr::posSort
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posSort_61;
	// AvPosition HouseScr::posJoin
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posJoin_62;
	// BigImgInfo HouseScr::imgTileMap
	BigImgInfo_t3ECEEED4312026789584321939172F15E69944F3* ___imgTileMap_63;
	// FrameImage HouseScr::imgBuyItem
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgBuyItem_64;
	// System.Int32[] HouseScr::color
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___color_67;
	// System.Int16 HouseScr::IDHoa
	int16_t ___IDHoa_68;
	// System.Int16 HouseScr::IDHo
	int16_t ___IDHo_69;
	// System.Int16[] HouseScr::temp
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___temp_70;
	// System.Int32 HouseScr::indexTileMapBuy
	int32_t ___indexTileMapBuy_71;
	// System.String HouseScr::nameSelectedItem
	String_t* ___nameSelectedItem_72;
	// System.Int32 HouseScr::indexItemTranBuy
	int32_t ___indexItemTranBuy_73;
	// System.Int32 HouseScr::xItemTranBuy
	int32_t ___xItemTranBuy_74;
	// System.Int32 HouseScr::yItemTranBuy
	int32_t ___yItemTranBuy_75;
	// System.Boolean HouseScr::isTranItem
	bool ___isTranItem_76;
	// System.Boolean HouseScr::isMoveItem
	bool ___isMoveItem_77;
	// System.Int32 HouseScr::indexChangeItem
	int32_t ___indexChangeItem_78;
	// System.Int32 HouseScr::xItemOld
	int32_t ___xItemOld_79;
	// System.Int32 HouseScr::yItemOld
	int32_t ___yItemOld_80;
	// System.Int32 HouseScr::xTempItem
	int32_t ___xTempItem_81;
	// System.Int32 HouseScr::yTempItem
	int32_t ___yTempItem_82;
	// System.Int32 HouseScr::indexFireItem
	int32_t ___indexFireItem_83;
	// System.Int32 HouseScr::indexCloseItem
	int32_t ___indexCloseItem_84;
	// System.Int32 HouseScr::indexRotateItem
	int32_t ___indexRotateItem_85;
	// System.Boolean HouseScr::isTrans
	bool ___isTrans_86;
	// System.Boolean HouseScr::isMove
	bool ___isMove_87;
	// System.Int32 HouseScr::xDu
	int32_t ___xDu_88;
	// System.Int32 HouseScr::yDu
	int32_t ___yDu_89;
	// System.Int32 HouseScr::indexChans
	int32_t ___indexChans_90;
	// System.Int32 HouseScr::x0
	int32_t ___x0_91;
	// System.Int32 HouseScr::xHo
	int32_t ___xHo_92;
	// System.Int32 HouseScr::yHo
	int32_t ___yHo_93;
	// MyVector HouseScr::listP_Chest
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listP_Chest_94;
	// MyVector HouseScr::listP_Con
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listP_Con_95;
	// System.Int32 HouseScr::moneyOnChest
	int32_t ___moneyOnChest_96;
	// System.SByte HouseScr::levelChest
	int8_t ___levelChest_97;
};

// ListScr
struct ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// MyScreen ListScr::backMyScreen
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___backMyScreen_41;
	// System.Int32 ListScr::focus
	int32_t ___focus_42;
	// System.Int32 ListScr::type
	int32_t ___type_43;
	// Command ListScr::cmdSelected
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdSelected_45;
	// Command ListScr::cmdClose
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdClose_46;
	// System.Int32 ListScr::wSmall
	int32_t ___wSmall_48;
	// System.Int32 ListScr::selected
	int32_t ___selected_52;
	// System.Boolean ListScr::isAction
	bool ___isAction_55;
	// System.Boolean ListScr::isRemove
	bool ___isRemove_56;
	// System.Boolean ListScr::isJoinH
	bool ___isJoinH_57;
	// System.String ListScr::name
	String_t* ___name_58;
	// System.Boolean ListScr::isHide
	bool ___isHide_61;
	// System.Int32 ListScr::xCus
	int32_t ___xCus_62;
	// System.Boolean ListScr::transY
	bool ___transY_63;
	// System.Boolean ListScr::isTranClose
	bool ___isTranClose_64;
};

// LoginScr
struct LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// TField LoginScr::tfUser
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___tfUser_41;
	// TField LoginScr::tfPass
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___tfPass_42;
	// TField LoginScr::tfReg
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___tfReg_43;
	// TField LoginScr::tfEmail
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___tfEmail_44;
	// System.Int32 LoginScr::focus
	int32_t ___focus_45;
	// System.Int32 LoginScr::yL
	int32_t ___yL_46;
	// System.Int32 LoginScr::defYL
	int32_t ___defYL_47;
	// Command LoginScr::cmdRemem
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdRemem_48;
	// Command LoginScr::cmdLogin
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdLogin_49;
	// Command LoginScr::cmdReg
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdReg_50;
	// Command LoginScr::cmdRegister
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdRegister_51;
	// Command LoginScr::cmdBack
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdBack_52;
	// Command LoginScr::cmdSelected
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdSelected_53;
	// System.Boolean LoginScr::isCheckBox
	bool ___isCheckBox_54;
	// Command LoginScr::cmdMenu
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdMenu_55;
	// System.Boolean LoginScr::isReg
	bool ___isReg_56;
	// System.String LoginScr::numSupport
	String_t* ___numSupport_57;
	// System.String LoginScr::passRemem
	String_t* ___passRemem_58;
	// System.Int16[] LoginScr::listIDPart
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___listIDPart_59;
	// System.Int32 LoginScr::xLogin
	int32_t ___xLogin_60;
	// System.Int32 LoginScr::yLogin
	int32_t ___yLogin_61;
	// System.Int32 LoginScr::wLogin
	int32_t ___wLogin_62;
	// System.Int32 LoginScr::hLogin
	int32_t ___hLogin_63;
	// System.Int32 LoginScr::xCheck
	int32_t ___xCheck_64;
	// System.Int32 LoginScr::yCheck
	int32_t ___yCheck_65;
	// System.Int32 LoginScr::wC
	int32_t ___wC_66;
	// System.Int32 LoginScr::xC
	int32_t ___xC_67;
	// System.Int64 LoginScr::timeOut
	int64_t ___timeOut_68;
	// System.String[] LoginScr::listStrNew
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___listStrNew_73;
	// System.Int32 LoginScr::hCellNew
	int32_t ___hCellNew_74;
	// System.Int32 LoginScr::yNew
	int32_t ___yNew_75;
	// System.SByte LoginScr::indexNewGame
	int8_t ___indexNewGame_76;
	// System.String LoginScr::nameVir
	String_t* ___nameVir_77;
	// System.String LoginScr::passVir
	String_t* ___passVir_78;
	// System.Int32 LoginScr::h0
	int32_t ___h0_79;
	// System.String LoginScr::referral
	String_t* ___referral_81;
	// System.String LoginScr::email
	String_t* ___email_82;
	// System.Int32 LoginScr::indexLQ
	int32_t ___indexLQ_83;
	// System.Boolean LoginScr::isCheck
	bool ___isCheck_84;
	// System.Boolean LoginScr::isClickNew
	bool ___isClickNew_85;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.Int32 MainMenu::selected
	int32_t ___selected_41;
	// System.Int32 MainMenu::x
	int32_t ___x_42;
	// System.Int32 MainMenu::y
	int32_t ___y_43;
	// System.Int32 MainMenu::wSmall
	int32_t ___wSmall_44;
	// System.Int32 MainMenu::wGo
	int32_t ___wGo_45;
	// System.Int32 MainMenu::disSmall
	int32_t ___disSmall_46;
	// System.Int32 MainMenu::numW
	int32_t ___numW_47;
	// System.Int32 MainMenu::dis
	int32_t ___dis_48;
	// System.Int32 MainMenu::angleNormal
	int32_t ___angleNormal_49;
	// System.Int32 MainMenu::disTran
	int32_t ___disTran_50;
	// System.Boolean MainMenu::isGO
	bool ___isGO_51;
	// System.Boolean MainMenu::isName
	bool ___isName_52;
	// System.Boolean MainMenu::isAble
	bool ___isAble_53;
	// MyVector MainMenu::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_54;
	// MyScreen MainMenu::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_57;
	// Command MainMenu::cmdCenter
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdCenter_58;
	// System.Boolean MainMenu::isCircle
	bool ___isCircle_59;
	// System.Boolean MainMenu::isHide
	bool ___isHide_60;
	// System.Int32 MainMenu::angleCircle
	int32_t ___angleCircle_61;
	// System.Int32 MainMenu::wCircle
	int32_t ___wCircle_62;
	// System.Int32 MainMenu::maxW
	int32_t ___maxW_63;
	// MyVector MainMenu::listObj
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listObj_64;
	// AvPosition MainMenu::avaPaint
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___avaPaint_65;
	// System.Int32 MainMenu::cmtoX
	int32_t ___cmtoX_67;
	// System.Int32 MainMenu::cmx
	int32_t ___cmx_68;
	// System.Int32 MainMenu::cmdx
	int32_t ___cmdx_69;
	// System.Int32 MainMenu::cmvx
	int32_t ___cmvx_70;
	// System.Int32 MainMenu::cmxLim
	int32_t ___cmxLim_71;
	// System.Int32 MainMenu::disX
	int32_t ___disX_72;
	// System.Boolean MainMenu::isWearing
	bool ___isWearing_73;
	// System.Int32 MainMenu::angle
	int32_t ___angle_75;
	// System.Int32 MainMenu::xCenter
	int32_t ___xCenter_76;
	// System.Int32 MainMenu::yCenter
	int32_t ___yCenter_77;
	// System.Int32 MainMenu::maxRadius
	int32_t ___maxRadius_78;
	// System.Single MainMenu::distant
	float ___distant_79;
	// System.Single MainMenu::v
	float ___v_80;
	// System.Int32 MainMenu::g
	int32_t ___g_81;
	// System.Boolean MainMenu::trans
	bool ___trans_82;
	// System.Boolean MainMenu::isClick
	bool ___isClick_83;
	// System.Int32 MainMenu::dxTran
	int32_t ___dxTran_84;
	// System.Int32 MainMenu::timeOpen
	int32_t ___timeOpen_85;
	// System.Int64 MainMenu::timeDelay
	int64_t ___timeDelay_86;
	// System.Int64 MainMenu::count
	int64_t ___count_87;
	// System.Int64 MainMenu::timePoint
	int64_t ___timePoint_88;
	// System.Int32 MainMenu::vX
	int32_t ___vX_89;
	// System.Int32 MainMenu::indexCircle
	int32_t ___indexCircle_90;
	// System.Int32 MainMenu::indexTemp
	int32_t ___indexTemp_91;
};

// MapScr
struct MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// Command MapScr::cmdMenu
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdMenu_45;
	// Command MapScr::cmdEvent
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdEvent_46;
	// Command MapScr::cmdGoToMap
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdGoToMap_47;
	// Command MapScr::cmdExchangeBoss
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdExchangeBoss_48;
	// System.Int32 MapScr::dir
	int32_t ___dir_67;
	// System.SByte MapScr::countWeeding
	int8_t ___countWeeding_69;
	// System.Int32 MapScr::count
	int32_t ___count_71;
	// MyVector MapScr::chatList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___chatList_72;
	// System.Int32 MapScr::chatDelay
	int32_t ___chatDelay_73;
	// System.Int32 MapScr::MAX_CHAT_DELAY
	int32_t ___MAX_CHAT_DELAY_74;
	// System.Boolean MapScr::isTour
	bool ___isTour_75;
	// System.SByte MapScr::iGoChaSu
	int8_t ___iGoChaSu_81;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// System.Boolean Menu::showMenu
	bool ___showMenu_27;
	// MyVector Menu::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_28;
	// System.Int32 Menu::selected
	int32_t ___selected_29;
	// System.Int32 Menu::chan
	int32_t ___chan_30;
	// System.Int32 Menu::menuX
	int32_t ___menuX_31;
	// System.Int32 Menu::menuY
	int32_t ___menuY_32;
	// System.Int32 Menu::menuW
	int32_t ___menuW_33;
	// System.Int32 Menu::menuH
	int32_t ___menuH_34;
	// System.Int32 Menu::menuTemY
	int32_t ___menuTemY_35;
	// System.Int32 Menu::w
	int32_t ___w_36;
	// System.Int32 Menu::hItem
	int32_t ___hItem_37;
	// System.Int32 Menu::wItem
	int32_t ___wItem_38;
	// System.Int16[] Menu::radius
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___radius_41;
	// System.Int32 Menu::pos
	int32_t ___pos_42;
	// System.Boolean Menu::showMenuFarm
	bool ___showMenuFarm_43;
	// System.Int32 Menu::cmtoY
	int32_t ___cmtoY_44;
	// System.Int32 Menu::cmy
	int32_t ___cmy_45;
	// System.Int32 Menu::cmdy
	int32_t ___cmdy_46;
	// System.Int32 Menu::cmvy
	int32_t ___cmvy_47;
	// System.Int32 Menu::cmyLim
	int32_t ___cmyLim_48;
	// System.Int32 Menu::xTranMenu
	int32_t ___xTranMenu_49;
	// System.Int32 Menu::xTranTo
	int32_t ___xTranTo_50;
	// System.Int32 Menu::xL
	int32_t ___xL_51;
	// System.Int32 Menu::size
	int32_t ___size_52;
	// IAction Menu::iNo
	RuntimeObject* ___iNo_54;
	// MyVector Menu::listText
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listText_55;
	// System.Int32 Menu::vY
	int32_t ___vY_56;
	// System.Int32 Menu::disY
	int32_t ___disY_57;
	// System.Int32 Menu::pa
	int32_t ___pa_58;
	// System.Int32 Menu::dyTran
	int32_t ___dyTran_59;
	// System.Int32 Menu::timeOpen
	int32_t ___timeOpen_60;
	// System.Int32 Menu::pyLast
	int32_t ___pyLast_61;
	// System.Boolean Menu::trans
	bool ___trans_62;
	// System.Boolean Menu::isClick
	bool ___isClick_63;
	// System.Boolean Menu::isClose
	bool ___isClose_64;
	// System.Boolean Menu::isFire
	bool ___isFire_65;
	// System.Boolean Menu::isG
	bool ___isG_66;
	// System.Int64 Menu::timeDelay
	int64_t ___timeDelay_67;
	// System.Int64 Menu::count
	int64_t ___count_68;
	// System.Int64 Menu::timePoint
	int64_t ___timePoint_69;
	// System.Int32 Menu::dir
	int32_t ___dir_70;
	// System.Int32 Menu::xText
	int32_t ___xText_71;
};

// MenuCenter
struct MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// System.Int32 MenuCenter::x
	int32_t ___x_27;
	// System.Int32 MenuCenter::y
	int32_t ___y_28;
	// System.Int32 MenuCenter::w
	int32_t ___w_29;
	// System.Int32 MenuCenter::h
	int32_t ___h_30;
	// System.Int32 MenuCenter::hCell
	int32_t ___hCell_31;
	// MyVector MenuCenter::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_32;
	// System.Int32 MenuCenter::cmtoY
	int32_t ___cmtoY_33;
	// System.Int32 MenuCenter::cmy
	int32_t ___cmy_34;
	// System.Int32 MenuCenter::cmdy
	int32_t ___cmdy_35;
	// System.Int32 MenuCenter::cmvy
	int32_t ___cmvy_36;
	// System.Int32 MenuCenter::cmyLim
	int32_t ___cmyLim_37;
	// System.Int32 MenuCenter::selected
	int32_t ___selected_38;
	// System.Int32 MenuCenter::hDis
	int32_t ___hDis_39;
	// System.Boolean MenuCenter::isHide
	bool ___isHide_40;
	// System.Int32 MenuCenter::timeOpen1
	int32_t ___timeOpen1_41;
	// System.Boolean MenuCenter::trans
	bool ___trans_42;
	// System.Boolean MenuCenter::isG
	bool ___isG_43;
	// System.Boolean MenuCenter::isClick
	bool ___isClick_44;
	// System.Int32 MenuCenter::pa
	int32_t ___pa_45;
	// System.Int32 MenuCenter::dxTran
	int32_t ___dxTran_46;
	// System.Int32 MenuCenter::timeOpen
	int32_t ___timeOpen_47;
	// System.Int32 MenuCenter::pyLast
	int32_t ___pyLast_48;
	// System.Int32 MenuCenter::dyTran
	int32_t ___dyTran_49;
	// System.Int64 MenuCenter::delay
	int64_t ___delay_50;
	// System.Int64 MenuCenter::timeDelay
	int64_t ___timeDelay_51;
	// System.Int64 MenuCenter::count
	int64_t ___count_52;
	// System.Int64 MenuCenter::timePoint
	int64_t ___timePoint_53;
	// System.Int32 MenuCenter::vX
	int32_t ___vX_54;
	// System.Int32 MenuCenter::vY
	int32_t ___vY_55;
};

// MenuIcon
struct MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// MyVector MenuIcon::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_27;
	// System.Int32 MenuIcon::xCenter
	int32_t ___xCenter_28;
	// System.Int32 MenuIcon::yCenter
	int32_t ___yCenter_29;
	// System.Int32 MenuIcon::wCell
	int32_t ___wCell_30;
	// System.Int32 MenuIcon::hCell
	int32_t ___hCell_31;
	// System.Int32 MenuIcon::cmtoY
	int32_t ___cmtoY_32;
	// System.Int32 MenuIcon::cmy
	int32_t ___cmy_33;
	// System.Int32 MenuIcon::cmdy
	int32_t ___cmdy_34;
	// System.Int32 MenuIcon::cmvy
	int32_t ___cmvy_35;
	// System.Int32 MenuIcon::cmyLim
	int32_t ___cmyLim_36;
	// System.Int32 MenuIcon::hDis
	int32_t ___hDis_37;
	// System.Int32 MenuIcon::selected
	int32_t ___selected_38;
	// PositionTran[] MenuIcon::tranPos
	PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* ___tranPos_39;
	// Image[] MenuIcon::imgFocus
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgFocus_40;
	// System.Int32 MenuIcon::timeOpen1
	int32_t ___timeOpen1_41;
	// System.Boolean MenuIcon::trans
	bool ___trans_42;
	// System.Boolean MenuIcon::isG
	bool ___isG_43;
	// System.Boolean MenuIcon::isClick
	bool ___isClick_44;
	// System.Int32 MenuIcon::pa
	int32_t ___pa_45;
	// System.Int32 MenuIcon::dxTran
	int32_t ___dxTran_46;
	// System.Int32 MenuIcon::timeOpen
	int32_t ___timeOpen_47;
	// System.Int32 MenuIcon::pyLast
	int32_t ___pyLast_48;
	// System.Int32 MenuIcon::dyTran
	int32_t ___dyTran_49;
	// System.Int64 MenuIcon::delay
	int64_t ___delay_50;
	// System.Int64 MenuIcon::timeDelay
	int64_t ___timeDelay_51;
	// System.Int64 MenuIcon::count
	int64_t ___count_52;
	// System.Int64 MenuIcon::timePoint
	int64_t ___timePoint_53;
	// System.Int32 MenuIcon::vX
	int32_t ___vX_54;
	// System.Int32 MenuIcon::vY
	int32_t ___vY_55;
};

// MenuLeft
struct MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// MyVector MenuLeft::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_27;
	// Image MenuLeft::imgBack
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBack_28;
	// Image[][] MenuLeft::imgIcon
	ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* ___imgIcon_29;
	// System.Int32 MenuLeft::x
	int32_t ___x_30;
	// System.Int32 MenuLeft::y
	int32_t ___y_31;
	// System.Int32 MenuLeft::w
	int32_t ___w_32;
	// System.Int32 MenuLeft::h
	int32_t ___h_33;
	// System.Int32 MenuLeft::hCell
	int32_t ___hCell_34;
	// System.Int32 MenuLeft::selected
	int32_t ___selected_35;
	// System.Boolean MenuLeft::isTranKey
	bool ___isTranKey_36;
	// System.Boolean MenuLeft::isClick
	bool ___isClick_37;
	// System.Int32 MenuLeft::count
	int32_t ___count_38;
	// System.Int32 MenuLeft::countCur
	int32_t ___countCur_39;
	// System.Int32 MenuLeft::timeOpen
	int32_t ___timeOpen_40;
};

// MenuNPC
struct MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// System.Int32 MenuNPC::idUser
	int32_t ___idUser_27;
	// System.Int32 MenuNPC::x
	int32_t ___x_28;
	// System.Int32 MenuNPC::y
	int32_t ___y_29;
	// System.Int32 MenuNPC::w
	int32_t ___w_30;
	// System.Int32 MenuNPC::h
	int32_t ___h_31;
	// System.Int32 MenuNPC::xList
	int32_t ___xList_32;
	// System.Int32 MenuNPC::yList
	int32_t ___yList_33;
	// System.Int32 MenuNPC::wList
	int32_t ___wList_34;
	// System.Int32 MenuNPC::hList
	int32_t ___hList_35;
	// System.Int32 MenuNPC::hItem
	int32_t ___hItem_36;
	// System.Int32 MenuNPC::focus
	int32_t ___focus_37;
	// MyVector MenuNPC::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_39;
	// System.String MenuNPC::nameNPC
	String_t* ___nameNPC_40;
	// System.String[] MenuNPC::textChat
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textChat_41;
	// System.Boolean[] MenuNPC::isMenu
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isMenu_42;
	// Image MenuNPC::imgBackPopup
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBackPopup_43;
	// Image MenuNPC::imgBackChat
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBackChat_44;
	// System.Int32 MenuNPC::pa
	int32_t ___pa_45;
	// System.Int32 MenuNPC::dyTran
	int32_t ___dyTran_46;
	// System.Int32 MenuNPC::timeOpen
	int32_t ___timeOpen_47;
	// System.Int32 MenuNPC::pyLast
	int32_t ___pyLast_48;
	// System.Boolean MenuNPC::trans
	bool ___trans_49;
	// System.Boolean MenuNPC::isG
	bool ___isG_50;
	// System.Int64 MenuNPC::timeDelay
	int64_t ___timeDelay_51;
	// System.Int64 MenuNPC::count
	int64_t ___count_52;
	// System.Int64 MenuNPC::timePoint
	int64_t ___timePoint_53;
	// System.Int32 MenuNPC::vY
	int32_t ___vY_54;
	// System.Int32 MenuNPC::cmtoY
	int32_t ___cmtoY_55;
	// System.Int32 MenuNPC::cmy
	int32_t ___cmy_56;
	// System.Int32 MenuNPC::cmdy
	int32_t ___cmdy_57;
	// System.Int32 MenuNPC::cmvy
	int32_t ___cmvy_58;
	// System.Int32 MenuNPC::cmyLim
	int32_t ___cmyLim_59;
};

// MenuOn
struct MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// System.Boolean MenuOn::showMenu
	bool ___showMenu_27;
	// MyVector MenuOn::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_28;
	// System.Int32 MenuOn::selected
	int32_t ___selected_29;
	// System.Int32 MenuOn::chan
	int32_t ___chan_30;
	// System.Int32 MenuOn::menuX
	int32_t ___menuX_31;
	// System.Int32 MenuOn::menuY
	int32_t ___menuY_32;
	// System.Int32 MenuOn::menuW
	int32_t ___menuW_33;
	// System.Int32 MenuOn::menuH
	int32_t ___menuH_34;
	// System.Int32 MenuOn::menuTemY
	int32_t ___menuTemY_35;
	// System.Int32 MenuOn::w
	int32_t ___w_36;
	// System.Int32 MenuOn::hItem
	int32_t ___hItem_37;
	// System.Int32 MenuOn::wItem
	int32_t ___wItem_38;
	// System.Int32 MenuOn::pos
	int32_t ___pos_39;
	// System.Int32 MenuOn::cmtoY
	int32_t ___cmtoY_40;
	// System.Int32 MenuOn::cmy
	int32_t ___cmy_41;
	// System.Int32 MenuOn::cmdy
	int32_t ___cmdy_42;
	// System.Int32 MenuOn::cmvy
	int32_t ___cmvy_43;
	// System.Int32 MenuOn::cmyLim
	int32_t ___cmyLim_44;
	// System.Int32 MenuOn::xL
	int32_t ___xL_45;
	// System.Int32 MenuOn::size
	int32_t ___size_46;
	// System.Int32 MenuOn::vY
	int32_t ___vY_50;
	// System.Int32 MenuOn::disY
	int32_t ___disY_51;
	// System.Int32 MenuOn::pa
	int32_t ___pa_52;
	// System.Int32 MenuOn::dyTran
	int32_t ___dyTran_53;
	// System.Int32 MenuOn::timeOpen
	int32_t ___timeOpen_54;
	// System.Boolean MenuOn::trans
	bool ___trans_55;
	// System.Boolean MenuOn::isClick
	bool ___isClick_56;
	// System.Int64 MenuOn::timeDelay
	int64_t ___timeDelay_57;
	// System.Int64 MenuOn::count
	int64_t ___count_58;
	// System.Int64 MenuOn::timePoint
	int64_t ___timePoint_59;
};

// MenuSub
struct MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C  : public MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A
{
	// MyVector MenuSub::list
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___list_27;
	// System.Int32 MenuSub::x
	int32_t ___x_28;
	// System.Int32 MenuSub::y
	int32_t ___y_29;
	// System.Int32 MenuSub::w
	int32_t ___w_30;
	// System.Int32 MenuSub::h
	int32_t ___h_31;
	// System.Int32 MenuSub::hItem
	int32_t ___hItem_32;
	// System.Int32 MenuSub::index
	int32_t ___index_33;
	// System.Int32 MenuSub::vY
	int32_t ___vY_39;
	// System.Int64 MenuSub::count
	int64_t ___count_40;
	// System.Int64 MenuSub::timePoint
	int64_t ___timePoint_41;
	// System.Int32 MenuSub::dyTran
	int32_t ___dyTran_42;
	// System.Int32 MenuSub::timeOpen
	int32_t ___timeOpen_43;
	// System.Int32 MenuSub::pyLast
	int32_t ___pyLast_44;
	// System.Boolean MenuSub::isFire
	bool ___isFire_45;
	// System.Boolean MenuSub::isG
	bool ___isG_46;
	// System.Boolean MenuSub::transY
	bool ___transY_47;
	// System.Int32 MenuSub::pa
	int32_t ___pa_48;
	// System.Int64 MenuSub::timeDelay
	int64_t ___timeDelay_49;
};

// MessageScr
struct MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.Int32 MessageScr::x
	int32_t ___x_41;
	// System.Int32 MessageScr::y
	int32_t ___y_42;
	// System.Int32 MessageScr::w
	int32_t ___w_43;
	// System.Int32 MessageScr::h
	int32_t ___h_44;
	// System.Int32 MessageScr::wTab
	int32_t ___wTab_45;
	// System.Int32 MessageScr::focusTab
	int32_t ___focusTab_46;
	// System.Int32 MessageScr::hTab
	int32_t ___hTab_47;
	// System.Int32 MessageScr::hDis
	int32_t ___hDis_48;
	// System.Int32 MessageScr::hText
	int32_t ___hText_49;
	// System.Int32 MessageScr::selected
	int32_t ___selected_50;
	// System.Int32 MessageScr::size
	int32_t ___size_51;
	// System.SByte MessageScr::countClose
	int8_t ___countClose_52;
	// System.SByte MessageScr::numTab
	int8_t ___numTab_53;
	// System.String[] MessageScr::nameTab
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameTab_54;
	// System.SByte MessageScr::sizeTab
	int8_t ___sizeTab_55;
	// System.SByte MessageScr::hString
	int8_t ___hString_56;
	// System.Int32 MessageScr::cmtoY
	int32_t ___cmtoY_57;
	// System.Int32 MessageScr::cmy
	int32_t ___cmy_58;
	// System.Int32 MessageScr::cmdy
	int32_t ___cmdy_59;
	// System.Int32 MessageScr::cmvy
	int32_t ___cmvy_60;
	// System.Int32 MessageScr::cmyLim
	int32_t ___cmyLim_61;
	// MyVector MessageScr::listTextTab_1
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listTextTab_1_62;
	// MyVector MessageScr::listPlayer
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listPlayer_63;
	// ElementPlayer MessageScr::chatPlayer
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* ___chatPlayer_64;
	// MyScreen MessageScr::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_65;
	// TField MessageScr::tfChat
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___tfChat_66;
	// Command MessageScr::cmdChat
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdChat_67;
	// FrameImage MessageScr::imgTick
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgTick_68;
	// FrameImage MessageScr::imgDel
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgDel_69;
	// System.Boolean MessageScr::isNewMsg
	bool ___isNewMsg_70;
	// Image MessageScr::imgBound
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBound_72;
	// System.Int32 MessageScr::indexDel
	int32_t ___indexDel_73;
	// System.Boolean MessageScr::isTranKey
	bool ___isTranKey_74;
	// System.Boolean MessageScr::isClickDel
	bool ___isClickDel_75;
	// System.SByte MessageScr::indexTab
	int8_t ___indexTab_76;
	// System.Boolean MessageScr::trans
	bool ___trans_77;
	// System.Boolean MessageScr::isG
	bool ___isG_78;
	// System.Boolean MessageScr::isDel
	bool ___isDel_79;
	// System.Int32 MessageScr::pa
	int32_t ___pa_80;
	// System.Int32 MessageScr::dxTran
	int32_t ___dxTran_81;
	// System.Int32 MessageScr::timeOpen
	int32_t ___timeOpen_82;
	// System.Int32 MessageScr::pyLast
	int32_t ___pyLast_83;
	// System.Int32 MessageScr::dyTran
	int32_t ___dyTran_84;
	// System.Int64 MessageScr::delay
	int64_t ___delay_85;
	// System.Int64 MessageScr::timeDelay
	int64_t ___timeDelay_86;
	// System.Int64 MessageScr::count
	int64_t ___count_87;
	// System.Int64 MessageScr::timePoint
	int64_t ___timePoint_88;
	// System.Int32 MessageScr::vX
	int32_t ___vX_89;
	// System.Int32 MessageScr::vY
	int32_t ___vY_90;
};

// MiniMap
struct MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.SByte[] MiniMap::map
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___map_43;
	// MyVector MiniMap::listPos
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listPos_44;
	// System.SByte MiniMap::wMini
	int8_t ___wMini_45;
	// System.SByte MiniMap::hMini
	int8_t ___hMini_46;
	// System.SByte MiniMap::wSmall
	int8_t ___wSmall_47;
	// System.Int32 MiniMap::x
	int32_t ___x_48;
	// System.Int32 MiniMap::y
	int32_t ___y_49;
	// System.Int32 MiniMap::selected
	int32_t ___selected_52;
	// MyScreen MiniMap::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_63;
	// IAction MiniMap::cmdUpdateKey
	RuntimeObject* ___cmdUpdateKey_64;
	// System.Boolean MiniMap::trans
	bool ___trans_65;
	// System.Boolean MiniMap::isHide
	bool ___isHide_66;
	// Image[] MiniMap::imgClound
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgClound_69;
	// Command MiniMap::cmdCenter
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdCenter_74;
	// System.Int32 MiniMap::vY
	int32_t ___vY_76;
	// System.Int32 MiniMap::vX
	int32_t ___vX_77;
	// System.Single MiniMap::pa
	float ___pa_78;
	// System.Single MiniMap::pb
	float ___pb_79;
	// System.Boolean MiniMap::ableTrans
	bool ___ableTrans_80;
	// System.Int32 MiniMap::dyTran
	int32_t ___dyTran_81;
	// System.Int32 MiniMap::dxTran
	int32_t ___dxTran_82;
	// System.Int64 MiniMap::timePointY
	int64_t ___timePointY_83;
	// System.Int64 MiniMap::count
	int64_t ___count_84;
};

// OptionScr
struct OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// System.Int32 OptionScr::point
	int32_t ___point_41;
	// System.Int32 OptionScr::focus
	int32_t ___focus_42;
	// System.Int32 OptionScr::max
	int32_t ___max_43;
	// System.Int32[] OptionScr::mapFocus
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___mapFocus_44;
	// System.Int32 OptionScr::volume
	int32_t ___volume_45;
	// System.Int32 OptionScr::xL
	int32_t ___xL_46;
	// System.Int32 OptionScr::hText
	int32_t ___hText_47;
	// MyScreen OptionScr::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_51;
	// System.Boolean[] OptionScr::isPaint
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isPaint_53;
	// System.Int32 OptionScr::x
	int32_t ___x_54;
	// System.Int32 OptionScr::y
	int32_t ___y_55;
	// System.Int32 OptionScr::w
	int32_t ___w_56;
	// System.Int32 OptionScr::h
	int32_t ___h_57;
	// System.Int32 OptionScr::hCell
	int32_t ___hCell_58;
	// System.Boolean OptionScr::isTranKey
	bool ___isTranKey_59;
	// System.Int32 OptionScr::indexLeft
	int32_t ___indexLeft_60;
	// System.Int32 OptionScr::indexRight
	int32_t ___indexRight_61;
};

// PopupShop
struct PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// MyVector[] PopupShop::listCell
	MyVectorU5BU5D_t5FE2B41BB671ADD61156AD7564F51284B9441A5F* ___listCell_53;
	// MyVector PopupShop::listCmd
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listCmd_54;
	// Command[] PopupShop::listCmdL
	CommandU5BU5D_t4A0C12B655C3B219F2389698F80224F19FA52B94* ___listCmdL_55;
	// Command[] PopupShop::listCmdR
	CommandU5BU5D_t4A0C12B655C3B219F2389698F80224F19FA52B94* ___listCmdR_56;
	// System.Int32 PopupShop::xL
	int32_t ___xL_62;
	// System.Int32 PopupShop::fliped
	int32_t ___fliped_63;
	// System.Boolean PopupShop::isFull
	bool ___isFull_64;
	// System.Int32 PopupShop::indexScroll
	int32_t ___indexScroll_74;
	// System.Boolean[] PopupShop::isDuCell
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDuCell_75;
	// System.String[] PopupShop::textTop
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textTop_76;
	// System.Boolean PopupShop::isHide
	bool ___isHide_80;
	// System.Int32 PopupShop::xMoney
	int32_t ___xMoney_81;
	// System.Int32 PopupShop::wStr
	int32_t ___wStr_82;
};

// UnityEngine.ScreenOrientation
struct ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2 
{
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;
};

// ServerListScr
struct ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE  : public MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C
{
	// Image ServerListScr::imgF
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgF_44;
	// Image ServerListScr::imgArr
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgArr_45;
	// System.Boolean ServerListScr::isSelected
	bool ___isSelected_46;
	// System.SByte ServerListScr::countClose
	int8_t ___countClose_57;
	// System.Int32 ServerListScr::indexUSer
	int32_t ___indexUSer_58;
	// System.Int64 ServerListScr::timeDelay
	int64_t ___timeDelay_59;
	// System.Int32 ServerListScr::vY
	int32_t ___vY_60;
	// System.Boolean ServerListScr::transY
	bool ___transY_61;
	// System.Int32 ServerListScr::pa
	int32_t ___pa_62;
	// System.String ServerListScr::test
	String_t* ___test_63;
	// System.Int64 ServerListScr::count
	int64_t ___count_64;
	// System.Int64 ServerListScr::timePoint
	int64_t ___timePoint_65;
	// System.Int32 ServerListScr::dyTran
	int32_t ___dyTran_66;
	// System.Int32 ServerListScr::timeOpen
	int32_t ___timeOpen_67;
	// System.Int32 ServerListScr::pyLast
	int32_t ___pyLast_68;
	// System.Boolean ServerListScr::isFire
	bool ___isFire_69;
	// System.Boolean ServerListScr::isG
	bool ___isG_70;
	// System.Boolean ServerListScr::isTranKey
	bool ___isTranKey_71;
};

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
};

// AvCamera
struct AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000_StaticFields
{
	// AvCamera AvCamera::instance
	AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000* ___instance_0;
	// System.Int32 AvCamera::distance
	int32_t ___distance_12;
	// System.Int32 AvCamera::w
	int32_t ___w_13;
	// System.Boolean AvCamera::disable
	bool ___disable_14;
	// System.Boolean AvCamera::isFollow
	bool ___isFollow_15;
	// System.Boolean AvCamera::isMove
	bool ___isMove_16;
};

// AvCamera

// AvMain
struct AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields
{
	// System.Int32 AvMain::hd
	int32_t ___hd_0;
	// System.Int32 AvMain::hDuBox
	int32_t ___hDuBox_1;
	// System.Int32 AvMain::duPopup
	int32_t ___duPopup_2;
	// System.Int32 AvMain::hFillTab
	int32_t ___hFillTab_3;
	// System.Int32 AvMain::hCmd
	int32_t ___hCmd_4;
	// System.SByte AvMain::hBlack
	int8_t ___hBlack_5;
	// System.SByte AvMain::hBorder
	int8_t ___hBorder_6;
	// System.SByte AvMain::hNormal
	int8_t ___hNormal_7;
	// System.SByte AvMain::hSmall
	int8_t ___hSmall_8;
	// System.SByte AvMain::hBlack2
	int8_t ___hBlack2_9;
	// System.Single AvMain::zoom
	float ___zoom_10;
	// System.Byte AvMain::indexLeft
	uint8_t ___indexLeft_11;
	// System.Byte AvMain::indexCenter
	uint8_t ___indexCenter_12;
	// System.Byte AvMain::indexRight
	uint8_t ___indexRight_13;
	// System.Boolean AvMain::isQwerty
	bool ___isQwerty_19;
	// System.Int32 AvMain::lsplash
	int32_t ___lsplash_20;
	// System.Int32 AvMain::csplash
	int32_t ___csplash_21;
	// System.Int32 AvMain::rsplash
	int32_t ___rsplash_22;
	// System.String AvMain::lsplashs
	String_t* ___lsplashs_23;
	// System.String AvMain::csplashs
	String_t* ___csplashs_24;
	// System.String AvMain::rsplashs
	String_t* ___rsplashs_25;
};

// AvMain

// AvPosition

// AvPosition

// Canvas
struct Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields
{
	// Canvas Canvas::instance
	Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64* ___instance_0;
	// System.Boolean Canvas::bRun
	bool ___bRun_1;
	// System.Boolean[] Canvas::keyPressed
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___keyPressed_2;
	// System.Boolean[] Canvas::keyReleased
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___keyReleased_3;
	// System.Boolean[] Canvas::keyHold
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___keyHold_4;
	// System.Boolean Canvas::isPointerDown
	bool ___isPointerDown_5;
	// System.Boolean Canvas::isPointerRelease
	bool ___isPointerRelease_6;
	// System.Boolean Canvas::isPointerClick
	bool ___isPointerClick_7;
	// System.Int32 Canvas::px
	int32_t ___px_8;
	// System.Int32 Canvas::py
	int32_t ___py_9;
	// System.Int32 Canvas::pxLast
	int32_t ___pxLast_10;
	// System.Int32 Canvas::pyLast
	int32_t ___pyLast_11;
	// System.Int32 Canvas::gameTick
	int32_t ___gameTick_12;
	// System.Int32 Canvas::w
	int32_t ___w_13;
	// System.Int32 Canvas::h
	int32_t ___h_14;
	// System.Int32 Canvas::hw
	int32_t ___hw_15;
	// System.Int32 Canvas::hh
	int32_t ___hh_16;
	// System.Int32 Canvas::rw
	int32_t ___rw_17;
	// System.Int32 Canvas::rh
	int32_t ___rh_18;
	// System.Int32 Canvas::hCan
	int32_t ___hCan_19;
	// MyScreen Canvas::currentMyScreen
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___currentMyScreen_20;
	// MsgDlg Canvas::msgdlg
	MsgDlg_t18C7F17B45CFF10B5E71FEDA2D94FE2C0A5259CE* ___msgdlg_21;
	// MenuMain Canvas::menuMain
	MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* ___menuMain_22;
	// InputDlg Canvas::inputDlg
	InputDlg_t6F73BE4C724386EBC959FAF67DC93E27990D4C83* ___inputDlg_23;
	// Dialog Canvas::currentDialog
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___currentDialog_24;
	// MyVector Canvas::currentPopup
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___currentPopup_25;
	// System.Int32 Canvas::count0
	int32_t ___count0_26;
	// AvatarData Canvas::avataData
	AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF* ___avataData_27;
	// LoadMap Canvas::loadMap
	LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* ___loadMap_28;
	// CameraList Canvas::cameraList
	CameraList_t80828FC1C01324BAB92EE05AFC68A6EEFF426B5E* ___cameraList_29;
	// Face Canvas::currentFace
	Face_t5C5DBF9CEE15220B8DA723C66F0932E413930E46* ___currentFace_30;
	// MyVector Canvas::currentEffect
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___currentEffect_31;
	// System.Int64[] Canvas::timeBB
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___timeBB_32;
	// MyVector Canvas::listInfoSV
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listInfoSV_33;
	// System.Boolean Canvas::isVirHorizontal
	bool ___isVirHorizontal_34;
	// System.Boolean Canvas::isInitChar
	bool ___isInitChar_35;
	// System.Boolean Canvas::isKeyBoard
	bool ___isKeyBoard_36;
	// System.Boolean Canvas::isDoubleImage
	bool ___isDoubleImage_37;
	// System.Int32 Canvas::load
	int32_t ___load_38;
	// FontX Canvas::normalFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___normalFont_39;
	// FontX Canvas::normalWhiteFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___normalWhiteFont_40;
	// FontX Canvas::borderFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___borderFont_41;
	// FontX Canvas::arialFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___arialFont_42;
	// FontX Canvas::blackF
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___blackF_43;
	// FontX Canvas::numberFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___numberFont_44;
	// FontX Canvas::smallFontRed
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___smallFontRed_45;
	// FontX Canvas::smallFontYellow
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___smallFontYellow_46;
	// FontX Canvas::menuFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___menuFont_47;
	// FontX Canvas::tempFont
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___tempFont_48;
	// FontX Canvas::smallWhite
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___smallWhite_49;
	// FontX Canvas::fontChat
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___fontChat_50;
	// FontX Canvas::fontChatB
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___fontChatB_51;
	// FontX Canvas::fontBlu
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___fontBlu_52;
	// FontX Canvas::fontWhiteBold
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* ___fontWhiteBold_53;
	// IPaint Canvas::paint
	RuntimeObject* ___paint_54;
	// System.Int32 Canvas::hTab
	int32_t ___hTab_55;
	// System.Int32 Canvas::transTab
	int32_t ___transTab_56;
	// System.Int32 Canvas::iOpenOngame
	int32_t ___iOpenOngame_57;
	// System.Int32 Canvas::xTran
	int32_t ___xTran_58;
	// System.Int32 Canvas::hKeyBoard
	int32_t ___hKeyBoard_59;
	// System.Int32 Canvas::tran18
	int32_t ___tran18_60;
	// Welcome Canvas::welcome
	Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* ___welcome_61;
	// MyVector Canvas::listAc
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listAc_62;
	// System.String Canvas::pass
	String_t* ___pass_63;
	// System.String Canvas::user
	String_t* ___user_64;
	// T Canvas::t
	T_t31AD343159665D2C3F238EC9A9CCA0278D064887* ___t_65;
	// System.Int32 Canvas::timeNameSV
	int32_t ___timeNameSV_66;
	// System.String Canvas::nameSV
	String_t* ___nameSV_67;
	// Image Canvas::imagePlug
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imagePlug_68;
	// System.Boolean Canvas::isPaint18
	bool ___isPaint18_69;
	// System.Int32 Canvas::stypeInt
	int32_t ___stypeInt_70;
	// System.String Canvas::text
	String_t* ___text_71;
	// System.Boolean Canvas::isStart
	bool ___isStart_72;
	// System.Single Canvas::disStart
	float ___disStart_73;
	// System.Single Canvas::disStartZoom
	float ___disStartZoom_74;
	// System.Single Canvas::temp
	float ___temp_75;
	// System.Single Canvas::xZoom
	float ___xZoom_76;
	// System.Single Canvas::yZoom
	float ___yZoom_77;
	// System.Boolean Canvas::isZoom
	bool ___isZoom_78;
	// System.SByte Canvas::dirZoom
	int8_t ___dirZoom_79;
	// System.Int32 Canvas::isRotateTop
	int32_t ___isRotateTop_80;
	// System.Int32 Canvas::iOpenBoard
	int32_t ___iOpenBoard_81;
	// System.Boolean Canvas::aTran
	bool ___aTran_82;
	// Image Canvas::imgTabInfo
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgTabInfo_83;
	// System.Int32 Canvas::countTab
	int32_t ___countTab_84;
	// MyVector Canvas::flyTexts
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___flyTexts_86;
	// System.String Canvas::test
	String_t* ___test_89;
	// System.String Canvas::test1
	String_t* ___test1_90;
	// System.String Canvas::test2
	String_t* ___test2_91;
	// MyVector Canvas::listPoint
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listPoint_94;
	// Command Canvas::cmdEndDlg
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdEndDlg_95;
	// AvPosition[] Canvas::posCmd
	AvPositionU5BU5D_t7B6577B62565DE770F977CF05CF3E67B36EE26B2* ___posCmd_96;
	// AvPosition Canvas::posByteCOunt
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posByteCOunt_97;
};

// Canvas

// Command

// Command

// ElementPlayer

// ElementPlayer

// FontX

// FontX

// FrameImage

// FrameImage

// GameMidlet
struct GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_StaticFields
{
	// System.String GameMidlet::gameID
	String_t* ___gameID_0;
	// System.Boolean GameMidlet::isEnglish
	bool ___isEnglish_1;
	// System.Boolean GameMidlet::loadEnglish
	bool ___loadEnglish_2;
	// System.Boolean GameMidlet::saveLanguage
	bool ___saveLanguage_3;
	// System.String GameMidlet::IPEng
	String_t* ___IPEng_4;
	// System.Int32 GameMidlet::PORTEng
	int32_t ___PORTEng_5;
	// System.String[] GameMidlet::nameSVEng
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameSVEng_6;
	// System.String[][][] GameMidlet::IP
	StringU5BU5DU5BU5DU5BU5D_t2BF10552B9D5F9DD1D25251FEA28836F853B3402* ___IP_7;
	// System.Int32[][][] GameMidlet::PORT
	Int32U5BU5DU5BU5DU5BU5D_tC95EE6BAED85577D712DCE75822B22F0A721E8E9* ___PORT_8;
	// System.String[][][] GameMidlet::nameSV
	StringU5BU5DU5BU5DU5BU5D_t2BF10552B9D5F9DD1D25251FEA28836F853B3402* ___nameSV_9;
	// System.String[][] GameMidlet::linkGetHost
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___linkGetHost_10;
	// System.Int32 GameMidlet::CLIENT_TYPE
	int32_t ___CLIENT_TYPE_11;
	// System.SByte GameMidlet::PROVIDER
	int8_t ___PROVIDER_12;
	// System.String GameMidlet::AGENT
	String_t* ___AGENT_13;
	// System.SByte GameMidlet::VERSIONCODE
	int8_t ___VERSIONCODE_15;
	// GameMidlet GameMidlet::instance
	GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F* ___instance_24;
	// Avatar GameMidlet::avatar
	Avatar_t5280686025A629043829B8D5A31541F05B328D76* ___avatar_25;
	// IndexPlayer GameMidlet::myIndexP
	IndexPlayer_t37D1205C9FEA077608610DD84B65C03FCAC30D61* ___myIndexP_26;
	// MyVector GameMidlet::listContainer
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listContainer_27;
};

// GameMidlet

// GlobalLogicHandler
struct GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2_StaticFields
{
	// System.Boolean GlobalLogicHandler::isAutoLogin
	bool ___isAutoLogin_1;
	// System.Boolean GlobalLogicHandler::isNewVersion
	bool ___isNewVersion_2;
};

// GlobalLogicHandler

// GlobalService
struct GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72_StaticFields
{
	// GlobalService GlobalService::instance
	GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* ___instance_0;
};

// GlobalService

// Image
struct Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908_StaticFields
{
	// Image Image::imgTemp
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgTemp_3;
	// System.String Image::filenametemp
	String_t* ___filenametemp_4;
	// System.Byte[] Image::datatemp
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___datatemp_5;
	// Image Image::imgSrcTemp
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgSrcTemp_6;
	// System.Int32 Image::xtemp
	int32_t ___xtemp_7;
	// System.Int32 Image::ytemp
	int32_t ___ytemp_8;
	// System.Int32 Image::wtemp
	int32_t ___wtemp_9;
	// System.Int32 Image::htemp
	int32_t ___htemp_10;
	// System.Int32 Image::transformtemp
	int32_t ___transformtemp_11;
	// System.Int32 Image::status
	int32_t ___status_14;
};

// Image

// ImageIcon

// ImageIcon

// LoadMap
struct LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields
{
	// System.Int32 LoadMap::TYPEMAP
	int32_t ___TYPEMAP_92;
	// Image LoadMap::imgDen
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgDen_93;
	// Image LoadMap::imgBG
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBG_94;
	// FrameImage LoadMap::imgMap
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgMap_95;
	// System.Int16[] LoadMap::map
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___map_96;
	// System.Int16 LoadMap::wMap
	int16_t ___wMap_97;
	// System.Int16 LoadMap::Hmap
	int16_t ___Hmap_98;
	// System.SByte[] LoadMap::type
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___type_99;
	// System.SByte[] LoadMap::bg
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___bg_100;
	// System.Int32 LoadMap::w
	int32_t ___w_101;
	// System.SByte LoadMap::status
	int8_t ___status_102;
	// System.SByte LoadMap::weather
	int8_t ___weather_103;
	// MyVector LoadMap::treeLists
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___treeLists_104;
	// MyVector LoadMap::playerLists
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___playerLists_105;
	// MyVector LoadMap::dynamicLists
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___dynamicLists_106;
	// MyVector LoadMap::listImgAD
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listImgAD_107;
	// System.Int32 LoadMap::fWint
	int32_t ___fWint_108;
	// System.Int32 LoadMap::star
	int32_t ___star_109;
	// MyVector LoadMap::listStar
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listStar_111;
	// System.Int32[] LoadMap::colorStar
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colorStar_112;
	// MyObject LoadMap::focusObj
	MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* ___focusObj_113;
	// Command LoadMap::cmdNext
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdNext_114;
	// Image LoadMap::imgShadow
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgShadow_115;
	// FrameImage LoadMap::imgFocus
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgFocus_116;
	// System.Int32[] LoadMap::colorBg
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colorBg_117;
	// UnityEngine.Color LoadMap::colorBackGr
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorBackGr_118;
	// System.Int32 LoadMap::rememMap
	int32_t ___rememMap_119;
	// System.Int32 LoadMap::rememBg
	int32_t ___rememBg_120;
	// AvPosition LoadMap::posFocus
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posFocus_121;
	// MyVector LoadMap::effBgList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___effBgList_122;
	// MyVector LoadMap::effCameraList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___effCameraList_123;
	// MyVector LoadMap::effManager
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___effManager_124;
	// System.Int32 LoadMap::idTileImg
	int32_t ___idTileImg_125;
	// Bus LoadMap::bus
	Bus_tBCBE72E4F1674F1EBF536BB782E4C229FD0B1EDE* ___bus_126;
	// System.Int32 LoadMap::x0_imgTreeBg
	int32_t ___x0_imgTreeBg_130;
	// System.Int32 LoadMap::x0_imgBG
	int32_t ___x0_imgBG_131;
	// MyVector LoadMap::listDeltaPosition
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listDeltaPosition_134;
	// System.Single LoadMap::zoom
	float ___zoom_135;
	// System.Single LoadMap::disTouch
	float ___disTouch_136;
	// System.Boolean LoadMap::trans
	bool ___trans_137;
	// System.Boolean LoadMap::isGo
	bool ___isGo_138;
	// System.Int32 LoadMap::dirFocus
	int32_t ___dirFocus_139;
	// System.String LoadMap::test
	String_t* ___test_140;
	// System.Int32 LoadMap::nPath
	int32_t ___nPath_165;
	// System.Int32 LoadMap::wFocus
	int32_t ___wFocus_166;
	// System.Int32 LoadMap::xJoinCasino
	int32_t ___xJoinCasino_167;
	// System.Int32 LoadMap::yJoinCasino
	int32_t ___yJoinCasino_168;
	// System.Int32 LoadMap::numF
	int32_t ___numF_177;
	// Image[] LoadMap::imgCreateMap
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgCreateMap_181;
	// System.Int32 LoadMap::typeAny
	int32_t ___typeAny_182;
	// System.Int32 LoadMap::typeTemp
	int32_t ___typeTemp_183;
	// System.Boolean LoadMap::isCasino
	bool ___isCasino_184;
	// MyVector LoadMap::mapItemType
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___mapItemType_185;
	// MyVector LoadMap::mapItem
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___mapItem_186;
	// System.Int32 LoadMap::xDichChuyen
	int32_t ___xDichChuyen_187;
	// System.Int32 LoadMap::yDichChuyen
	int32_t ___yDichChuyen_188;
};

// LoadMap

// Message

// Message

// MyGraphics
struct MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_StaticFields
{
	// System.Int32 MyGraphics::HCENTER
	int32_t ___HCENTER_0;
	// System.Int32 MyGraphics::VCENTER
	int32_t ___VCENTER_1;
	// System.Int32 MyGraphics::LEFT
	int32_t ___LEFT_2;
	// System.Int32 MyGraphics::RIGHT
	int32_t ___RIGHT_3;
	// System.Int32 MyGraphics::TOP
	int32_t ___TOP_4;
	// System.Int32 MyGraphics::BOTTOM
	int32_t ___BOTTOM_5;
	// System.Collections.Hashtable MyGraphics::cachedTextures
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___cachedTextures_18;
};

// MyGraphics

// MyObject
struct MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD_StaticFields
{
	// System.Int32 MyObject::hd
	int32_t ___hd_2;
};

// MyObject

// MyVector

// MyVector

// PaintPopup
struct PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields
{
	// FrameImage PaintPopup::frame
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___frame_0;
	// PaintPopup PaintPopup::me
	PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* ___me_1;
	// System.Int32[] PaintPopup::color
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___color_2;
	// System.SByte PaintPopup::hTab
	int8_t ___hTab_16;
	// Image[][] PaintPopup::imgMuiIOS
	ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* ___imgMuiIOS_20;
	// System.Single PaintPopup::cmtoX
	float ___cmtoX_23;
	// System.Single PaintPopup::cmx
	float ___cmx_24;
	// System.Single PaintPopup::cmdx
	float ___cmdx_25;
	// System.Single PaintPopup::cmvx
	float ___cmvx_26;
	// System.Single PaintPopup::cmxLim
	float ___cmxLim_27;
	// MyScreen PaintPopup::parent
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___parent_28;
	// System.Int32 PaintPopup::wButtonSmall
	int32_t ___wButtonSmall_29;
	// System.Int32 PaintPopup::hButtonSmall
	int32_t ___hButtonSmall_30;
	// System.Int32 PaintPopup::xTab
	int32_t ___xTab_31;
	// System.Int32 PaintPopup::wTabDu
	int32_t ___wTabDu_32;
};

// PaintPopup

// PositionMap

// PositionMap

// PositionTran

// PositionTran

// Session_ME
struct Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_StaticFields
{
	// Session_ME Session_ME::instance
	Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB* ___instance_0;
	// System.Net.Sockets.NetworkStream Session_ME::dataStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___dataStream_1;
	// System.IO.BinaryReader Session_ME::dis
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___dis_2;
	// System.IO.BinaryWriter Session_ME::dos
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___dos_3;
	// IMessageHandler Session_ME::messageHandler
	RuntimeObject* ___messageHandler_4;
	// System.Net.Sockets.TcpClient Session_ME::sc
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___sc_5;
	// System.Boolean Session_ME::connected
	bool ___connected_6;
	// System.Boolean Session_ME::connecting
	bool ___connecting_7;
	// System.Boolean Session_ME::isStart
	bool ___isStart_8;
	// Session_ME/Sender Session_ME::sender
	Sender_tF2641EB36B3ECC16C299E33A2F99C8C4178BBE64* ___sender_9;
	// System.Threading.Thread Session_ME::initThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___initThread_10;
	// System.Threading.Thread Session_ME::collectorThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___collectorThread_11;
	// System.Threading.Thread Session_ME::sendThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___sendThread_12;
	// System.Int32 Session_ME::sendByteCount
	int32_t ___sendByteCount_13;
	// System.Int32 Session_ME::recvByteCount
	int32_t ___recvByteCount_14;
	// System.Boolean Session_ME::getKeyComplete
	bool ___getKeyComplete_15;
	// System.SByte[] Session_ME::key
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___key_16;
	// System.SByte Session_ME::curR
	int8_t ___curR_17;
	// System.SByte Session_ME::curW
	int8_t ___curW_18;
	// System.Int32 Session_ME::timeConnected
	int32_t ___timeConnected_19;
	// System.String Session_ME::strRecvByteCount
	String_t* ___strRecvByteCount_20;
	// System.Boolean Session_ME::isCancel
	bool ___isCancel_21;
	// System.Int64 Session_ME::timeStart
	int64_t ___timeStart_24;
	// System.String Session_ME::test
	String_t* ___test_25;
	// MyVector Session_ME::recieveMsg
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___recieveMsg_26;
};

// Session_ME

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// T
struct T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields
{
	// System.String T::pleaseWait
	String_t* ___pleaseWait_0;
	// System.String T::menu
	String_t* ___menu_1;
	// System.String T::close
	String_t* ___close_2;
	// System.String T::agree
	String_t* ___agree_3;
	// System.String T::updateList
	String_t* ___updateList_4;
	// System.String T::playNow
	String_t* ___playNow_5;
	// System.String T::strongest
	String_t* ___strongest_6;
	// System.String T::richest
	String_t* ___richest_7;
	// System.String T::ready
	String_t* ___ready_8;
	// System.String T::noReady
	String_t* ___noReady_9;
	// System.String T::start
	String_t* ___start_10;
	// System.String T::yes
	String_t* ___yes_11;
	// System.String T::no
	String_t* ___no_12;
	// System.String T::viewMessage
	String_t* ___viewMessage_13;
	// System.String T::setMoney
	String_t* ___setMoney_14;
	// System.String T::setNumPlayers
	String_t* ___setNumPlayers_15;
	// System.String T::setPass
	String_t* ___setPass_16;
	// System.String T::exitBoard
	String_t* ___exitBoard_17;
	// System.String T::kick
	String_t* ___kick_18;
	// System.String T::continuee
	String_t* ___continuee_19;
	// System.String T::exit
	String_t* ___exit_20;
	// System.String T::addFriend
	String_t* ___addFriend_21;
	// System.String T::OK
	String_t* ___OK_22;
	// System.String T::fire
	String_t* ___fire_23;
	// System.String T::skip
	String_t* ___skip_24;
	// System.String T::xu
	String_t* ___xu_25;
	// System.String T::gold
	String_t* ___gold_26;
	// System.String T::gameDraw
	String_t* ___gameDraw_27;
	// System.String T::sapBaiXong
	String_t* ___sapBaiXong_28;
	// System.String T::numTienCuoc
	String_t* ___numTienCuoc_29;
	// System.String T::youAreKicked
	String_t* ___youAreKicked_30;
	// System.String T::setPassed
	String_t* ___setPassed_31;
	// System.String T::opponentQuit
	String_t* ___opponentQuit_32;
	// System.String T::forceFinish
	String_t* ___forceFinish_33;
	// System.String T::sendMessage
	String_t* ___sendMessage_34;
	// System.String T::connecting
	String_t* ___connecting_35;
	// System.String T::logging
	String_t* ___logging_36;
	// System.String T::selectt
	String_t* ___selectt_37;
	// System.String T::doYouWantExit2
	String_t* ___doYouWantExit2_38;
	// System.String T::banChiCo
	String_t* ___banChiCo_39;
	// System.String T::setMaxMoney
	String_t* ___setMaxMoney_40;
	// System.String T::doYouWantSkip
	String_t* ___doYouWantSkip_41;
	// System.String T::youMustFire3Bich
	String_t* ___youMustFire3Bich_42;
	// System.String T::notSameOrSmaller
	String_t* ___notSameOrSmaller_43;
	// System.String T::dola
	String_t* ___dola_44;
	// System.String T::firstFire
	String_t* ___firstFire_45;
	// System.String T::room
	String_t* ___room_46;
	// System.String T::goad
	String_t* ___goad_47;
	// System.String T::youFirstFire
	String_t* ___youFirstFire_48;
	// System.String T::enemyFirstFire
	String_t* ___enemyFirstFire_49;
	// System.String T::sixPointNoWin
	String_t* ___sixPointNoWin_50;
	// System.String T::block2NoWin
	String_t* ___block2NoWin_51;
	// System.String T::pw
	String_t* ___pw_52;
	// System.String T::connectFail
	String_t* ___connectFail_53;
	// System.String T::cannotMove
	String_t* ___cannotMove_54;
	// System.String T::chieuTuong
	String_t* ___chieuTuong_55;
	// System.String T::buy
	String_t* ___buy_56;
	// System.String T::friend
	String_t* ___friend_57;
	// System.String T::option
	String_t* ___option_58;
	// System.String T::eat
	String_t* ___eat_59;
	// System.String T::gett
	String_t* ___gett_60;
	// System.String T::haPhom
	String_t* ___haPhom_61;
	// System.String T::canYouOnceOnly
	String_t* ___canYouOnceOnly_62;
	// System.String T::yetSellectCard
	String_t* ___yetSellectCard_63;
	// System.String T::ifFireBreakPhom
	String_t* ___ifFireBreakPhom_64;
	// System.String T::waitToCurrent
	String_t* ___waitToCurrent_65;
	// System.String T::notSamePhom
	String_t* ___notSamePhom_66;
	// System.String T::youSelect
	String_t* ___youSelect_67;
	// System.String T::notPhom
	String_t* ___notPhom_68;
	// System.String T::viewMyInfo
	String_t* ___viewMyInfo_69;
	// System.String T::goToBoard
	String_t* ___goToBoard_70;
	// System.String T::moneyStr
	String_t* ___moneyStr_71;
	// System.String T::ifPassword
	String_t* ___ifPassword_72;
	// System.String T::joinA
	String_t* ___joinA_73;
	// System.String T::QuytA
	String_t* ___QuytA_74;
	// System.String T::pCard
	String_t* ___pCard_75;
	// System.String T::pImg
	String_t* ___pImg_76;
	// System.String T::pFont
	String_t* ___pFont_77;
	// System.String T::pBackG
	String_t* ___pBackG_78;
	// System.String T::pHome
	String_t* ___pHome_79;
	// System.String T::pFarm
	String_t* ___pFarm_80;
	// System.String T::pEffect
	String_t* ___pEffect_81;
	// System.String T::pMain
	String_t* ___pMain_82;
	// System.String T::pData
	String_t* ___pData_83;
	// System.String T::pHomeDe
	String_t* ___pHomeDe_84;
	// System.String T::pDialLucky
	String_t* ___pDialLucky_85;
	// System.String T::number
	String_t* ___number_86;
	// System.String T::priceStr
	String_t* ___priceStr_87;
	// System.String T::nameStr
	String_t* ___nameStr_88;
	// System.String T::pant
	String_t* ___pant_89;
	// System.String T::cloth
	String_t* ___cloth_90;
	// System.String T::hair
	String_t* ___hair_91;
	// System.String T::eye
	String_t* ___eye_92;
	// System.String T::doYouWantBuy
	String_t* ___doYouWantBuy_93;
	// System.String T::selectMoney
	String_t* ___selectMoney_94;
	// System.String T::link
	String_t* ___link_95;
	// System.String T::replaceNam
	String_t* ___replaceNam_96;
	// System.String T::tkChinh
	String_t* ___tkChinh_97;
	// System.String T::tkFarm
	String_t* ___tkFarm_98;
	// System.String T::inCome
	String_t* ___inCome_99;
	// System.String T::getFarmData
	String_t* ___getFarmData_100;
	// System.String T::getData
	String_t* ___getData_101;
	// System.String T::storePro
	String_t* ___storePro_102;
	// System.String T::won
	String_t* ___won_103;
	// System.String T::disConnect
	String_t* ___disConnect_104;
	// System.String T::win
	String_t* ___win_105;
	// System.String T::lose
	String_t* ___lose_106;
	// System.String T::draw
	String_t* ___draw_107;
	// System.String T::give
	String_t* ___give_108;
	// System.String T::youAreBittenByDog
	String_t* ___youAreBittenByDog_109;
	// System.String T::opponentAreNotReady
	String_t* ___opponentAreNotReady_110;
	// System.String T::exited
	String_t* ___exited_111;
	// System.String T::complete
	String_t* ___complete_112;
	// System.String T::areaIsFull
	String_t* ___areaIsFull_113;
	// System.String T::area
	String_t* ___area_114;
	// System.String T::cardToMiss
	String_t* ___cardToMiss_115;
	// System.String T::upTwoCard
	String_t* ___upTwoCard_116;
	// System.String T::chat
	String_t* ___chat_117;
	// System.String T::del
	String_t* ___del_118;
	// System.String T::beingOn
	String_t* ___beingOn_119;
	// System.String T::StoreEmtpy
	String_t* ___StoreEmtpy_120;
	// System.String T::watering
	String_t* ___watering_121;
	// System.String T::land
	String_t* ___land_122;
	// System.String T::empty
	String_t* ___empty_123;
	// System.String T::feeding
	String_t* ___feeding_124;
	// System.String T::sell
	String_t* ___sell_125;
	// System.String T::notTooGreedy
	String_t* ___notTooGreedy_126;
	// System.String T::youWantBreakTree
	String_t* ___youWantBreakTree_127;
	// System.String T::diarrhea
	String_t* ___diarrhea_128;
	// System.String T::flu
	String_t* ___flu_129;
	// System.String T::hunger
	String_t* ___hunger_130;
	// System.String T::tire
	String_t* ___tire_131;
	// System.String T::milk
	String_t* ___milk_132;
	// System.String T::egg
	String_t* ___egg_133;
	// System.String T::notOnFarm
	String_t* ___notOnFarm_134;
	// System.String T::youWantBuyPro
	String_t* ___youWantBuyPro_135;
	// System.String T::h
	String_t* ___h_136;
	// System.String T::seed
	String_t* ___seed_137;
	// System.String T::item
	String_t* ___item_138;
	// System.String T::feedFor
	String_t* ___feedFor_139;
	// System.String T::notOnFarmOther
	String_t* ___notOnFarmOther_140;
	// System.String T::StoreSeed
	String_t* ___StoreSeed_141;
	// System.String T::youAreBittenByDogByHound
	String_t* ___youAreBittenByDogByHound_142;
	// System.String T::foodForEmpty
	String_t* ___foodForEmpty_143;
	// System.String T::moneySellPro
	String_t* ___moneySellPro_144;
	// System.String T::mySeft
	String_t* ___mySeft_145;
	// System.String T::next
	String_t* ___next_146;
	// System.String T::remem
	String_t* ___remem_147;
	// System.String T::fogetPass
	String_t* ___fogetPass_148;
	// System.String T::nameAcc
	String_t* ___nameAcc_149;
	// System.String T::FAQs
	String_t* ___FAQs_150;
	// System.String T::updateGame
	String_t* ___updateGame_151;
	// System.String T::support
	String_t* ___support_152;
	// System.String T::delRMS
	String_t* ___delRMS_153;
	// System.String T::alreadyDelRMS
	String_t* ___alreadyDelRMS_154;
	// System.String T::youUseNumRegGetpass
	String_t* ___youUseNumRegGetpass_155;
	// System.String T::areYouUseNumReg
	String_t* ___areYouUseNumReg_156;
	// System.String T::removee
	String_t* ___removee_157;
	// System.String T::disagree
	String_t* ___disagree_158;
	// System.String T::viewRule
	String_t* ___viewRule_159;
	// System.String T::areYouAgreeRule
	String_t* ___areYouAgreeRule_160;
	// System.String T::acc
	String_t* ___acc_161;
	// System.String T::pass
	String_t* ___pass_162;
	// System.String T::selectRegion
	String_t* ___selectRegion_163;
	// System.String T::rememPass
	String_t* ___rememPass_164;
	// System.String T::eventt
	String_t* ___eventt_165;
	// System.String T::giveGift
	String_t* ___giveGift_166;
	// System.String T::hit
	String_t* ___hit_167;
	// System.String T::kiss
	String_t* ___kiss_168;
	// System.String T::viewInfo
	String_t* ___viewInfo_169;
	// System.String T::privateMsg
	String_t* ___privateMsg_170;
	// System.String T::action
	String_t* ___action_171;
	// System.String T::feel
	String_t* ___feel_172;
	// System.String T::exchange
	String_t* ___exchange_173;
	// System.String T::giveGiftFlower
	String_t* ___giveGiftFlower_174;
	// System.String T::with
	String_t* ___with_175;
	// System.String T::refused
	String_t* ___refused_176;
	// System.String T::noQ
	String_t* ___noQ_177;
	// System.String T::index
	String_t* ___index_178;
	// System.String T::doo
	String_t* ___doo_179;
	// System.String T::detail
	String_t* ___detail_180;
	// System.String T::have
	String_t* ___have_181;
	// System.String T::loadMoney
	String_t* ___loadMoney_182;
	// System.String T::msgNew
	String_t* ___msgNew_183;
	// System.String T::closeTab
	String_t* ___closeTab_184;
	// System.String T::beginChat
	String_t* ___beginChat_185;
	// System.String T::success
	String_t* ___success_186;
	// System.String T::createChar
	String_t* ___createChar_187;
	// System.String T::face
	String_t* ___face_188;
	// System.String T::createCharFail
	String_t* ___createCharFail_189;
	// System.String T::lvNotChange
	String_t* ___lvNotChange_190;
	// System.String T::cap
	String_t* ___cap_191;
	// System.String T::salonBeauty
	String_t* ___salonBeauty_192;
	// System.String T::lvUse
	String_t* ___lvUse_193;
	// System.String T::cancel
	String_t* ___cancel_194;
	// System.String T::canHarvest
	String_t* ___canHarvest_195;
	// System.String T::hasRob
	String_t* ___hasRob_196;
	// System.String T::container
	String_t* ___container_197;
	// System.String T::doYouWantDel
	String_t* ___doYouWantDel_198;
	// System.String T::trans
	String_t* ___trans_199;
	// System.String T::doBen
	String_t* ___doBen_200;
	// System.String T::use
	String_t* ___use_201;
	// System.String T::sentMsg
	String_t* ___sentMsg_202;
	// System.String T::canNotSendMsg
	String_t* ___canNotSendMsg_203;
	// System.String T::doYouWantExit
	String_t* ___doYouWantExit_204;
	// System.String T::info
	String_t* ___info_205;
	// System.String T::changePass
	String_t* ___changePass_206;
	// System.String T::finish
	String_t* ___finish_207;
	// System.String T::toss
	String_t* ___toss_208;
	// System.String T::bite
	String_t* ___bite_209;
	// System.String T::miss
	String_t* ___miss_210;
	// System.String T::numberFish
	String_t* ___numberFish_211;
	// System.String T::achieve
	String_t* ___achieve_212;
	// System.String T::view
	String_t* ___view_213;
	// System.String T::enterAgain
	String_t* ___enterAgain_214;
	// System.String T::doYouWantToTrade
	String_t* ___doYouWantToTrade_215;
	// System.String T::giveGame
	String_t* ___giveGame_216;
	// System.String T::sentToFriend
	String_t* ___sentToFriend_217;
	// System.String T::phoneNumber
	String_t* ___phoneNumber_218;
	// System.String T::youCanSelectFromMenu
	String_t* ___youCanSelectFromMenu_219;
	// System.String T::otherGame
	String_t* ___otherGame_220;
	// System.String T::doYouWantUpgradeCoffer
	String_t* ___doYouWantUpgradeCoffer_221;
	// System.String T::doYouWantExitIntoRegion
	String_t* ___doYouWantExitIntoRegion_222;
	// System.String T::sendTo
	String_t* ___sendTo_223;
	// System.String T::day
	String_t* ___day_224;
	// System.String T::theft
	String_t* ___theft_225;
	// System.String T::food
	String_t* ___food_226;
	// System.String T::dial
	String_t* ___dial_227;
	// System.String T::doYouWantDial
	String_t* ___doYouWantDial_228;
	// System.String T::forever
	String_t* ___forever_229;
	// System.String T::doYouWanBuyPrice
	String_t* ___doYouWanBuyPrice_230;
	// System.String T::sett
	String_t* ___sett_231;
	// System.String T::homeRepait
	String_t* ___homeRepait_232;
	// System.String T::buyItem
	String_t* ___buyItem_233;
	// System.String T::latGach
	String_t* ___latGach_234;
	// System.String T::sellItem
	String_t* ___sellItem_235;
	// System.String T::noItem
	String_t* ___noItem_236;
	// System.String T::move
	String_t* ___move_237;
	// System.String T::rota
	String_t* ___rota_238;
	// System.String T::doWantSellItem
	String_t* ___doWantSellItem_239;
	// System.String T::noPlaceItemHere
	String_t* ___noPlaceItemHere_240;
	// System.String T::haveItem
	String_t* ___haveItem_241;
	// System.String T::setTuong
	String_t* ___setTuong_242;
	// System.String T::noFriend
	String_t* ___noFriend_243;
	// System.String T::goHome
	String_t* ___goHome_244;
	// System.String T::joinFrHome
	String_t* ___joinFrHome_245;
	// System.String T::cho
	String_t* ___cho_246;
	// System.String T::dunation
	String_t* ___dunation_247;
	// System.String T::inviteMyHouse
	String_t* ___inviteMyHouse_248;
	// System.String T::upgradeChest
	String_t* ___upgradeChest_249;
	// System.String T::outHouse
	String_t* ___outHouse_250;
	// System.String T::cityIsOffLine
	String_t* ___cityIsOffLine_251;
	// System.String T::chay
	String_t* ___chay_252;
	// System.String T::u
	String_t* ___u_253;
	// System.String T::denU
	String_t* ___denU_254;
	// System.String T::youAre
	String_t* ___youAre_255;
	// System.String T::youAreInvite
	String_t* ___youAreInvite_256;
	// System.String T::doYouWant
	String_t* ___doYouWant_257;
	// System.String T::basket
	String_t* ___basket_258;
	// System.String T::canNotConnect
	String_t* ___canNotConnect_259;
	// System.String T::constructing
	String_t* ___constructing_260;
	// System.String T::roomList
	String_t* ___roomList_261;
	// System.String T::roomName
	String_t* ___roomName_262;
	// System.String T::emptyRoom
	String_t* ___emptyRoom_263;
	// System.String T::register
	String_t* ___register_264;
	// System.String T::login
	String_t* ___login_265;
	// System.String T::selectLanguage
	String_t* ___selectLanguage_266;
	// System.String T::uNeedExitGame
	String_t* ___uNeedExitGame_267;
	// System.String T::Dial
	String_t* ___Dial_268;
	// System.String T::enterPassReferral
	String_t* ___enterPassReferral_269;
	// System.String T::registerSuccess
	String_t* ___registerSuccess_270;
	// System.String T::cannotRegister
	String_t* ___cannotRegister_271;
	// System.String T::gettingPrice
	String_t* ___gettingPrice_272;
	// System.String T::sms
	String_t* ___sms_273;
	// System.String T::sendSmgFinish
	String_t* ___sendSmgFinish_274;
	// System.String T::notSendSmg
	String_t* ___notSendSmg_275;
	// System.String T::email
	String_t* ___email_276;
	// System.String T::back
	String_t* ___back_277;
	// System.String T::startTa
	String_t* ___startTa_278;
	// System.String T::selectAgain
	String_t* ___selectAgain_279;
	// System.String T::ta
	String_t* ___ta_280;
	// System.String T::wearing
	String_t* ___wearing_281;
	// System.String T::levelRequest
	String_t* ___levelRequest_282;
	// System.String T::map
	String_t* ___map_283;
	// System.String T::tiengViet
	String_t* ___tiengViet_284;
	// System.String T::tiengAnh
	String_t* ___tiengAnh_285;
	// System.String T::catdo
	String_t* ___catdo_286;
	// System.String T::removeFriend
	String_t* ___removeFriend_287;
	// System.String T::uRemoveFriend
	String_t* ___uRemoveFriend_288;
	// System.String T::viewContinue
	String_t* ___viewContinue_289;
	// System.String T::roomOn
	String_t* ___roomOn_290;
	// System.String T::enterNumber
	String_t* ___enterNumber_291;
	// System.String T::chooseAnotherCity
	String_t* ___chooseAnotherCity_292;
	// System.String T::top
	String_t* ___top_293;
	// System.String T::quay
	String_t* ___quay_294;
	// System.String T::game
	String_t* ___game_295;
	// System.String T::doUWantCancel
	String_t* ___doUWantCancel_296;
	// System.String T::QuickCooking
	String_t* ___QuickCooking_297;
	// System.String T::QuickUpgrade
	String_t* ___QuickUpgrade_298;
	// System.String T::update
	String_t* ___update_299;
	// System.String T::cooking
	String_t* ___cooking_300;
	// System.String T::gift
	String_t* ___gift_301;
	// System.String T::listNameGame
	String_t* ___listNameGame_302;
	// System.String T::datCuoc
	String_t* ___datCuoc_303;
	// System.String T::other
	String_t* ___other_304;
	// System.String T::usureStop
	String_t* ___usureStop_305;
	// System.String T::tkNew
	String_t* ___tkNew_306;
	// System.String T::wedding
	String_t* ___wedding_307;
	// System.String T::doYouWantTransMoney
	String_t* ___doYouWantTransMoney_308;
	// System.String T::doYouWantAddFr
	String_t* ___doYouWantAddFr_309;
	// System.String[] T::numPlayer
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___numPlayer_310;
	// System.String[] T::nameCasino
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameCasino_311;
	// System.String[] T::nameCasino1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameCasino1_312;
	// System.String[] T::nameCasinoOngame
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameCasinoOngame_313;
	// System.String[] T::level
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___level_314;
	// System.String[] T::fallFlower
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fallFlower_315;
	// System.String[] T::enterCard
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___enterCard_316;
	// System.String[] T::nameReg
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameReg_317;
	// System.String[] T::lister
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lister_318;
	// System.String[] T::chatHeo
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___chatHeo_319;
	// System.String[] T::enterPass
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___enterPass_320;
	// System.String[] T::trasContainter
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___trasContainter_321;
	// System.String[] T::youWantFeeding
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___youWantFeeding_322;
	// System.String[] T::gender
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___gender_323;
	// System.String[] T::myIndex
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___myIndex_324;
	// System.String[] T::strName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strName_325;
	// System.String[] T::strTransMoney
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strTransMoney_326;
	// System.String[] T::roomLevelText
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___roomLevelText_327;
	// System.String[] T::actionStr
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___actionStr_328;
	// System.String[] T::nameRegion
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameRegion_329;
	// System.String[] T::nameMenuOn
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameMenuOn_330;
	// System.String[] T::nameTab
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameTab_331;
	// System.String[] T::hd
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___hd_332;
	// System.String[] T::cardTypeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cardTypeName_333;
	// System.String[][] T::nameChangePass
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___nameChangePass_334;
	// System.String[][] T::name
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___name_335;
	// System.String[][] T::loadCard
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___loadCard_336;
	// System.String T::notEnough
	String_t* ___notEnough_337;
	// System.String T::salePrice
	String_t* ___salePrice_338;
	// System.String T::material
	String_t* ___material_339;
	// System.String T::done
	String_t* ___done_340;
	// System.String T::time
	String_t* ___time_341;
	// System.String T::harvest
	String_t* ___harvest_342;
	// System.String T::cook
	String_t* ___cook_343;
	// System.String[] T::mode
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mode_344;
	// System.String T::temp
	String_t* ___temp_345;
};

// T

// TField
struct TField_t56E19AE85CA63279C53042EF348814217A9F0E70_StaticFields
{
	// TField TField::currentTField
	TField_t56E19AE85CA63279C53042EF348814217A9F0E70* ___currentTField_2;
	// System.Int32 TField::typeXpeed
	int32_t ___typeXpeed_14;
	// System.Int32[] TField::MAX_TIME_TO_CONFIRM_KEY
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MAX_TIME_TO_CONFIRM_KEY_15;
	// System.Int32 TField::CARET_HEIGHT
	int32_t ___CARET_HEIGHT_16;
	// System.Int32 TField::TEXT_GAP_X
	int32_t ___TEXT_GAP_X_19;
	// System.String[] TField::modeNotify
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___modeNotify_26;
	// System.String[] TField::print
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___print_28;
	// System.String[] TField::printA
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___printA_29;
	// System.String[] TField::printBB
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___printBB_30;
	// System.Int32 TField::lastKey
	int32_t ___lastKey_38;
	// System.Boolean TField::isQwerty
	bool ___isQwerty_43;
	// System.Int32 TField::typingModeAreaWidth
	int32_t ___typingModeAreaWidth_44;
	// System.Int32 TField::mode
	int32_t ___mode_49;
	// System.Int32 TField::timeChangeMode
	int32_t ___timeChangeMode_50;
	// FrameImage TField::frame
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___frame_51;
	// FrameImage TField::tfframe
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___tfframe_52;
	// System.Int32 TField::changeModeKey
	int32_t ___changeModeKey_54;
	// System.Int32 TField::changeDau
	int32_t ___changeDau_55;
	// System.Int32 TField::xDu
	int32_t ___xDu_57;
	// System.Int32 TField::yDu
	int32_t ___yDu_58;
	// IAction TField::acClear
	RuntimeObject* ___acClear_60;
	// System.Boolean TField::isOpenTextBox
	bool ___isOpenTextBox_62;
	// System.String TField::printDau
	String_t* ___printDau_67;
};

// TField

// TextMsg

// TextMsg

// ipKeyboard
struct ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields
{
	// UnityEngine.TouchScreenKeyboard ipKeyboard::tk
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___tk_0;
	// System.Int32 ipKeyboard::TEXT
	int32_t ___TEXT_1;
	// System.Int32 ipKeyboard::NUMBERIC
	int32_t ___NUMBERIC_2;
	// System.Int32 ipKeyboard::PASS
	int32_t ___PASS_3;
	// IKbAction ipKeyboard::act
	RuntimeObject* ___act_4;
	// System.Int32 ipKeyboard::typeInput
	int32_t ___typeInput_5;
	// System.Boolean ipKeyboard::isReset
	bool ___isReset_6;
	// System.Boolean ipKeyboard::isInput
	bool ___isInput_7;
};

// ipKeyboard

// myReader
struct myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56_StaticFields
{
	// System.String myReader::fileName
	String_t* ___fileName_3;
	// System.Int32 myReader::status
	int32_t ___status_4;
};

// myReader

// myWriter

// myWriter

// MediumPaint/IActionPointer

// MediumPaint/IActionPointer

// MediumPaint/IActionPointerGO

// MediumPaint/IActionPointerGO

// MessageScr/IActionChat

// MessageScr/IActionChat

// MiniMap/IActionRequestOK

// MiniMap/IActionRequestOK

// MiniMap/IActionRequestReg

// MiniMap/IActionRequestReg

// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_StaticFields
{
	// System.SByte Base::RIGHT
	int8_t ___RIGHT_37;
	// System.SByte Base::LEFT
	int8_t ___LEFT_38;
};

// Base

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Dialog

// Dialog

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// MenuMain

// MenuMain

// MyScreen
struct MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_StaticFields
{
	// System.Int32 MyScreen::ITEM_HEIGHT
	int32_t ___ITEM_HEIGHT_26;
	// Image MyScreen::imgLogo
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgLogo_27;
	// Image[] MyScreen::imgChat
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgChat_28;
	// System.Int32 MyScreen::nMsg
	int32_t ___nMsg_30;
	// System.Int32 MyScreen::hTab
	int32_t ___hTab_31;
	// System.Int32 MyScreen::wTab
	int32_t ___wTab_32;
	// System.Int32 MyScreen::hText
	int32_t ___hText_33;
	// System.Int32 MyScreen::colorBar
	int32_t ___colorBar_34;
	// UnityEngine.Color MyScreen::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_35;
	// System.Int32 MyScreen::colorMiniMap
	int32_t ___colorMiniMap_36;
	// System.Int32 MyScreen::colorPark
	int32_t ___colorPark_37;
	// System.Int32[] MyScreen::colorCity
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colorCity_38;
	// System.Int32[] MyScreen::colorFarmPath
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colorFarmPath_39;
};

// MyScreen

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.Void

// System.Void

// Welcome
struct Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_StaticFields
{
	// System.Int32 Welcome::index
	int32_t ___index_31;
	// MyScreen Welcome::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_33;
	// System.Int32 Welcome::indexFish
	int32_t ___indexFish_34;
	// System.Int32 Welcome::indexShop
	int32_t ___indexShop_36;
	// System.Boolean Welcome::isPaintArrow
	bool ___isPaintArrow_38;
	// System.Int32 Welcome::indexMiniMap
	int32_t ___indexMiniMap_39;
	// System.Int32 Welcome::indexMapScr
	int32_t ___indexMapScr_41;
	// System.Int16[] Welcome::posArrayPopupX
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___posArrayPopupX_42;
	// System.Int16[] Welcome::posArrayPopupY
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___posArrayPopupY_43;
	// System.Int32 Welcome::indexFarmPath
	int32_t ___indexFarmPath_45;
	// System.SByte[] Welcome::joinOrder
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___joinOrder_47;
	// System.Int32 Welcome::indexFarm
	int32_t ___indexFarm_48;
	// System.Int32 Welcome::wText
	int32_t ___wText_49;
	// System.Boolean Welcome::isOut
	bool ___isOut_51;
	// System.Byte[] Welcome::indexWelcomeMiniMap
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___indexWelcomeMiniMap_52;
	// System.Int32 Welcome::indexKhuMuaSam
	int32_t ___indexKhuMuaSam_54;
	// System.Int32 Welcome::indexTask
	int32_t ___indexTask_57;
	// System.Int32 Welcome::indexCasino
	int32_t ___indexCasino_58;
};

// Welcome

// MediumPaint/CommandPointer

// MediumPaint/CommandPointer

// MediumPaint/CommandPointerGo

// MediumPaint/CommandPointerGo

// Animal

// Animal

// Avatar
struct Avatar_t5280686025A629043829B8D5A31541F05B328D76_StaticFields
{
	// System.Int32 Avatar::iHit
	int32_t ___iHit_101;
	// FrameImage Avatar::imgBlog
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgBlog_112;
	// FrameImage Avatar::imgHit
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgHit_123;
	// FrameImage Avatar::imgKiss
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgKiss_124;
	// System.SByte Avatar::I_FRIENDLY
	int8_t ___I_FRIENDLY_130;
	// System.SByte Avatar::I_CRAZY
	int8_t ___I_CRAZY_131;
	// System.SByte Avatar::I_STYLISH
	int8_t ___I_STYLISH_132;
	// System.SByte Avatar::I_HAPPY
	int8_t ___I_HAPPY_133;
	// System.SByte Avatar::I_HUNGER
	int8_t ___I_HUNGER_134;
	// System.SByte[][] Avatar::FRAME
	SByteU5BU5DU5BU5D_t9042899DE0306D67CDDEDC06C44CEFAD76730699* ___FRAME_135;
	// System.SByte[] Avatar::duX
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___duX_136;
};

// Avatar

// FarmScr
struct FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_StaticFields
{
	// FarmScr FarmScr::instance
	FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C* ___instance_40;
	// System.Int32 FarmScr::idFarm
	int32_t ___idFarm_41;
	// MyVector FarmScr::cell
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___cell_43;
	// MyVector FarmScr::itemSeed
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___itemSeed_44;
	// MyVector FarmScr::listItemFarm
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listItemFarm_45;
	// MyVector FarmScr::listFarmProduct
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listFarmProduct_46;
	// MyVector FarmScr::itemProduct
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___itemProduct_47;
	// MyVector FarmScr::listNest
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listNest_48;
	// MyVector FarmScr::listBucket
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listBucket_49;
	// MyVector FarmScr::animalLists
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___animalLists_50;
	// MyVector[] FarmScr::listFood
	MyVectorU5BU5D_t5FE2B41BB671ADD61156AD7564F51284B9441A5F* ___listFood_51;
	// Image[] FarmScr::imgWorm_G
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgWorm_G_52;
	// Image FarmScr::imgBuyLant
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBuyLant_53;
	// Image FarmScr::imgFocusCel
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgFocusCel_54;
	// Image FarmScr::imgSell
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgSell_55;
	// FrameImage FarmScr::imgWormAndGrass
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgWormAndGrass_56;
	// FrameImage FarmScr::imgTrough
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgTrough_57;
	// FrameImage FarmScr::imgDogTr
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgDogTr_58;
	// FrameImage FarmScr::img
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___img_59;
	// FrameImage FarmScr::imgBenh
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgBenh_60;
	// System.Int32 FarmScr::numTileBarn
	int32_t ___numTileBarn_63;
	// System.Int32 FarmScr::numTilePond
	int32_t ___numTilePond_64;
	// AvPosition FarmScr::focusCell
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___focusCell_67;
	// AvPosition FarmScr::posName
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posName_68;
	// AvPosition FarmScr::posBarn
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posBarn_69;
	// AvPosition FarmScr::posPond
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* ___posPond_70;
	// System.SByte FarmScr::action
	int8_t ___action_71;
	// System.SByte FarmScr::frame
	int8_t ___frame_72;
	// System.Int32 FarmScr::numO
	int32_t ___numO_80;
	// System.Int32 FarmScr::numW
	int32_t ___numW_81;
	// System.Int32 FarmScr::numH
	int32_t ___numH_82;
	// System.Int32 FarmScr::idItemUsing
	int32_t ___idItemUsing_83;
	// System.Int32 FarmScr::money
	int32_t ___money_86;
	// System.Int32 FarmScr::numStatusAnimal
	int32_t ___numStatusAnimal_87;
	// System.SByte[][] FarmScr::FRAME
	SByteU5BU5DU5BU5D_t9042899DE0306D67CDDEDC06C44CEFAD76730699* ___FRAME_88;
	// System.Boolean FarmScr::isAutoVatNuoi
	bool ___isAutoVatNuoi_89;
	// StarFruitObj FarmScr::starFruil
	StarFruitObj_tEE67E8E49D3B407F2BCCEBDBED8C305DB444E612* ___starFruil_92;
	// System.Int32 FarmScr::priceSteal
	int32_t ___priceSteal_93;
	// System.String FarmScr::nameTemp
	String_t* ___nameTemp_94;
	// System.Boolean FarmScr::isSteal
	bool ___isSteal_95;
	// System.Boolean FarmScr::isAbleSteal
	bool ___isAbleSteal_96;
	// System.Boolean FarmScr::isNew
	bool ___isNew_97;
	// Image[] FarmScr::imgCell
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgCell_101;
	// Command FarmScr::cmdMenu
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdMenu_102;
	// Command FarmScr::cmdLeftMenu
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdLeftMenu_103;
	// Command FarmScr::cmdFocusBet
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdFocusBet_104;
	// Command FarmScr::cmdFeeding
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdFeeding_105;
	// Command FarmScr::cmdFinishAuto
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdFinishAuto_106;
	// Command FarmScr::cmdNextAuto
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdNextAuto_107;
	// System.Boolean FarmScr::isSelected
	bool ___isSelected_113;
	// System.Int32 FarmScr::indexItem
	int32_t ___indexItem_116;
	// System.Int32 FarmScr::idSelected
	int32_t ___idSelected_117;
	// System.SByte FarmScr::levelStore
	int8_t ___levelStore_122;
	// System.Int32 FarmScr::capacityStore
	int32_t ___capacityStore_123;
	// System.Boolean FarmScr::isReSize
	bool ___isReSize_124;
	// System.SByte FarmScr::numBarn
	int8_t ___numBarn_125;
	// System.SByte FarmScr::numPond
	int8_t ___numPond_126;
	// System.Int32 FarmScr::xRemember
	int32_t ___xRemember_127;
	// System.Int32 FarmScr::yRemember
	int32_t ___yRemember_128;
	// System.Int32 FarmScr::remainTime
	int32_t ___remainTime_129;
	// System.Int32 FarmScr::curTimeCooking
	int32_t ___curTimeCooking_130;
	// System.Int16 FarmScr::foodID
	int16_t ___foodID_131;
	// System.Int32 FarmScr::xPosCook
	int32_t ___xPosCook_135;
	// System.Int32 FarmScr::yPosCook
	int32_t ___yPosCook_136;
};

// FarmScr

// HouseScr
struct HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_StaticFields
{
	// HouseScr HouseScr::me
	HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939* ___me_40;
	// System.Int16 HouseScr::numW
	int16_t ___numW_49;
	// System.Boolean HouseScr::isSelectObj
	bool ___isSelectObj_50;
	// System.Boolean HouseScr::isChange
	bool ___isChange_56;
	// System.Boolean HouseScr::isDuyChuyen
	bool ___isDuyChuyen_57;
	// System.Boolean HouseScr::isTranItemBuy
	bool ___isTranItemBuy_58;
	// System.Boolean HouseScr::isBuyTileMap
	bool ___isBuyTileMap_59;
	// System.Int32 HouseScr::xTemp
	int32_t ___xTemp_65;
	// System.Int32 HouseScr::yTemp
	int32_t ___yTemp_66;
};

// HouseScr

// ListScr
struct ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_StaticFields
{
	// ListScr ListScr::instance
	ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB* ___instance_40;
	// MyVector ListScr::tempList
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___tempList_44;
	// MyVector ListScr::friendL
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___friendL_47;
	// System.SByte ListScr::typeListFriend
	int8_t ___typeListFriend_49;
	// System.SByte ListScr::countClose
	int8_t ___countClose_50;
	// System.Boolean ListScr::isGetTypeHouse
	bool ___isGetTypeHouse_51;
	// System.String ListScr::idFriendList
	String_t* ___idFriendList_53;
	// MyHashTable ListScr::hList
	MyHashTable_t03FB795CF8B8588EB81514182487084E49CD03E7* ___hList_54;
	// Image[] ListScr::imgCloseTabFull
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgCloseTabFull_59;
	// Image[] ListScr::imgCloseTab
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgCloseTab_60;
};

// ListScr

// LoginScr
struct LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8_StaticFields
{
	// LoginScr LoginScr::me
	LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* ___me_40;
	// System.Int32 LoginScr::aa
	int32_t ___aa_69;
	// System.Boolean LoginScr::isSelectedLanguage
	bool ___isSelectedLanguage_70;
	// System.Boolean LoginScr::isNewGame
	bool ___isNewGame_71;
	// System.Boolean LoginScr::isAccVir
	bool ___isAccVir_72;
	// System.Boolean LoginScr::isLoadIP
	bool ___isLoadIP_80;
};

// LoginScr

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields
{
	// MainMenu MainMenu::me
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___me_40;
	// FrameImage MainMenu::imgIconFlower
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgIconFlower_55;
	// FrameImage MainMenu::imgGO
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgGO_56;
	// PopupName MainMenu::popFocus
	PopupName_tA9042619222332BF79057C264A7EAB6146B7B995* ___popFocus_66;
	// FrameImage MainMenu::imgLoading
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgLoading_74;
};

// MainMenu

// MapScr
struct MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields
{
	// MapScr MapScr::instance
	MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* ___instance_40;
	// System.SByte MapScr::roomID
	int8_t ___roomID_41;
	// System.SByte MapScr::boardID
	int8_t ___boardID_42;
	// Image MapScr::imgFocusP
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgFocusP_43;
	// Image MapScr::imgHeart
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgHeart_44;
	// System.SByte MapScr::typeJoin
	int8_t ___typeJoin_49;
	// Avatar MapScr::focusP
	Avatar_t5280686025A629043829B8D5A31541F05B328D76* ___focusP_50;
	// System.SByte MapScr::typeCasino
	int8_t ___typeCasino_51;
	// System.Int32 MapScr::indexMenu
	int32_t ___indexMenu_52;
	// System.Int32 MapScr::indexAction
	int32_t ___indexAction_53;
	// System.Int32 MapScr::indexFeel
	int32_t ___indexFeel_54;
	// System.Int32 MapScr::indexExchange
	int32_t ___indexExchange_55;
	// Image MapScr::imgBar
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBar_56;
	// MyVector MapScr::listFish
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listFish_57;
	// System.Int32 MapScr::indexMap
	int32_t ___indexMap_58;
	// MyVector MapScr::listCmd
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listCmd_59;
	// MyVector MapScr::listCmdRotate
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listCmdRotate_60;
	// MyVector MapScr::listChair
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listChair_61;
	// MyVector MapScr::listItemEffect
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listItemEffect_62;
	// System.Boolean MapScr::isWedding
	bool ___isWedding_63;
	// System.Boolean MapScr::isNewVersion
	bool ___isNewVersion_64;
	// System.Int32 MapScr::idHouse
	int32_t ___idHouse_65;
	// System.SByte[] MapScr::ac
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___ac_66;
	// Avatar MapScr::avatarShop
	Avatar_t5280686025A629043829B8D5A31541F05B328D76* ___avatarShop_68;
	// System.Boolean MapScr::isOpenInfo
	bool ___isOpenInfo_70;
	// System.SByte MapScr::idSelectedMini
	int8_t ___idSelectedMini_76;
	// System.SByte MapScr::idCityMap
	int8_t ___idCityMap_77;
	// System.Int16[] MapScr::idImg
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___idImg_78;
	// System.Int32 MapScr::idMapOffline
	int32_t ___idMapOffline_79;
	// System.Int32 MapScr::idMapOld
	int32_t ___idMapOld_80;
	// System.Int32 MapScr::idUserWedding_1
	int32_t ___idUserWedding_1_82;
	// System.Int32 MapScr::idUserWedding_2
	int32_t ___idUserWedding_2_83;
};

// MapScr

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields
{
	// Menu Menu::me
	Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* ___me_26;
	// FrameImage Menu::imgSellect
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgSellect_39;
	// FrameImage Menu::imgBackIcon
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgBackIcon_40;
	// Command Menu::cmdClose
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdClose_53;
};

// Menu

// MenuCenter
struct MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_StaticFields
{
	// MenuCenter MenuCenter::me
	MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* ___me_26;
};

// MenuCenter

// MenuIcon
struct MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_StaticFields
{
	// MenuIcon MenuIcon::me
	MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* ___me_26;
};

// MenuIcon

// MenuLeft
struct MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_StaticFields
{
	// MenuLeft MenuLeft::me
	MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* ___me_26;
};

// MenuLeft

// MenuNPC
struct MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields
{
	// MenuNPC MenuNPC::me
	MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* ___me_26;
	// FrameImage MenuNPC::imgDc
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgDc_38;
};

// MenuNPC

// MenuOn
struct MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields
{
	// MenuOn MenuOn::me
	MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* ___me_26;
	// Command MenuOn::cmdClose
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___cmdClose_47;
	// Image MenuOn::imgTab
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgTab_48;
	// Image MenuOn::imgSelect
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgSelect_49;
};

// MenuOn

// MenuSub
struct MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields
{
	// MenuSub MenuSub::me
	MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* ___me_26;
	// System.Int32 MenuSub::cmtoY
	int32_t ___cmtoY_34;
	// System.Int32 MenuSub::cmy
	int32_t ___cmy_35;
	// System.Int32 MenuSub::cmdy
	int32_t ___cmdy_36;
	// System.Int32 MenuSub::cmvy
	int32_t ___cmvy_37;
	// System.Int32 MenuSub::cmyLim
	int32_t ___cmyLim_38;
};

// MenuSub

// MessageScr
struct MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields
{
	// MessageScr MessageScr::me
	MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* ___me_40;
	// Image[] MessageScr::imgArrow
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgArrow_71;
};

// MessageScr

// MiniMap
struct MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields
{
	// MiniMap MiniMap::me
	MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* ___me_40;
	// FrameImage MiniMap::imgMap
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgMap_41;
	// FrameImage MiniMap::imgArrow
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgArrow_42;
	// Image MiniMap::imgSmallIcon
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgSmallIcon_50;
	// Image MiniMap::imgBackIcon
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgBackIcon_51;
	// System.Single MiniMap::cmtoX
	float ___cmtoX_53;
	// System.Single MiniMap::cmx
	float ___cmx_54;
	// System.Single MiniMap::cmdx
	float ___cmdx_55;
	// System.Single MiniMap::cmvx
	float ___cmvx_56;
	// System.Single MiniMap::cmxLim
	float ___cmxLim_57;
	// System.Single MiniMap::cmtoY
	float ___cmtoY_58;
	// System.Single MiniMap::cmy
	float ___cmy_59;
	// System.Single MiniMap::cmdy
	float ___cmdy_60;
	// System.Single MiniMap::cmvy
	float ___cmvy_61;
	// System.Single MiniMap::cmyLim
	float ___cmyLim_62;
	// System.Boolean MiniMap::isCityMap
	bool ___isCityMap_67;
	// System.Boolean MiniMap::isChange
	bool ___isChange_68;
	// MyVector MiniMap::listClound
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___listClound_70;
	// FrameImage MiniMap::imgPopup
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgPopup_71;
	// FrameImage MiniMap::imgPopupName
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgPopupName_72;
	// System.String MiniMap::nameSV
	String_t* ___nameSV_73;
	// Image MiniMap::imgCreateMap
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgCreateMap_75;
	// IAction MiniMap::actionReg
	RuntimeObject* ___actionReg_85;
	// System.Byte MiniMap::iRequestReg
	uint8_t ___iRequestReg_86;
};

// MiniMap

// OptionScr
struct OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5_StaticFields
{
	// OptionScr OptionScr::instance
	OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5* ___instance_40;
	// System.Boolean OptionScr::isVirTualKey
	bool ___isVirTualKey_52;
};

// OptionScr

// PopupShop
struct PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865_StaticFields
{
	// PopupShop PopupShop::me
	PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865* ___me_40;
	// System.String[] PopupShop::name
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___name_41;
	// System.Int32 PopupShop::numTap
	int32_t ___numTap_42;
	// System.Int32 PopupShop::x
	int32_t ___x_43;
	// System.Int32 PopupShop::y
	int32_t ___y_44;
	// System.Int32 PopupShop::w
	int32_t ___w_45;
	// System.Int32 PopupShop::h
	int32_t ___h_46;
	// System.Int32 PopupShop::wCell
	int32_t ___wCell_47;
	// System.Int32 PopupShop::num
	int32_t ___num_48;
	// System.Int32 PopupShop::hAllCell
	int32_t ___hAllCell_49;
	// System.Int32 PopupShop::numH
	int32_t ___numH_50;
	// System.Int32 PopupShop::hT
	int32_t ___hT_51;
	// System.Int32 PopupShop::focusTap
	int32_t ___focusTap_52;
	// System.Int32 PopupShop::focus
	int32_t ___focus_57;
	// System.Int32 PopupShop::numberPrice
	int32_t ___numberPrice_58;
	// System.Int32 PopupShop::duCam
	int32_t ___duCam_59;
	// MyVector PopupShop::strDes
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___strDes_60;
	// MyScreen PopupShop::lastScr
	MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___lastScr_61;
	// System.Boolean PopupShop::isTransFocus
	bool ___isTransFocus_65;
	// System.Boolean PopupShop::isHorizontal
	bool ___isHorizontal_66;
	// System.Boolean PopupShop::isSelectedTab
	bool ___isSelectedTab_67;
	// System.Boolean PopupShop::isQuaTrang
	bool ___isQuaTrang_68;
	// System.Int32 PopupShop::wPrice
	int32_t ___wPrice_69;
	// System.Int32 PopupShop::hPrice
	int32_t ___hPrice_70;
	// System.Int32 PopupShop::hDuHori
	int32_t ___hDuHori_71;
	// Image PopupShop::imgShadow
	Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___imgShadow_72;
	// FrameImage PopupShop::imgScroll
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgScroll_73;
	// Image[] PopupShop::imgCell
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgCell_77;
	// Image[] PopupShop::imgTimeUse
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* ___imgTimeUse_78;
	// FrameImage PopupShop::imgTimeUsePer
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___imgTimeUsePer_79;
};

// PopupShop

// UnityEngine.ScreenOrientation

// UnityEngine.ScreenOrientation

// ServerListScr
struct ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE_StaticFields
{
	// ServerListScr ServerListScr::me
	ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE* ___me_40;
	// System.Int32 ServerListScr::indexSV
	int32_t ___indexSV_41;
	// System.Int32 ServerListScr::index
	int32_t ___index_42;
	// System.Int32 ServerListScr::selected
	int32_t ___selected_43;
	// System.Int32 ServerListScr::cmtoY
	int32_t ___cmtoY_47;
	// System.Int32 ServerListScr::cmy
	int32_t ___cmy_48;
	// System.Int32 ServerListScr::cmdy
	int32_t ___cmdy_49;
	// System.Int32 ServerListScr::cmvy
	int32_t ___cmvy_50;
	// System.Int32 ServerListScr::cmyLim
	int32_t ___cmyLim_51;
	// System.Int32 ServerListScr::w
	int32_t ___w_52;
	// System.Int32 ServerListScr::h
	int32_t ___h_53;
	// System.Int32 ServerListScr::hDis
	int32_t ___hDis_54;
	// System.Int32 ServerListScr::x
	int32_t ___x_55;
	// System.Int32 ServerListScr::y
	int32_t ___y_56;
};

// ServerListScr

// UnityEngine.TouchScreenKeyboard

// UnityEngine.TouchScreenKeyboard
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Image[]
struct ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* m_Items[1];

	inline Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PositionTran[]
struct PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0  : public RuntimeArray
{
	ALIGN_FIELD (8) PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* m_Items[1];

	inline PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Image[][]
struct ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672  : public RuntimeArray
{
	ALIGN_FIELD (8) ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* m_Items[1];

	inline ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void Command::.ctor(System.String,IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_m6608741414A6EEA975D4ABCA28FA17F9BD7EF05C (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* __this, String_t* ___0_caption, RuntimeObject* ___1_action, const RuntimeMethod* method) ;
// System.Void FrameImage::drawFrame(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameImage_drawFrame_m39AFA2B5C04276BF573FC90AFB4A02C68A2AF6E3 (FrameImage_t22B8F29B26087709566812A258AB227B26817986* __this, int32_t ___0_idx, int32_t ___1_x, int32_t ___2_y, int32_t ___3_trans, int32_t ___4_orthor, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___5_g, const RuntimeMethod* method) ;
// System.Boolean LoadMap::doJoin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374 (LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// MainMenu MainMenu::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5 (const RuntimeMethod* method) ;
// AvCamera AvCamera::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000* AvCamera_gI_m2E90DB1C3FFADF84F47A781BBEA8F6ADCAD5B8E6 (const RuntimeMethod* method) ;
// System.Void AvPosition::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvPosition__ctor_mFCAF059A64E600764D8D65AB4635BE8D3FDF7615 (AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// FarmScr FarmScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C* FarmScr_gI_m3714A532FE7C9E1E1163CD9CA97F3D5D9A13E943 (const RuntimeMethod* method) ;
// System.Void Canvas::startWaitDlg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_startWaitDlg_m7C40FB165260F3539A379569FB5267C2E333C0D9 (const RuntimeMethod* method) ;
// GlobalService GlobalService::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65 (const RuntimeMethod* method) ;
// System.Void GlobalService::doCommunicate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalService_doCommunicate_mA4D6BD164A571B3FE3CAF5623B893BC7D4FDC1E5 (GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* __this, int32_t ___0_idUser, const RuntimeMethod* method) ;
// System.Void MainMenu::doExchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_doExchange_m38CBAD1BF53043839F97A205D0AAE5A05D6A18A8 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Void MyVector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692 (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, const RuntimeMethod* method) ;
// System.Void MenuMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) ;
// System.Void Menu::initCmd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_initCmd_m2D8AD0914E6F13C29B6A5B508D4F53D406A853C2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void Menu::doFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_doFire_mBD7511DFBBD57578F7A6BEB9FA7471E490A789AC (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void Command::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_mBEF90D631F1834B890E5A23E2C5C9D57F7900ABB (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* __this, String_t* ___0_caption, int32_t ___1_type, const RuntimeMethod* method) ;
// System.Int32 MyVector::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9 (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, const RuntimeMethod* method) ;
// System.Void Menu::setSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setSelected_m89D044108AB99DB1DB2457C02389ECE9E2B837ED (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void MenuMain::show()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) ;
// System.Object MyVector::elementAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Menu::updateMenuKeyMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_updateMenuKeyMain_mA99F4D0980320A0BEFAD84D19DD86DCE042D73E6 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Int32 CRes::abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E (int32_t ___0_a, const RuntimeMethod* method) ;
// System.Boolean Canvas::isPoint(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986 (int32_t ___0_x, int32_t ___1_y, int32_t ___2_w, int32_t ___3_h, const RuntimeMethod* method) ;
// System.Int32 Math::abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_abs_m9EBB513752A930AECA9ED005549135F97E154308 (int32_t ___0_i, const RuntimeMethod* method) ;
// System.Int32 Canvas::dy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605 (const RuntimeMethod* method) ;
// System.Void Menu::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_click_m11FC878F4CBD2FBB31D16AEC36B3AD3D877F0393 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Int32 Canvas::dx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E (const RuntimeMethod* method) ;
// System.Void Menu::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_close_m39D18EC6F835D6DB686F6F55919A3AB29C0954B2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void MyGraphics::translate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, float ___0_tx, float ___1_ty, const RuntimeMethod* method) ;
// System.Void Menu::paintMenuFarm(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_paintMenuFarm_m05DE1B2708D382398345788884923C68AE19D9AF (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MenuMain::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_paint_mB3562100A604E6CC77E1CF8BD87BC19FC92443D2 (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void Canvas::resetTrans(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Single MyGraphics::getTranslateX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MyGraphics_getTranslateX_m2DB0508A33DED848DBF27AC195D60001FE6CB920_inline (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, const RuntimeMethod* method) ;
// System.Single MyGraphics::getTranslateY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MyGraphics_getTranslateY_mBE99771F46EC11F951F2741403EDBC090A19979E_inline (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, const RuntimeMethod* method) ;
// System.Void MyGraphics::setClip(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, float ___0_x, float ___1_y, float ___2_w, float ___3_h, const RuntimeMethod* method) ;
// System.Void MyGraphics::setColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, int32_t ___0_rgb, const RuntimeMethod* method) ;
// System.Void MyGraphics::fillRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, float ___0_x, float ___1_y, float ___2_w, float ___3_h, const RuntimeMethod* method) ;
// System.Void Menu::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_moveCamera_mB84824ED96CF9DF47E0A4E8808AF5E8212FB62C2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void Menu::updateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_updateMain_m38C1C2D510DDF7B4D793F23DD0A8DBD768E7BB9E (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void MenuCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter__ctor_mE687536C0F9F699ACF7085AB4D69464C526AD70E (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) ;
// System.Void MenuCenter::click1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_click1_m240135AC046BF1A3490DFAB1CC3FBF7866A5939F (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) ;
// System.Void MenuCenter::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_moveCamera_m83A10267AF021E5199EF373DA5C2141FF8BABF6D (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Out::println(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Out_println_mDBA56AD04D69071EEC075F3CC3EA4906B485B817 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void Command::perform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179 (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* __this, const RuntimeMethod* method) ;
// System.Void MenuIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon__ctor_m0CC94F300CC395FEC365E7FC51D460694CD94137 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) ;
// System.String T::getPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// Image Image::createImagePNG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8 (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Void PositionTran::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionTran__ctor_mC6C594071707677D64FFC1F6F0EEF9E710122222 (PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void MenuIcon::click1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_click1_mE22746D475B673D9F2775975038CB006EF4CD703 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) ;
// System.Void PositionTran::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionTran_update_m04DF458D4243C6747AEB8C4012F59388B25D0268 (PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* __this, const RuntimeMethod* method) ;
// System.Void MenuIcon::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_moveCamera_m5BBBFDF7CD1BE9501718D70BD74C3F3E17929126 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) ;
// System.Void MenuMain::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_updateKey_m8AA3EED053B7AFC081B4368322461BA1C9DFB727 (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) ;
// System.Void Canvas::resetTransNotZoom(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_resetTransNotZoom_mD186DF530504A96C915B3E254A82E22A635EBE32 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MyGraphics::drawImage(Image,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___0_image, float ___1_x, float ___2_y, int32_t ___3_anchor, const RuntimeMethod* method) ;
// System.Void MenuLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft__ctor_m3D55F26ABD81F462593FCB6A7407541C54187B37 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) ;
// System.String System.SByte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SByte_ToString_mAA885F58F9F739E25623423A059C735017A92708 (int8_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void MenuLeft::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_click_m5DF5E339294399F2E86C64791665EFD7C692951D (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) ;
// System.Void MenuLeft::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_close_m98D9C8908BEA3F73F75F5147B738102540A9B825 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) ;
// System.Void AvMain::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvMain_updateKey_m90C1E1FA00417229EAB96356C695CD2F31485EDD (AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* __this, const RuntimeMethod* method) ;
// System.Void AvMain::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvMain_paint_m6DD27BBBA1CA5983CBDD3E812E3D8E642D2C438A (AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void AvMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvMain__ctor_m49485B883877C5F56CC1014A8CA95F30369139D7 (AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* __this, const RuntimeMethod* method) ;
// System.Void FrameImage::.ctor(Image,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079 (FrameImage_t22B8F29B26087709566812A258AB227B26817986* __this, Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___0_img, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) ;
// System.Void MenuNPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC__ctor_m41E9E2270014A5724388C18DD8CBF519E5E07CBF (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) ;
// System.Void MenuNPC::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_click_m25E9C6E3FF4D39A1B6E2BC2F6C9A990736839828 (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) ;
// System.Void MenuNPC::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_moveCamera_m558BC73242BBD42A2DF8DBF4B706636F721868BF (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) ;
// Avatar LoadMap::getAvatar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t5280686025A629043829B8D5A31541F05B328D76* LoadMap_getAvatar_mF4E2BB95A7631485EA22014FC8D58E169D14021F (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void FrameImage::drawFrame(System.Int32,System.Int32,System.Int32,System.Int32,MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354 (FrameImage_t22B8F29B26087709566812A258AB227B26817986* __this, int32_t ___0_idx, int32_t ___1_x, int32_t ___2_y, int32_t ___3_trans, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___4_g, const RuntimeMethod* method) ;
// System.Void MenuOn::initCmd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_initCmd_m1C9F7027AF679F682FC8B0C449A2BFD9EC94A724 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn__ctor_m0355A3E6DF9F7835085D134600A9D684899A3FD9 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::doFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_doFire_m312E696A873D13C25E489F23DA28C8AC03D72930 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::updateMenuKeyMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_updateMenuKeyMain_m2BF456487DC07FFDD7E28D1F4984368A3755A32A (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_click_mD13B766BF8B6C4625F5201E5B2F7BBB1D100CFC0 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::paintMain(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_paintMain_m0C83EB78F2864C0A0E5A700B7D0C7C148C290B24 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MyGraphics::drawImageScale(Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyGraphics_drawImageScale_m54E189E018938CE284E542CC3E689FF8C9C76866 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* ___0_image, int32_t ___1_x, int32_t ___2_y, int32_t ___3_w, int32_t ___4_h, int32_t ___5_tranform, const RuntimeMethod* method) ;
// System.Void MenuOn::paintMenuNormal(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_paintMenuNormal_mBE1EA1F2802259E875DEC50F15406CAC8FC57C2C (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MenuOn::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_moveCamera_m81BB37A14E451B6BCEAF54A97D9E59B7F532011A (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuOn::updateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_updateMain_m979E12CAB64F8FC7C57DF65A288D93B632D5BCF3 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) ;
// System.Void MenuSub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub__ctor_m9978C8F847174085F44FF763607698801E9F754A (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) ;
// System.Void MyVector::removeAllElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVector_removeAllElements_mF2D6466281DBBB597BBEDED74C9214256D0CE7D1 (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, const RuntimeMethod* method) ;
// System.Void MenuSub::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_click_m414A8D31B39A5BB1D6A0E8CA7115AD3649CD9B22 (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) ;
// System.Void LoadMap::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadMap_update_mA5DB1D9AAEEEE500BB2DE960344C01A98B4C14CB (LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* __this, const RuntimeMethod* method) ;
// PaintPopup PaintPopup::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* PaintPopup_gI_mB6AA99D3CE731979E0898982002FB985A48C32A8 (const RuntimeMethod* method) ;
// System.Int32 PaintPopup::setupdateTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PaintPopup_setupdateTab_mEFF3BF31C9966BECFC309686B242B6DD944E2E24 (PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* __this, const RuntimeMethod* method) ;
// System.Void myWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void myWriter__ctor_m8F17B95C89DCFB2B7F4E795B5340DD8558999566 (myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* __this, const RuntimeMethod* method) ;
// System.Void myReader::.ctor(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void myReader__ctor_m61EAE1B77A35D717C484A0BA3AA8A66DB94C44DE (myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_data, const RuntimeMethod* method) ;
// System.SByte[] myWriter::getData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* myWriter_getData_mAEC16F2CC1B23908D4ED113782FB29B05D296058 (myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* __this, const RuntimeMethod* method) ;
// System.Void MyScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyScreen__ctor_m1DC4D7088853401EA2BB15A924B0AE6959E9C481 (MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* __this, const RuntimeMethod* method) ;
// System.Void MessageScr/IActionChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionChat__ctor_m6DBD25037EE01ACE806F6E72995103767D7DBC9D (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* __this, const RuntimeMethod* method) ;
// System.Void TField::.ctor(System.String,MyScreen,IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TField__ctor_mE4A34FFC930468769976182F232FC2A570A86C1E (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, String_t* ___0_name, MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___1_parent, RuntimeObject* ___2_ac, const RuntimeMethod* method) ;
// System.Void TField::setFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TField_setFocus_mA8024E4550C22D184C8A62F68AE5E388899A0E01 (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, bool ___0_isFocus, const RuntimeMethod* method) ;
// System.Void TField::setIputType(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_setIputType_m72F29E07E1F1F559628ABB8FFC773EDB68298B46_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, int32_t ___0_iputType, const RuntimeMethod* method) ;
// System.Void MessageScr::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_init_m51C63B1A6A4F0E398327A2101D73F9761C46B55B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_hc, const RuntimeMethod* method) ;
// System.Void TField::setMaxTextLenght(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_setMaxTextLenght_m61EBFB02EBBFD04345FCF29A2FE30D03120575FD_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, int32_t ___0_maxTextLenght, const RuntimeMethod* method) ;
// System.Void MessageScr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr__ctor_m89C0DBD12A83D251F32916EDA02456F625AEE377 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void MessageScr::changeFocusTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_foc, const RuntimeMethod* method) ;
// System.String TField::getText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TField_getText_mFCD7D323EF26FC195005BA96783EE50137C5A47A_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GlobalService::doServerKick(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalService_doServerKick_m0098512237C6AC276210891B97D2AFFEB67F0A69 (GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* __this, int32_t ___0_iddb, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void TField::setText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void GlobalService::chatTo(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalService_chatTo_m81A66D49C5E0D963DF3E7CBE3518E7E2B7507104 (GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* __this, int32_t ___0_iddb, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void MessageScr::addPlayer(System.Int32,System.String,System.String,System.Boolean,IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_addPlayer_mC5D580C3FE5E3395AE331E56304CBCC1CA39C715 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_ID, String_t* ___1_name, String_t* ___2_text, bool ___3_isOwner, RuntimeObject* ___4_act, const RuntimeMethod* method) ;
// System.Void MyScreen::switchToMe()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MyScreen_switchToMe_mC24CFE20D75C42D96747425FA6E8EF4ACDE24D52_inline (MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* __this, const RuntimeMethod* method) ;
// System.Void ElementPlayer::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementPlayer__ctor_m5B713B1086FE1F42461C6C497C854A6D8DE88952 (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* __this, String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void MyVector::addElement(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Void MyVector::removeElementAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVector_removeElementAt_mBAAE9A96CE172AF34B3FAFAF22E50D5F191E97C5 (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void MessageScr::setLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// MessageScr MessageScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* MessageScr_gI_m1B4E64897A6E06F84F010C67652682C548FE2E5A (const RuntimeMethod* method) ;
// ElementPlayer MessageScr::getPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* MessageScr_getPlayer_m60B7453040FA20240303618D330D93D5F355ED69 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void ElementPlayer::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementPlayer__ctor_m1B3F5D792E19E9F122117C402670C8668847E1AC (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* __this, int32_t ___0_ID, String_t* ___1_name, String_t* ___2_text, const RuntimeMethod* method) ;
// System.Void ElementPlayer::addText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementPlayer_addText_m9AF8521BF00C8A9F4BC792909AC3147A1FD43FEA (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* __this, String_t* ___0_te, bool ___1_isO, const RuntimeMethod* method) ;
// System.Boolean TField::isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TField_isFocused_m8C9DC746D93D5BBDE3CFDB7BB258A2466E35F9BE (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, const RuntimeMethod* method) ;
// System.Boolean TField::keyPressed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TField_keyPressed_mED9EADEA8478C1A10AA9236D1BBDB602D0096221 (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, int32_t ___0_keyCode, const RuntimeMethod* method) ;
// System.Void MessageScr::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_click_m8CB8E935CCFD33BED454DB8B2317BCC772747473 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// System.Void TField::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TField_update_m814B2505FCF4D5DC3BBD89A8E21B96893C392984 (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, const RuntimeMethod* method) ;
// System.Void MessageScr::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_moveCamera_m388E08DF99231D4558F078CA05363B1D8F527B46 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_active_m4382D57F87E4C86B59864E86BE93A8A2A474B7C2 (TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MessageScr::updateKeyText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_updateKeyText_m1E995AC810EE8D6D8FD19795F374B57FA7537E5B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void MyVector::removeElement(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyVector_removeElement_mD02AC92E6BBD8E66F530EB978E180069029E70E0 (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Void MessageScr::paintPublicTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintPublicTab_m2553509D62B904BC4718F93DDEA2179551277F8D (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) ;
// System.Void MessageScr::paintListPlayerTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintListPlayerTab_mA7873B5932E064DCCF81D9BDB25CE4C1093CA638 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) ;
// System.Void MessageScr::paintChatTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintChatTab_mFF0C32C6FADB7DCBE19602357E78C004323E0370 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) ;
// System.Void TField::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TField_paint_m8480E17AE84084BDAA14B7988A8ACE667911354A (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MyScreen::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyScreen_paint_m526352F2F397B86061C0A33C5B0247E695AE2E1B (MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void ChatPopup::paintRoundRect(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPopup_paintRoundRect_mA98D2CDD67A644712E196B5168C759E05F68956F (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x, int32_t ___2_y, int32_t ___3_w, int32_t ___4_h, int32_t ___5_color1, int32_t ___6_color2, int8_t ___7_iNPC, const RuntimeMethod* method) ;
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
// MapScr MapScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0 (const RuntimeMethod* method) ;
// System.Void MapScr::onChatFromMe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScr_onChatFromMe_mD978F3F5D4D8205E983696327592BAB4517653B4 (MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void MessageScr::doSendMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_doSendMsg_mB20A13536C80E5D4B0830B39C13D9B585750C097 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) ;
// Image Image::createImage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* Image_createImage_mAE35E2D9090F867E18A42F31AE84B179D2592C2A (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Void MiniMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap__ctor_m8E01B682E318B58AF49A5ED5E74FFD3F5CB1B4DB (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) ;
// System.Void Canvas::endDlg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_endDlg_mCF2D0888239AECB5DA884B31F713966BBE672214 (const RuntimeMethod* method) ;
// Session_ME Session_ME::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB* Session_ME_gI_m08EE51E01B34D2C15C6BA5D68AF6B05C2A74CB76 (const RuntimeMethod* method) ;
// System.Boolean Session_ME::isConnected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Session_ME_isConnected_mDA83BFCEDD0D124FB743C10F2ED83F8721AE0B42_inline (Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB* __this, const RuntimeMethod* method) ;
// System.Void Welcome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Welcome__ctor_mFFEF5E0DB038BBB27231E2B655E4480FF6FA0750 (Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* __this, const RuntimeMethod* method) ;
// System.Void Welcome::initMiniMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Welcome_initMiniMap_m883E941AC830B66AF0AD61BDC872A5A828B19D46 (Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::playSoundBG(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_playSoundBG_mDD4500D828E1A1BD38D7D5632B81BEFED3E5F5A6 (int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Canvas::setPopupTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_setPopupTime_m31CDE8585866382F88B0874B3DCB7D620B2E1F26 (String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void MiniMap::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_init_m8427B8970BBCBA9470045BD9E234302303AA7AFD (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) ;
// System.Void MiniMap::tran()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_tran_m9EAD1AF8FC39432372A618D263AB68D43298A22A (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) ;
// System.Void GlobalService::requestService(System.SByte,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalService_requestService_m3D8A7EDC3BA3E4EF1E270D7686EEB9EED450784C (GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* __this, int8_t ___0_service, String_t* ___1_arg, const RuntimeMethod* method) ;
// System.Void MapScr::doChangePass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScr_doChangePass_mC3C140B600DBE720C7439D1C639C674CD1727909 (MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* __this, const RuntimeMethod* method) ;
// OptionScr OptionScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5* OptionScr_gI_m51CF6E9EB72787C0EC26B3D683F158EF3860A8EF (const RuntimeMethod* method) ;
// System.Void MapScr::exitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScr_exitGame_m8B7C0E329330F9567FB89AD1587061EAAD0944E1 (MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* __this, const RuntimeMethod* method) ;
// ServerListScr ServerListScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE* ServerListScr_gI_m79211DBA024D6A83008E3066BBB2BC4EA6C864D3 (const RuntimeMethod* method) ;
// System.Void Command::.ctor(System.String,System.Int32,AvMain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601 (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* __this, String_t* ___0_caption, int32_t ___1_type, AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* ___2_pointer, const RuntimeMethod* method) ;
// PopupShop PopupShop::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865* PopupShop_gI_m9C8738F50059A232F06007CC5F0C4D88B2B90652 (const RuntimeMethod* method) ;
// MenuCenter MenuCenter::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* MenuCenter_gI_m0065E10B66F76132267C0E293EECF5B858097158 (const RuntimeMethod* method) ;
// System.Void MenuCenter::startAt(MyVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_startAt_m27AAA0191D489A333816EB9381FCF6E18A41A0B7 (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_list, const RuntimeMethod* method) ;
// System.Void MapScr::doExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScr_doExitGame_mB9F291C5CBB6BD0A0540675924D124CFAD04FE15 (MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* __this, const RuntimeMethod* method) ;
// ImageIcon AvatarData::getImgIcon(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageIcon_t1D316E47B60148033D7EFDA4677CDC9CAAC46A8C* AvatarData_getImgIcon_mCBFEC969C3B16B5855DBD7D0923893C0998FF3D8 (int16_t ___0_id, const RuntimeMethod* method) ;
// System.Int32 CRes::rnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262 (int32_t ___0_a, const RuntimeMethod* method) ;
// System.Void AvPosition::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvPosition__ctor_mC7F6313CCA32B2D03D46116A3BDD1BD6D02182EC (AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_anchor, const RuntimeMethod* method) ;
// System.Boolean Canvas::isPointer(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Canvas_isPointer_m9F705FFE0515CFFE86E2E3E8B3AD1B059CBCB5B1 (int32_t ___0_x, int32_t ___1_y, int32_t ___2_w, int32_t ___3_h, const RuntimeMethod* method) ;
// System.Void MiniMap::setLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_setLimit_mABE6BF319016B986E7677B5FAB24397CD3B709CD (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) ;
// System.Void Canvas::paintPlus(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_paintPlus_mD21BE7439276441A4C16C85B9F1570E79C066EBA (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void FrameImage::drawFrameXY(System.Int32,System.Int32,System.Int32,System.Int32,MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameImage_drawFrameXY_mAA964A47ECB7CDAE8E567FA4F79C82EEA7521E25 (FrameImage_t22B8F29B26087709566812A258AB227B26817986* __this, int32_t ___0_idx, int32_t ___1_x, int32_t ___2_y, int32_t ___3_anthor, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___4_g, const RuntimeMethod* method) ;
// System.Void AvatarData::paintImg(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarData_paintImg_mF512C2AA7B77D6212AACB81593A7E40005CE1A85 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_id, int32_t ___2_x, int32_t ___3_y, int32_t ___4_anthor, const RuntimeMethod* method) ;
// System.Void MiniMap::paintName(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paintName_m79355BC822BE277A2DD1C95CE3DAA4FAF779CA8B (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MiniMap::paintClound(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paintClound_mE13EC7D3D2135C3987115E54330BF288F52E2434 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) ;
// System.Void MiniMap/IActionRequestReg::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionRequestReg__ctor_m7C6777BB2AECF03A09DD5464A831229EBE68741C (IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0* __this, String_t* ___0_des, const RuntimeMethod* method) ;
// System.Void MiniMap/IActionRequestOK::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionRequestOK__ctor_mC16F206EFF672EB3D993C2B2C5484ACAE143FC07 (IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032* __this, String_t* ___0_des, const RuntimeMethod* method) ;
// LoginScr LoginScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* LoginScr_gI_m8B4CA7931650DFE43973E34D0C258FA60F104E29 (const RuntimeMethod* method) ;
// System.Void LoginScr::saveLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScr_saveLogin_m0DB666551015CA3BA810478EDE9D8063A32257C6 (LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* __this, const RuntimeMethod* method) ;
// System.Void Canvas::startOKDlg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_startOKDlg_m99D060735CB1D22F120889080272C70DF97FC315 (String_t* ___0_info, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MediumPaint/CommandPointerGo::.ctor(System.String,MediumPaint/IActionPointerGO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandPointerGo__ctor_m970A4D9C7E1C8ABD6237FCC3FBF97528A623E0E6 (CommandPointerGo_t684940C03366F43B792CF98E2406FA991F0BA49A* __this, String_t* ___0_name, IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3* ___1_a, const RuntimeMethod* method) 
{
	{
		// : base(name, a)
		String_t* L_0 = ___0_name;
		IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3* L_1 = ___1_a;
		Command__ctor_m6608741414A6EEA975D4ABCA28FA17F9BD7EF05C(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MediumPaint/CommandPointerGo::paint(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandPointerGo_paint_m78FD5B027CFB1E8A7F784543673E71BD1B711062 (CommandPointerGo_t684940C03366F43B792CF98E2406FA991F0BA49A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainMenu.imgGO.drawFrame(1, x, y, 0, 3, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_0 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___imgGO_56;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_3 = ___0_g;
		NullCheck(L_0);
		FrameImage_drawFrame_m39AFA2B5C04276BF573FC90AFB4A02C68A2AF6E3(L_0, 1, L_1, L_2, 0, 3, L_3, NULL);
		// }
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
// System.Void MediumPaint/IActionPointerGO::perform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionPointerGO_perform_m16E1F731B45E89A3D99E777639F58AEB01502EEB (IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int num = LoadMap.posFocus.x / AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_0 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___posFocus_121;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_2 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_0 = ((int32_t)(L_1/L_2));
		// int num2 = LoadMap.posFocus.y / AvMain.hd;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_3 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___posFocus_121;
		NullCheck(L_3);
		int32_t L_4 = L_3->___y_1;
		int32_t L_5 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_1 = ((int32_t)(L_4/L_5));
		// if (!Canvas.loadMap.doJoin(num, num2) && !Canvas.loadMap.doJoin(num + 24, num2) && !Canvas.loadMap.doJoin(num - 24, num2) && !Canvas.loadMap.doJoin(num, num2 + 24) && !Canvas.loadMap.doJoin(num, num2 - 24))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374(L_6, L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_10 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		bool L_13;
		L_13 = LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374(L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)24))), L_12, NULL);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		bool L_17;
		L_17 = LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374(L_14, ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)24))), L_16, NULL);
		if (L_17)
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_18 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		bool L_21;
		L_21 = LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374(L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)24))), NULL);
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_22 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		bool L_25;
		L_25 = LoadMap_doJoin_m0035222BEA2E1B45D1F8E3112D1D4F0B01FA1374(L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)24))), NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void MediumPaint/IActionPointerGO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionPointerGO__ctor_mCC4D97FD384F69E69FA69068598AE2A6A01200E6 (IActionPointerGO_t1353FE5809B0FB3793B28BD757A14EA3F6688CB3* __this, const RuntimeMethod* method) 
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
// System.Void MediumPaint/CommandPointer::.ctor(System.String,MediumPaint/IActionPointer,Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandPointer__ctor_mDD4FB09F46D3F20CB5338E0D0FC7E2AD75F39935 (CommandPointer_t19053C3A33E8A6C25C6CB2C5282C12B59D6C7185* __this, String_t* ___0_name, IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F* ___1_a, Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___2_b, const RuntimeMethod* method) 
{
	{
		// : base(name, a)
		String_t* L_0 = ___0_name;
		IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F* L_1 = ___1_a;
		Command__ctor_m6608741414A6EEA975D4ABCA28FA17F9BD7EF05C(__this, L_0, L_1, NULL);
		// this.b = b;
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_2 = ___2_b;
		__this->___b_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___b_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void MediumPaint/CommandPointer::paint(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandPointer_paint_mD81525453C664DD3C1FDA3F17EF2CB84C1FCE310 (CommandPointer_t19053C3A33E8A6C25C6CB2C5282C12B59D6C7185* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	{
		// b.paintIcon(g, x, y + b.height / 2, false);
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_0 = __this->___b_9;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		int32_t L_2 = ___1_x;
		int32_t L_3 = ___2_y;
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_4 = __this->___b_9;
		NullCheck(L_4);
		int16_t L_5 = ((MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD*)L_4)->___height_14;
		NullCheck(L_0);
		VirtualActionInvoker4< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, bool >::Invoke(7 /* System.Void Base::paintIcon(MyGraphics,System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)((int32_t)L_5/2)))), (bool)0);
		// }
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
// System.Void MediumPaint/IActionPointer::.ctor(Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionPointer__ctor_mD7777370DDC8768098E1F1A40C73DAC1C6536D5C (IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F* __this, Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* ___0_b, const RuntimeMethod* method) 
{
	{
		// public IActionPointer(Base b)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.b = b;
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_0 = ___0_b;
		__this->___b_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___b_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void MediumPaint/IActionPointer::perform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionPointer_perform_m86ECE327D7C1BDCA77A4068ACC81753B4B7A6715 (IActionPointer_tD61D0FC9AA43521B6646A223EA3ADCD4F6002D3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Avatar_t5280686025A629043829B8D5A31541F05B328D76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadMap.focusObj = b;
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_0 = __this->___b_0;
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113), (void*)L_0);
		// if (b.catagory == 0)
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_1 = __this->___b_0;
		NullCheck(L_1);
		int8_t L_2 = ((MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD*)L_1)->___catagory_13;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// MapScr.focusP = (Avatar)b;
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_3 = __this->___b_0;
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		((MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields*)il2cpp_codegen_static_fields_for(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var))->___focusP_50 = ((Avatar_t5280686025A629043829B8D5A31541F05B328D76*)CastclassClass((RuntimeObject*)L_3, Avatar_t5280686025A629043829B8D5A31541F05B328D76_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields*)il2cpp_codegen_static_fields_for(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var))->___focusP_50), (void*)((Avatar_t5280686025A629043829B8D5A31541F05B328D76*)CastclassClass((RuntimeObject*)L_3, Avatar_t5280686025A629043829B8D5A31541F05B328D76_il2cpp_TypeInfo_var)));
	}

IL_0028:
	{
		// if (LoadMap.focusObj != null)
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* L_4 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// MainMenu.gI().avaPaint = new AvPosition((int)((float)(LoadMap.focusObj.x * AvMain.hd) - AvCamera.gI().xCam), (int)((float)(LoadMap.focusObj.y * AvMain.hd) - AvCamera.gI().yCam));
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_5;
		L_5 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* L_6 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113;
		NullCheck(L_6);
		int32_t L_7 = L_6->___x_0;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000* L_9;
		L_9 = AvCamera_gI_m2E90DB1C3FFADF84F47A781BBEA8F6ADCAD5B8E6(NULL);
		NullCheck(L_9);
		float L_10 = L_9->___xCam_1;
		MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* L_11 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113;
		NullCheck(L_11);
		int32_t L_12 = L_11->___y_1;
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000* L_14;
		L_14 = AvCamera_gI_m2E90DB1C3FFADF84F47A781BBEA8F6ADCAD5B8E6(NULL);
		NullCheck(L_14);
		float L_15 = L_14->___yCam_2;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_16 = (AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)il2cpp_codegen_object_new(AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AvPosition__ctor_mFCAF059A64E600764D8D65AB4635BE8D3FDF7615(L_16, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_multiply(L_7, L_8))), L_10))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_multiply(L_12, L_13))), L_15))), NULL);
		NullCheck(L_5);
		L_5->___avaPaint_65 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___avaPaint_65), (void*)L_16);
	}

IL_0078:
	{
		// if (LoadMap.TYPEMAP == 24)
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		int32_t L_17 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___TYPEMAP_92;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_008d;
		}
	}
	{
		// FarmScr.gI().commandTab(2);
		il2cpp_codegen_runtime_class_init_inline(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C* L_18;
		L_18 = FarmScr_gI_m3714A532FE7C9E1E1163CD9CA97F3D5D9A13E943(NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void AvMain::commandTab(System.Int32) */, L_18, 2);
		return;
	}

IL_008d:
	{
		// else if (MapScr.focusP.IDDB > 2000000000)
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_19 = ((MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields*)il2cpp_codegen_static_fields_for(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var))->___focusP_50;
		NullCheck(L_19);
		int32_t L_20 = ((Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB*)L_19)->___IDDB_25;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)2000000000))))
		{
			goto IL_00b8;
		}
	}
	{
		// Canvas.startWaitDlg();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_startWaitDlg_m7C40FB165260F3539A379569FB5267C2E333C0D9(NULL);
		// GlobalService.gI().doCommunicate(MapScr.focusP.IDDB);
		GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* L_21;
		L_21 = GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65(NULL);
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_22 = ((MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields*)il2cpp_codegen_static_fields_for(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var))->___focusP_50;
		NullCheck(L_22);
		int32_t L_23 = ((Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB*)L_22)->___IDDB_25;
		NullCheck(L_21);
		GlobalService_doCommunicate_mA4D6BD164A571B3FE3CAF5623B893BC7D4FDC1E5(L_21, L_23, NULL);
		return;
	}

IL_00b8:
	{
		// MainMenu.gI().doExchange();
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_24;
		L_24 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_24);
		MainMenu_doExchange_m38CBAD1BF53043839F97A205D0AAE5A05D6A18A8(L_24, NULL);
		// }
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
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MyVector listText = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_0, NULL);
		__this->___listText_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listText_55), (void*)L_0);
		// private int dir = 1;
		__this->___dir_70 = 1;
		// public Menu()
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
		// initCmd();
		Menu_initCmd_m2D8AD0914E6F13C29B6A5B508D4F53D406A853C2(__this, NULL);
		// }
		return;
	}
}
// System.Void Menu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__cctor_m56AE4B11FA55187FCE41C9BB856B3C52085B4A48 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Menu Menu::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* Menu_gI_m78456F14F52AD482351277ED4F09CC1E6487D7A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : new Menu();
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_0 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_1 = (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05*)il2cpp_codegen_object_new(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* L_2 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___me_26;
		return L_2;
	}
}
// System.Void Menu::commandTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_commandTab_m7DDE4F3E8D9F02A2EE07DEBC4A7F9D7F97023327 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// doFire();
		Menu_doFire_mBD7511DFBBD57578F7A6BEB9FA7471E490A789AC(__this, NULL);
		// break;
		return;
	}

IL_000f:
	{
		// showMenu = (showMenuFarm = false);
		int32_t L_2 = 0;
		V_0 = (bool)L_2;
		__this->___showMenuFarm_43 = (bool)L_2;
		bool L_3 = V_0;
		__this->___showMenu_27 = L_3;
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// if (iNo != null)
		RuntimeObject* L_4 = __this->___iNo_54;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// iNo.perform();
		RuntimeObject* L_5 = __this->___iNo_54;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_5);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Menu::initCmd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_initCmd_m2D8AD0914E6F13C29B6A5B508D4F53D406A853C2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Canvas.stypeInt == 0)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___stypeInt_70;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// left = new Command(T.selectt, 0);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_1 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___selectt_37;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_2 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Command__ctor_mBEF90D631F1834B890E5A23E2C5C9D57F7900ABB(L_2, L_1, 0, NULL);
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Menu::startMenuFarm(MyVector,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_startMenuFarm_m064F1F0073284160E9C58A4F803170CC37BEB2EC (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_menuItem, int32_t ___1_x, int32_t ___2_y, int32_t ___3_w, int32_t ___4_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B13_0 = 0.0f;
	Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* G_B13_1 = NULL;
	float G_B12_0 = 0.0f;
	Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* G_B12_1 = NULL;
	float G_B14_0 = 0.0f;
	float G_B14_1 = 0.0f;
	Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* G_B14_2 = NULL;
	{
		// if (menuItem.size() == 0)
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = ___0_menuItem;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// size = menuItem.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_2 = ___0_menuItem;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_2, NULL);
		__this->___size_52 = L_3;
		// xL = Canvas.h;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___h_14;
		__this->___xL_51 = L_4;
		// showMenuFarm = true;
		__this->___showMenuFarm_43 = (bool)1;
		// showMenu = true;
		__this->___showMenu_27 = (bool)1;
		// menuW = size * w + AvMain.hDuBox * 2 + 2;
		int32_t L_5 = __this->___size_52;
		int32_t L_6 = ___3_w;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		__this->___menuW_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), 2));
		// if (menuW > Canvas.w)
		int32_t L_8 = __this->___menuW_33;
		int32_t L_9 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0066;
		}
	}
	{
		// menuW = Canvas.w;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		__this->___menuW_33 = L_10;
	}

IL_0066:
	{
		// menuX = x - menuW / 2;
		int32_t L_11 = ___1_x;
		int32_t L_12 = __this->___menuW_33;
		__this->___menuX_31 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12/2))));
		// menuH = h + AvMain.hDuBox / 2;
		int32_t L_13 = ___4_h;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		__this->___menuH_34 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14/2))));
		// if (menuX < 0)
		int32_t L_15 = __this->___menuX_31;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		// menuX = 0;
		__this->___menuX_31 = 0;
	}

IL_0096:
	{
		// if (Canvas.currentMyScreen != FarmScr.instance)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		il2cpp_codegen_runtime_class_init_inline(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C* L_17 = ((FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_StaticFields*)il2cpp_codegen_static_fields_for(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var))->___instance_40;
		if ((((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_16) == ((RuntimeObject*)(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C*)L_17)))
		{
			goto IL_00ad;
		}
	}
	{
		// MainMenu.gI().avaPaint = null;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_18;
		L_18 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_18);
		L_18->___avaPaint_65 = (AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___avaPaint_65), (void*)(AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)NULL);
	}

IL_00ad:
	{
		// if (MainMenu.gI().avaPaint != null)
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_19;
		L_19 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_19);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_20 = L_19->___avaPaint_65;
		if (!L_20)
		{
			goto IL_0120;
		}
	}
	{
		// menuY = MainMenu.gI().avaPaint.y + AvMain.hNormal + AvMain.hDuBox;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_21;
		L_21 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_21);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_22 = L_21->___avaPaint_65;
		NullCheck(L_22);
		int32_t L_23 = L_22->___y_1;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int8_t L_24 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hNormal_7;
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		__this->___menuY_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, (int32_t)L_24)), L_25));
		// if (menuY + menuH > Canvas.h)
		int32_t L_26 = __this->___menuY_32;
		int32_t L_27 = __this->___menuH_34;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_28 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___h_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27))) <= ((int32_t)L_28)))
		{
			goto IL_01b2;
		}
	}
	{
		// menuY = MainMenu.gI().avaPaint.y - Canvas.hTab - menuH - AvMain.hDuBox * 2;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_29;
		L_29 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_29);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_30 = L_29->___avaPaint_65;
		NullCheck(L_30);
		int32_t L_31 = L_30->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_32 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hTab_55;
		int32_t L_33 = __this->___menuH_34;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_34 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		__this->___menuY_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_31, L_32)), L_33)), ((int32_t)il2cpp_codegen_multiply(L_34, 2))));
		goto IL_01b2;
	}

IL_0120:
	{
		// menuY = (int)((float)(GameMidlet.avatar.y * AvMain.hd) * ((Canvas.currentMyScreen != FarmScr.instance) ? 1f : AvMain.zoom) - AvCamera.gI().yCam - (float)menuH - (float)(AvMain.hDuBox * 2));
		il2cpp_codegen_runtime_class_init_inline(GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_35 = ((GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_StaticFields*)il2cpp_codegen_static_fields_for(GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var))->___avatar_25;
		NullCheck(L_35);
		int32_t L_36 = ((MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD*)L_35)->___y_1;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_38 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		il2cpp_codegen_runtime_class_init_inline(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C* L_39 = ((FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_StaticFields*)il2cpp_codegen_static_fields_for(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var))->___instance_40;
		G_B12_0 = ((float)((int32_t)il2cpp_codegen_multiply(L_36, L_37)));
		G_B12_1 = __this;
		if ((!(((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_38) == ((RuntimeObject*)(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C*)L_39))))
		{
			G_B13_0 = ((float)((int32_t)il2cpp_codegen_multiply(L_36, L_37)));
			G_B13_1 = __this;
			goto IL_0145;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		float L_40 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___zoom_10;
		G_B14_0 = L_40;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_014a;
	}

IL_0145:
	{
		G_B14_0 = (1.0f);
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_014a:
	{
		AvCamera_tEF34F298948A6786C9EB12F6B69254C4D9945000* L_41;
		L_41 = AvCamera_gI_m2E90DB1C3FFADF84F47A781BBEA8F6ADCAD5B8E6(NULL);
		NullCheck(L_41);
		float L_42 = L_41->___yCam_2;
		int32_t L_43 = __this->___menuH_34;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_44 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		NullCheck(G_B14_2);
		G_B14_2->___menuY_32 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(G_B14_1, G_B14_0)), L_42)), ((float)L_43))), ((float)((int32_t)il2cpp_codegen_multiply(L_44, 2))))));
		// if (AvMain.zoom == 2f)
		float L_45 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___zoom_10;
		if ((!(((float)L_45) == ((float)(2.0f)))))
		{
			goto IL_0188;
		}
	}
	{
		// menuY -= 20;
		int32_t L_46 = __this->___menuY_32;
		__this->___menuY_32 = ((int32_t)il2cpp_codegen_subtract(L_46, ((int32_t)20)));
	}

IL_0188:
	{
		// if (menuY < 10 + AvMain.hDuBox + AvMain.hBlack)
		int32_t L_47 = __this->___menuY_32;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_48 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		int8_t L_49 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hBlack_5;
		if ((((int32_t)L_47) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)10), L_48)), (int32_t)L_49)))))
		{
			goto IL_01b2;
		}
	}
	{
		// menuY = 10 + AvMain.hDuBox + AvMain.hBlack;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_50 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		int8_t L_51 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hBlack_5;
		__this->___menuY_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)10), L_50)), (int32_t)L_51));
	}

IL_01b2:
	{
		// if (Canvas.currentMyScreen == HouseScr.me)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_52 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		il2cpp_codegen_runtime_class_init_inline(HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_il2cpp_TypeInfo_var);
		HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939* L_53 = ((HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_StaticFields*)il2cpp_codegen_static_fields_for(HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939_il2cpp_TypeInfo_var))->___me_40;
		if ((!(((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_52) == ((RuntimeObject*)(HouseScr_t9149A5F2A96D7B169F4FBFAA48F0E2A8AFABC939*)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		// menuY = Canvas.hCan - menuH - 30 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_54 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		int32_t L_55 = __this->___menuH_34;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_56 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___menuY_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_54, L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)30), L_56))));
	}

IL_01d9:
	{
		// menuTemY = menuY;
		int32_t L_57 = __this->___menuY_32;
		__this->___menuTemY_35 = L_57;
		// hItem = h;
		int32_t L_58 = ___4_h;
		__this->___hItem_37 = L_58;
		// wItem = w;
		int32_t L_59 = ___3_w;
		__this->___wItem_38 = L_59;
		// list = menuItem;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_60 = ___0_menuItem;
		__this->___list_28 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_28), (void*)L_60);
		// setSelected();
		Menu_setSelected_m89D044108AB99DB1DB2457C02389ECE9E2B837ED(__this, NULL);
		// cmyLim = size * wItem - (menuW - AvMain.hDuBox * 2 - 4);
		int32_t L_61 = __this->___size_52;
		int32_t L_62 = __this->___wItem_38;
		int32_t L_63 = __this->___menuW_33;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_64 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		__this->___cmyLim_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_61, L_62)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)il2cpp_codegen_multiply(L_64, 2)))), 4))));
		// if (cmyLim < 0)
		int32_t L_65 = __this->___cmyLim_48;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_0236;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_48 = 0;
	}

IL_0236:
	{
		// disY = menuW;
		int32_t L_66 = __this->___menuW_33;
		__this->___disY_57 = L_66;
		// cmdClose = null;
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53), (void*)(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL);
		// pos = 0;
		__this->___pos_42 = 0;
		// iNo = null;
		__this->___iNo_54 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iNo_54), (void*)(RuntimeObject*)NULL);
		// xTranTo = 0;
		__this->___xTranTo_50 = 0;
		// Canvas.xTran = 0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = 0;
		// isClose = false;
		__this->___isClose_64 = (bool)0;
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void Menu::setSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setSelected_m89D044108AB99DB1DB2457C02389ECE9E2B837ED (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// if (selected < 0)
		int32_t L_0 = __this->___selected_29;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// selected = 0;
		__this->___selected_29 = 0;
	}

IL_0010:
	{
		// if (selected >= size)
		int32_t L_1 = __this->___selected_29;
		int32_t L_2 = __this->___size_52;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		// selected = 0;
		__this->___selected_29 = 0;
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Menu::setPos(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setPos_mD02FFFADB199C1E0ED10AC57427A40DFB20EEC84 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// menuX = x;
		int32_t L_0 = ___0_x;
		__this->___menuX_31 = L_0;
		// menuY = y;
		int32_t L_1 = ___1_y;
		__this->___menuY_32 = L_1;
		// if (menuX < 0)
		int32_t L_2 = __this->___menuX_31;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// menuX = 0;
		__this->___menuX_31 = 0;
	}

IL_001e:
	{
		// if (menuY < 0)
		int32_t L_3 = __this->___menuY_32;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// menuY = 0;
		__this->___menuY_32 = 0;
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Menu::doFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_doFire_mBD7511DFBBD57578F7A6BEB9FA7471E490A789AC (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Canvas.xTran = 0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = 0;
		// xTranMenu = (xTranTo = 0);
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->___xTranTo_50 = L_0;
		int32_t L_1 = V_1;
		__this->___xTranMenu_49 = L_1;
		// if (cmdClose != null)
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_2 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		// if (cmdClose.action != null)
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_3 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___action_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// cmdClose.action.perform();
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_5 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___action_1;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_6);
		goto IL_007b;
	}

IL_003a:
	{
		// else if (cmdClose.pointer != null)
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_7 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_7);
		AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* L_8 = L_7->___pointer_8;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// cmdClose.pointer.commandActionPointer(cmdClose.indexMenu, cmdClose.subIndex);
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_9 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_9);
		AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* L_10 = L_9->___pointer_8;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_11 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_11);
		int8_t L_12 = L_11->___indexMenu_3;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_13 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_13);
		int8_t L_14 = L_13->___subIndex_4;
		NullCheck(L_10);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void AvMain::commandActionPointer(System.Int32,System.Int32) */, L_10, L_12, L_14);
		goto IL_007b;
	}

IL_006b:
	{
		// commandTab(cmdClose.indexMenu);
		il2cpp_codegen_runtime_class_init_inline(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_15 = ((Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_StaticFields*)il2cpp_codegen_static_fields_for(Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05_il2cpp_TypeInfo_var))->___cmdClose_53;
		NullCheck(L_15);
		int8_t L_16 = L_15->___indexMenu_3;
		VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void AvMain::commandTab(System.Int32) */, __this, L_16);
	}

IL_007b:
	{
		// Command command = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_17 = __this->___list_28;
		int32_t L_18 = __this->___selected_29;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_17, L_18, NULL);
		V_0 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_19, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// if (command.action != null)
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___action_1;
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		// command.action.perform();
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->___action_1;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_23);
		return;
	}

IL_00a6:
	{
		// else if (command.pointer != null)
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_24 = V_0;
		NullCheck(L_24);
		AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* L_25 = L_24->___pointer_8;
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		// command.pointer.commandActionPointer(command.indexMenu, command.subIndex);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_26 = V_0;
		NullCheck(L_26);
		AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C* L_27 = L_26->___pointer_8;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_28 = V_0;
		NullCheck(L_28);
		int8_t L_29 = L_28->___indexMenu_3;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_30 = V_0;
		NullCheck(L_30);
		int8_t L_31 = L_30->___subIndex_4;
		NullCheck(L_27);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void AvMain::commandActionPointer(System.Int32,System.Int32) */, L_27, L_29, L_31);
		return;
	}

IL_00c6:
	{
		// Canvas.currentMyScreen.commandAction(command.indexMenu);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_32 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_33 = V_0;
		NullCheck(L_33);
		int8_t L_34 = L_33->___indexMenu_3;
		NullCheck(L_32);
		VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void AvMain::commandAction(System.Int32) */, L_32, L_34);
		// }
		return;
	}
}
// System.Void Menu::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_updateKey_mFF3A9A53E882EFB779B053F4455CA6D4FA5AB226 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// updateMenuKeyMain();
		Menu_updateMenuKeyMain_mA99F4D0980320A0BEFAD84D19DD86DCE042D73E6(__this, NULL);
		// }
		return;
	}
}
// System.Void Menu::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_click_m11FC878F4CBD2FBB31D16AEC36B3AD3D877F0393 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// int num = hItem;
		int32_t L_0 = __this->___hItem_37;
		V_0 = L_0;
		// if (showMenuFarm)
		bool L_1 = __this->___showMenuFarm_43;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// num = wItem;
		int32_t L_2 = __this->___wItem_38;
		V_0 = L_2;
	}

IL_0016:
	{
		// int num2 = menuTemY + Canvas.transTab;
		int32_t L_3 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		// int num3 = (cmtoY + Canvas.py - num2) / num;
		int32_t L_5 = __this->___cmtoY_44;
		int32_t L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), L_7))/L_8));
		// if (showMenuFarm)
		bool L_9 = __this->___showMenuFarm_43;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// num2 = menuX;
		int32_t L_10 = __this->___menuX_31;
		V_1 = L_10;
		// num3 = (cmtoY + Canvas.px - num2) / num;
		int32_t L_11 = __this->___cmtoY_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_12 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), L_13))/L_14));
	}

IL_0054:
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// if (num3 >= 0 && num3 < size)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_16 = V_2;
		int32_t L_17 = __this->___size_52;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_00b6;
		}
	}
	{
		// selected = num3;
		int32_t L_18 = V_2;
		__this->___selected_29 = L_18;
		// if (!showMenuFarm)
		bool L_19 = __this->___showMenuFarm_43;
		if (L_19)
		{
			goto IL_0093;
		}
	}
	{
		// xTranTo = -menuW;
		int32_t L_20 = __this->___menuW_33;
		__this->___xTranTo_50 = ((-L_20));
		// isClose = true;
		__this->___isClose_64 = (bool)1;
		// isFire = true;
		__this->___isFire_65 = (bool)1;
		return;
	}

IL_0093:
	{
		// isFire = false;
		__this->___isFire_65 = (bool)0;
		// showMenu = (showMenuFarm = false);
		int32_t L_21 = 0;
		V_3 = (bool)L_21;
		__this->___showMenuFarm_43 = (bool)L_21;
		bool L_22 = V_3;
		__this->___showMenu_27 = L_22;
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// doFire();
		Menu_doFire_mBD7511DFBBD57578F7A6BEB9FA7471E490A789AC(__this, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Menu::updateMenuKeyMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_updateMenuKeyMain_mA99F4D0980320A0BEFAD84D19DD86DCE042D73E6 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_68;
		__this->___count_68 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (chan != 0)
		int32_t L_1 = __this->___chan_30;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (!showMenuFarm && CRes.abs(CRes.abs(xTranMenu) - CRes.abs(xTranTo)) < 5)
		bool L_2 = __this->___showMenuFarm_43;
		if (L_2)
		{
			goto IL_041c;
		}
	}
	{
		int32_t L_3 = __this->___xTranMenu_49;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_3, NULL);
		int32_t L_5 = __this->___xTranTo_50;
		int32_t L_6;
		L_6 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_5, NULL);
		int32_t L_7;
		L_7 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(((int32_t)il2cpp_codegen_subtract(L_4, L_6)), NULL);
		if ((((int32_t)L_7) >= ((int32_t)5)))
		{
			goto IL_041c;
		}
	}
	{
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_8 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_61 = L_9;
		// dir = 1;
		__this->___dir_70 = 1;
		// xText = 0;
		__this->___xText_71 = 0;
		// isClick = true;
		__this->___isClick_63 = (bool)1;
		// isG = false;
		__this->___isG_66 = (bool)0;
		// if (Canvas.isPoint(menuX + 4 * AvMain.hd, menuY + 4 * AvMain.hd, menuW - 8 * AvMain.hd, menuH - 8 * AvMain.hd))
		int32_t L_10 = __this->___menuX_31;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_12 = __this->___menuY_32;
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_14 = __this->___menuW_33;
		int32_t L_15 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_16 = __this->___menuH_34;
		int32_t L_17 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		bool L_18;
		L_18 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(4, L_11)))), ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(4, L_13)))), ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)il2cpp_codegen_multiply(8, L_15)))), ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)il2cpp_codegen_multiply(8, L_17)))), NULL);
		if (!L_18)
		{
			goto IL_00e9;
		}
	}
	{
		// if (vY != 0)
		int32_t L_19 = __this->___vY_56;
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// isG = true;
		__this->___isG_66 = (bool)1;
	}

IL_00c4:
	{
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pa = cmtoY;
		int32_t L_20 = __this->___cmtoY_44;
		__this->___pa_58 = L_20;
		// timeDelay = count;
		int64_t L_21 = __this->___count_68;
		__this->___timeDelay_67 = L_21;
		// trans = true;
		__this->___trans_62 = (bool)1;
	}

IL_00e9:
	{
		// if (trans)
		bool L_22 = __this->___trans_62;
		if (!L_22)
		{
			goto IL_0378;
		}
	}
	{
		// int num = pyLast - Canvas.py;
		int32_t L_23 = __this->___pyLast_61;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		// pyLast = Canvas.py;
		int32_t L_25 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_61 = L_25;
		// long num2 = count - timeDelay;
		int64_t L_26 = __this->___count_68;
		int64_t L_27 = __this->___timeDelay_67;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_26, L_27));
		// if (Canvas.isPointerDown)
		bool L_28 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_28)
		{
			goto IL_026a;
		}
	}
	{
		// if (count % 2 == 0)
		int64_t L_29 = __this->___count_68;
		if (((int64_t)(L_29%((int64_t)2))))
		{
			goto IL_0146;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_30 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_59 = L_30;
		// timePoint = count;
		int64_t L_31 = __this->___count_68;
		__this->___timePoint_69 = L_31;
	}

IL_0146:
	{
		// vY = 0;
		__this->___vY_56 = 0;
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_34 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_34)))))
		{
			goto IL_019c;
		}
	}
	{
		// int num3 = menuY + 8 * AvMain.hd;
		int32_t L_35 = __this->___menuY_32;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_36 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)il2cpp_codegen_multiply(8, L_36))));
		// int num4 = hItem;
		int32_t L_37 = __this->___hItem_37;
		V_3 = L_37;
		// int num5 = (cmtoY + Canvas.py - num3) / num4;
		int32_t L_38 = __this->___cmtoY_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_39 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_40))/L_41));
		// if (num5 >= 0 && num5 < size)
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) < ((int32_t)0)))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_43 = V_4;
		int32_t L_44 = __this->___size_52;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_019c;
		}
	}
	{
		// selected = num5;
		int32_t L_45 = V_4;
		__this->___selected_29 = L_45;
	}

IL_019c:
	{
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_47;
		L_47 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_48 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_48)))))
		{
			goto IL_01b9;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_020d;
	}

IL_01b9:
	{
		// else if (num2 > 3 && num2 < 8)
		int64_t L_49 = V_1;
		if ((((int64_t)L_49) <= ((int64_t)((int64_t)3))))
		{
			goto IL_020d;
		}
	}
	{
		int64_t L_50 = V_1;
		if ((((int64_t)L_50) >= ((int64_t)((int64_t)8))))
		{
			goto IL_020d;
		}
	}
	{
		// int num6 = menuY + 8 * AvMain.hd;
		int32_t L_51 = __this->___menuY_32;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_52 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)il2cpp_codegen_multiply(8, L_52))));
		// int num7 = hItem;
		int32_t L_53 = __this->___hItem_37;
		V_6 = L_53;
		// int num8 = (cmtoY + Canvas.py - num6) / num7;
		int32_t L_54 = __this->___cmtoY_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_55 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_56 = V_5;
		int32_t L_57 = V_6;
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), L_56))/L_57));
		// if (num8 >= 0 && num8 < size && !isG)
		int32_t L_58 = V_7;
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_59 = V_7;
		int32_t L_60 = __this->___size_52;
		if ((((int32_t)L_59) >= ((int32_t)L_60)))
		{
			goto IL_020d;
		}
	}
	{
		bool L_61 = __this->___isG_66;
		if (L_61)
		{
			goto IL_020d;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_020d:
	{
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_62 = __this->___cmtoY_44;
		if ((((int32_t)L_62) < ((int32_t)0)))
		{
			goto IL_0224;
		}
	}
	{
		int32_t L_63 = __this->___cmtoY_44;
		int32_t L_64 = __this->___cmyLim_48;
		if ((((int32_t)L_63) <= ((int32_t)L_64)))
		{
			goto IL_0242;
		}
	}

IL_0224:
	{
		// cmtoY = pa + num / 2;
		int32_t L_65 = __this->___pa_58;
		int32_t L_66 = V_0;
		__this->___cmtoY_44 = ((int32_t)il2cpp_codegen_add(L_65, ((int32_t)(L_66/2))));
		// pa = cmtoY;
		int32_t L_67 = __this->___cmtoY_44;
		__this->___pa_58 = L_67;
		goto IL_025e;
	}

IL_0242:
	{
		// cmtoY = pa + num / 2;
		int32_t L_68 = __this->___pa_58;
		int32_t L_69 = V_0;
		__this->___cmtoY_44 = ((int32_t)il2cpp_codegen_add(L_68, ((int32_t)(L_69/2))));
		// pa = cmtoY;
		int32_t L_70 = __this->___cmtoY_44;
		__this->___pa_58 = L_70;
	}

IL_025e:
	{
		// cmy = cmtoY;
		int32_t L_71 = __this->___cmtoY_44;
		__this->___cmy_45 = L_71;
	}

IL_026a:
	{
		// if (Canvas.isPointerRelease && Canvas.isPoint(menuX + 4 * AvMain.hd, menuY + 4 * AvMain.hd, menuW - 8 * AvMain.hd + 12 * AvMain.hd, menuH - 8 * AvMain.hd))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_72 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_72)
		{
			goto IL_0378;
		}
	}
	{
		int32_t L_73 = __this->___menuX_31;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_74 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_75 = __this->___menuY_32;
		int32_t L_76 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_77 = __this->___menuW_33;
		int32_t L_78 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_79 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_80 = __this->___menuH_34;
		int32_t L_81 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(L_73, ((int32_t)il2cpp_codegen_multiply(4, L_74)))), ((int32_t)il2cpp_codegen_add(L_75, ((int32_t)il2cpp_codegen_multiply(4, L_76)))), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_77, ((int32_t)il2cpp_codegen_multiply(8, L_78)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_79)))), ((int32_t)il2cpp_codegen_subtract(L_80, ((int32_t)il2cpp_codegen_multiply(8, L_81)))), NULL);
		if (!L_82)
		{
			goto IL_0378;
		}
	}
	{
		// isG = false;
		__this->___isG_66 = (bool)0;
		// int num9 = (int)(count - timePoint);
		int64_t L_83 = __this->___count_68;
		int64_t L_84 = __this->___timePoint_69;
		V_8 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_83, L_84)));
		// int num10 = dyTran - Canvas.py;
		int32_t L_85 = __this->___dyTran_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_86 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_85, L_86));
		// if (showMenuFarm)
		bool L_87 = __this->___showMenuFarm_43;
		if (!L_87)
		{
			goto IL_02fa;
		}
	}
	{
		// num10 = dyTran - Canvas.px;
		int32_t L_88 = __this->___dyTran_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_89 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_88, L_89));
	}

IL_02fa:
	{
		// if (CRes.abs(num10) > 40 && num9 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_90 = V_9;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_91;
		L_91 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_90, NULL);
		if ((((int32_t)L_91) <= ((int32_t)((int32_t)40))))
		{
			goto IL_0330;
		}
	}
	{
		int32_t L_92 = V_8;
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0330;
		}
	}
	{
		int32_t L_93 = __this->___cmtoY_44;
		if ((((int32_t)L_93) <= ((int32_t)0)))
		{
			goto IL_0330;
		}
	}
	{
		int32_t L_94 = __this->___cmtoY_44;
		int32_t L_95 = __this->___cmyLim_48;
		if ((((int32_t)L_94) >= ((int32_t)L_95)))
		{
			goto IL_0330;
		}
	}
	{
		// vY = num10 / num9 * 10;
		int32_t L_96 = V_9;
		int32_t L_97 = V_8;
		__this->___vY_56 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_96/L_97)), ((int32_t)10)));
	}

IL_0330:
	{
		// timePoint = -1L;
		__this->___timePoint_69 = ((int64_t)(-1));
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_98 = V_0;
		int32_t L_99;
		L_99 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_98, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_100 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_99) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_100)))))
		{
			goto IL_036b;
		}
	}
	{
		// if (num2 <= 4)
		int64_t L_101 = V_1;
		if ((((int64_t)L_101) > ((int64_t)((int64_t)4))))
		{
			goto IL_035d;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen = 5;
		__this->___timeOpen_60 = 5;
		goto IL_036b;
	}

IL_035d:
	{
		// else if (!isHide)
		bool L_102 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_102)
		{
			goto IL_036b;
		}
	}
	{
		// click();
		Menu_click_m11FC878F4CBD2FBB31D16AEC36B3AD3D877F0393(__this, NULL);
	}

IL_036b:
	{
		// trans = false;
		__this->___trans_62 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
	}

IL_0378:
	{
		// if (trans || Canvas.isPoint(menuX + 4 * AvMain.hd, menuY + 4 * AvMain.hd, menuW - 8 * AvMain.hd, menuH - 8 * AvMain.hd) || !Canvas.isPointerRelease || !isClick)
		bool L_103 = __this->___trans_62;
		if (L_103)
		{
			goto IL_03ce;
		}
	}
	{
		int32_t L_104 = __this->___menuX_31;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_105 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_106 = __this->___menuY_32;
		int32_t L_107 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_108 = __this->___menuW_33;
		int32_t L_109 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_110 = __this->___menuH_34;
		int32_t L_111 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_112;
		L_112 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(L_104, ((int32_t)il2cpp_codegen_multiply(4, L_105)))), ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(4, L_107)))), ((int32_t)il2cpp_codegen_subtract(L_108, ((int32_t)il2cpp_codegen_multiply(8, L_109)))), ((int32_t)il2cpp_codegen_subtract(L_110, ((int32_t)il2cpp_codegen_multiply(8, L_111)))), NULL);
		if (L_112)
		{
			goto IL_03ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_113 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_113)
		{
			goto IL_03ce;
		}
	}
	{
		bool L_114 = __this->___isClick_63;
		if (L_114)
		{
			goto IL_03cf;
		}
	}

IL_03ce:
	{
		// return;
		return;
	}

IL_03cf:
	{
		// isG = false;
		__this->___isG_66 = (bool)0;
		// isClick = false;
		__this->___isClick_63 = (bool)0;
		// int num11 = dyTran - Canvas.py;
		int32_t L_115 = __this->___dyTran_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_116 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		// if (!trans)
		bool L_117 = __this->___trans_62;
		if (L_117)
		{
			goto IL_040e;
		}
	}
	{
		// if (!isClose)
		bool L_118 = __this->___isClose_64;
		if (L_118)
		{
			goto IL_0407;
		}
	}
	{
		// xTranTo = -menuW;
		int32_t L_119 = __this->___menuW_33;
		__this->___xTranTo_50 = ((-L_119));
	}

IL_0407:
	{
		// isClose = true;
		__this->___isClose_64 = (bool)1;
	}

IL_040e:
	{
		// trans = false;
		__this->___trans_62 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// return;
		return;
	}

IL_041c:
	{
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_120 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_120)
		{
			goto IL_04ac;
		}
	}
	{
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_121 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_61 = L_121;
		// if (showMenuFarm)
		bool L_122 = __this->___showMenuFarm_43;
		if (!L_122)
		{
			goto IL_0444;
		}
	}
	{
		// pyLast = Canvas.pxLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_123 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pxLast_10;
		__this->___pyLast_61 = L_123;
	}

IL_0444:
	{
		// dir = 1;
		__this->___dir_70 = 1;
		// xText = 0;
		__this->___xText_71 = 0;
		// isClick = true;
		__this->___isClick_63 = (bool)1;
		// if (Canvas.isPoint(menuX - 2, menuTemY - 7 + Canvas.transTab, menuW + 4, menuH + 15))
		int32_t L_124 = __this->___menuX_31;
		int32_t L_125 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_126 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		int32_t L_127 = __this->___menuW_33;
		int32_t L_128 = __this->___menuH_34;
		bool L_129;
		L_129 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(L_124, 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_125, 7)), L_126)), ((int32_t)il2cpp_codegen_add(L_127, 4)), ((int32_t)il2cpp_codegen_add(L_128, ((int32_t)15))), NULL);
		if (!L_129)
		{
			goto IL_04ac;
		}
	}
	{
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pa = cmy;
		int32_t L_130 = __this->___cmy_45;
		__this->___pa_58 = L_130;
		// timeDelay = count;
		int64_t L_131 = __this->___count_68;
		__this->___timeDelay_67 = L_131;
		// trans = true;
		__this->___trans_62 = (bool)1;
	}

IL_04ac:
	{
		// if (trans)
		bool L_132 = __this->___trans_62;
		if (!L_132)
		{
			goto IL_0755;
		}
	}
	{
		// int num12 = pyLast - Canvas.py;
		int32_t L_133 = __this->___pyLast_61;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_134 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_133, L_134));
		// if (showMenuFarm)
		bool L_135 = __this->___showMenuFarm_43;
		if (!L_135)
		{
			goto IL_04e8;
		}
	}
	{
		// num12 = pyLast - Canvas.px;
		int32_t L_136 = __this->___pyLast_61;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_137 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_136, L_137));
		// pyLast = Canvas.px;
		int32_t L_138 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		__this->___pyLast_61 = L_138;
		goto IL_04f3;
	}

IL_04e8:
	{
		// pyLast = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_139 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_61 = L_139;
	}

IL_04f3:
	{
		// long num13 = count - timeDelay;
		int64_t L_140 = __this->___count_68;
		int64_t L_141 = __this->___timeDelay_67;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_140, L_141));
		// if (Canvas.isPointerDown)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_142 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_142)
		{
			goto IL_0666;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_143 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_59 = L_143;
		// if (showMenuFarm)
		bool L_144 = __this->___showMenuFarm_43;
		if (!L_144)
		{
			goto IL_052a;
		}
	}
	{
		// dyTran = Canvas.px;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_145 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		__this->___dyTran_59 = L_145;
	}

IL_052a:
	{
		// timePoint = count;
		int64_t L_146 = __this->___count_68;
		__this->___timePoint_69 = L_146;
		// vY = 0;
		__this->___vY_56 = 0;
		// if (Math.abs(num12) < 10 * AvMain.hd)
		int32_t L_147 = V_10;
		int32_t L_148;
		L_148 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_147, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_149 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_148) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_149)))))
		{
			goto IL_05c5;
		}
	}
	{
		// int num14 = menuTemY;
		int32_t L_150 = __this->___menuTemY_35;
		V_12 = L_150;
		// int num15 = hItem;
		int32_t L_151 = __this->___hItem_37;
		V_13 = L_151;
		// if (showMenuFarm)
		bool L_152 = __this->___showMenuFarm_43;
		if (!L_152)
		{
			goto IL_056e;
		}
	}
	{
		// num15 = wItem;
		int32_t L_153 = __this->___wItem_38;
		V_13 = L_153;
	}

IL_056e:
	{
		// int num16 = (cmtoY + Canvas.py - num14) / num15;
		int32_t L_154 = __this->___cmtoY_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_155 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_156 = V_12;
		int32_t L_157 = V_13;
		V_14 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_154, L_155)), L_156))/L_157));
		// if (showMenuFarm)
		bool L_158 = __this->___showMenuFarm_43;
		if (!L_158)
		{
			goto IL_05ae;
		}
	}
	{
		// num14 = menuX + AvMain.hDuBox / 4;
		int32_t L_159 = __this->___menuX_31;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_160 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		V_12 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)(L_160/4))));
		// num16 = (cmtoY + Canvas.px - num14) / num15;
		int32_t L_161 = __this->___cmtoY_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_162 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		int32_t L_163 = V_12;
		int32_t L_164 = V_13;
		V_14 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_161, L_162)), L_163))/L_164));
	}

IL_05ae:
	{
		// if (num16 >= 0 && num16 < size)
		int32_t L_165 = V_14;
		if ((((int32_t)L_165) < ((int32_t)0)))
		{
			goto IL_05c5;
		}
	}
	{
		int32_t L_166 = V_14;
		int32_t L_167 = __this->___size_52;
		if ((((int32_t)L_166) >= ((int32_t)L_167)))
		{
			goto IL_05c5;
		}
	}
	{
		// selected = num16;
		int32_t L_168 = V_14;
		__this->___selected_29 = L_168;
	}

IL_05c5:
	{
		// if (CRes.abs(Canvas.dx()) >= 10 * AvMain.hd || CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_169;
		L_169 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_170;
		L_170 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_169, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_171 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_170) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_171)))))
		{
			goto IL_05ed;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_172;
		L_172 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_173;
		L_173 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_172, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_174 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_173) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_174)))))
		{
			goto IL_05f6;
		}
	}

IL_05ed:
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_0609;
	}

IL_05f6:
	{
		// else if (num13 > 3 && num13 < 8)
		int64_t L_175 = V_11;
		if ((((int64_t)L_175) <= ((int64_t)((int64_t)3))))
		{
			goto IL_0609;
		}
	}
	{
		int64_t L_176 = V_11;
		if ((((int64_t)L_176) >= ((int64_t)((int64_t)8))))
		{
			goto IL_0609;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_0609:
	{
		// if (cmy < 0 || cmy >= cmyLim)
		int32_t L_177 = __this->___cmy_45;
		if ((((int32_t)L_177) < ((int32_t)0)))
		{
			goto IL_0620;
		}
	}
	{
		int32_t L_178 = __this->___cmy_45;
		int32_t L_179 = __this->___cmyLim_48;
		if ((((int32_t)L_178) < ((int32_t)L_179)))
		{
			goto IL_063f;
		}
	}

IL_0620:
	{
		// cmtoY = pa + num12 / 2;
		int32_t L_180 = __this->___pa_58;
		int32_t L_181 = V_10;
		__this->___cmtoY_44 = ((int32_t)il2cpp_codegen_add(L_180, ((int32_t)(L_181/2))));
		// pa = cmtoY;
		int32_t L_182 = __this->___cmtoY_44;
		__this->___pa_58 = L_182;
		goto IL_065a;
	}

IL_063f:
	{
		// cmtoY = pa + num12;
		int32_t L_183 = __this->___pa_58;
		int32_t L_184 = V_10;
		__this->___cmtoY_44 = ((int32_t)il2cpp_codegen_add(L_183, L_184));
		// pa = cmtoY;
		int32_t L_185 = __this->___cmtoY_44;
		__this->___pa_58 = L_185;
	}

IL_065a:
	{
		// cmy = cmtoY;
		int32_t L_186 = __this->___cmtoY_44;
		__this->___cmy_45 = L_186;
	}

IL_0666:
	{
		// if (Canvas.isPointerRelease && Canvas.isPoint(menuX - 2, menuTemY - 7 + Canvas.transTab, menuW + 4, menuH + 15))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_187 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_187)
		{
			goto IL_0755;
		}
	}
	{
		int32_t L_188 = __this->___menuX_31;
		int32_t L_189 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_190 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		int32_t L_191 = __this->___menuW_33;
		int32_t L_192 = __this->___menuH_34;
		bool L_193;
		L_193 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(L_188, 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_189, 7)), L_190)), ((int32_t)il2cpp_codegen_add(L_191, 4)), ((int32_t)il2cpp_codegen_add(L_192, ((int32_t)15))), NULL);
		if (!L_193)
		{
			goto IL_0755;
		}
	}
	{
		// int num17 = (int)(count - timePoint);
		int64_t L_194 = __this->___count_68;
		int64_t L_195 = __this->___timePoint_69;
		V_15 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_194, L_195)));
		// int num18 = dyTran - Canvas.py;
		int32_t L_196 = __this->___dyTran_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_197 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_196, L_197));
		// if (showMenuFarm)
		bool L_198 = __this->___showMenuFarm_43;
		if (!L_198)
		{
			goto IL_06d5;
		}
	}
	{
		// num18 = dyTran - Canvas.px;
		int32_t L_199 = __this->___dyTran_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_200 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_199, L_200));
	}

IL_06d5:
	{
		// if (CRes.abs(num18) > 40 && num17 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_201 = V_16;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_202;
		L_202 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_201, NULL);
		if ((((int32_t)L_202) <= ((int32_t)((int32_t)40))))
		{
			goto IL_070b;
		}
	}
	{
		int32_t L_203 = V_15;
		if ((((int32_t)L_203) >= ((int32_t)((int32_t)10))))
		{
			goto IL_070b;
		}
	}
	{
		int32_t L_204 = __this->___cmtoY_44;
		if ((((int32_t)L_204) <= ((int32_t)0)))
		{
			goto IL_070b;
		}
	}
	{
		int32_t L_205 = __this->___cmtoY_44;
		int32_t L_206 = __this->___cmyLim_48;
		if ((((int32_t)L_205) >= ((int32_t)L_206)))
		{
			goto IL_070b;
		}
	}
	{
		// vY = num18 / num17 * 10;
		int32_t L_207 = V_16;
		int32_t L_208 = V_15;
		__this->___vY_56 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_207/L_208)), ((int32_t)10)));
	}

IL_070b:
	{
		// timePoint = -1L;
		__this->___timePoint_69 = ((int64_t)(-1));
		// if (Math.abs(num12) < 10 * AvMain.hd)
		int32_t L_209 = V_10;
		int32_t L_210;
		L_210 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_209, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_211 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_210) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_211)))))
		{
			goto IL_0748;
		}
	}
	{
		// if (num13 <= 4)
		int64_t L_212 = V_11;
		if ((((int64_t)L_212) > ((int64_t)((int64_t)4))))
		{
			goto IL_073a;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen = 5;
		__this->___timeOpen_60 = 5;
		goto IL_0748;
	}

IL_073a:
	{
		// else if (!isHide)
		bool L_213 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_213)
		{
			goto IL_0748;
		}
	}
	{
		// click();
		Menu_click_m11FC878F4CBD2FBB31D16AEC36B3AD3D877F0393(__this, NULL);
	}

IL_0748:
	{
		// trans = false;
		__this->___trans_62 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
	}

IL_0755:
	{
		// if (!Canvas.isPoint(menuX - 2, menuTemY - 7 + Canvas.transTab, menuW + 4, menuH + 15) && isClick && Canvas.isPointerRelease)
		int32_t L_214 = __this->___menuX_31;
		int32_t L_215 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_216 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		int32_t L_217 = __this->___menuW_33;
		int32_t L_218 = __this->___menuH_34;
		bool L_219;
		L_219 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(L_214, 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_215, 7)), L_216)), ((int32_t)il2cpp_codegen_add(L_217, 4)), ((int32_t)il2cpp_codegen_add(L_218, ((int32_t)15))), NULL);
		if (L_219)
		{
			goto IL_07a5;
		}
	}
	{
		bool L_220 = __this->___isClick_63;
		if (!L_220)
		{
			goto IL_07a5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_221 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_221)
		{
			goto IL_07a5;
		}
	}
	{
		// close();
		Menu_close_m39D18EC6F835D6DB686F6F55919A3AB29C0954B2(__this, NULL);
		// trans = false;
		__this->___trans_62 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
	}

IL_07a5:
	{
		// }
		return;
	}
}
// System.Void Menu::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_close_m39D18EC6F835D6DB686F6F55919A3AB29C0954B2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// isClick = false;
		__this->___isClick_63 = (bool)0;
		// if (!trans)
		bool L_0 = __this->___trans_62;
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		// showMenu = (showMenuFarm = false);
		int32_t L_1 = 0;
		V_0 = (bool)L_1;
		__this->___showMenuFarm_43 = (bool)L_1;
		bool L_2 = V_0;
		__this->___showMenu_27 = L_2;
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// if (iNo != null)
		RuntimeObject* L_3 = __this->___iNo_54;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// iNo.perform();
		RuntimeObject* L_4 = __this->___iNo_54;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_4);
	}

IL_0038:
	{
		// xTranTo = (xTranMenu = (Canvas.xTran = 0));
		int32_t L_5 = 0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = L_5;
		int32_t L_6 = L_5;
		V_1 = L_6;
		__this->___xTranMenu_49 = L_6;
		int32_t L_7 = V_1;
		__this->___xTranTo_50 = L_7;
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Menu::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_paint_m85EB319044EDA54DC3215CC7FF58A3D14A19DA57 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	{
		// g.translate(0f, xL);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		int32_t L_1 = __this->___xL_51;
		NullCheck(L_0);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_0, (0.0f), ((float)L_1), NULL);
		// paintMenuFarm(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		Menu_paintMenuFarm_m05DE1B2708D382398345788884923C68AE19D9AF(__this, L_2, NULL);
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_3 = ___0_g;
		MenuMain_paint_mB3562100A604E6CC77E1CF8BD87BC19FC92443D2(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Menu::paintMenuFarm(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_paintMenuFarm_m05DE1B2708D382398345788884923C68AE19D9AF (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// Canvas.xTran = 0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = 0;
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// if (Canvas.currentMyScreen != MainMenu.me)
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_2 = ((MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF_il2cpp_TypeInfo_var))->___me_40;
		if ((((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_1) == ((RuntimeObject*)(MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF*)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// Canvas.paint.paintTransBack(g);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		NullCheck(L_3);
		InterfaceActionInvoker1< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* >::Invoke(24 /* System.Void IPaint::paintTransBack(MyGraphics) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0023:
	{
		// if (LoadMap.focusObj != null && MainMenu.gI().avaPaint != null)
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* L_5 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113;
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_6;
		L_6 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_6);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_7 = L_6->___avaPaint_65;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// ((Animal)LoadMap.focusObj).paintIcon(g, MainMenu.gI().avaPaint.x, MainMenu.gI().avaPaint.y, false);
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD* L_8 = ((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___focusObj_113;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_9 = ___0_g;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_10;
		L_10 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_10);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_11 = L_10->___avaPaint_65;
		NullCheck(L_11);
		int32_t L_12 = L_11->___x_0;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_13;
		L_13 = MainMenu_gI_mC4DDF405A2C362FD50FE9864391A1F578801F2E5(NULL);
		NullCheck(L_13);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_14 = L_13->___avaPaint_65;
		NullCheck(L_14);
		int32_t L_15 = L_14->___y_1;
		NullCheck(((Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF*)CastclassClass((RuntimeObject*)L_8, Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF_il2cpp_TypeInfo_var)));
		VirtualActionInvoker4< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, bool >::Invoke(7 /* System.Void Base::paintIcon(MyGraphics,System.Int32,System.Int32,System.Boolean) */, ((Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF*)CastclassClass((RuntimeObject*)L_8, Animal_t99E671E1634332CBB1AE192B404B995A8F5E3FBF_il2cpp_TypeInfo_var)), L_9, L_12, L_15, (bool)0);
	}

IL_0065:
	{
		// g.translate(0f - g.getTranslateX(), 0f - g.getTranslateY());
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_16 = ___0_g;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_17 = ___0_g;
		NullCheck(L_17);
		float L_18;
		L_18 = MyGraphics_getTranslateX_m2DB0508A33DED848DBF27AC195D60001FE6CB920_inline(L_17, NULL);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		NullCheck(L_19);
		float L_20;
		L_20 = MyGraphics_getTranslateY_mBE99771F46EC11F951F2741403EDBC090A19979E_inline(L_19, NULL);
		NullCheck(L_16);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_16, ((float)il2cpp_codegen_subtract((0.0f), L_18)), ((float)il2cpp_codegen_subtract((0.0f), L_20)), NULL);
		// g.setClip(0f, 0f, Canvas.w, Canvas.hCan);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_21 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_22 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_23 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		NullCheck(L_21);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_21, (0.0f), (0.0f), ((float)L_22), ((float)L_23), NULL);
		// Canvas.paint.paintPopupBack(g, menuX, menuY, menuW, menuH + 3 * AvMain.hd, -1, false);
		RuntimeObject* L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_25 = ___0_g;
		int32_t L_26 = __this->___menuX_31;
		int32_t L_27 = __this->___menuY_32;
		int32_t L_28 = __this->___menuW_33;
		int32_t L_29 = __this->___menuH_34;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_30 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_24);
		InterfaceActionInvoker7< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, int32_t, int32_t, int32_t, bool >::Invoke(49 /* System.Void IPaint::paintPopupBack(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_24, L_25, L_26, L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(3, L_30)))), (-1), (bool)0);
		// g.translate(menuX + AvMain.hDuBox + 1, menuY);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_31 = ___0_g;
		int32_t L_32 = __this->___menuX_31;
		int32_t L_33 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		int32_t L_34 = __this->___menuY_32;
		NullCheck(L_31);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_31, ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, L_33)), 1))), ((float)L_34), NULL);
		// g.setClip(0f, 0f, menuW - AvMain.hDuBox * 2 - 2, menuH + 10);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_35 = ___0_g;
		int32_t L_36 = __this->___menuW_33;
		int32_t L_37 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		int32_t L_38 = __this->___menuH_34;
		NullCheck(L_35);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_35, (0.0f), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)))), 2))), ((float)((int32_t)il2cpp_codegen_add(L_38, ((int32_t)10)))), NULL);
		// g.translate(-cmy, 0f);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_39 = ___0_g;
		int32_t L_40 = __this->___cmy_45;
		NullCheck(L_39);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_39, ((float)((-L_40))), (0.0f), NULL);
		// int num = cmy / wItem;
		int32_t L_41 = __this->___cmy_45;
		int32_t L_42 = __this->___wItem_38;
		V_0 = ((int32_t)(L_41/L_42));
		// if (num < 0)
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}
	{
		// num = 0;
		V_0 = 0;
	}

IL_013a:
	{
		// int num2 = num + menuW / wItem + 2;
		int32_t L_44 = V_0;
		int32_t L_45 = __this->___menuW_33;
		int32_t L_46 = __this->___wItem_38;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_44, ((int32_t)(L_45/L_46)))), 2));
		// if (num2 > size)
		int32_t L_47 = V_1;
		int32_t L_48 = __this->___size_52;
		if ((((int32_t)L_47) <= ((int32_t)L_48)))
		{
			goto IL_015c;
		}
	}
	{
		// num2 = size;
		int32_t L_49 = __this->___size_52;
		V_1 = L_49;
	}

IL_015c:
	{
		// if (!isHide)
		bool L_50 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_50)
		{
			goto IL_01cb;
		}
	}
	{
		// g.setColor(16777215);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_51 = ___0_g;
		NullCheck(L_51);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_51, ((int32_t)16777215), NULL);
		// g.fillRect(selected * wItem + 4 * AvMain.hd, menuH / 2 - hItem / 2 + 4 * AvMain.hd, wItem - 8 * AvMain.hd, hItem + 4 * AvMain.hd - 8 * AvMain.hd);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_52 = ___0_g;
		int32_t L_53 = __this->___selected_29;
		int32_t L_54 = __this->___wItem_38;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_55 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_56 = __this->___menuH_34;
		int32_t L_57 = __this->___hItem_37;
		int32_t L_58 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_59 = __this->___wItem_38;
		int32_t L_60 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_61 = __this->___hItem_37;
		int32_t L_62 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_63 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_52);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_52, ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_53, L_54)), ((int32_t)il2cpp_codegen_multiply(4, L_55))))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_56/2)), ((int32_t)(L_57/2)))), ((int32_t)il2cpp_codegen_multiply(4, L_58))))), ((float)((int32_t)il2cpp_codegen_subtract(L_59, ((int32_t)il2cpp_codegen_multiply(8, L_60))))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_61, ((int32_t)il2cpp_codegen_multiply(4, L_62)))), ((int32_t)il2cpp_codegen_multiply(8, L_63))))), NULL);
	}

IL_01cb:
	{
		// for (int i = num; i < num2; i++)
		int32_t L_64 = V_0;
		V_2 = L_64;
		goto IL_020b;
	}

IL_01cf:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_65 = __this->___list_28;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		RuntimeObject* L_67;
		L_67 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_65, L_66, NULL);
		// command.paint(g, i * wItem + wItem / 2, hItem / 2 + 4 * AvMain.hd);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_68 = ___0_g;
		int32_t L_69 = V_2;
		int32_t L_70 = __this->___wItem_38;
		int32_t L_71 = __this->___wItem_38;
		int32_t L_72 = __this->___hItem_37;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_73 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_67, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		VirtualActionInvoker3< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t >::Invoke(5 /* System.Void Command::paint(MyGraphics,System.Int32,System.Int32) */, ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_67, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), L_68, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_69, L_70)), ((int32_t)(L_71/2)))), ((int32_t)il2cpp_codegen_add(((int32_t)(L_72/2)), ((int32_t)il2cpp_codegen_multiply(4, L_73)))));
		// for (int i = num; i < num2; i++)
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_020b:
	{
		// for (int i = num; i < num2; i++)
		int32_t L_75 = V_2;
		int32_t L_76 = V_1;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_01cf;
		}
	}
	{
		// if (selected >= 0 && selected < list.size())
		int32_t L_77 = __this->___selected_29;
		if ((((int32_t)L_77) < ((int32_t)0)))
		{
			goto IL_0337;
		}
	}
	{
		int32_t L_78 = __this->___selected_29;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_79 = __this->___list_28;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_79, NULL);
		if ((((int32_t)L_78) >= ((int32_t)L_80)))
		{
			goto IL_0337;
		}
	}
	{
		// Command command2 = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_81 = __this->___list_28;
		int32_t L_82 = __this->___selected_29;
		NullCheck(L_81);
		RuntimeObject* L_83;
		L_83 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_81, L_82, NULL);
		V_3 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_83, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// g.setClip(cmy - 50 * AvMain.hd, -100f, cmy + Canvas.w + 100 * AvMain.hd, menuH + 200);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_84 = ___0_g;
		int32_t L_85 = __this->___cmy_45;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_86 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_87 = __this->___cmy_45;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_88 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_89 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_90 = __this->___menuH_34;
		NullCheck(L_84);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_84, ((float)((int32_t)il2cpp_codegen_subtract(L_85, ((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_86))))), (-100.0f), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_87, L_88)), ((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_89))))), ((float)((int32_t)il2cpp_codegen_add(L_90, ((int32_t)200)))), NULL);
		// int num3 = selected * wItem + wItem / 2;
		int32_t L_91 = __this->___selected_29;
		int32_t L_92 = __this->___wItem_38;
		int32_t L_93 = __this->___wItem_38;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_91, L_92)), ((int32_t)(L_93/2))));
		// if (size * wItem + AvMain.hDuBox * 2 + 10 > Canvas.w)
		int32_t L_94 = __this->___size_52;
		int32_t L_95 = __this->___wItem_38;
		int32_t L_96 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hDuBox_1;
		int32_t L_97 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_94, L_95)), ((int32_t)il2cpp_codegen_multiply(L_96, 2)))), ((int32_t)10)))) <= ((int32_t)L_97)))
		{
			goto IL_0315;
		}
	}
	{
		// int num4 = Canvas.borderFont.getWidth(command2.caption) / 2;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_98 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___borderFont_41;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_99 = V_3;
		NullCheck(L_99);
		String_t* L_100 = L_99->___caption_0;
		NullCheck(L_98);
		int32_t L_101;
		L_101 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(5 /* System.Int32 FontX::getWidth(System.String) */, L_98, L_100);
		V_5 = ((int32_t)(L_101/2));
		// if (num3 - num4 < cmy)
		int32_t L_102 = V_4;
		int32_t L_103 = V_5;
		int32_t L_104 = __this->___cmy_45;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_102, L_103))) >= ((int32_t)L_104)))
		{
			goto IL_02eb;
		}
	}
	{
		// num3 = cmy + num4;
		int32_t L_105 = __this->___cmy_45;
		int32_t L_106 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_105, L_106));
		goto IL_0315;
	}

IL_02eb:
	{
		// else if (num3 + num4 > Canvas.w + cmy - 15)
		int32_t L_107 = V_4;
		int32_t L_108 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_109 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_110 = __this->___cmy_45;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_109, L_110)), ((int32_t)15))))))
		{
			goto IL_0315;
		}
	}
	{
		// num3 = Canvas.w + cmy - num4 - 15;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_111 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_112 = __this->___cmy_45;
		int32_t L_113 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_111, L_112)), L_113)), ((int32_t)15)));
	}

IL_0315:
	{
		// Canvas.smallFontYellow.drawString(g, command2.caption, num3, -AvMain.hSmall - 3 * AvMain.hd, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_114 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___smallFontYellow_46;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_115 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_116 = V_3;
		NullCheck(L_116);
		String_t* L_117 = L_116->___caption_0;
		int32_t L_118 = V_4;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int8_t L_119 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hSmall_8;
		int32_t L_120 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_114);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_114, L_115, L_117, L_118, ((int32_t)il2cpp_codegen_subtract((int32_t)((-L_119)), ((int32_t)il2cpp_codegen_multiply(3, L_120)))), 2);
	}

IL_0337:
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_121 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_121, NULL);
		// }
		return;
	}
}
// System.Void Menu::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_update_m6A2EE65313D87802E99CB01B648B720CABBEAB5F (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_60;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_60;
		__this->___timeOpen_60 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_60;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		Menu_click_m11FC878F4CBD2FBB31D16AEC36B3AD3D877F0393(__this, NULL);
	}

IL_0025:
	{
		// if (xL != 0)
		int32_t L_3 = __this->___xL_51;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// xL += -xL >> 1;
		int32_t L_4 = __this->___xL_51;
		int32_t L_5 = __this->___xL_51;
		__this->___xL_51 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(((-L_5))>>1))));
	}

IL_0043:
	{
		// if (xL == -1)
		int32_t L_6 = __this->___xL_51;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0053;
		}
	}
	{
		// xL = 0;
		__this->___xL_51 = 0;
	}

IL_0053:
	{
		// if (CRes.abs(CRes.abs(xTranMenu) - CRes.abs(xTranTo)) > 0 && !showMenuFarm)
		int32_t L_7 = __this->___xTranMenu_49;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_7, NULL);
		int32_t L_9 = __this->___xTranTo_50;
		int32_t L_10;
		L_10 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_9, NULL);
		int32_t L_11;
		L_11 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(((int32_t)il2cpp_codegen_subtract(L_8, L_10)), NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		bool L_12 = __this->___showMenuFarm_43;
		if (L_12)
		{
			goto IL_0100;
		}
	}
	{
		// xTranMenu += (xTranTo - xTranMenu) / 3;
		int32_t L_13 = __this->___xTranMenu_49;
		int32_t L_14 = __this->___xTranTo_50;
		int32_t L_15 = __this->___xTranMenu_49;
		__this->___xTranMenu_49 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_14, L_15))/3))));
		// Canvas.xTran = menuW + xTranMenu;
		int32_t L_16 = __this->___menuW_33;
		int32_t L_17 = __this->___xTranMenu_49;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		// if (isClose && (xTranTo - xTranMenu) / 3 == 0)
		bool L_18 = __this->___isClose_64;
		if (!L_18)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_19 = __this->___xTranTo_50;
		int32_t L_20 = __this->___xTranMenu_49;
		if (((int32_t)(((int32_t)il2cpp_codegen_subtract(L_19, L_20))/3)))
		{
			goto IL_010c;
		}
	}
	{
		// trans = false;
		__this->___trans_62 = (bool)0;
		// isClose = false;
		__this->___isClose_64 = (bool)0;
		// isClick = false;
		__this->___isClick_63 = (bool)0;
		// showMenu = false;
		__this->___showMenu_27 = (bool)0;
		// if (isFire)
		bool L_21 = __this->___isFire_65;
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		// isFire = false;
		__this->___isFire_65 = (bool)0;
		// doFire();
		Menu_doFire_mBD7511DFBBD57578F7A6BEB9FA7471E490A789AC(__this, NULL);
	}

IL_00f8:
	{
		// Canvas.xTran = 0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___xTran_58 = 0;
		goto IL_010c;
	}

IL_0100:
	{
		// xTranMenu = xTranTo;
		int32_t L_22 = __this->___xTranTo_50;
		__this->___xTranMenu_49 = L_22;
	}

IL_010c:
	{
		// if (xTranMenu == -1)
		int32_t L_23 = __this->___xTranMenu_49;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_011c;
		}
	}
	{
		// xTranMenu = 0;
		__this->___xTranMenu_49 = 0;
	}

IL_011c:
	{
		// moveCamera();
		Menu_moveCamera_mB84824ED96CF9DF47E0A4E8808AF5E8212FB62C2(__this, NULL);
		// updateMain();
		Menu_updateMain_m38C1C2D510DDF7B4D793F23DD0A8DBD768E7BB9E(__this, NULL);
		// }
		return;
	}
}
// System.Void Menu::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_moveCamera_mB84824ED96CF9DF47E0A4E8808AF5E8212FB62C2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_56;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_45;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_45;
		int32_t L_3 = __this->___cmyLim_48;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_56;
		int32_t L_5 = __this->___vY_56;
		__this->___vY_56 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_45;
		int32_t L_7 = __this->___vY_56;
		__this->___cmy_45 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_56;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_56 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_45;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -disY / 2)
		int32_t L_10 = __this->___cmy_45;
		int32_t L_11 = __this->___disY_57;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -disY / 2;
		int32_t L_12 = __this->___disY_57;
		__this->___cmy_45 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_44 = 0;
		// vY = 0;
		__this->___vY_56 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_45;
		int32_t L_14 = __this->___cmyLim_48;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + disY / 2)
		int32_t L_15 = __this->___cmy_45;
		int32_t L_16 = __this->___cmyLim_48;
		int32_t L_17 = __this->___disY_57;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + disY / 2;
		int32_t L_18 = __this->___cmyLim_48;
		int32_t L_19 = __this->___disY_57;
		__this->___cmy_45 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_48;
		__this->___cmtoY_44 = L_20;
		// vY = 0;
		__this->___vY_56 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_45;
		int32_t L_22 = __this->___vY_56;
		__this->___cmy_45 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_45;
		__this->___cmtoY_44 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_56;
		int32_t L_25 = __this->___vY_56;
		__this->___vY_56 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_56;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_0163;
		}
	}
	{
		// vY = 0;
		__this->___vY_56 = 0;
		goto IL_0163;
	}

IL_0137:
	{
		// else if (cmy < 0)
		int32_t L_27 = __this->___cmy_45;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_44 = 0;
		goto IL_0163;
	}

IL_0149:
	{
		// else if (cmy > cmyLim)
		int32_t L_28 = __this->___cmy_45;
		int32_t L_29 = __this->___cmyLim_48;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_0163;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_30 = __this->___cmyLim_48;
		__this->___cmtoY_44 = L_30;
	}

IL_0163:
	{
		// if (cmy != cmtoY)
		int32_t L_31 = __this->___cmy_45;
		int32_t L_32 = __this->___cmtoY_44;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_01bd;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_33 = __this->___cmtoY_44;
		int32_t L_34 = __this->___cmy_45;
		__this->___cmvy_47 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_33, L_34))<<2));
		// cmdy += cmvy;
		int32_t L_35 = __this->___cmdy_46;
		int32_t L_36 = __this->___cmvy_47;
		__this->___cmdy_46 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		// cmy += cmdy >> 4;
		int32_t L_37 = __this->___cmy_45;
		int32_t L_38 = __this->___cmdy_46;
		__this->___cmy_45 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(L_38>>4))));
		// cmdy &= 15;
		int32_t L_39 = __this->___cmdy_46;
		__this->___cmdy_46 = ((int32_t)(L_39&((int32_t)15)));
	}

IL_01bd:
	{
		// }
		return;
	}
}
// System.Void Menu::updateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_updateMain_m38C1C2D510DDF7B4D793F23DD0A8DBD768E7BB9E (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (menuTemY > menuY)
		int32_t L_0 = __this->___menuTemY_35;
		int32_t L_1 = __this->___menuY_32;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// int num = menuTemY - menuY >> 2;
		int32_t L_2 = __this->___menuTemY_35;
		int32_t L_3 = __this->___menuY_32;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, L_3))>>2));
		// if (num < 1)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		// num = 1;
		V_0 = 1;
	}

IL_0024:
	{
		// menuTemY -= num;
		int32_t L_5 = __this->___menuTemY_35;
		int32_t L_6 = V_0;
		__this->___menuTemY_35 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0032:
	{
		// menuTemY = menuY;
		int32_t L_7 = __this->___menuY_32;
		__this->___menuTemY_35 = L_7;
		// }
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
// System.Void MenuCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter__ctor_mE687536C0F9F699ACF7085AB4D69464C526AD70E (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MenuCenter()
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
		// w = 175 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___w_29 = ((int32_t)il2cpp_codegen_multiply(((int32_t)175), L_0));
		// h = 200 * AvMain.hd;
		int32_t L_1 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___h_30 = ((int32_t)il2cpp_codegen_multiply(((int32_t)200), L_1));
		// hCell = 35 * AvMain.hd;
		int32_t L_2 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hCell_31 = ((int32_t)il2cpp_codegen_multiply(((int32_t)35), L_2));
		// hDis = h - 15 * AvMain.hd;
		int32_t L_3 = __this->___h_30;
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hDis_39 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)15), L_4))));
		// }
		return;
	}
}
// MenuCenter MenuCenter::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* MenuCenter_gI_m0065E10B66F76132267C0E293EECF5B858097158 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MenuCenter());
		MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* L_0 = ((MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_StaticFields*)il2cpp_codegen_static_fields_for(MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* L_1 = (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F*)il2cpp_codegen_object_new(MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuCenter__ctor_mE687536C0F9F699ACF7085AB4D69464C526AD70E(L_1, NULL);
		MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* L_2 = L_1;
		((MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_StaticFields*)il2cpp_codegen_static_fields_for(MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var))->___me_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_StaticFields*)il2cpp_codegen_static_fields_for(MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var))->___me_26), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* L_3 = ((MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_StaticFields*)il2cpp_codegen_static_fields_for(MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F_il2cpp_TypeInfo_var))->___me_26;
		return L_3;
	}
}
// System.Void MenuCenter::startAt(MyVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_startAt_m27AAA0191D489A333816EB9381FCF6E18A41A0B7 (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// x = (Canvas.w - w) / 2;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_1 = __this->___w_29;
		__this->___x_27 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, L_1))/2));
		// y = (Canvas.hCan - h) / 2;
		int32_t L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		int32_t L_3 = __this->___h_30;
		__this->___y_28 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, L_3))/2));
		// this.list = list;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = ___0_list;
		__this->___list_32 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_32), (void*)L_4);
		// cmyLim = list.size() * hCell - hDis;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_5, NULL);
		int32_t L_7 = __this->___hCell_31;
		int32_t L_8 = __this->___hDis_39;
		__this->___cmyLim_37 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_6, L_7)), L_8));
		// if (cmyLim < 0)
		int32_t L_9 = __this->___cmyLim_37;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_37 = 0;
	}

IL_0059:
	{
		// cmy = (cmtoY = 0);
		int32_t L_10 = 0;
		V_0 = L_10;
		__this->___cmtoY_33 = L_10;
		int32_t L_11 = V_0;
		__this->___cmy_34 = L_11;
		// isHide = true;
		__this->___isHide_40 = (bool)1;
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuCenter::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_update_m29B9A05D74434DCAB01CA7F5FFD21CC18A0B90CF (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) 
{
	{
		// if (timeOpen1 > 0)
		int32_t L_0 = __this->___timeOpen1_41;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen1--;
		int32_t L_1 = __this->___timeOpen1_41;
		__this->___timeOpen1_41 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen1 == 0)
		int32_t L_2 = __this->___timeOpen1_41;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click1();
		MenuCenter_click1_m240135AC046BF1A3490DFAB1CC3FBF7866A5939F(__this, NULL);
	}

IL_0025:
	{
		// moveCamera();
		MenuCenter_moveCamera_m83A10267AF021E5199EF373DA5C2141FF8BABF6D(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuCenter::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_moveCamera_m83A10267AF021E5199EF373DA5C2141FF8BABF6D (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_55;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_34;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_34;
		int32_t L_3 = __this->___cmyLim_37;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_55;
		int32_t L_5 = __this->___vY_55;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_34;
		int32_t L_7 = __this->___vY_55;
		__this->___cmy_34 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_55;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_55 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_34;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -h / 2)
		int32_t L_10 = __this->___cmy_34;
		int32_t L_11 = __this->___h_30;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -h / 2;
		int32_t L_12 = __this->___h_30;
		__this->___cmy_34 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_33 = 0;
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_34;
		int32_t L_14 = __this->___cmyLim_37;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + hDis / 2)
		int32_t L_15 = __this->___cmy_34;
		int32_t L_16 = __this->___cmyLim_37;
		int32_t L_17 = __this->___hDis_39;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + hDis / 2;
		int32_t L_18 = __this->___cmyLim_37;
		int32_t L_19 = __this->___hDis_39;
		__this->___cmy_34 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_37;
		__this->___cmtoY_33 = L_20;
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_34;
		int32_t L_22 = __this->___vY_55;
		__this->___cmy_34 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_34;
		__this->___cmtoY_33 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_55;
		int32_t L_25 = __this->___vY_55;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_55;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_016b;
		}
	}
	{
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_016b;
	}

IL_0137:
	{
		// else if (!trans)
		bool L_27 = __this->___trans_42;
		if (L_27)
		{
			goto IL_016b;
		}
	}
	{
		// if (cmy < 0)
		int32_t L_28 = __this->___cmy_34;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_33 = 0;
		goto IL_016b;
	}

IL_0151:
	{
		// else if (cmy > cmyLim)
		int32_t L_29 = __this->___cmy_34;
		int32_t L_30 = __this->___cmyLim_37;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_016b;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_31 = __this->___cmyLim_37;
		__this->___cmtoY_33 = L_31;
	}

IL_016b:
	{
		// if (cmy != cmtoY)
		int32_t L_32 = __this->___cmy_34;
		int32_t L_33 = __this->___cmtoY_33;
		if ((((int32_t)L_32) == ((int32_t)L_33)))
		{
			goto IL_01c5;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_34 = __this->___cmtoY_33;
		int32_t L_35 = __this->___cmy_34;
		__this->___cmvy_36 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_34, L_35))<<2));
		// cmdy += cmvy;
		int32_t L_36 = __this->___cmdy_35;
		int32_t L_37 = __this->___cmvy_36;
		__this->___cmdy_35 = ((int32_t)il2cpp_codegen_add(L_36, L_37));
		// cmy += cmdy >> 4;
		int32_t L_38 = __this->___cmy_34;
		int32_t L_39 = __this->___cmdy_35;
		__this->___cmy_34 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)(L_39>>4))));
		// cmdy &= 15;
		int32_t L_40 = __this->___cmdy_35;
		__this->___cmdy_35 = ((int32_t)(L_40&((int32_t)15)));
	}

IL_01c5:
	{
		// }
		return;
	}
}
// System.Void MenuCenter::click1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_click1_m240135AC046BF1A3490DFAB1CC3FBF7866A5939F (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAB30083AAA4D89852CF64C6002117D47772AE5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Out.println("click1: " + selected);
		int32_t* L_0 = (int32_t*)(&__this->___selected_38);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDAAB30083AAA4D89852CF64C6002117D47772AE5, L_1, NULL);
		Out_println_mDBA56AD04D69071EEC075F3CC3EA4906B485B817(L_2, NULL);
		// trans = false;
		__this->___trans_42 = (bool)0;
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// if (selected < list.size())
		int32_t L_3 = __this->___selected_38;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = __this->___list_32;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_4, NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0055;
		}
	}
	{
		// Command command = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_6 = __this->___list_32;
		int32_t L_7 = __this->___selected_38;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_6, L_7, NULL);
		// command.perform();
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_8, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_8, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void MenuCenter::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_updateKey_m365FFAF546DC48CE561D4A62ED378A47810A9419 (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_52;
		__this->___count_52 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_0089;
		}
	}
	{
		// isClick = true;
		__this->___isClick_44 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// if (Canvas.isPoint(x, y, w, h))
		int32_t L_2 = __this->___x_27;
		int32_t L_3 = __this->___y_28;
		int32_t L_4 = __this->___w_29;
		int32_t L_5 = __this->___h_30;
		bool L_6;
		L_6 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_2, L_3, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		// trans = true;
		__this->___trans_42 = (bool)1;
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_48 = L_7;
		// isG = false;
		__this->___isG_43 = (bool)0;
		// if (vY != 0)
		int32_t L_8 = __this->___vY_55;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// isG = true;
		__this->___isG_43 = (bool)1;
	}

IL_006a:
	{
		// pa = cmtoY;
		int32_t L_9 = __this->___cmtoY_33;
		__this->___pa_45 = L_9;
		// timeDelay = count;
		int64_t L_10 = __this->___count_52;
		__this->___timeDelay_51 = L_10;
		// trans = true;
		__this->___trans_42 = (bool)1;
	}

IL_0089:
	{
		// if (trans)
		bool L_11 = __this->___trans_42;
		if (!L_11)
		{
			goto IL_02e1;
		}
	}
	{
		// int num = pyLast - Canvas.py;
		int32_t L_12 = __this->___pyLast_48;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_13 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		// pyLast = Canvas.py;
		int32_t L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_48 = L_14;
		// long num2 = count - timeDelay;
		int64_t L_15 = __this->___count_52;
		int64_t L_16 = __this->___timeDelay_51;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_15, L_16));
		// if (Canvas.isPointerDown)
		bool L_17 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_17)
		{
			goto IL_01f5;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_18 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_49 = L_18;
		// timePoint = count;
		int64_t L_19 = __this->___count_52;
		__this->___timePoint_53 = L_19;
		// vY = 0;
		__this->___vY_55 = 0;
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_22 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_22)))))
		{
			goto IL_012b;
		}
	}
	{
		// int num3 = y + 10;
		int32_t L_23 = __this->___y_28;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)10)));
		// int num4 = (cmtoY + Canvas.py - num3) / hCell;
		int32_t L_24 = __this->___cmtoY_33;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_25 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_26 = V_2;
		int32_t L_27 = __this->___hCell_31;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_24, L_25)), L_26))/L_27));
		// if (num4 >= 0 && num4 < list.size())
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_29 = V_3;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_30 = __this->___list_32;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_30, NULL);
		if ((((int32_t)L_29) >= ((int32_t)L_31)))
		{
			goto IL_012b;
		}
	}
	{
		// selected = num4;
		int32_t L_32 = V_3;
		__this->___selected_38 = L_32;
	}

IL_012b:
	{
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_35 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_35)))))
		{
			goto IL_0148;
		}
	}
	{
		// isHide = true;
		__this->___isHide_40 = (bool)1;
		goto IL_0198;
	}

IL_0148:
	{
		// else if (num2 > 3 && num2 < 8)
		int64_t L_36 = V_1;
		if ((((int64_t)L_36) <= ((int64_t)((int64_t)3))))
		{
			goto IL_0198;
		}
	}
	{
		int64_t L_37 = V_1;
		if ((((int64_t)L_37) >= ((int64_t)((int64_t)8))))
		{
			goto IL_0198;
		}
	}
	{
		// int num5 = y + 10;
		int32_t L_38 = __this->___y_28;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)10)));
		// int num6 = (cmtoY + Canvas.py - num5) / hCell;
		int32_t L_39 = __this->___cmtoY_33;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_40 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_41 = V_4;
		int32_t L_42 = __this->___hCell_31;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, L_40)), L_41))/L_42));
		// if (num6 >= 0 && num6 < list.size() && !isG)
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_44 = V_5;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_45 = __this->___list_32;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_45, NULL);
		if ((((int32_t)L_44) >= ((int32_t)L_46)))
		{
			goto IL_0198;
		}
	}
	{
		bool L_47 = __this->___isG_43;
		if (L_47)
		{
			goto IL_0198;
		}
	}
	{
		// isHide = false;
		__this->___isHide_40 = (bool)0;
	}

IL_0198:
	{
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_48 = __this->___cmtoY_33;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_49 = __this->___cmtoY_33;
		int32_t L_50 = __this->___cmyLim_37;
		if ((((int32_t)L_49) <= ((int32_t)L_50)))
		{
			goto IL_01cd;
		}
	}

IL_01af:
	{
		// cmtoY = pa + num / 2;
		int32_t L_51 = __this->___pa_45;
		int32_t L_52 = V_0;
		__this->___cmtoY_33 = ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)(L_52/2))));
		// pa = cmtoY;
		int32_t L_53 = __this->___cmtoY_33;
		__this->___pa_45 = L_53;
		goto IL_01e9;
	}

IL_01cd:
	{
		// cmtoY = pa + num / 2;
		int32_t L_54 = __this->___pa_45;
		int32_t L_55 = V_0;
		__this->___cmtoY_33 = ((int32_t)il2cpp_codegen_add(L_54, ((int32_t)(L_55/2))));
		// pa = cmtoY;
		int32_t L_56 = __this->___cmtoY_33;
		__this->___pa_45 = L_56;
	}

IL_01e9:
	{
		// cmy = cmtoY;
		int32_t L_57 = __this->___cmtoY_33;
		__this->___cmy_34 = L_57;
	}

IL_01f5:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_58 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_58)
		{
			goto IL_02e1;
		}
	}
	{
		// trans = false;
		__this->___trans_42 = (bool)0;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// int num7 = 0;
		V_6 = 0;
		// isG = false;
		__this->___isG_43 = (bool)0;
		// int num8 = (int)(count - timePoint);
		int64_t L_59 = __this->___count_52;
		int64_t L_60 = __this->___timePoint_53;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_59, L_60)));
		// int num9 = dyTran - Canvas.py;
		int32_t L_61 = __this->___dyTran_49;
		int32_t L_62 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_61, L_62));
		// if (CRes.abs(num9) > 40 && num8 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_63 = V_8;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_63, NULL);
		if ((((int32_t)L_64) <= ((int32_t)((int32_t)40))))
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) >= ((int32_t)((int32_t)10))))
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_66 = __this->___cmtoY_33;
		if ((((int32_t)L_66) <= ((int32_t)0)))
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_67 = __this->___cmtoY_33;
		int32_t L_68 = __this->___cmyLim_37;
		if ((((int32_t)L_67) >= ((int32_t)L_68)))
		{
			goto IL_026a;
		}
	}
	{
		// vY = num9 / num8 * 10;
		int32_t L_69 = V_8;
		int32_t L_70 = V_7;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_69/L_70)), ((int32_t)10)));
	}

IL_026a:
	{
		// if (CRes.abs(Canvas.dy()) > 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_71;
		L_71 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_72;
		L_72 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_71, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_73 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_73)))))
		{
			goto IL_0281;
		}
	}
	{
		// num7 = 1;
		V_6 = 1;
	}

IL_0281:
	{
		// timePoint = -1L;
		__this->___timePoint_53 = ((int64_t)(-1));
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_74 = V_0;
		int32_t L_75;
		L_75 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_74, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_76 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_75) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_76)))))
		{
			goto IL_02c2;
		}
	}
	{
		// if (num2 <= 4)
		int64_t L_77 = V_1;
		if ((((int64_t)L_77) > ((int64_t)((int64_t)4))))
		{
			goto IL_02b1;
		}
	}
	{
		// isHide = false;
		__this->___isHide_40 = (bool)0;
		// timeOpen1 = 5;
		__this->___timeOpen1_41 = 5;
		// num7 = 1;
		V_6 = 1;
		goto IL_02c2;
	}

IL_02b1:
	{
		// else if (!isHide)
		bool L_78 = __this->___isHide_40;
		if (L_78)
		{
			goto IL_02c2;
		}
	}
	{
		// click1();
		MenuCenter_click1_m240135AC046BF1A3490DFAB1CC3FBF7866A5939F(__this, NULL);
		// num7 = 1;
		V_6 = 1;
	}

IL_02c2:
	{
		// trans = false;
		__this->___trans_42 = (bool)0;
		// isClick = false;
		__this->___isClick_44 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// if (num7 == 0)
		int32_t L_79 = V_6;
		if (L_79)
		{
			goto IL_02e1;
		}
	}
	{
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// return;
		return;
	}

IL_02e1:
	{
		// if (isClick && Canvas.isPointerRelease)
		bool L_80 = __this->___isClick_44;
		if (!L_80)
		{
			goto IL_0303;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_81 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_81)
		{
			goto IL_0303;
		}
	}
	{
		// isClick = false;
		__this->___isClick_44 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// Canvas.menuMain = null;
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
	}

IL_0303:
	{
		// }
		return;
	}
}
// System.Void MenuCenter::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuCenter_paint_m3604C99B47458C08DE6FC4FC0ED0414E087922A4 (MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// Canvas.paint.paintPopupBack(g, x, y, w, h, -1, false);
		RuntimeObject* L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		int32_t L_3 = __this->___x_27;
		int32_t L_4 = __this->___y_28;
		int32_t L_5 = __this->___w_29;
		int32_t L_6 = __this->___h_30;
		NullCheck(L_1);
		InterfaceActionInvoker7< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, int32_t, int32_t, int32_t, bool >::Invoke(49 /* System.Void IPaint::paintPopupBack(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5, L_6, (-1), (bool)0);
		// g.translate(x, y + 5 * AvMain.hd);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_7 = ___0_g;
		int32_t L_8 = __this->___x_27;
		int32_t L_9 = __this->___y_28;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_7);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_7, ((float)L_8), ((float)((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_multiply(5, L_10))))), NULL);
		// g.setClip(0f, 0f, w, hDis);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_11 = ___0_g;
		int32_t L_12 = __this->___w_29;
		int32_t L_13 = __this->___hDis_39;
		NullCheck(L_11);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_11, (0.0f), (0.0f), ((float)L_12), ((float)L_13), NULL);
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_14 = ___0_g;
		int32_t L_15 = __this->___cmy_34;
		NullCheck(L_14);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_14, (0.0f), ((float)((-L_15))), NULL);
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_0118;
	}

IL_007f:
	{
		// if (i == selected && !isHide)
		int32_t L_16 = V_0;
		int32_t L_17 = __this->___selected_38;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_18 = __this->___isHide_40;
		if (L_18)
		{
			goto IL_00ca;
		}
	}
	{
		// g.setColor(16777215);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		NullCheck(L_19);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_19, ((int32_t)16777215), NULL);
		// g.fillRect(10 * AvMain.hd, i * hCell, w - 20 * AvMain.hd, hCell);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_20 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_21 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___hCell_31;
		int32_t L_24 = __this->___w_29;
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_26 = __this->___hCell_31;
		NullCheck(L_20);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_20, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_21))), ((float)((int32_t)il2cpp_codegen_multiply(L_22, L_23))), ((float)((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_25))))), ((float)L_26), NULL);
	}

IL_00ca:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_27 = __this->___list_32;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_27, L_28, NULL);
		V_1 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_29, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// Canvas.normalFont.drawString(g, command.caption, w / 2, hCell / 2 + i * hCell - Canvas.normalFont.getHeight() / 2, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_30 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_31 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = L_32->___caption_0;
		int32_t L_34 = __this->___w_29;
		int32_t L_35 = __this->___hCell_31;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->___hCell_31;
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_38 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_38);
		NullCheck(L_30);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_30, L_31, L_33, ((int32_t)(L_34/2)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(L_35/2)), ((int32_t)il2cpp_codegen_multiply(L_36, L_37)))), ((int32_t)(L_39/2)))), 2);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0118:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_41 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_42 = __this->___list_32;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_42, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_007f;
		}
	}
	{
		// }
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
// MenuIcon MenuIcon::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* MenuIcon_gI_m3DCCE1C4ABAD325465E68B69AC25827A8B11BA31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MenuIcon());
		MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* L_0 = ((MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_StaticFields*)il2cpp_codegen_static_fields_for(MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* L_1 = (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9*)il2cpp_codegen_object_new(MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuIcon__ctor_m0CC94F300CC395FEC365E7FC51D460694CD94137(L_1, NULL);
		MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* L_2 = L_1;
		((MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_StaticFields*)il2cpp_codegen_static_fields_for(MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var))->___me_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_StaticFields*)il2cpp_codegen_static_fields_for(MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var))->___me_26), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* L_3 = ((MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_StaticFields*)il2cpp_codegen_static_fields_for(MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9_il2cpp_TypeInfo_var))->___me_26;
		return L_3;
	}
}
// System.Void MenuIcon::setInfo(MyVector,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_setInfo_m7893A92147A3314763CC8A888B4A955085C222FB (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_list, int32_t ___1_xCen, int32_t ___2_yCen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral321F0E984A373499381A63B327E068CF1A41FCDC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (imgFocus == null)
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_0 = __this->___imgFocus_40;
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		// imgFocus = new Image[2];
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_1 = (ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)SZArrayNew(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___imgFocus_40 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgFocus_40), (void*)L_1);
		// for (int i = 0; i < 2; i++)
		V_0 = 0;
		goto IL_003f;
	}

IL_0018:
	{
		// imgFocus[i] = Image.createImagePNG(T.getPath() + "/iconMenu/focusAction" + i);
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_2 = __this->___imgFocus_40;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, _stringLiteral321F0E984A373499381A63B327E068CF1A41FCDC, L_5, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_7;
		L_7 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_6, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_7);
		// for (int i = 0; i < 2; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0018;
		}
	}

IL_0043:
	{
		// this.list = list;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_10 = ___0_list;
		__this->___list_27 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_27), (void*)L_10);
		// tranPos = new PositionTran[list.size()];
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_11, NULL);
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_13 = (PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0*)(PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0*)SZArrayNew(PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___tranPos_39 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tranPos_39), (void*)L_13);
		// hCell = 45 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hCell_31 = ((int32_t)il2cpp_codegen_multiply(((int32_t)45), L_14));
		// xCenter = xCen;
		int32_t L_15 = ___1_xCen;
		__this->___xCenter_28 = L_15;
		// yCenter = yCen;
		int32_t L_16 = ___2_yCen;
		__this->___yCenter_29 = L_16;
		// for (int j = 0; j < list.size(); j++)
		V_1 = 0;
		goto IL_00d6;
	}

IL_007b:
	{
		// tranPos[j] = new PositionTran(xCenter, yCenter);
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_17 = __this->___tranPos_39;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___xCenter_28;
		int32_t L_20 = __this->___yCenter_29;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_21 = (PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755*)il2cpp_codegen_object_new(PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		PositionTran__ctor_mC6C594071707677D64FFC1F6F0EEF9E710122222(L_21, L_19, L_20, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755*)L_21);
		// tranPos[j].xTo = tranPos[j].x;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_22 = __this->___tranPos_39;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_26 = __this->___tranPos_39;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		int32_t L_30 = L_29->___x_0;
		NullCheck(L_25);
		L_25->___xTo_2 = L_30;
		// tranPos[j].yTo = 25 * AvMain.hd + Canvas.countTab + j * hCell;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_31 = __this->___tranPos_39;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_35 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_36 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		int32_t L_37 = V_1;
		int32_t L_38 = __this->___hCell_31;
		NullCheck(L_34);
		L_34->___yTo_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_35)), L_36)), ((int32_t)il2cpp_codegen_multiply(L_37, L_38))));
		// for (int j = 0; j < list.size(); j++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d6:
	{
		// for (int j = 0; j < list.size(); j++)
		int32_t L_40 = V_1;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_41 = ___0_list;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_41, NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_007b;
		}
	}
	{
		// wCell = 30 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_43 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___wCell_30 = ((int32_t)il2cpp_codegen_multiply(((int32_t)30), L_43));
		// hDis = Canvas.hCan;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_44 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		__this->___hDis_37 = L_44;
		// cmyLim = list.size() * hCell - (hDis - Canvas.countTab * 2);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_45 = ___0_list;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_45, NULL);
		int32_t L_47 = __this->___hCell_31;
		int32_t L_48 = __this->___hDis_37;
		int32_t L_49 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		__this->___cmyLim_36 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_46, L_47)), ((int32_t)il2cpp_codegen_subtract(L_48, ((int32_t)il2cpp_codegen_multiply(L_49, 2))))));
		// if (cmyLim < 0)
		int32_t L_50 = __this->___cmyLim_36;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_012a;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_36 = 0;
	}

IL_012a:
	{
		// cmy = (cmtoY = 0);
		int32_t L_51 = 0;
		V_2 = L_51;
		__this->___cmtoY_32 = L_51;
		int32_t L_52 = V_2;
		__this->___cmy_33 = L_52;
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuIcon::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_update_mCE027200388969788711EB946AFDBC709A89CB13 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (timeOpen1 > 0)
		int32_t L_0 = __this->___timeOpen1_41;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen1--;
		int32_t L_1 = __this->___timeOpen1_41;
		__this->___timeOpen1_41 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen1 == 0)
		int32_t L_2 = __this->___timeOpen1_41;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click1();
		MenuIcon_click1_mE22746D475B673D9F2775975038CB006EF4CD703(__this, NULL);
	}

IL_0025:
	{
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_003a;
	}

IL_0029:
	{
		// tranPos[i].update();
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_3 = __this->___tranPos_39;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		PositionTran_update_m04DF458D4243C6747AEB8C4012F59388B25D0268(L_6, NULL);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_8 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_9 = __this->___list_27;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0029;
		}
	}
	{
		// moveCamera();
		MenuIcon_moveCamera_m5BBBFDF7CD1BE9501718D70BD74C3F3E17929126(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuIcon::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_moveCamera_m5BBBFDF7CD1BE9501718D70BD74C3F3E17929126 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_55;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_33;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_33;
		int32_t L_3 = __this->___cmyLim_36;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_55;
		int32_t L_5 = __this->___vY_55;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_33;
		int32_t L_7 = __this->___vY_55;
		__this->___cmy_33 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_55;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_55 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_33;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -hDis / 2)
		int32_t L_10 = __this->___cmy_33;
		int32_t L_11 = __this->___hDis_37;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -hDis / 2;
		int32_t L_12 = __this->___hDis_37;
		__this->___cmy_33 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_32 = 0;
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_33;
		int32_t L_14 = __this->___cmyLim_36;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + hDis / 2)
		int32_t L_15 = __this->___cmy_33;
		int32_t L_16 = __this->___cmyLim_36;
		int32_t L_17 = __this->___hDis_37;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + hDis / 2;
		int32_t L_18 = __this->___cmyLim_36;
		int32_t L_19 = __this->___hDis_37;
		__this->___cmy_33 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_36;
		__this->___cmtoY_32 = L_20;
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_33;
		int32_t L_22 = __this->___vY_55;
		__this->___cmy_33 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_33;
		__this->___cmtoY_32 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_55;
		int32_t L_25 = __this->___vY_55;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_55;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_016b;
		}
	}
	{
		// vY = 0;
		__this->___vY_55 = 0;
		goto IL_016b;
	}

IL_0137:
	{
		// else if (!trans)
		bool L_27 = __this->___trans_42;
		if (L_27)
		{
			goto IL_016b;
		}
	}
	{
		// if (cmy < 0)
		int32_t L_28 = __this->___cmy_33;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_32 = 0;
		goto IL_016b;
	}

IL_0151:
	{
		// else if (cmy > cmyLim)
		int32_t L_29 = __this->___cmy_33;
		int32_t L_30 = __this->___cmyLim_36;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_016b;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_31 = __this->___cmyLim_36;
		__this->___cmtoY_32 = L_31;
	}

IL_016b:
	{
		// if (cmy != cmtoY)
		int32_t L_32 = __this->___cmy_33;
		int32_t L_33 = __this->___cmtoY_32;
		if ((((int32_t)L_32) == ((int32_t)L_33)))
		{
			goto IL_01c5;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_34 = __this->___cmtoY_32;
		int32_t L_35 = __this->___cmy_33;
		__this->___cmvy_35 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_34, L_35))<<2));
		// cmdy += cmvy;
		int32_t L_36 = __this->___cmdy_34;
		int32_t L_37 = __this->___cmvy_35;
		__this->___cmdy_34 = ((int32_t)il2cpp_codegen_add(L_36, L_37));
		// cmy += cmdy >> 4;
		int32_t L_38 = __this->___cmy_33;
		int32_t L_39 = __this->___cmdy_34;
		__this->___cmy_33 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)(L_39>>4))));
		// cmdy &= 15;
		int32_t L_40 = __this->___cmdy_34;
		__this->___cmdy_34 = ((int32_t)(L_40&((int32_t)15)));
	}

IL_01c5:
	{
		// }
		return;
	}
}
// System.Void MenuIcon::click1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_click1_mE22746D475B673D9F2775975038CB006EF4CD703 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trans = false;
		__this->___trans_42 = (bool)0;
		// Command command = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___list_27;
		int32_t L_1 = __this->___selected_38;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		// command.perform();
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), NULL);
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// }
		return;
	}
}
// System.Void MenuIcon::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_updateKey_mD9053CA860834C5F66B31C8800C79ED5E850E0D9 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_52;
		__this->___count_52 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_009d;
		}
	}
	{
		// isClick = true;
		__this->___isClick_44 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// if (Canvas.isPoint(xCenter - wCell - wCell / 2, Canvas.countTab, wCell * 3, hDis))
		int32_t L_2 = __this->___xCenter_28;
		int32_t L_3 = __this->___wCell_30;
		int32_t L_4 = __this->___wCell_30;
		int32_t L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		int32_t L_6 = __this->___wCell_30;
		int32_t L_7 = __this->___hDis_37;
		bool L_8;
		L_8 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), ((int32_t)(L_4/2)))), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 3)), L_7, NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}
	{
		// trans = true;
		__this->___trans_42 = (bool)1;
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_48 = L_9;
		// isG = false;
		__this->___isG_43 = (bool)0;
		// if (vY != 0)
		int32_t L_10 = __this->___vY_55;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		// isG = true;
		__this->___isG_43 = (bool)1;
	}

IL_007e:
	{
		// pa = cmtoY;
		int32_t L_11 = __this->___cmtoY_32;
		__this->___pa_45 = L_11;
		// timeDelay = count;
		int64_t L_12 = __this->___count_52;
		__this->___timeDelay_51 = L_12;
		// trans = true;
		__this->___trans_42 = (bool)1;
	}

IL_009d:
	{
		// if (trans)
		bool L_13 = __this->___trans_42;
		if (!L_13)
		{
			goto IL_02f8;
		}
	}
	{
		// int num = pyLast - Canvas.py;
		int32_t L_14 = __this->___pyLast_48;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		// pyLast = Canvas.py;
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_48 = L_16;
		// long num2 = count - timeDelay;
		int64_t L_17 = __this->___count_52;
		int64_t L_18 = __this->___timeDelay_51;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_17, L_18));
		// if (Canvas.isPointerDown)
		bool L_19 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_19)
		{
			goto IL_020c;
		}
	}
	{
		// if (count % 2 == 0)
		int64_t L_20 = __this->___count_52;
		if (((int64_t)(L_20%((int64_t)2))))
		{
			goto IL_00fa;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_49 = L_21;
		// timePoint = count;
		int64_t L_22 = __this->___count_52;
		__this->___timePoint_53 = L_22;
	}

IL_00fa:
	{
		// vY = 0;
		__this->___vY_55 = 0;
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_25)))))
		{
			goto IL_0146;
		}
	}
	{
		// int countTab = Canvas.countTab;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_26 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		V_2 = L_26;
		// int num3 = (cmtoY + Canvas.py - countTab) / hCell;
		int32_t L_27 = __this->___cmtoY_32;
		int32_t L_28 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_29 = V_2;
		int32_t L_30 = __this->___hCell_31;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_27, L_28)), L_29))/L_30));
		// if (num3 >= 0 && num3 < list.size())
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_32 = V_3;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_33 = __this->___list_27;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_33, NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_0146;
		}
	}
	{
		// selected = num3;
		int32_t L_35 = V_3;
		__this->___selected_38 = L_35;
	}

IL_0146:
	{
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_38 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_38)))))
		{
			goto IL_0163;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_01af;
	}

IL_0163:
	{
		// else if (num2 > 3 && num2 < 8)
		int64_t L_39 = V_1;
		if ((((int64_t)L_39) <= ((int64_t)((int64_t)3))))
		{
			goto IL_01af;
		}
	}
	{
		int64_t L_40 = V_1;
		if ((((int64_t)L_40) >= ((int64_t)((int64_t)8))))
		{
			goto IL_01af;
		}
	}
	{
		// int countTab2 = Canvas.countTab;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_41 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		V_4 = L_41;
		// int num4 = (cmtoY + Canvas.py - countTab2) / hCell;
		int32_t L_42 = __this->___cmtoY_32;
		int32_t L_43 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_44 = V_4;
		int32_t L_45 = __this->___hCell_31;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_42, L_43)), L_44))/L_45));
		// if (num4 >= 0 && num4 < list.size() && !isG)
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_47 = V_5;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_48 = __this->___list_27;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_48, NULL);
		if ((((int32_t)L_47) >= ((int32_t)L_49)))
		{
			goto IL_01af;
		}
	}
	{
		bool L_50 = __this->___isG_43;
		if (L_50)
		{
			goto IL_01af;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_01af:
	{
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_51 = __this->___cmtoY_32;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_01c6;
		}
	}
	{
		int32_t L_52 = __this->___cmtoY_32;
		int32_t L_53 = __this->___cmyLim_36;
		if ((((int32_t)L_52) <= ((int32_t)L_53)))
		{
			goto IL_01e4;
		}
	}

IL_01c6:
	{
		// cmtoY = pa + num / 2;
		int32_t L_54 = __this->___pa_45;
		int32_t L_55 = V_0;
		__this->___cmtoY_32 = ((int32_t)il2cpp_codegen_add(L_54, ((int32_t)(L_55/2))));
		// pa = cmtoY;
		int32_t L_56 = __this->___cmtoY_32;
		__this->___pa_45 = L_56;
		goto IL_0200;
	}

IL_01e4:
	{
		// cmtoY = pa + num / 2;
		int32_t L_57 = __this->___pa_45;
		int32_t L_58 = V_0;
		__this->___cmtoY_32 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)(L_58/2))));
		// pa = cmtoY;
		int32_t L_59 = __this->___cmtoY_32;
		__this->___pa_45 = L_59;
	}

IL_0200:
	{
		// cmy = cmtoY;
		int32_t L_60 = __this->___cmtoY_32;
		__this->___cmy_33 = L_60;
	}

IL_020c:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_61 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_61)
		{
			goto IL_02f8;
		}
	}
	{
		// trans = false;
		__this->___trans_42 = (bool)0;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// int num5 = 0;
		V_6 = 0;
		// isG = false;
		__this->___isG_43 = (bool)0;
		// int num6 = (int)(count - timePoint);
		int64_t L_62 = __this->___count_52;
		int64_t L_63 = __this->___timePoint_53;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_62, L_63)));
		// int num7 = dyTran - Canvas.py;
		int32_t L_64 = __this->___dyTran_49;
		int32_t L_65 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_64, L_65));
		// if (CRes.abs(num7) > 40 && num6 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_66 = V_8;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_67;
		L_67 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_66, NULL);
		if ((((int32_t)L_67) <= ((int32_t)((int32_t)40))))
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_68 = V_7;
		if ((((int32_t)L_68) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_69 = __this->___cmtoY_32;
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_0281;
		}
	}
	{
		int32_t L_70 = __this->___cmtoY_32;
		int32_t L_71 = __this->___cmyLim_36;
		if ((((int32_t)L_70) >= ((int32_t)L_71)))
		{
			goto IL_0281;
		}
	}
	{
		// vY = num7 / num6 * 10;
		int32_t L_72 = V_8;
		int32_t L_73 = V_7;
		__this->___vY_55 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_72/L_73)), ((int32_t)10)));
	}

IL_0281:
	{
		// if (CRes.abs(Canvas.dy()) > 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_74;
		L_74 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_75;
		L_75 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_74, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_76 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_75) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_76)))))
		{
			goto IL_0298;
		}
	}
	{
		// num5 = 1;
		V_6 = 1;
	}

IL_0298:
	{
		// timePoint = -1L;
		__this->___timePoint_53 = ((int64_t)(-1));
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_77, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_79 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_78) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_79)))))
		{
			goto IL_02d9;
		}
	}
	{
		// if (num2 <= 4)
		int64_t L_80 = V_1;
		if ((((int64_t)L_80) > ((int64_t)((int64_t)4))))
		{
			goto IL_02c8;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen1 = 5;
		__this->___timeOpen1_41 = 5;
		// num5 = 1;
		V_6 = 1;
		goto IL_02d9;
	}

IL_02c8:
	{
		// else if (!isHide)
		bool L_81 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_81)
		{
			goto IL_02d9;
		}
	}
	{
		// click1();
		MenuIcon_click1_mE22746D475B673D9F2775975038CB006EF4CD703(__this, NULL);
		// num5 = 1;
		V_6 = 1;
	}

IL_02d9:
	{
		// trans = false;
		__this->___trans_42 = (bool)0;
		// isClick = false;
		__this->___isClick_44 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// if (num5 == 0)
		int32_t L_82 = V_6;
		if (L_82)
		{
			goto IL_02f8;
		}
	}
	{
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// return;
		return;
	}

IL_02f8:
	{
		// if (isClick && Canvas.isPointerRelease)
		bool L_83 = __this->___isClick_44;
		if (!L_83)
		{
			goto IL_031a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_84 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_84)
		{
			goto IL_031a;
		}
	}
	{
		// isClick = false;
		__this->___isClick_44 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// Canvas.menuMain = null;
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
	}

IL_031a:
	{
		// base.updateKey();
		MenuMain_updateKey_m8AA3EED053B7AFC081B4368322461BA1C9DFB727(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuIcon::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon_paint_mCB875346AC84BE4FC37E9A828D5C7A7E4AE99C11 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	{
		// Canvas.resetTransNotZoom(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTransNotZoom_mD186DF530504A96C915B3E254A82E22A635EBE32(L_0, NULL);
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		int32_t L_2 = __this->___cmy_33;
		NullCheck(L_1);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_1, (0.0f), ((float)((-L_2))), NULL);
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_00fd;
	}

IL_0020:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_3 = __this->___list_27;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_3, L_4, NULL);
		V_1 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_5, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// if (!isHide && i == selected)
		bool L_6 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_6)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___selected_38;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0070;
		}
	}
	{
		// g.drawImage(imgFocus[1], tranPos[i].x, tranPos[i].y, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_9 = ___0_g;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_10 = __this->___imgFocus_40;
		NullCheck(L_10);
		int32_t L_11 = 1;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_13 = __this->___tranPos_39;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___x_0;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_18 = __this->___tranPos_39;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = L_21->___y_1;
		NullCheck(L_9);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_9, L_12, ((float)L_17), ((float)L_22), 3, NULL);
		goto IL_009b;
	}

IL_0070:
	{
		// g.drawImage(imgFocus[0], tranPos[i].x, tranPos[i].y, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_23 = ___0_g;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_24 = __this->___imgFocus_40;
		NullCheck(L_24);
		int32_t L_25 = 0;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_27 = __this->___tranPos_39;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		int32_t L_31 = L_30->___x_0;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_32 = __this->___tranPos_39;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		int32_t L_36 = L_35->___y_1;
		NullCheck(L_23);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_23, L_26, ((float)L_31), ((float)L_36), 3, NULL);
	}

IL_009b:
	{
		// Canvas.smallFontYellow.drawString(g, command.caption, tranPos[i].x, tranPos[i].y - 20 * AvMain.hd - AvMain.hSmall / 2, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_37 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___smallFontYellow_46;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_38 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_39 = V_1;
		NullCheck(L_39);
		String_t* L_40 = L_39->___caption_0;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_41 = __this->___tranPos_39;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		int32_t L_45 = L_44->___x_0;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_46 = __this->___tranPos_39;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		int32_t L_50 = L_49->___y_1;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_51 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int8_t L_52 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hSmall_8;
		NullCheck(L_37);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_37, L_38, L_40, L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_51)))), ((int32_t)((int32_t)L_52/2)))), 2);
		// command.paint(g, tranPos[i].x, tranPos[i].y);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_53 = V_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_54 = ___0_g;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_55 = __this->___tranPos_39;
		int32_t L_56 = V_0;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		int32_t L_59 = L_58->___x_0;
		PositionTranU5BU5D_t6DB5B418D4180B0472B1D333649D106F82C9BBC0* L_60 = __this->___tranPos_39;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		PositionTran_tA80AEED3C991249CAFB3B501B04B6341DF9FC755* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		int32_t L_64 = L_63->___y_1;
		NullCheck(L_53);
		VirtualActionInvoker3< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t >::Invoke(5 /* System.Void Command::paint(MyGraphics,System.Int32,System.Int32) */, L_53, L_54, L_59, L_64);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00fd:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_66 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_67 = __this->___list_27;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_67, NULL);
		if ((((int32_t)L_66) < ((int32_t)L_68)))
		{
			goto IL_0020;
		}
	}
	{
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_69 = ___0_g;
		MenuMain_paint_mB3562100A604E6CC77E1CF8BD87BC19FC92443D2(__this, L_69, NULL);
		// }
		return;
	}
}
// System.Void MenuIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIcon__ctor_m0CC94F300CC395FEC365E7FC51D460694CD94137 (MenuIcon_tC1941FC04C0252157C37212443EB28203FBE0EA9* __this, const RuntimeMethod* method) 
{
	{
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
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
// MenuLeft MenuLeft::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* MenuLeft_gI_mD7AAA69A03F83B3D5ECDB43AF5C653DA00D08E6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : new MenuLeft();
		MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* L_0 = ((MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_StaticFields*)il2cpp_codegen_static_fields_for(MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* L_1 = (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9*)il2cpp_codegen_object_new(MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuLeft__ctor_m3D55F26ABD81F462593FCB6A7407541C54187B37(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* L_2 = ((MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_StaticFields*)il2cpp_codegen_static_fields_for(MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9_il2cpp_TypeInfo_var))->___me_26;
		return L_2;
	}
}
// System.Void MenuLeft::startAt(MyVector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_startAt_mA0019A16C6014593B3ACE90E32FB845A842424E7 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58131C17FBC2934EAEC76F377EA06AE733B07642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E025D105AFF8BAA46923243464D19A5E1BD604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	{
		// if (imgBack == null)
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_0 = __this->___imgBack_28;
		if (L_0)
		{
			goto IL_0077;
		}
	}
	{
		// imgBack = Image.createImagePNG(T.getPath() + "/iconMenu/backMenu");
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral58131C17FBC2934EAEC76F377EA06AE733B07642, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_3;
		L_3 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_2, NULL);
		__this->___imgBack_28 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgBack_28), (void*)L_3);
		// x = 32 * AvMain.hd - imgBack.w / 2;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_5 = __this->___imgBack_28;
		NullCheck(L_5);
		int32_t L_6 = L_5->___w_12;
		__this->___x_30 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_4)), ((int32_t)(L_6/2))));
		// y = 28 * AvMain.hd;
		int32_t L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___y_31 = ((int32_t)il2cpp_codegen_multiply(((int32_t)28), L_7));
		// w = imgBack.w;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_8 = __this->___imgBack_28;
		NullCheck(L_8);
		int32_t L_9 = L_8->___w_12;
		__this->___w_32 = L_9;
		// h = imgBack.h - 11 * AvMain.hd;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_10 = __this->___imgBack_28;
		NullCheck(L_10);
		int32_t L_11 = L_10->___h_13;
		int32_t L_12 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___h_33 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)il2cpp_codegen_multiply(((int32_t)11), L_12))));
	}

IL_0077:
	{
		// hCell = h / list.size();
		int32_t L_13 = __this->___h_33;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_14 = ___0_list;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_14, NULL);
		__this->___hCell_34 = ((int32_t)(L_13/L_15));
		// imgIcon = new Image[list.size()][];
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_16 = ___0_list;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_16, NULL);
		ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* L_18 = (ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672*)(ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672*)SZArrayNew(ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672_il2cpp_TypeInfo_var, (uint32_t)L_17);
		__this->___imgIcon_29 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgIcon_29), (void*)L_18);
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_011a;
	}

IL_009f:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_19 = ___0_list;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_19, L_20, NULL);
		V_1 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_21, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// imgIcon[i] = new Image[2];
		ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* L_22 = __this->___imgIcon_29;
		int32_t L_23 = V_0;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_24 = (ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)SZArrayNew(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)L_24);
		// imgIcon[i][0] = Image.createImagePNG(T.getPath() + "/iconMenu/" + command.indexImage + "0");
		ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* L_25 = __this->___imgIcon_29;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_30 = V_1;
		NullCheck(L_30);
		int8_t* L_31 = (int8_t*)(&L_30->___indexImage_5);
		String_t* L_32;
		L_32 = SByte_ToString_mAA885F58F9F739E25623423A059C735017A92708(L_31, NULL);
		String_t* L_33;
		L_33 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_29, _stringLiteral69E025D105AFF8BAA46923243464D19A5E1BD604, L_32, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_34;
		L_34 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_33, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_34);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_34);
		// imgIcon[i][1] = Image.createImagePNG(T.getPath() + "/iconMenu/" + command.indexImage + "1");
		ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* L_35 = __this->___imgIcon_29;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		String_t* L_39;
		L_39 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_40 = V_1;
		NullCheck(L_40);
		int8_t* L_41 = (int8_t*)(&L_40->___indexImage_5);
		String_t* L_42;
		L_42 = SByte_ToString_mAA885F58F9F739E25623423A059C735017A92708(L_41, NULL);
		String_t* L_43;
		L_43 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_39, _stringLiteral69E025D105AFF8BAA46923243464D19A5E1BD604, L_42, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_44;
		L_44 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_43, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_44);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_44);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_011a:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_46 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_47 = ___0_list;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_009f;
		}
	}
	{
		// this.list = list;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_49 = ___0_list;
		__this->___list_27 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_27), (void*)L_49);
		// selected = -1;
		__this->___selected_35 = (-1);
		// count = 0;
		__this->___count_38 = 0;
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuLeft::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_update_m7CB5717E7521001638E3C22A7230AE159E6AAB6A (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) 
{
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_40;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_40;
		__this->___timeOpen_40 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_40;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		MenuLeft_click_m5DF5E339294399F2E86C64791665EFD7C692951D(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void MenuLeft::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_updateKey_m2A648A329768DDF953F329EF79141D33AFF66025 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// count++;
		int32_t L_0 = __this->___count_38;
		__this->___count_38 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// isClick = true;
		__this->___isClick_37 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// if (Canvas.isPoint(x, y + Canvas.countTab, w, h))
		int32_t L_2 = __this->___x_30;
		int32_t L_3 = __this->___y_31;
		int32_t L_4 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		int32_t L_5 = __this->___w_32;
		int32_t L_6 = __this->___h_33;
		bool L_7;
		L_7 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// isTranKey = true;
		__this->___isTranKey_36 = (bool)1;
	}

IL_004e:
	{
		// countCur = count;
		int32_t L_8 = __this->___count_38;
		__this->___countCur_39 = L_8;
	}

IL_005a:
	{
		// if (isTranKey)
		bool L_9 = __this->___isTranKey_36;
		if (!L_9)
		{
			goto IL_0185;
		}
	}
	{
		// if (Canvas.isPointerDown)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_10 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_10)
		{
			goto IL_010d;
		}
	}
	{
		// if (CRes.abs(Canvas.dx()) < 10 * AvMain.hd && CRes.abs(Canvas.dy()) < 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_13)))))
		{
			goto IL_00dc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_16 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_16)))))
		{
			goto IL_00dc;
		}
	}
	{
		// if (count - countCur > 3)
		int32_t L_17 = __this->___count_38;
		int32_t L_18 = __this->___countCur_39;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) <= ((int32_t)3)))
		{
			goto IL_010d;
		}
	}
	{
		// int num = (Canvas.py - (y + Canvas.countTab)) / hCell;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_19 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_20 = __this->___y_31;
		int32_t L_21 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		int32_t L_22 = __this->___hCell_34;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21))))/L_22));
		// if (num >= 0 && num < list.size())
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_24 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_25 = __this->___list_27;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_25, NULL);
		if ((((int32_t)L_24) >= ((int32_t)L_26)))
		{
			goto IL_010d;
		}
	}
	{
		// selected = num;
		int32_t L_27 = V_0;
		__this->___selected_35 = L_27;
		goto IL_010d;
	}

IL_00dc:
	{
		// else if (selected != -1)
		int32_t L_28 = __this->___selected_35;
		if ((((int32_t)L_28) == ((int32_t)(-1))))
		{
			goto IL_010d;
		}
	}
	{
		// int num2 = (Canvas.py - (y + Canvas.countTab)) / hCell;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_29 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_30 = __this->___y_31;
		int32_t L_31 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		int32_t L_32 = __this->___hCell_34;
		// if (num2 != selected)
		int32_t L_33 = __this->___selected_35;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)il2cpp_codegen_add(L_30, L_31))))/L_32))) == ((int32_t)L_33)))
		{
			goto IL_010d;
		}
	}
	{
		// selected = -1;
		__this->___selected_35 = (-1);
	}

IL_010d:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_34 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_34)
		{
			goto IL_0185;
		}
	}
	{
		// isTranKey = false;
		__this->___isTranKey_36 = (bool)0;
		// if (CRes.abs(Canvas.dx()) < 10 * AvMain.hd && CRes.abs(Canvas.dy()) < 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_36) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_37)))))
		{
			goto IL_0170;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_40 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_40)))))
		{
			goto IL_0170;
		}
	}
	{
		// int num3 = (Canvas.py - y) / hCell;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_41 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_42 = __this->___y_31;
		int32_t L_43 = __this->___hCell_34;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_41, L_42))/L_43));
		// if (num3 >= 0 && num3 < list.size())
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) < ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		int32_t L_45 = V_1;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_46 = __this->___list_27;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_46, NULL);
		if ((((int32_t)L_45) >= ((int32_t)L_47)))
		{
			goto IL_0170;
		}
	}
	{
		// selected = num3;
		int32_t L_48 = V_1;
		__this->___selected_35 = L_48;
	}

IL_0170:
	{
		// if (selected != -1)
		int32_t L_49 = __this->___selected_35;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_017f;
		}
	}
	{
		// click();
		MenuLeft_click_m5DF5E339294399F2E86C64791665EFD7C692951D(__this, NULL);
	}

IL_017f:
	{
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
	}

IL_0185:
	{
		// if (isClick && Canvas.isPointerRelease)
		bool L_50 = __this->___isClick_37;
		if (!L_50)
		{
			goto IL_01a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_51 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_51)
		{
			goto IL_01a7;
		}
	}
	{
		// isClick = false;
		__this->___isClick_37 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// Canvas.menuMain = null;
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
	}

IL_01a7:
	{
		// }
		return;
	}
}
// System.Void MenuLeft::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_click_m5DF5E339294399F2E86C64791665EFD7C692951D (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// close();
		MenuLeft_close_m98D9C8908BEA3F73F75F5147B738102540A9B825(__this, NULL);
		// Command command = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___list_27;
		int32_t L_1 = __this->___selected_35;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		// command.perform();
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), NULL);
		// selected = -1;
		__this->___selected_35 = (-1);
		// }
		return;
	}
}
// System.Void MenuLeft::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_close_m98D9C8908BEA3F73F75F5147B738102540A9B825 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// imgIcon = null;
		__this->___imgIcon_29 = (ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgIcon_29), (void*)(ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672*)NULL);
		// imgBack = null;
		__this->___imgBack_28 = (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgBack_28), (void*)(Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)NULL);
		// }
		return;
	}
}
// System.Void MenuLeft::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft_paint_m3A43979B996C9224C45FD68F7E1CCD49D5DB97F6 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* G_B3_0 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B3_1 = NULL;
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* G_B2_0 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* G_B4_1 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B4_2 = NULL;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// g.drawImage(imgBack, x, 19 * AvMain.hd + Canvas.countTab, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_2 = __this->___imgBack_28;
		int32_t L_3 = __this->___x_30;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		NullCheck(L_1);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_1, L_2, ((float)L_3), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19), L_4)), L_5))), 0, NULL);
		// g.translate(x, y + Canvas.countTab);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_6 = ___0_g;
		int32_t L_7 = __this->___x_30;
		int32_t L_8 = __this->___y_31;
		int32_t L_9 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___countTab_84;
		NullCheck(L_6);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_6, ((float)L_7), ((float)((int32_t)il2cpp_codegen_add(L_8, L_9))), NULL);
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_009a;
	}

IL_0047:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_10 = __this->___list_27;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_10, L_11, NULL);
		V_1 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_12, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// g.drawImage(imgIcon[command.indexImage][(selected == i) ? 1 : 0], w / 2, hCell / 2 + i * hCell, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_13 = ___0_g;
		ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* L_14 = __this->___imgIcon_29;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_15 = V_1;
		NullCheck(L_15);
		int8_t L_16 = L_15->___indexImage_5;
		NullCheck(L_14);
		int8_t L_17 = L_16;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = __this->___selected_35;
		int32_t L_20 = V_0;
		G_B2_0 = L_18;
		G_B2_1 = L_13;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			G_B3_0 = L_18;
			G_B3_1 = L_13;
			goto IL_0073;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0074:
	{
		NullCheck(G_B4_1);
		int32_t L_21 = G_B4_0;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_22 = (G_B4_1)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = __this->___w_32;
		int32_t L_24 = __this->___hCell_34;
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___hCell_34;
		NullCheck(G_B4_2);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(G_B4_2, L_22, ((float)((int32_t)(L_23/2))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)(L_24/2)), ((int32_t)il2cpp_codegen_multiply(L_25, L_26))))), 3, NULL);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_28 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_29 = __this->___list_27;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_29, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuLeft__ctor_m3D55F26ABD81F462593FCB6A7407541C54187B37 (MenuLeft_tB0AA84B75063077A7332FADFB893A54A097E90B9* __this, const RuntimeMethod* method) 
{
	{
		// private int selected = -1;
		__this->___selected_35 = (-1);
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
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
// System.Void MenuMain::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_update_m5348D9450BA51CF688ABEE3C3F5FC2448C4F7ACA (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuMain::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_updateKey_m8AA3EED053B7AFC081B4368322461BA1C9DFB727 (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) 
{
	{
		// base.updateKey();
		AvMain_updateKey_m90C1E1FA00417229EAB96356C695CD2F31485EDD(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuMain::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_paint_mB3562100A604E6CC77E1CF8BD87BC19FC92443D2 (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	{
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		AvMain_paint_m6DD27BBBA1CA5983CBDD3E812E3D8E642D2C438A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuMain::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Canvas.menuMain = this;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)__this);
		// }
		return;
	}
}
// System.Void MenuMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		AvMain__ctor_m49485B883877C5F56CC1014A8CA95F30369139D7(__this, NULL);
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
// System.Void MenuNPC::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC__cctor_m6DD3B9C1A9BF066DF6191F85A294D49213F4946B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6849B7213D1DC335F28D5E89B275375FEA1B973B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgDc = new FrameImage(Image.createImagePNG(T.getPath() + "/race/popup/tile0"), 20 * AvMain.hd, 20 * AvMain.hd);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral6849B7213D1DC335F28D5E89B275375FEA1B973B, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_2;
		L_2 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_5 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_5, L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_3)), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_4)), NULL);
		((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___imgDc_38 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___imgDc_38), (void*)L_5);
		// }
		return;
	}
}
// System.Void MenuNPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC__ctor_m41E9E2270014A5724388C18DD8CBF519E5E07CBF (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MyVector list = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_0, NULL);
		__this->___list_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_39), (void*)L_0);
		// public MenuNPC()
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
		// w = 250 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___w_30 = ((int32_t)il2cpp_codegen_multiply(((int32_t)250), L_1));
		// h = 187 * AvMain.hd;
		int32_t L_2 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___h_31 = ((int32_t)il2cpp_codegen_multiply(((int32_t)187), L_2));
		// x = (Canvas.w - w) / 2;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_4 = __this->___w_30;
		__this->___x_28 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_4))/2));
		// y = (Canvas.h - h) / 2;
		int32_t L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___h_14;
		int32_t L_6 = __this->___h_31;
		__this->___y_29 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, L_6))/2));
		// yList = 75 * AvMain.hd;
		int32_t L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___yList_33 = ((int32_t)il2cpp_codegen_multiply(((int32_t)75), L_7));
		// wList = 160 * AvMain.hd;
		int32_t L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___wList_34 = ((int32_t)il2cpp_codegen_multiply(((int32_t)160), L_8));
		// xList = w - wList - 13 * AvMain.hd;
		int32_t L_9 = __this->___w_30;
		int32_t L_10 = __this->___wList_34;
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___xList_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_9, L_10)), ((int32_t)il2cpp_codegen_multiply(((int32_t)13), L_11))));
		// hItem = 30 * AvMain.hd;
		int32_t L_12 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hItem_36 = ((int32_t)il2cpp_codegen_multiply(((int32_t)30), L_12));
		// hList = 100 * AvMain.hd;
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hList_35 = ((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_13));
		// }
		return;
	}
}
// MenuNPC MenuNPC::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* MenuNPC_gI_mCE4F04BF53CBD2544062610BEC5DECE684B6ED54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MenuNPC());
		il2cpp_codegen_runtime_class_init_inline(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* L_0 = ((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* L_1 = (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1*)il2cpp_codegen_object_new(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuNPC__ctor_m41E9E2270014A5724388C18DD8CBF519E5E07CBF(L_1, NULL);
		MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___me_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___me_26), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var);
		MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* L_3 = ((MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_StaticFields*)il2cpp_codegen_static_fields_for(MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1_il2cpp_TypeInfo_var))->___me_26;
		return L_3;
	}
}
// System.Void MenuNPC::setInfo(MyVector,System.Int32,System.String,System.String,System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_setInfo_m5BC216B177468AB47436834BC2FC55FA9F726C1D (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_list, int32_t ___1_idUser, String_t* ___2_nameNPC, String_t* ___3_textChat, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___4_isMenu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B4B683CE7D5956ED5339FC8010DF5033E9C4D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9F4E209A3CCCD66CC274B3A3FEE370AD1ABC545);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (imgBackPopup == null)
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_0 = __this->___imgBackPopup_43;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		// imgBackPopup = Image.createImagePNG(T.getPath() + "/effect/backMenuNPC");
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralC9F4E209A3CCCD66CC274B3A3FEE370AD1ABC545, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_3;
		L_3 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_2, NULL);
		__this->___imgBackPopup_43 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgBackPopup_43), (void*)L_3);
		// imgBackChat = Image.createImagePNG(T.getPath() + "/effect/popupChat");
		String_t* L_4;
		L_4 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral24B4B683CE7D5956ED5339FC8010DF5033E9C4D3, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_6;
		L_6 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_5, NULL);
		__this->___imgBackChat_44 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgBackChat_44), (void*)L_6);
	}

IL_003c:
	{
		// this.list = list;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_7 = ___0_list;
		__this->___list_39 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_39), (void*)L_7);
		// this.isMenu = isMenu;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ___4_isMenu;
		__this->___isMenu_42 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isMenu_42), (void*)L_8);
		// this.idUser = idUser;
		int32_t L_9 = ___1_idUser;
		__this->___idUser_27 = L_9;
		// cmyLim = list.size() * hItem - (hList - 20 * AvMain.hd);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_10 = ___0_list;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_10, NULL);
		int32_t L_12 = __this->___hItem_36;
		int32_t L_13 = __this->___hList_35;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___cmyLim_59 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_14))))));
		// if (cmyLim < 0)
		int32_t L_15 = __this->___cmyLim_59;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_59 = 0;
	}

IL_0085:
	{
		// this.nameNPC = nameNPC;
		String_t* L_16 = ___2_nameNPC;
		__this->___nameNPC_40 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameNPC_40), (void*)L_16);
		// this.textChat = Canvas.fontChatB.splitFontBStrInLine(textChat, w - 70 * AvMain.hd);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_17 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChatB_51;
		String_t* L_18 = ___3_textChat;
		int32_t L_19 = __this->___w_30;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_20 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21;
		L_21 = VirtualFuncInvoker2< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, int32_t >::Invoke(6 /* System.String[] FontX::splitFontBStrInLine(System.String,System.Int32) */, L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)il2cpp_codegen_multiply(((int32_t)70), L_20)))));
		__this->___textChat_41 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textChat_41), (void*)L_21);
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuNPC::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_update_m8AA129091236297869649589E581F7921E520F7A (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) 
{
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_47;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_47;
		__this->___timeOpen_47 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_47;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		MenuNPC_click_m25E9C6E3FF4D39A1B6E2BC2F6C9A990736839828(__this, NULL);
	}

IL_0025:
	{
		// moveCamera();
		MenuNPC_moveCamera_m558BC73242BBD42A2DF8DBF4B706636F721868BF(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuNPC::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_updateKey_m3A5CFE04AC2E346A4F71706828DCB5F47BA5F3B3 (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_52;
		__this->___count_52 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_0089;
		}
	}
	{
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_48 = L_2;
		// isG = false;
		__this->___isG_50 = (bool)0;
		// if (Canvas.isPoint(x + xList, y + yList, wList, hList))
		int32_t L_3 = __this->___x_28;
		int32_t L_4 = __this->___xList_32;
		int32_t L_5 = __this->___y_29;
		int32_t L_6 = __this->___yList_33;
		int32_t L_7 = __this->___wList_34;
		int32_t L_8 = __this->___hList_35;
		bool L_9;
		L_9 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(L_3, L_4)), ((int32_t)il2cpp_codegen_add(L_5, L_6)), L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// if (vY != 0)
		int32_t L_10 = __this->___vY_54;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// isG = true;
		__this->___isG_50 = (bool)1;
	}

IL_0064:
	{
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pa = cmtoY;
		int32_t L_11 = __this->___cmtoY_55;
		__this->___pa_45 = L_11;
		// timeDelay = count;
		int64_t L_12 = __this->___count_52;
		__this->___timeDelay_51 = L_12;
		// trans = true;
		__this->___trans_49 = (bool)1;
	}

IL_0089:
	{
		// if (trans)
		bool L_13 = __this->___trans_49;
		if (!L_13)
		{
			goto IL_02ed;
		}
	}
	{
		// int num = pyLast - Canvas.py;
		int32_t L_14 = __this->___pyLast_48;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		// pyLast = Canvas.py;
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_48 = L_16;
		// long num2 = count - timeDelay;
		int64_t L_17 = __this->___count_52;
		int64_t L_18 = __this->___timeDelay_51;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_17, L_18));
		// if (Canvas.isPointerDown)
		bool L_19 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_19)
		{
			goto IL_0228;
		}
	}
	{
		// if (count % 2 == 0)
		int64_t L_20 = __this->___count_52;
		if (((int64_t)(L_20%((int64_t)2))))
		{
			goto IL_00e6;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_46 = L_21;
		// timePoint = count;
		int64_t L_22 = __this->___count_52;
		__this->___timePoint_53 = L_22;
	}

IL_00e6:
	{
		// vY = 0;
		__this->___vY_54 = 0;
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_25)))))
		{
			goto IL_014d;
		}
	}
	{
		// int num3 = y + yList + 10 * AvMain.hd;
		int32_t L_26 = __this->___y_29;
		int32_t L_27 = __this->___yList_33;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_26, L_27)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_28))));
		// int num4 = hItem;
		int32_t L_29 = __this->___hItem_36;
		V_5 = L_29;
		// int num5 = (cmtoY + Canvas.py - num3) / num4;
		int32_t L_30 = __this->___cmtoY_55;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_31 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_32 = V_4;
		int32_t L_33 = V_5;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32))/L_33));
		// if (num5 >= 0 && num5 < list.size())
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_35 = V_6;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_36 = __this->___list_39;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_36, NULL);
		if ((((int32_t)L_35) >= ((int32_t)L_37)))
		{
			goto IL_014d;
		}
	}
	{
		// focus = num5;
		int32_t L_38 = V_6;
		__this->___focus_37 = L_38;
	}

IL_014d:
	{
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_40;
		L_40 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_41 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_41)))))
		{
			goto IL_016a;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_01cb;
	}

IL_016a:
	{
		// else if (num2 > 3 && num2 < 8)
		int64_t L_42 = V_1;
		if ((((int64_t)L_42) <= ((int64_t)((int64_t)3))))
		{
			goto IL_01cb;
		}
	}
	{
		int64_t L_43 = V_1;
		if ((((int64_t)L_43) >= ((int64_t)((int64_t)8))))
		{
			goto IL_01cb;
		}
	}
	{
		// int num6 = y + yList + 10 * AvMain.hd;
		int32_t L_44 = __this->___y_29;
		int32_t L_45 = __this->___yList_33;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_46 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_44, L_45)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_46))));
		// int num7 = hItem;
		int32_t L_47 = __this->___hItem_36;
		V_8 = L_47;
		// int num8 = (cmtoY + Canvas.py - num6) / num7;
		int32_t L_48 = __this->___cmtoY_55;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_49 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_50 = V_7;
		int32_t L_51 = V_8;
		V_9 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_48, L_49)), L_50))/L_51));
		// if (num8 >= 0 && num8 < list.size() && !isG)
		int32_t L_52 = V_9;
		if ((((int32_t)L_52) < ((int32_t)0)))
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_53 = V_9;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_54 = __this->___list_39;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_54, NULL);
		if ((((int32_t)L_53) >= ((int32_t)L_55)))
		{
			goto IL_01cb;
		}
	}
	{
		bool L_56 = __this->___isG_50;
		if (L_56)
		{
			goto IL_01cb;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_01cb:
	{
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_57 = __this->___cmtoY_55;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_01e2;
		}
	}
	{
		int32_t L_58 = __this->___cmtoY_55;
		int32_t L_59 = __this->___cmyLim_59;
		if ((((int32_t)L_58) <= ((int32_t)L_59)))
		{
			goto IL_0200;
		}
	}

IL_01e2:
	{
		// cmtoY = pa + num / 2;
		int32_t L_60 = __this->___pa_45;
		int32_t L_61 = V_0;
		__this->___cmtoY_55 = ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)(L_61/2))));
		// pa = cmtoY;
		int32_t L_62 = __this->___cmtoY_55;
		__this->___pa_45 = L_62;
		goto IL_021c;
	}

IL_0200:
	{
		// cmtoY = pa + num / 2;
		int32_t L_63 = __this->___pa_45;
		int32_t L_64 = V_0;
		__this->___cmtoY_55 = ((int32_t)il2cpp_codegen_add(L_63, ((int32_t)(L_64/2))));
		// pa = cmtoY;
		int32_t L_65 = __this->___cmtoY_55;
		__this->___pa_45 = L_65;
	}

IL_021c:
	{
		// cmy = cmtoY;
		int32_t L_66 = __this->___cmtoY_55;
		__this->___cmy_56 = L_66;
	}

IL_0228:
	{
		// if (!Canvas.isPointerRelease || !Canvas.isPoint(x, y, w, h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_67 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_67)
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_68 = __this->___x_28;
		int32_t L_69 = __this->___y_29;
		int32_t L_70 = __this->___w_30;
		int32_t L_71 = __this->___h_31;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_68, L_69, L_70, L_71, NULL);
		if (L_72)
		{
			goto IL_024f;
		}
	}

IL_024e:
	{
		// return;
		return;
	}

IL_024f:
	{
		// isG = false;
		__this->___isG_50 = (bool)0;
		// int num9 = (int)(count - timePoint);
		int64_t L_73 = __this->___count_52;
		int64_t L_74 = __this->___timePoint_53;
		V_2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_73, L_74)));
		// int num10 = dyTran - Canvas.py;
		int32_t L_75 = __this->___dyTran_46;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_76 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, L_76));
		// if (CRes.abs(num10) > 40 && num9 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_77 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_78;
		L_78 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_77, NULL);
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)40))))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_79 = V_2;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)10))))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_80 = __this->___cmtoY_55;
		if ((((int32_t)L_80) <= ((int32_t)0)))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_81 = __this->___cmtoY_55;
		int32_t L_82 = __this->___cmyLim_59;
		if ((((int32_t)L_81) >= ((int32_t)L_82)))
		{
			goto IL_02a4;
		}
	}
	{
		// vY = num10 / num9 * 10;
		int32_t L_83 = V_3;
		int32_t L_84 = V_2;
		__this->___vY_54 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_83/L_84)), ((int32_t)10)));
	}

IL_02a4:
	{
		// timePoint = -1L;
		__this->___timePoint_53 = ((int64_t)(-1));
		// if (Math.abs(num) < 10 * AvMain.hd)
		int32_t L_85 = V_0;
		int32_t L_86;
		L_86 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_85, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_87 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_86) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_87)))))
		{
			goto IL_02df;
		}
	}
	{
		// if (num2 <= 4)
		int64_t L_88 = V_1;
		if ((((int64_t)L_88) > ((int64_t)((int64_t)4))))
		{
			goto IL_02d1;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen = 5;
		__this->___timeOpen_47 = 5;
		goto IL_02df;
	}

IL_02d1:
	{
		// else if (!isHide)
		bool L_89 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_89)
		{
			goto IL_02df;
		}
	}
	{
		// click();
		MenuNPC_click_m25E9C6E3FF4D39A1B6E2BC2F6C9A990736839828(__this, NULL);
	}

IL_02df:
	{
		// trans = false;
		__this->___trans_49 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		return;
	}

IL_02ed:
	{
		// else if (Canvas.isPointerRelease && !Canvas.isPoint(x, y, w, h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_90 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_90)
		{
			goto IL_031f;
		}
	}
	{
		int32_t L_91 = __this->___x_28;
		int32_t L_92 = __this->___y_29;
		int32_t L_93 = __this->___w_30;
		int32_t L_94 = __this->___h_31;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_91, L_92, L_93, L_94, NULL);
		if (L_95)
		{
			goto IL_031f;
		}
	}
	{
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// Canvas.menuMain = null;
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
	}

IL_031f:
	{
		// }
		return;
	}
}
// System.Void MenuNPC::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_click_m25E9C6E3FF4D39A1B6E2BC2F6C9A990736839828 (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isMenu[focus])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___isMenu_42;
		int32_t L_1 = __this->___focus_37;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		goto IL_001c;
	}

IL_0017:
	{
		// Canvas.startWaitDlg();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_startWaitDlg_m7C40FB165260F3539A379569FB5267C2E333C0D9(NULL);
	}

IL_001c:
	{
		// Command command = (Command)list.elementAt(focus);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = __this->___list_39;
		int32_t L_5 = __this->___focus_37;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_4, L_5, NULL);
		// command.perform();
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_6, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_6, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void MenuNPC::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_paint_m4E2CDAC03096674E94C897D56C25C81F321F4080 (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Avatar_t5280686025A629043829B8D5A31541F05B328D76* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B3_3 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B3_4 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	String_t* G_B2_2 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B2_3 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B2_4 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	String_t* G_B4_3 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B4_4 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B4_5 = NULL;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// Canvas.paint.paintPopupBack(g, x, y, w, h, -1, false);
		RuntimeObject* L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		int32_t L_3 = __this->___x_28;
		int32_t L_4 = __this->___y_29;
		int32_t L_5 = __this->___w_30;
		int32_t L_6 = __this->___h_31;
		NullCheck(L_1);
		InterfaceActionInvoker7< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, int32_t, int32_t, int32_t, bool >::Invoke(49 /* System.Void IPaint::paintPopupBack(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5, L_6, (-1), (bool)0);
		// g.translate(x, y);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_7 = ___0_g;
		int32_t L_8 = __this->___x_28;
		int32_t L_9 = __this->___y_29;
		NullCheck(L_7);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_7, ((float)L_8), ((float)L_9), NULL);
		// g.drawImage(imgBackChat, 12 * AvMain.hd, 12 * AvMain.hd, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_10 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_11 = __this->___imgBackChat_44;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_12 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_10);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_10, L_11, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_12))), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_13))), 0, NULL);
		// for (int i = 0; i < textChat.Length; i++)
		V_1 = 0;
		goto IL_00bf;
	}

IL_0062:
	{
		// Canvas.fontChatB.drawString(g, textChat[i], 20 * AvMain.hd, 12 * AvMain.hd + 25 * AvMain.hd - textChat.Length * Canvas.fontChatB.getHeight() / 2 + i * AvMain.hBlack + ((AvMain.hd == 1) ? 10 : 0), 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChatB_51;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_15 = ___0_g;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = __this->___textChat_41;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_20 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_21 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_22 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = __this->___textChat_41;
		NullCheck(L_23);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChatB_51;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_24);
		int32_t L_26 = V_1;
		int8_t L_27 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hBlack_5;
		int32_t L_28 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B2_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_21)), ((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_22)))), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25))/2)))), ((int32_t)il2cpp_codegen_multiply(L_26, (int32_t)L_27))));
		G_B2_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_20));
		G_B2_2 = L_19;
		G_B2_3 = L_15;
		G_B2_4 = L_14;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_21)), ((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_22)))), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25))/2)))), ((int32_t)il2cpp_codegen_multiply(L_26, (int32_t)L_27))));
			G_B3_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_20));
			G_B3_2 = L_19;
			G_B3_3 = L_15;
			G_B3_4 = L_14;
			goto IL_00b2;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		goto IL_00b4;
	}

IL_00b2:
	{
		G_B4_0 = ((int32_t)10);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
	}

IL_00b4:
	{
		NullCheck(G_B4_5);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, G_B4_5, G_B4_4, G_B4_3, G_B4_2, ((int32_t)il2cpp_codegen_add(G_B4_1, G_B4_0)), 0);
		// for (int i = 0; i < textChat.Length; i++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00bf:
	{
		// for (int i = 0; i < textChat.Length; i++)
		int32_t L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = __this->___textChat_41;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// Avatar avatar = LoadMap.getAvatar(idUser);
		int32_t L_32 = __this->___idUser_27;
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_33;
		L_33 = LoadMap_getAvatar_mF4E2BB95A7631485EA22014FC8D58E169D14021F(L_32, NULL);
		V_0 = L_33;
		// Canvas.normalFont.drawString(g, nameNPC, xList / 2, yList + hList / 2 - AvMain.hNormal - 20 * AvMain.hd, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_34 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_35 = ___0_g;
		String_t* L_36 = __this->___nameNPC_40;
		int32_t L_37 = __this->___xList_32;
		int32_t L_38 = __this->___yList_33;
		int32_t L_39 = __this->___hList_35;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int8_t L_40 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hNormal_7;
		int32_t L_41 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_34);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_34, L_35, L_36, ((int32_t)(L_37/2)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, ((int32_t)(L_39/2)))), (int32_t)L_40)), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_41)))), 2);
		// avatar.paintIcon(g, xList / 2, yList + hList / 2 + avatar.height, false);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_42 = V_0;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_43 = ___0_g;
		int32_t L_44 = __this->___xList_32;
		int32_t L_45 = __this->___yList_33;
		int32_t L_46 = __this->___hList_35;
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_47 = V_0;
		NullCheck(L_47);
		int16_t L_48 = ((MyObject_t27D5E3EEBD327F444BF6F199EA0523FEB4B450DD*)L_47)->___height_14;
		NullCheck(L_42);
		VirtualActionInvoker4< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, bool >::Invoke(7 /* System.Void Base::paintIcon(MyGraphics,System.Int32,System.Int32,System.Boolean) */, L_42, L_43, ((int32_t)(L_44/2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_45, ((int32_t)(L_46/2)))), (int32_t)L_48)), (bool)0);
		// g.translate(xList, yList);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_49 = ___0_g;
		int32_t L_50 = __this->___xList_32;
		int32_t L_51 = __this->___yList_33;
		NullCheck(L_49);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_49, ((float)L_50), ((float)L_51), NULL);
		// g.drawImage(imgBackPopup, 0f, 0f, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_52 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_53 = __this->___imgBackPopup_43;
		NullCheck(L_52);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_52, L_53, (0.0f), (0.0f), 0, NULL);
		// g.setClip(0f, 0f, w, hList);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_54 = ___0_g;
		int32_t L_55 = __this->___w_30;
		int32_t L_56 = __this->___hList_35;
		NullCheck(L_54);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_54, (0.0f), (0.0f), ((float)L_55), ((float)L_56), NULL);
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_57 = ___0_g;
		int32_t L_58 = __this->___cmy_56;
		NullCheck(L_57);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_57, (0.0f), ((float)((-L_58))), NULL);
		// for (int j = 0; j < list.size(); j++)
		V_2 = 0;
		goto IL_023b;
	}

IL_0197:
	{
		// Command command = (Command)list.elementAt(j);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_59 = __this->___list_39;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_59, L_60, NULL);
		V_3 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_61, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// if (j == focus && !isHide)
		int32_t L_62 = V_2;
		int32_t L_63 = __this->___focus_37;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_01fb;
		}
	}
	{
		bool L_64 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_64)
		{
			goto IL_01fb;
		}
	}
	{
		// g.setColor(16777215);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_65 = ___0_g;
		NullCheck(L_65);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_65, ((int32_t)16777215), NULL);
		// g.fillRect(4 * AvMain.hd, 10 * AvMain.hd + j * hItem, wList - 6 * AvMain.hd, hItem);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_66 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_67 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_68 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_69 = V_2;
		int32_t L_70 = __this->___hItem_36;
		int32_t L_71 = __this->___wList_34;
		int32_t L_72 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_73 = __this->___hItem_36;
		NullCheck(L_66);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_66, ((float)((int32_t)il2cpp_codegen_multiply(4, L_67))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_68)), ((int32_t)il2cpp_codegen_multiply(L_69, L_70))))), ((float)((int32_t)il2cpp_codegen_subtract(L_71, ((int32_t)il2cpp_codegen_multiply(6, L_72))))), ((float)L_73), NULL);
	}

IL_01fb:
	{
		// Canvas.normalFont.drawString(g, command.caption, 10 * AvMain.hd, 10 * AvMain.hd + j * hItem + hItem / 2 - AvMain.hNormal / 2, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_74 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_75 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_76 = V_3;
		NullCheck(L_76);
		String_t* L_77 = L_76->___caption_0;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_78 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_79 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_80 = V_2;
		int32_t L_81 = __this->___hItem_36;
		int32_t L_82 = __this->___hItem_36;
		int8_t L_83 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hNormal_7;
		NullCheck(L_74);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_74, L_75, L_77, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_78)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_79)), ((int32_t)il2cpp_codegen_multiply(L_80, L_81)))), ((int32_t)(L_82/2)))), ((int32_t)((int32_t)L_83/2)))), 0);
		// for (int j = 0; j < list.size(); j++)
		int32_t L_84 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_023b:
	{
		// for (int j = 0; j < list.size(); j++)
		int32_t L_85 = V_2;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_86 = __this->___list_39;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_86, NULL);
		if ((((int32_t)L_85) < ((int32_t)L_87)))
		{
			goto IL_0197;
		}
	}
	{
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_88 = ___0_g;
		MenuMain_paint_mB3562100A604E6CC77E1CF8BD87BC19FC92443D2(__this, L_88, NULL);
		// }
		return;
	}
}
// System.Void MenuNPC::paintPopupTilte(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,FrameImage,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_paintPopupTilte_m3BFA60A9CDD45C1F24011729DEFC0C699CBDB860 (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x, int32_t ___2_y, int32_t ___3_w, int32_t ___4_h, FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___5_img, int32_t ___6_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// img.drawFrame(0, x, y, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_0 = ___5_img;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_3 = ___0_g;
		NullCheck(L_0);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_0, 0, L_1, L_2, 0, L_3, NULL);
		// img.drawFrame(2, x + w - img.frameWidth, y, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_4 = ___5_img;
		int32_t L_5 = ___1_x;
		int32_t L_6 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_7 = ___5_img;
		NullCheck(L_7);
		int32_t L_8 = L_7->___frameWidth_0;
		int32_t L_9 = ___2_y;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_10 = ___0_g;
		NullCheck(L_4);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_4, 2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), L_8)), L_9, 0, L_10, NULL);
		// img.drawFrame(5, x, y + h - img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_11 = ___5_img;
		int32_t L_12 = ___1_x;
		int32_t L_13 = ___2_y;
		int32_t L_14 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_15 = ___5_img;
		NullCheck(L_15);
		int32_t L_16 = L_15->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_17 = ___0_g;
		NullCheck(L_11);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_11, 5, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), L_16)), 0, L_17, NULL);
		// img.drawFrame(7, x + w - img.frameWidth, y + h - img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_18 = ___5_img;
		int32_t L_19 = ___1_x;
		int32_t L_20 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_21 = ___5_img;
		NullCheck(L_21);
		int32_t L_22 = L_21->___frameWidth_0;
		int32_t L_23 = ___2_y;
		int32_t L_24 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_25 = ___5_img;
		NullCheck(L_25);
		int32_t L_26 = L_25->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_27 = ___0_g;
		NullCheck(L_18);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_18, 7, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_20)), L_22)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_26)), 0, L_27, NULL);
		// for (int i = 0; i < (w - img.frameWidth * 2) / img.frameWidth; i++)
		V_0 = 0;
		goto IL_009d;
	}

IL_005e:
	{
		// img.drawFrame(1, x + (i + 1) * img.frameWidth, y, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_28 = ___5_img;
		int32_t L_29 = ___1_x;
		int32_t L_30 = V_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_31 = ___5_img;
		NullCheck(L_31);
		int32_t L_32 = L_31->___frameWidth_0;
		int32_t L_33 = ___2_y;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_34 = ___0_g;
		NullCheck(L_28);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_28, 1, ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_30, 1)), L_32)))), L_33, 0, L_34, NULL);
		// img.drawFrame(6, x + (i + 1) * img.frameWidth, y + h - img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_35 = ___5_img;
		int32_t L_36 = ___1_x;
		int32_t L_37 = V_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_38 = ___5_img;
		NullCheck(L_38);
		int32_t L_39 = L_38->___frameWidth_0;
		int32_t L_40 = ___2_y;
		int32_t L_41 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_42 = ___5_img;
		NullCheck(L_42);
		int32_t L_43 = L_42->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_44 = ___0_g;
		NullCheck(L_35);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_35, 6, ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_37, 1)), L_39)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), L_43)), 0, L_44, NULL);
		// for (int i = 0; i < (w - img.frameWidth * 2) / img.frameWidth; i++)
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_009d:
	{
		// for (int i = 0; i < (w - img.frameWidth * 2) / img.frameWidth; i++)
		int32_t L_46 = V_0;
		int32_t L_47 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_48 = ___5_img;
		NullCheck(L_48);
		int32_t L_49 = L_48->___frameWidth_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_50 = ___5_img;
		NullCheck(L_50);
		int32_t L_51 = L_50->___frameWidth_0;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)il2cpp_codegen_multiply(L_49, 2))))/L_51)))))
		{
			goto IL_005e;
		}
	}
	{
		// img.drawFrame(1, x + w - img.frameWidth * 2, y, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_52 = ___5_img;
		int32_t L_53 = ___1_x;
		int32_t L_54 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_55 = ___5_img;
		NullCheck(L_55);
		int32_t L_56 = L_55->___frameWidth_0;
		int32_t L_57 = ___2_y;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_58 = ___0_g;
		NullCheck(L_52);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_52, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), ((int32_t)il2cpp_codegen_multiply(L_56, 2)))), L_57, 0, L_58, NULL);
		// img.drawFrame(6, x + w - img.frameWidth * 2, y + h - img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_59 = ___5_img;
		int32_t L_60 = ___1_x;
		int32_t L_61 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_62 = ___5_img;
		NullCheck(L_62);
		int32_t L_63 = L_62->___frameWidth_0;
		int32_t L_64 = ___2_y;
		int32_t L_65 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_66 = ___5_img;
		NullCheck(L_66);
		int32_t L_67 = L_66->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_68 = ___0_g;
		NullCheck(L_59);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_59, 6, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_60, L_61)), ((int32_t)il2cpp_codegen_multiply(L_63, 2)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_64, L_65)), L_67)), 0, L_68, NULL);
		// for (int j = 0; j < (h - img.frameHeight * 2) / img.frameHeight; j++)
		V_1 = 0;
		goto IL_0130;
	}

IL_00f2:
	{
		// img.drawFrame(3, x, y + (j + 1) * img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_69 = ___5_img;
		int32_t L_70 = ___1_x;
		int32_t L_71 = ___2_y;
		int32_t L_72 = V_1;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_73 = ___5_img;
		NullCheck(L_73);
		int32_t L_74 = L_73->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_75 = ___0_g;
		NullCheck(L_69);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_69, 3, L_70, ((int32_t)il2cpp_codegen_add(L_71, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_72, 1)), L_74)))), 0, L_75, NULL);
		// img.drawFrame(4, x + w - img.frameWidth, y + (j + 1) * img.frameHeight, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_76 = ___5_img;
		int32_t L_77 = ___1_x;
		int32_t L_78 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_79 = ___5_img;
		NullCheck(L_79);
		int32_t L_80 = L_79->___frameWidth_0;
		int32_t L_81 = ___2_y;
		int32_t L_82 = V_1;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_83 = ___5_img;
		NullCheck(L_83);
		int32_t L_84 = L_83->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_85 = ___0_g;
		NullCheck(L_76);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_76, 4, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_77, L_78)), L_80)), ((int32_t)il2cpp_codegen_add(L_81, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_82, 1)), L_84)))), 0, L_85, NULL);
		// for (int j = 0; j < (h - img.frameHeight * 2) / img.frameHeight; j++)
		int32_t L_86 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0130:
	{
		// for (int j = 0; j < (h - img.frameHeight * 2) / img.frameHeight; j++)
		int32_t L_87 = V_1;
		int32_t L_88 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_89 = ___5_img;
		NullCheck(L_89);
		int32_t L_90 = L_89->___frameHeight_1;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_91 = ___5_img;
		NullCheck(L_91);
		int32_t L_92 = L_91->___frameHeight_1;
		if ((((int32_t)L_87) < ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_88, ((int32_t)il2cpp_codegen_multiply(L_90, 2))))/L_92)))))
		{
			goto IL_00f2;
		}
	}
	{
		// img.drawFrame(3, x, y + h - img.frameHeight * 2, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_93 = ___5_img;
		int32_t L_94 = ___1_x;
		int32_t L_95 = ___2_y;
		int32_t L_96 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_97 = ___5_img;
		NullCheck(L_97);
		int32_t L_98 = L_97->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_99 = ___0_g;
		NullCheck(L_93);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_93, 3, L_94, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_95, L_96)), ((int32_t)il2cpp_codegen_multiply(L_98, 2)))), 0, L_99, NULL);
		// img.drawFrame(4, x + w - img.frameWidth, y + h - img.frameHeight * 2, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_100 = ___5_img;
		int32_t L_101 = ___1_x;
		int32_t L_102 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_103 = ___5_img;
		NullCheck(L_103);
		int32_t L_104 = L_103->___frameWidth_0;
		int32_t L_105 = ___2_y;
		int32_t L_106 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_107 = ___5_img;
		NullCheck(L_107);
		int32_t L_108 = L_107->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_109 = ___0_g;
		NullCheck(L_100);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_100, 4, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_101, L_102)), L_104)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_105, L_106)), ((int32_t)il2cpp_codegen_multiply(L_108, 2)))), 0, L_109, NULL);
		// if (color != -1)
		int32_t L_110 = ___6_color;
		if ((((int32_t)L_110) == ((int32_t)(-1))))
		{
			goto IL_01c3;
		}
	}
	{
		// g.setColor(color);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_111 = ___0_g;
		int32_t L_112 = ___6_color;
		NullCheck(L_111);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_111, L_112, NULL);
		// g.fillRect(x + img.frameWidth, y + img.frameHeight, w - img.frameWidth * 2, h - img.frameHeight * 2);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_113 = ___0_g;
		int32_t L_114 = ___1_x;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_115 = ___5_img;
		NullCheck(L_115);
		int32_t L_116 = L_115->___frameWidth_0;
		int32_t L_117 = ___2_y;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_118 = ___5_img;
		NullCheck(L_118);
		int32_t L_119 = L_118->___frameHeight_1;
		int32_t L_120 = ___3_w;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_121 = ___5_img;
		NullCheck(L_121);
		int32_t L_122 = L_121->___frameWidth_0;
		int32_t L_123 = ___4_h;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_124 = ___5_img;
		NullCheck(L_124);
		int32_t L_125 = L_124->___frameHeight_1;
		NullCheck(L_113);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_113, ((float)((int32_t)il2cpp_codegen_add(L_114, L_116))), ((float)((int32_t)il2cpp_codegen_add(L_117, L_119))), ((float)((int32_t)il2cpp_codegen_subtract(L_120, ((int32_t)il2cpp_codegen_multiply(L_122, 2))))), ((float)((int32_t)il2cpp_codegen_subtract(L_123, ((int32_t)il2cpp_codegen_multiply(L_125, 2))))), NULL);
	}

IL_01c3:
	{
		// }
		return;
	}
}
// System.Void MenuNPC::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuNPC_moveCamera_m558BC73242BBD42A2DF8DBF4B706636F721868BF (MenuNPC_t5C15AAAEEB196E4D4A5AE135014C14FA484988B1* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_54;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_56;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_56;
		int32_t L_3 = __this->___cmyLim_59;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_54;
		int32_t L_5 = __this->___vY_54;
		__this->___vY_54 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_56;
		int32_t L_7 = __this->___vY_54;
		__this->___cmy_56 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_54;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_54 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_56;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -hList / 2)
		int32_t L_10 = __this->___cmy_56;
		int32_t L_11 = __this->___hList_35;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -hList / 2;
		int32_t L_12 = __this->___hList_35;
		__this->___cmy_56 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_55 = 0;
		// vY = 0;
		__this->___vY_54 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_56;
		int32_t L_14 = __this->___cmyLim_59;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + hList / 2)
		int32_t L_15 = __this->___cmy_56;
		int32_t L_16 = __this->___cmyLim_59;
		int32_t L_17 = __this->___hList_35;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + hList / 2;
		int32_t L_18 = __this->___cmyLim_59;
		int32_t L_19 = __this->___hList_35;
		__this->___cmy_56 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_59;
		__this->___cmtoY_55 = L_20;
		// vY = 0;
		__this->___vY_54 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_56;
		int32_t L_22 = __this->___vY_54;
		__this->___cmy_56 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_56;
		__this->___cmtoY_55 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_54;
		int32_t L_25 = __this->___vY_54;
		__this->___vY_54 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_54;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_0163;
		}
	}
	{
		// vY = 0;
		__this->___vY_54 = 0;
		goto IL_0163;
	}

IL_0137:
	{
		// else if (cmy < 0)
		int32_t L_27 = __this->___cmy_56;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_55 = 0;
		goto IL_0163;
	}

IL_0149:
	{
		// else if (cmy > cmyLim)
		int32_t L_28 = __this->___cmy_56;
		int32_t L_29 = __this->___cmyLim_59;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_0163;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_30 = __this->___cmyLim_59;
		__this->___cmtoY_55 = L_30;
	}

IL_0163:
	{
		// if (cmy != cmtoY)
		int32_t L_31 = __this->___cmy_56;
		int32_t L_32 = __this->___cmtoY_55;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_01bd;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_33 = __this->___cmtoY_55;
		int32_t L_34 = __this->___cmy_56;
		__this->___cmvy_58 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_33, L_34))<<2));
		// cmdy += cmvy;
		int32_t L_35 = __this->___cmdy_57;
		int32_t L_36 = __this->___cmvy_58;
		__this->___cmdy_57 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		// cmy += cmdy >> 4;
		int32_t L_37 = __this->___cmy_56;
		int32_t L_38 = __this->___cmdy_57;
		__this->___cmy_56 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(L_38>>4))));
		// cmdy &= 15;
		int32_t L_39 = __this->___cmdy_57;
		__this->___cmdy_57 = ((int32_t)(L_39&((int32_t)15)));
	}

IL_01bd:
	{
		// }
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
// System.Void MenuOn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn__ctor_m0355A3E6DF9F7835085D134600A9D684899A3FD9 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	{
		// public MenuOn()
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
		// initCmd();
		MenuOn_initCmd_m1C9F7027AF679F682FC8B0C449A2BFD9EC94A724(__this, NULL);
		// }
		return;
	}
}
// MenuOn MenuOn::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* MenuOn_gI_mEA2B0E24954482CABA82B2A061D3014CCCE0B53E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MenuOn());
		MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* L_0 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* L_1 = (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785*)il2cpp_codegen_object_new(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuOn__ctor_m0355A3E6DF9F7835085D134600A9D684899A3FD9(L_1, NULL);
		MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* L_2 = L_1;
		((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___me_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___me_26), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* L_3 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___me_26;
		return L_3;
	}
}
// System.Void MenuOn::commandTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_commandTab_m6A16B87FB72A114377AD828388700D0DE34C832A (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// doFire();
		MenuOn_doFire_m312E696A873D13C25E489F23DA28C8AC03D72930(__this, NULL);
		// break;
		return;
	}

IL_000f:
	{
		// showMenu = false;
		__this->___showMenu_27 = (bool)0;
		// }
		return;
	}
}
// System.Void MenuOn::initCmd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_initCmd_m1C9F7027AF679F682FC8B0C449A2BFD9EC94A724 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// left = new Command(T.close, 1);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_0 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___close_2;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_1 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Command__ctor_mBEF90D631F1834B890E5A23E2C5C9D57F7900ABB(L_1, L_0, 1, NULL);
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void MenuOn::setSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_setSelected_mC5848CE6395895A6401CC5492BB725EAD188109E (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	{
		// if (selected < 0)
		int32_t L_0 = __this->___selected_29;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// selected = 0;
		__this->___selected_29 = 0;
	}

IL_0010:
	{
		// if (selected >= size)
		int32_t L_1 = __this->___selected_29;
		int32_t L_2 = __this->___size_46;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		// selected = 0;
		__this->___selected_29 = 0;
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void MenuOn::setPos(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_setPos_mFE70615DFC9A471C5B48491D9353E6B486FB7F3D (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// menuX = x;
		int32_t L_0 = ___0_x;
		__this->___menuX_31 = L_0;
		// menuY = y;
		int32_t L_1 = ___1_y;
		__this->___menuY_32 = L_1;
		// if (menuX < 0)
		int32_t L_2 = __this->___menuX_31;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// menuX = 0;
		__this->___menuX_31 = 0;
	}

IL_001e:
	{
		// if (menuY < 0)
		int32_t L_3 = __this->___menuY_32;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// menuY = 0;
		__this->___menuY_32 = 0;
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void MenuOn::doFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_doFire_m312E696A873D13C25E489F23DA28C8AC03D72930 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_0 = NULL;
	{
		// showMenu = false;
		__this->___showMenu_27 = (bool)0;
		// if (cmdClose != null)
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_0 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___cmdClose_47;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// if (cmdClose.action != null)
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_1 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___cmdClose_47;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___action_1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// cmdClose.action.perform();
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_3 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___cmdClose_47;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___action_1;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_4);
		goto IL_003b;
	}

IL_002b:
	{
		// commandTab(cmdClose.indexMenu);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_5 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___cmdClose_47;
		NullCheck(L_5);
		int8_t L_6 = L_5->___indexMenu_3;
		VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void AvMain::commandTab(System.Int32) */, __this, L_6);
	}

IL_003b:
	{
		// Command command = (Command)list.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_7 = __this->___list_28;
		int32_t L_8 = __this->___selected_29;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_7, L_8, NULL);
		V_0 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_9, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// if (command.action != null)
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___action_1;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// command.action.perform();
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___action_1;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_13);
		return;
	}

IL_0066:
	{
		// Canvas.currentMyScreen.commandAction(command.indexMenu);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_15 = V_0;
		NullCheck(L_15);
		int8_t L_16 = L_15->___indexMenu_3;
		NullCheck(L_14);
		VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void AvMain::commandAction(System.Int32) */, L_14, L_16);
		// }
		return;
	}
}
// System.Void MenuOn::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_updateKey_m7275085104A43B6FF8C546808F62510BCAEF0D81 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateMenuKeyMain();
		MenuOn_updateMenuKeyMain_m2BF456487DC07FFDD7E28D1F4984368A3755A32A(__this, NULL);
		// Canvas.paint.updateKeyOn(left, right, center);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_1 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_2 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___right_16;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_3 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15;
		NullCheck(L_0);
		InterfaceActionInvoker3< Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* >::Invoke(58 /* System.Void IPaint::updateKeyOn(Command,Command,Command) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// if (timeOpen > 0)
		int32_t L_4 = __this->___timeOpen_54;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// timeOpen--;
		int32_t L_5 = __this->___timeOpen_54;
		__this->___timeOpen_54 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// if (timeOpen == 0)
		int32_t L_6 = __this->___timeOpen_54;
		if (L_6)
		{
			goto IL_0047;
		}
	}
	{
		// click();
		MenuOn_click_mD13B766BF8B6C4625F5201E5B2F7BBB1D100CFC0(__this, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void MenuOn::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_click_mD13B766BF8B6C4625F5201E5B2F7BBB1D100CFC0 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int num = hItem;
		int32_t L_0 = __this->___hItem_37;
		V_0 = L_0;
		// int num2 = menuTemY + Canvas.transTab;
		int32_t L_1 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// int num3 = (cmtoY + Canvas.py - num2) / num;
		int32_t L_3 = __this->___cmtoY_40;
		int32_t L_4 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5))/L_6));
		// if (num3 >= 0 && num3 < size)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = __this->___size_46;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_003f;
		}
	}
	{
		// selected = num3;
		int32_t L_10 = V_2;
		__this->___selected_29 = L_10;
		// doFire();
		MenuOn_doFire_m312E696A873D13C25E489F23DA28C8AC03D72930(__this, NULL);
	}

IL_003f:
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// }
		return;
	}
}
// System.Void MenuOn::updateMenuKeyMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_updateMenuKeyMain_m2BF456487DC07FFDD7E28D1F4984368A3755A32A (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B38_0 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_58;
		__this->___count_58 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (chan != 0)
		int32_t L_1 = __this->___chan_30;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// bool flag = false;
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		G_B3_0 = 0;
		if (!L_2)
		{
			G_B5_0 = 0;
			goto IL_0081;
		}
	}
	{
		// isClick = true;
		__this->___isClick_56 = (bool)1;
		// if (Canvas.isPoint(menuX - 2, menuTemY - 7 + Canvas.transTab, menuW + 4, menuH + 15))
		int32_t L_3 = __this->___menuX_31;
		int32_t L_4 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		int32_t L_6 = __this->___menuW_33;
		int32_t L_7 = __this->___menuH_34;
		bool L_8;
		L_8 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(L_3, 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_4, 7)), L_5)), ((int32_t)il2cpp_codegen_add(L_6, 4)), ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)15))), NULL);
		G_B4_0 = G_B3_0;
		if (!L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0081;
		}
	}
	{
		// isTran = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isTran_18 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pa = cmy;
		int32_t L_9 = __this->___cmy_41;
		__this->___pa_52 = L_9;
		// timeDelay = count;
		int64_t L_10 = __this->___count_58;
		__this->___timeDelay_57 = L_10;
		// trans = true;
		__this->___trans_55 = (bool)1;
		G_B5_0 = G_B4_0;
	}

IL_0081:
	{
		// if (trans)
		bool L_11 = __this->___trans_55;
		G_B6_0 = G_B5_0;
		if (!L_11)
		{
			G_B35_0 = G_B5_0;
			goto IL_025b;
		}
	}
	{
		// int num = Canvas.dy();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		V_0 = L_12;
		// long num2 = count - timeDelay;
		int64_t L_13 = __this->___count_58;
		int64_t L_14 = __this->___timeDelay_57;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_13, L_14));
		// if (Canvas.isPointerDown)
		bool L_15 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		G_B7_0 = G_B6_0;
		if (!L_15)
		{
			G_B22_0 = G_B6_0;
			goto IL_018b;
		}
	}
	{
		// if (Canvas.gameTick % 3 == 0)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___gameTick_12;
		G_B8_0 = G_B7_0;
		if (((int32_t)(L_16%3)))
		{
			G_B9_0 = G_B7_0;
			goto IL_00ca;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_17 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_53 = L_17;
		// timePoint = count;
		int64_t L_18 = __this->___count_58;
		__this->___timePoint_59 = L_18;
		G_B9_0 = G_B8_0;
	}

IL_00ca:
	{
		// vY = 0;
		__this->___vY_50 = 0;
		// if (Math.abs(num) < 20 * AvMain.hd)
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_21 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B10_0 = G_B9_0;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_21)))))
		{
			G_B13_0 = G_B9_0;
			goto IL_0120;
		}
	}
	{
		// int num3 = menuTemY + 1 + Canvas.transTab;
		int32_t L_22 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_23 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_22, 1)), L_23));
		// int num4 = hItem;
		int32_t L_24 = __this->___hItem_37;
		V_3 = L_24;
		// int num5 = (cmtoY + Canvas.py - num3) / num4;
		int32_t L_25 = __this->___cmtoY_40;
		int32_t L_26 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_25, L_26)), L_27))/L_28));
		// if (num5 >= 0 && num5 < size)
		int32_t L_29 = V_4;
		G_B11_0 = G_B10_0;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			G_B13_0 = G_B10_0;
			goto IL_0120;
		}
	}
	{
		int32_t L_30 = V_4;
		int32_t L_31 = __this->___size_46;
		G_B12_0 = G_B11_0;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			G_B13_0 = G_B11_0;
			goto IL_0120;
		}
	}
	{
		// selected = num5;
		int32_t L_32 = V_4;
		__this->___selected_29 = L_32;
		G_B13_0 = G_B12_0;
	}

IL_0120:
	{
		// if (CRes.abs(num) >= 20 * AvMain.hd)
		int32_t L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_35 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B14_0 = G_B13_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_35)))))
		{
			G_B15_0 = G_B13_0;
			goto IL_0139;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		G_B18_0 = G_B14_0;
		goto IL_014a;
	}

IL_0139:
	{
		// else if (num2 > 3 && num2 < 8)
		int64_t L_36 = V_1;
		G_B16_0 = G_B15_0;
		if ((((int64_t)L_36) <= ((int64_t)((int64_t)3))))
		{
			G_B18_0 = G_B15_0;
			goto IL_014a;
		}
	}
	{
		int64_t L_37 = V_1;
		G_B17_0 = G_B16_0;
		if ((((int64_t)L_37) >= ((int64_t)((int64_t)8))))
		{
			G_B18_0 = G_B16_0;
			goto IL_014a;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		G_B18_0 = G_B17_0;
	}

IL_014a:
	{
		// cmtoY = pa + num;
		int32_t L_38 = __this->___pa_52;
		int32_t L_39 = V_0;
		__this->___cmtoY_40 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_40 = __this->___cmtoY_40;
		G_B19_0 = G_B18_0;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			G_B20_0 = G_B18_0;
			goto IL_016f;
		}
	}
	{
		int32_t L_41 = __this->___cmtoY_40;
		int32_t L_42 = __this->___cmyLim_44;
		G_B20_0 = G_B19_0;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			G_B21_0 = G_B19_0;
			goto IL_017f;
		}
	}

IL_016f:
	{
		// cmtoY = pa + num / 3;
		int32_t L_43 = __this->___pa_52;
		int32_t L_44 = V_0;
		__this->___cmtoY_40 = ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)(L_44/3))));
		G_B21_0 = G_B20_0;
	}

IL_017f:
	{
		// cmy = cmtoY;
		int32_t L_45 = __this->___cmtoY_40;
		__this->___cmy_41 = L_45;
		G_B22_0 = G_B21_0;
	}

IL_018b:
	{
		// if (Canvas.isPointerRelease && Canvas.isPoint(menuX - 2, menuTemY - 7 + Canvas.transTab, menuW + 4, menuH + 15))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_46 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		G_B23_0 = G_B22_0;
		if (!L_46)
		{
			G_B35_0 = G_B22_0;
			goto IL_025b;
		}
	}
	{
		int32_t L_47 = __this->___menuX_31;
		int32_t L_48 = __this->___menuTemY_35;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_49 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___transTab_56;
		int32_t L_50 = __this->___menuW_33;
		int32_t L_51 = __this->___menuH_34;
		bool L_52;
		L_52 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(L_47, 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_48, 7)), L_49)), ((int32_t)il2cpp_codegen_add(L_50, 4)), ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)15))), NULL);
		G_B24_0 = G_B23_0;
		if (!L_52)
		{
			G_B35_0 = G_B23_0;
			goto IL_025b;
		}
	}
	{
		// int num6 = (int)(count - timePoint);
		int64_t L_53 = __this->___count_58;
		int64_t L_54 = __this->___timePoint_59;
		V_5 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_53, L_54)));
		// int num7 = dyTran - Canvas.py;
		int32_t L_55 = __this->___dyTran_53;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_56 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_55, L_56));
		// if (CRes.abs(num7) > 40 && num6 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_57 = V_6;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_58;
		L_58 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_57, NULL);
		G_B25_0 = G_B24_0;
		if ((((int32_t)L_58) <= ((int32_t)((int32_t)40))))
		{
			G_B29_0 = G_B24_0;
			goto IL_021a;
		}
	}
	{
		int32_t L_59 = V_5;
		G_B26_0 = G_B25_0;
		if ((((int32_t)L_59) >= ((int32_t)((int32_t)10))))
		{
			G_B29_0 = G_B25_0;
			goto IL_021a;
		}
	}
	{
		int32_t L_60 = __this->___cmtoY_40;
		G_B27_0 = G_B26_0;
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			G_B29_0 = G_B26_0;
			goto IL_021a;
		}
	}
	{
		int32_t L_61 = __this->___cmtoY_40;
		int32_t L_62 = __this->___cmyLim_44;
		G_B28_0 = G_B27_0;
		if ((((int32_t)L_61) >= ((int32_t)L_62)))
		{
			G_B29_0 = G_B27_0;
			goto IL_021a;
		}
	}
	{
		// vY = num7 / num6 * 10;
		int32_t L_63 = V_6;
		int32_t L_64 = V_5;
		__this->___vY_50 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_63/L_64)), ((int32_t)10)));
		G_B29_0 = G_B28_0;
	}

IL_021a:
	{
		// timePoint = -1L;
		__this->___timePoint_59 = ((int64_t)(-1));
		// if (Math.abs(num) < 20 * AvMain.hd)
		int32_t L_65 = V_0;
		int32_t L_66;
		L_66 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_65, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_67 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B30_0 = G_B29_0;
		if ((((int32_t)L_66) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_67)))))
		{
			G_B34_0 = G_B29_0;
			goto IL_0255;
		}
	}
	{
		// if (num2 <= 4)
		int64_t L_68 = V_1;
		G_B31_0 = G_B30_0;
		if ((((int64_t)L_68) > ((int64_t)((int64_t)4))))
		{
			G_B32_0 = G_B30_0;
			goto IL_0247;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen = 5;
		__this->___timeOpen_54 = 5;
		G_B34_0 = G_B31_0;
		goto IL_0255;
	}

IL_0247:
	{
		// else if (!isHide)
		bool L_69 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		G_B33_0 = G_B32_0;
		if (L_69)
		{
			G_B34_0 = G_B32_0;
			goto IL_0255;
		}
	}
	{
		// click();
		MenuOn_click_mD13B766BF8B6C4625F5201E5B2F7BBB1D100CFC0(__this, NULL);
		G_B34_0 = G_B33_0;
	}

IL_0255:
	{
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		G_B35_0 = G_B34_0;
	}

IL_025b:
	{
		// if (isClick && Canvas.isPointerRelease)
		bool L_70 = __this->___isClick_56;
		G_B36_0 = G_B35_0;
		if (!L_70)
		{
			G_B40_0 = G_B35_0;
			goto IL_028d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_71 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		G_B37_0 = G_B36_0;
		if (!L_71)
		{
			G_B40_0 = G_B36_0;
			goto IL_028d;
		}
	}
	{
		// isClick = false;
		__this->___isClick_56 = (bool)0;
		// if (!trans)
		bool L_72 = __this->___trans_55;
		G_B38_0 = G_B37_0;
		if (L_72)
		{
			G_B39_0 = G_B37_0;
			goto IL_0280;
		}
	}
	{
		// showMenu = false;
		__this->___showMenu_27 = (bool)0;
		G_B39_0 = G_B38_0;
	}

IL_0280:
	{
		// trans = false;
		__this->___trans_55 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		G_B40_0 = G_B39_0;
	}

IL_028d:
	{
		// if (flag)
		if (!G_B40_0)
		{
			goto IL_02df;
		}
	}
	{
		// int num8 = hItem;
		int32_t L_73 = __this->___hItem_37;
		V_7 = L_73;
		// cmtoY = selected * num8 - menuW / 2 + num8 / 2;
		int32_t L_74 = __this->___selected_29;
		int32_t L_75 = V_7;
		int32_t L_76 = __this->___menuW_33;
		int32_t L_77 = V_7;
		__this->___cmtoY_40 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_74, L_75)), ((int32_t)(L_76/2)))), ((int32_t)(L_77/2))));
		// if (cmtoY > cmyLim)
		int32_t L_78 = __this->___cmtoY_40;
		int32_t L_79 = __this->___cmyLim_44;
		if ((((int32_t)L_78) <= ((int32_t)L_79)))
		{
			goto IL_02cf;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_80 = __this->___cmyLim_44;
		__this->___cmtoY_40 = L_80;
		return;
	}

IL_02cf:
	{
		// else if (cmtoY < 0)
		int32_t L_81 = __this->___cmtoY_40;
		if ((((int32_t)L_81) >= ((int32_t)0)))
		{
			goto IL_02df;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_40 = 0;
	}

IL_02df:
	{
		// }
		return;
	}
}
// System.Void MenuOn::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_paint_mD341EF2FAA6DB02D8EF09548A710D629E21E9621 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// paintMain(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		MenuOn_paintMain_m0C83EB78F2864C0A0E5A700B7D0C7C148C290B24(__this, L_0, NULL);
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_1, NULL);
		// if (Canvas.currentDialog == null)
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentDialog_24;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		// Canvas.paint.paintTabSoft(g);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		NullCheck(L_3);
		InterfaceActionInvoker1< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* >::Invoke(53 /* System.Void IPaint::paintTabSoft(MyGraphics) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_3, L_4);
		// Canvas.paint.paintCmdBar(g, left, center, right);
		RuntimeObject* L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_6 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___left_14;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_9 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___right_16;
		NullCheck(L_5);
		InterfaceActionInvoker4< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* >::Invoke(54 /* System.Void IPaint::paintCmdBar(MyGraphics,Command,Command,Command) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, L_9);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void MenuOn::paintMenuNormal(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_paintMenuNormal_mBE1EA1F2802259E875DEC50F15406CAC8FC57C2C (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// g.drawImage(imgTab, menuX, menuY - 5 * AvMain.hd, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_2 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___imgTab_48;
		int32_t L_3 = __this->___menuX_31;
		int32_t L_4 = __this->___menuY_32;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_5 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_1);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_1, L_2, ((float)L_3), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)il2cpp_codegen_multiply(5, L_5))))), 0, NULL);
		// g.setClip(menuX, menuY, menuW, menuH - 10 * AvMain.hd);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_6 = ___0_g;
		int32_t L_7 = __this->___menuX_31;
		int32_t L_8 = __this->___menuY_32;
		int32_t L_9 = __this->___menuW_33;
		int32_t L_10 = __this->___menuH_34;
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_6);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_6, ((float)L_7), ((float)L_8), ((float)L_9), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_11))))), NULL);
		// g.translate(menuX + 3, menuTemY + 1);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_12 = ___0_g;
		int32_t L_13 = __this->___menuX_31;
		int32_t L_14 = __this->___menuTemY_35;
		NullCheck(L_12);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_12, ((float)((int32_t)il2cpp_codegen_add(L_13, 3))), ((float)((int32_t)il2cpp_codegen_add(L_14, 1))), NULL);
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_15 = ___0_g;
		int32_t L_16 = __this->___cmy_41;
		NullCheck(L_15);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_15, (0.0f), ((float)((-L_16))), NULL);
		// int num = (hItem - AvMain.hNormal) / 2;
		int32_t L_17 = __this->___hItem_37;
		int8_t L_18 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hNormal_7;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_17, (int32_t)L_18))/2));
		// int num2 = 0;
		V_1 = 0;
		// for (int i = 0; i < size; i++)
		V_2 = 0;
		goto IL_0103;
	}

IL_0093:
	{
		// g.setColor(0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		NullCheck(L_19);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_19, 0, NULL);
		// if (!isHide && i == selected)
		bool L_20 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_20)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = __this->___selected_29;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_00ce;
		}
	}
	{
		// g.drawImageScale(imgSelect, 0, i * hItem, menuW - 6, hItem, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_23 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_24 = ((MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_StaticFields*)il2cpp_codegen_static_fields_for(MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785_il2cpp_TypeInfo_var))->___imgSelect_49;
		int32_t L_25 = V_2;
		int32_t L_26 = __this->___hItem_37;
		int32_t L_27 = __this->___menuW_33;
		int32_t L_28 = __this->___hItem_37;
		NullCheck(L_23);
		MyGraphics_drawImageScale_m54E189E018938CE284E542CC3E689FF8C9C76866(L_23, L_24, 0, ((int32_t)il2cpp_codegen_multiply(L_25, L_26)), ((int32_t)il2cpp_codegen_subtract(L_27, 6)), L_28, 0, NULL);
	}

IL_00ce:
	{
		// num2 = 0;
		V_1 = 0;
		// Canvas.normalWhiteFont.drawString(g, ((Command)list.elementAt(i)).caption, 5 + num2, i * hItem + num, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_29 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalWhiteFont_40;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_30 = ___0_g;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_31 = __this->___list_28;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_31, L_32, NULL);
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_33, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		String_t* L_34 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_33, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var))->___caption_0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = __this->___hItem_37;
		int32_t L_38 = V_0;
		NullCheck(L_29);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_29, L_30, L_34, ((int32_t)il2cpp_codegen_add(5, L_35)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_36, L_37)), L_38)), 0);
		// for (int i = 0; i < size; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0103:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = __this->___size_46;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0093;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuOn::paintMain(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_paintMain_m0C83EB78F2864C0A0E5A700B7D0C7C148C290B24 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	{
		// if (size != 0)
		int32_t L_0 = __this->___size_46;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// g.translate(0f - g.getTranslateX(), 0f - g.getTranslateY());
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		NullCheck(L_2);
		float L_3;
		L_3 = MyGraphics_getTranslateX_m2DB0508A33DED848DBF27AC195D60001FE6CB920_inline(L_2, NULL);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		NullCheck(L_4);
		float L_5;
		L_5 = MyGraphics_getTranslateY_mBE99771F46EC11F951F2741403EDBC090A19979E_inline(L_4, NULL);
		NullCheck(L_1);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_1, ((float)il2cpp_codegen_subtract((0.0f), L_3)), ((float)il2cpp_codegen_subtract((0.0f), L_5)), NULL);
		// if (chan == 0)
		int32_t L_6 = __this->___chan_30;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		// paintMenuNormal(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_7 = ___0_g;
		MenuOn_paintMenuNormal_mBE1EA1F2802259E875DEC50F15406CAC8FC57C2C(__this, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void MenuOn::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_update_m68B04244C04A7F2B79135394888F6B4A866A119C (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_54;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_54;
		__this->___timeOpen_54 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_54;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		MenuOn_click_mD13B766BF8B6C4625F5201E5B2F7BBB1D100CFC0(__this, NULL);
	}

IL_0025:
	{
		// if (xL != 0)
		int32_t L_3 = __this->___xL_45;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// xL += -xL >> 1;
		int32_t L_4 = __this->___xL_45;
		int32_t L_5 = __this->___xL_45;
		__this->___xL_45 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(((-L_5))>>1))));
	}

IL_0043:
	{
		// if (xL == -1)
		int32_t L_6 = __this->___xL_45;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0053;
		}
	}
	{
		// xL = 0;
		__this->___xL_45 = 0;
	}

IL_0053:
	{
		// moveCamera();
		MenuOn_moveCamera_m81BB37A14E451B6BCEAF54A97D9E59B7F532011A(__this, NULL);
		// updateMain();
		MenuOn_updateMain_m979E12CAB64F8FC7C57DF65A288D93B632D5BCF3(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuOn::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_moveCamera_m81BB37A14E451B6BCEAF54A97D9E59B7F532011A (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_50;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_41;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_41;
		int32_t L_3 = __this->___cmyLim_44;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_50;
		int32_t L_5 = __this->___vY_50;
		__this->___vY_50 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_41;
		int32_t L_7 = __this->___vY_50;
		__this->___cmy_41 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_50;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_50 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_41;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -disY / 2)
		int32_t L_10 = __this->___cmy_41;
		int32_t L_11 = __this->___disY_51;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -disY / 2;
		int32_t L_12 = __this->___disY_51;
		__this->___cmy_41 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_40 = 0;
		// vY = 0;
		__this->___vY_50 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_41;
		int32_t L_14 = __this->___cmyLim_44;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + disY / 2)
		int32_t L_15 = __this->___cmy_41;
		int32_t L_16 = __this->___cmyLim_44;
		int32_t L_17 = __this->___disY_51;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + disY / 2;
		int32_t L_18 = __this->___cmyLim_44;
		int32_t L_19 = __this->___disY_51;
		__this->___cmy_41 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_44;
		__this->___cmtoY_40 = L_20;
		// vY = 0;
		__this->___vY_50 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_41;
		int32_t L_22 = __this->___vY_50;
		__this->___cmy_41 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_41;
		__this->___cmtoY_40 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_50;
		int32_t L_25 = __this->___vY_50;
		__this->___vY_50 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_50;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_0163;
		}
	}
	{
		// vY = 0;
		__this->___vY_50 = 0;
		goto IL_0163;
	}

IL_0137:
	{
		// else if (cmy < 0)
		int32_t L_27 = __this->___cmy_41;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_40 = 0;
		goto IL_0163;
	}

IL_0149:
	{
		// else if (cmy > cmyLim)
		int32_t L_28 = __this->___cmy_41;
		int32_t L_29 = __this->___cmyLim_44;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_0163;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_30 = __this->___cmyLim_44;
		__this->___cmtoY_40 = L_30;
	}

IL_0163:
	{
		// if (cmy != cmtoY)
		int32_t L_31 = __this->___cmy_41;
		int32_t L_32 = __this->___cmtoY_40;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_01bd;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_33 = __this->___cmtoY_40;
		int32_t L_34 = __this->___cmy_41;
		__this->___cmvy_43 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_33, L_34))<<2));
		// cmdy += cmvy;
		int32_t L_35 = __this->___cmdy_42;
		int32_t L_36 = __this->___cmvy_43;
		__this->___cmdy_42 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		// cmy += cmdy >> 4;
		int32_t L_37 = __this->___cmy_41;
		int32_t L_38 = __this->___cmdy_42;
		__this->___cmy_41 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(L_38>>4))));
		// cmdy &= 15;
		int32_t L_39 = __this->___cmdy_42;
		__this->___cmdy_42 = ((int32_t)(L_39&((int32_t)15)));
	}

IL_01bd:
	{
		// }
		return;
	}
}
// System.Void MenuOn::updateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuOn_updateMain_m979E12CAB64F8FC7C57DF65A288D93B632D5BCF3 (MenuOn_tE7982E388EF031A2BB1A60A044666CFC6A5CA785* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (menuTemY > menuY)
		int32_t L_0 = __this->___menuTemY_35;
		int32_t L_1 = __this->___menuY_32;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// int num = menuTemY - menuY >> 2;
		int32_t L_2 = __this->___menuTemY_35;
		int32_t L_3 = __this->___menuY_32;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, L_3))>>2));
		// if (num < 1)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		// num = 1;
		V_0 = 1;
	}

IL_0024:
	{
		// menuTemY -= num;
		int32_t L_5 = __this->___menuTemY_35;
		int32_t L_6 = V_0;
		__this->___menuTemY_35 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0032:
	{
		// menuTemY = menuY;
		int32_t L_7 = __this->___menuY_32;
		__this->___menuTemY_35 = L_7;
		// }
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
// System.Void MenuSub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub__ctor_m9978C8F847174085F44FF763607698801E9F754A (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MenuSub()
		MenuMain__ctor_m9BB6AFD39598438F028ADBDE910D41F329A18EBA(__this, NULL);
		// w = 200 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___w_30 = ((int32_t)il2cpp_codegen_multiply(((int32_t)200), L_0));
		// hItem = 35 * AvMain.hd;
		int32_t L_1 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hItem_32 = ((int32_t)il2cpp_codegen_multiply(((int32_t)35), L_1));
		// h = hItem * 4;
		int32_t L_2 = __this->___hItem_32;
		__this->___h_31 = ((int32_t)il2cpp_codegen_multiply(L_2, 4));
		// }
		return;
	}
}
// MenuSub MenuSub::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* MenuSub_gI_m7AE48DAB3F712E865C250C83AE6E64673A2223FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MenuSub());
		MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* L_0 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___me_26;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* L_1 = (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C*)il2cpp_codegen_object_new(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MenuSub__ctor_m9978C8F847174085F44FF763607698801E9F754A(L_1, NULL);
		MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* L_2 = L_1;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___me_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___me_26), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* L_3 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___me_26;
		return L_3;
	}
}
// System.Void MenuSub::startAt(MyVector,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_startAt_m48264CE23B21FEC88B040D4236D147D5F9267F89 (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___0_menuList, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list = menuList;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = ___0_menuList;
		__this->___list_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_27), (void*)L_0);
		// this.x = x;
		int32_t L_1 = ___1_x;
		__this->___x_28 = L_1;
		// this.y = y;
		int32_t L_2 = ___2_y;
		__this->___y_29 = L_2;
		// cmyLim = list.size() * hItem - h / 2 - 90;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_3 = __this->___list_27;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_3, NULL);
		int32_t L_5 = __this->___hItem_32;
		int32_t L_6 = __this->___h_31;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), ((int32_t)(L_6/2)))), ((int32_t)90)));
		// cmy = (cmtoY = 0);
		int32_t L_7 = 0;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = L_7;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35 = L_7;
		// if (cmyLim < 0)
		int32_t L_8 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		// cmyLim = 0;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38 = 0;
	}

IL_0052:
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// show();
		MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuSub::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_click_m414A8D31B39A5BB1D6A0E8CA7115AD3649CD9B22 (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Command command = (Command)list.elementAt(index);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___list_27;
		int32_t L_1 = __this->___index_33;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		// command.perform();
		NullCheck(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)));
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_2, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var)), NULL);
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// list.removeAllElements();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_3 = __this->___list_27;
		NullCheck(L_3);
		MyVector_removeAllElements_mF2D6466281DBBB597BBEDED74C9214256D0CE7D1(L_3, NULL);
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
		// }
		return;
	}
}
// System.Void MenuSub::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_update_m92E10CF49803B4A328A30EB73D891C72855E0C6E (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_43;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_43;
		__this->___timeOpen_43 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_43;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		MenuSub_click_m414A8D31B39A5BB1D6A0E8CA7115AD3649CD9B22(__this, NULL);
	}

IL_0025:
	{
		// if (vY != 0)
		int32_t L_3 = __this->___vY_39;
		if (!L_3)
		{
			goto IL_00da;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_4 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		int32_t L_6 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_00a4;
		}
	}

IL_0044:
	{
		// if (vY > 500)
		int32_t L_7 = __this->___vY_39;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)500))))
		{
			goto IL_005e;
		}
	}
	{
		// vY = 500;
		__this->___vY_39 = ((int32_t)500);
		goto IL_0076;
	}

IL_005e:
	{
		// else if (vY < -500)
		int32_t L_8 = __this->___vY_39;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)-500))))
		{
			goto IL_0076;
		}
	}
	{
		// vY = -500;
		__this->___vY_39 = ((int32_t)-500);
	}

IL_0076:
	{
		// vY -= vY / 5;
		int32_t L_9 = __this->___vY_39;
		int32_t L_10 = __this->___vY_39;
		__this->___vY_39 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)(L_10/5))));
		// if (CRes.abs(vY / 10) <= 10)
		int32_t L_11 = __this->___vY_39;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(((int32_t)(L_11/((int32_t)10))), NULL);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)10))))
		{
			goto IL_00a4;
		}
	}
	{
		// vY = 0;
		__this->___vY_39 = 0;
	}

IL_00a4:
	{
		// cmy += vY / 15;
		int32_t L_13 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		int32_t L_14 = __this->___vY_39;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14/((int32_t)15)))));
		// cmtoY = cmy;
		int32_t L_15 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = L_15;
		// vY -= vY / 20;
		int32_t L_16 = __this->___vY_39;
		int32_t L_17 = __this->___vY_39;
		__this->___vY_39 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)(L_17/((int32_t)20)))));
		goto IL_0100;
	}

IL_00da:
	{
		// else if (cmy < 0)
		int32_t L_18 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		// cmtoY = 0;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = 0;
		goto IL_0100;
	}

IL_00ea:
	{
		// else if (cmy > cmyLim)
		int32_t L_19 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		int32_t L_20 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0100;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_21 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = L_21;
	}

IL_0100:
	{
		// if (cmy != cmtoY)
		int32_t L_22 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		int32_t L_23 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_014d;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_24 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		int32_t L_25 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmvy_37 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_24, L_25))<<2));
		// cmdy += cmvy;
		int32_t L_26 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmdy_36;
		int32_t L_27 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmvy_37;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmdy_36 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		// cmy += cmdy >> 4;
		int32_t L_28 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		int32_t L_29 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmdy_36;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(L_29>>4))));
		// cmdy &= 15;
		int32_t L_30 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmdy_36;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmdy_36 = ((int32_t)(L_30&((int32_t)15)));
	}

IL_014d:
	{
		// Canvas.loadMap.update();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C* L_31 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___loadMap_28;
		NullCheck(L_31);
		LoadMap_update_mA5DB1D9AAEEEE500BB2DE960344C01A98B4C14CB(L_31, NULL);
		// }
		return;
	}
}
// System.Void MenuSub::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_updateKey_m6F093C5E70B6F6230138D181E4E41A259590BA8C (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_40;
		__this->___count_40 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// PaintPopup.gI().setupdateTab();
		PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* L_1;
		L_1 = PaintPopup_gI_mB6AA99D3CE731979E0898982002FB985A48C32A8(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PaintPopup_setupdateTab_mEFF3BF31C9966BECFC309686B242B6DD944E2E24(L_1, NULL);
		// if (Canvas.isPointerClick && Canvas.isPoint(x, y, w, h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_3)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_4 = __this->___x_28;
		int32_t L_5 = __this->___y_29;
		int32_t L_6 = __this->___w_30;
		int32_t L_7 = __this->___h_31;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_4, L_5, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		// isTran = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isTran_18 = (bool)1;
		// isG = false;
		__this->___isG_46 = (bool)0;
		// if (vY != 0)
		int32_t L_9 = __this->___vY_39;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// isG = true;
		__this->___isG_46 = (bool)1;
	}

IL_005d:
	{
		// pyLast = Canvas.pyLast;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_44 = L_10;
		// Canvas.isPointerClick = false;
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pa = cmy;
		int32_t L_11 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		__this->___pa_48 = L_11;
		// transY = true;
		__this->___transY_47 = (bool)1;
		// timeDelay = count;
		int64_t L_12 = __this->___count_40;
		__this->___timeDelay_49 = L_12;
		// isFire = true;
		__this->___isFire_45 = (bool)1;
	}

IL_0093:
	{
		// if (transY)
		bool L_13 = __this->___transY_47;
		if (!L_13)
		{
			goto IL_0272;
		}
	}
	{
		// long num = count - timeDelay;
		int64_t L_14 = __this->___count_40;
		int64_t L_15 = __this->___timeDelay_49;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_14, L_15));
		// int num2 = pyLast - Canvas.py;
		int32_t L_16 = __this->___pyLast_44;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_17 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		// pyLast = Canvas.py;
		int32_t L_18 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_44 = L_18;
		// if (Canvas.isPointerDown)
		bool L_19 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_19)
		{
			goto IL_019b;
		}
	}
	{
		// if (count % 2 == 0)
		int64_t L_20 = __this->___count_40;
		if (((int64_t)(L_20%((int64_t)2))))
		{
			goto IL_00f0;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_42 = L_21;
		// timePoint = count;
		int64_t L_22 = __this->___count_40;
		__this->___timePoint_41 = L_22;
	}

IL_00f0:
	{
		// vY = 0;
		__this->___vY_39 = 0;
		// int num3 = (cmtoY + Canvas.py - y) / hItem;
		int32_t L_23 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_25 = __this->___y_29;
		int32_t L_26 = __this->___hItem_32;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25))/L_26));
		// index = num3;
		int32_t L_27 = V_2;
		__this->___index_33 = L_27;
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		int32_t L_28;
		L_28 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_30 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_30)))))
		{
			goto IL_0135;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_0156;
	}

IL_0135:
	{
		// else if (num > 3 && num < 8 && isFire && !isG)
		int64_t L_31 = V_0;
		if ((((int64_t)L_31) <= ((int64_t)((int64_t)3))))
		{
			goto IL_0156;
		}
	}
	{
		int64_t L_32 = V_0;
		if ((((int64_t)L_32) >= ((int64_t)((int64_t)8))))
		{
			goto IL_0156;
		}
	}
	{
		bool L_33 = __this->___isFire_45;
		if (!L_33)
		{
			goto IL_0156;
		}
	}
	{
		bool L_34 = __this->___isG_46;
		if (L_34)
		{
			goto IL_0156;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_0156:
	{
		// cmtoY = pa + num2;
		int32_t L_35 = __this->___pa_48;
		int32_t L_36 = V_1;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_37 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_38 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		int32_t L_39 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_0186;
		}
	}

IL_0177:
	{
		// cmtoY = pa + num2 / 2;
		int32_t L_40 = __this->___pa_48;
		int32_t L_41 = V_1;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34 = ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)(L_41/2))));
	}

IL_0186:
	{
		// pa = cmtoY;
		int32_t L_42 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		__this->___pa_48 = L_42;
		// cmy = cmtoY;
		int32_t L_43 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35 = L_43;
	}

IL_019b:
	{
		// if (Canvas.isPointerRelease && Canvas.isPoint(x, y, w, h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_44 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_44)
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_45 = __this->___x_28;
		int32_t L_46 = __this->___y_29;
		int32_t L_47 = __this->___w_30;
		int32_t L_48 = __this->___h_31;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_45, L_46, L_47, L_48, NULL);
		if (!L_49)
		{
			goto IL_0272;
		}
	}
	{
		// isG = false;
		__this->___isG_46 = (bool)0;
		// int num4 = (int)(count - timePoint);
		int64_t L_50 = __this->___count_40;
		int64_t L_51 = __this->___timePoint_41;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_50, L_51)));
		// int num5 = dyTran - Canvas.py;
		int32_t L_52 = __this->___dyTran_42;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_53 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		// if (CRes.abs(num5) > 40 && num4 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_54 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_54, NULL);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)40))))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) >= ((int32_t)((int32_t)10))))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_57 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_58 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmtoY_34;
		int32_t L_59 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmyLim_38;
		if ((((int32_t)L_58) >= ((int32_t)L_59)))
		{
			goto IL_021c;
		}
	}
	{
		// vY = num5 / num4 * 10;
		int32_t L_60 = V_4;
		int32_t L_61 = V_3;
		__this->___vY_39 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_60/L_61)), ((int32_t)10)));
	}

IL_021c:
	{
		// timePoint = -1L;
		__this->___timePoint_41 = ((int64_t)(-1));
		// if (Math.abs(Canvas.dy()) < 10 * AvMain.hd && isFire)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		int32_t L_63;
		L_63 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_62, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_64 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_63) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_64)))))
		{
			goto IL_0272;
		}
	}
	{
		bool L_65 = __this->___isFire_45;
		if (!L_65)
		{
			goto IL_0272;
		}
	}
	{
		// if (num <= 4)
		int64_t L_66 = V_0;
		if ((((int64_t)L_66) > ((int64_t)((int64_t)4))))
		{
			goto IL_025d;
		}
	}
	{
		// if (isFire)
		bool L_67 = __this->___isFire_45;
		if (!L_67)
		{
			goto IL_0254;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_0254:
	{
		// timeOpen = 5;
		__this->___timeOpen_43 = 5;
		goto IL_026b;
	}

IL_025d:
	{
		// else if (!isHide)
		bool L_68 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_68)
		{
			goto IL_026b;
		}
	}
	{
		// click();
		MenuSub_click_m414A8D31B39A5BB1D6A0E8CA7115AD3649CD9B22(__this, NULL);
	}

IL_026b:
	{
		// isFire = false;
		__this->___isFire_45 = (bool)0;
	}

IL_0272:
	{
		// if (Canvas.isPointerRelease && !transY && !Canvas.isPoint(x, y, w, h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_69 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_69)
		{
			goto IL_02b8;
		}
	}
	{
		bool L_70 = __this->___transY_47;
		if (L_70)
		{
			goto IL_02b8;
		}
	}
	{
		int32_t L_71 = __this->___x_28;
		int32_t L_72 = __this->___y_29;
		int32_t L_73 = __this->___w_30;
		int32_t L_74 = __this->___h_31;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_71, L_72, L_73, L_74, NULL);
		if (L_75)
		{
			goto IL_02b8;
		}
	}
	{
		// transY = false;
		__this->___transY_47 = (bool)0;
		// list.removeAllElements();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_76 = __this->___list_27;
		NullCheck(L_76);
		MyVector_removeAllElements_mF2D6466281DBBB597BBEDED74C9214256D0CE7D1(L_76, NULL);
		// Canvas.menuMain = null;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)(MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A*)NULL);
	}

IL_02b8:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_77 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_77)
		{
			goto IL_02c6;
		}
	}
	{
		// transY = false;
		__this->___transY_47 = (bool)0;
	}

IL_02c6:
	{
		// base.updateKey();
		MenuMain_updateKey_m8AA3EED053B7AFC081B4368322461BA1C9DFB727(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuSub::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSub_paint_m1340FB1FB5468DF90634AD7297715947FEDFEB20 (MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// Canvas.paint.paintPopupBack(g, x, y - 8 * AvMain.hd, w, h + 16 * AvMain.hd, -1, false);
		RuntimeObject* L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		int32_t L_3 = __this->___x_28;
		int32_t L_4 = __this->___y_29;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_5 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_6 = __this->___w_30;
		int32_t L_7 = __this->___h_31;
		int32_t L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_1);
		InterfaceActionInvoker7< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, int32_t, int32_t, int32_t, bool >::Invoke(49 /* System.Void IPaint::paintPopupBack(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)il2cpp_codegen_multiply(8, L_5)))), L_6, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_8)))), (-1), (bool)0);
		// g.translate(x, y);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_9 = ___0_g;
		int32_t L_10 = __this->___x_28;
		int32_t L_11 = __this->___y_29;
		NullCheck(L_9);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_9, ((float)L_10), ((float)L_11), NULL);
		// g.setClip(0f, 0f, w, h);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_12 = ___0_g;
		int32_t L_13 = __this->___w_30;
		int32_t L_14 = __this->___h_31;
		NullCheck(L_12);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_12, (0.0f), (0.0f), ((float)L_13), ((float)L_14), NULL);
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_15 = ___0_g;
		int32_t L_16 = ((MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_StaticFields*)il2cpp_codegen_static_fields_for(MenuSub_t3BF167DB42BFDCE415C747BF0073BAF192C99F1C_il2cpp_TypeInfo_var))->___cmy_35;
		NullCheck(L_15);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_15, (0.0f), ((float)((-L_16))), NULL);
		// for (int i = 0; i < list.size(); i++)
		V_0 = 0;
		goto IL_011a;
	}

IL_0087:
	{
		// Command command = (Command)list.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_17 = __this->___list_27;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_17, L_18, NULL);
		V_1 = ((Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)CastclassClass((RuntimeObject*)L_19, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var));
		// if (i == index && !isHide)
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___index_33;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00e4;
		}
	}
	{
		bool L_22 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_22)
		{
			goto IL_00e4;
		}
	}
	{
		// g.setColor(16777215);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_23 = ___0_g;
		NullCheck(L_23);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_23, ((int32_t)16777215), NULL);
		// g.fillRect(10 * AvMain.hd, i * hItem, w - 20 * AvMain.hd, hItem);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_24 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_26 = V_0;
		int32_t L_27 = __this->___hItem_32;
		int32_t L_28 = __this->___w_30;
		int32_t L_29 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_30 = __this->___hItem_32;
		NullCheck(L_24);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_24, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_25))), ((float)((int32_t)il2cpp_codegen_multiply(L_26, L_27))), ((float)((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_29))))), ((float)L_30), NULL);
	}

IL_00e4:
	{
		// Canvas.normalFont.drawString(g, command.caption, 20, i * hItem + hItem / 2 - Canvas.normalFont.getHeight() / 2, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_31 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_32 = ___0_g;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_33 = V_1;
		NullCheck(L_33);
		String_t* L_34 = L_33->___caption_0;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->___hItem_32;
		int32_t L_37 = __this->___hItem_32;
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_38 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___normalFont_39;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_38);
		NullCheck(L_31);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_31, L_32, L_34, ((int32_t)20), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_35, L_36)), ((int32_t)(L_37/2)))), ((int32_t)(L_39/2)))), 0);
		// for (int i = 0; i < list.size(); i++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_011a:
	{
		// for (int i = 0; i < list.size(); i++)
		int32_t L_41 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_42 = __this->___list_27;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_42, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0087;
		}
	}
	{
		// }
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
// System.Void Message::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mC92F88DCD3E06234EFDFDB21C01ADEDA2FE72E17 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, int32_t ___0_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Message(int command)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.command = (sbyte)command;
		int32_t L_0 = ___0_command;
		__this->___command_0 = ((int8_t)L_0);
		// dos = new myWriter();
		myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* L_1 = (myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E*)il2cpp_codegen_object_new(myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		myWriter__ctor_m8F17B95C89DCFB2B7F4E795B5340DD8558999566(L_1, NULL);
		__this->___dos_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dos_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m4B34B407C9C10627022C55648F679C2844877969 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Message()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// dos = new myWriter();
		myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* L_0 = (myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E*)il2cpp_codegen_object_new(myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		myWriter__ctor_m8F17B95C89DCFB2B7F4E795B5340DD8558999566(L_0, NULL);
		__this->___dos_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dos_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Message::.ctor(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m46F86EA679B2EF6A8D4045018EF48392CAD2F044 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, int8_t ___0_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Message(sbyte command)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.command = command;
		int8_t L_0 = ___0_command;
		__this->___command_0 = L_0;
		// dos = new myWriter();
		myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* L_1 = (myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E*)il2cpp_codegen_object_new(myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		myWriter__ctor_m8F17B95C89DCFB2B7F4E795B5340DD8558999566(L_1, NULL);
		__this->___dos_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dos_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Message::.ctor(System.SByte,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mA73F890D3BE14C39823D359DE8EF7F61678B659D (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, int8_t ___0_command, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Message(sbyte command, sbyte[] data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.command = command;
		int8_t L_0 = ___0_command;
		__this->___command_0 = L_0;
		// dis = new myReader(data);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = ___1_data;
		myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56* L_2 = (myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56*)il2cpp_codegen_object_new(myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		myReader__ctor_m61EAE1B77A35D717C484A0BA3AA8A66DB94C44DE(L_2, L_1, NULL);
		__this->___dis_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dis_1), (void*)L_2);
		// }
		return;
	}
}
// System.SByte[] Message::getData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Message_getData_m9060A4A32DAB1DB6624FB4F3D2A646051B43331B (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
{
	{
		// return dos.getData();
		myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* L_0 = __this->___dos_2;
		NullCheck(L_0);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = myWriter_getData_mAEC16F2CC1B23908D4ED113782FB29B05D296058(L_0, NULL);
		return L_1;
	}
}
// myReader Message::reader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56* Message_reader_m566A30463A7272FB56AC9213AB3B3DAC08F30518 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
{
	{
		// return dis;
		myReader_tFB44890E0114AFA52E240744EE618ED908B4BB56* L_0 = __this->___dis_1;
		return L_0;
	}
}
// myWriter Message::writer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* Message_writer_mFF301AEB00B50FF831B0E816C4C1FE5B687F9ABB (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
{
	{
		// return dos;
		myWriter_t77CBD1CF50579B5A3B44743BEF04FD3AE692C46E* L_0 = __this->___dos_2;
		return L_0;
	}
}
// System.Void Message::cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_cleanup_m4839694DFD6A299D3BD3F45B3E4471D7229CA3A5 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
{
	{
		// }
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
// System.Void MessageScr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr__ctor_m89C0DBD12A83D251F32916EDA02456F625AEE377 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TField_t56E19AE85CA63279C53042EF348814217A9F0E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3C1862FE7040F6B726BB3A96FD00A7D892DDE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521A1685AEBD2FF7566B0D96D59D042FAF2E91FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70860459425A49A7D18F21FA4517AD9A8B962D93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74BA6D4CD3CD6FCAE7EA5D140CA6D84DDE58B4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBB696A9B69EB96EE352D19CA7564D0D6A55F20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF4B4F52EE81DA85F9A3587CFAA4DB9236B4216F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private sbyte numTab = 2;
		__this->___numTab_53 = (int8_t)2;
		// private string[] nameTab = new string[3]
		// {
		//     "Chung",
		//     "Tin den",
		//     string.Empty
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3F3C1862FE7040F6B726BB3A96FD00A7D892DDE2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3F3C1862FE7040F6B726BB3A96FD00A7D892DDE2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral8FBB696A9B69EB96EE352D19CA7564D0D6A55F20);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8FBB696A9B69EB96EE352D19CA7564D0D6A55F20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_4);
		__this->___nameTab_54 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameTab_54), (void*)L_3);
		// public sbyte sizeTab = 2;
		__this->___sizeTab_55 = (int8_t)2;
		// private MyVector listTextTab_1 = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_5 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_5, NULL);
		__this->___listTextTab_1_62 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listTextTab_1_62), (void*)L_5);
		// private MyVector listPlayer = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_6 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_6, NULL);
		__this->___listPlayer_63 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listPlayer_63), (void*)L_6);
		// private int indexDel = -1;
		__this->___indexDel_73 = (-1);
		// private sbyte indexTab = -1;
		__this->___indexTab_76 = (int8_t)(-1);
		// public MessageScr()
		il2cpp_codegen_runtime_class_init_inline(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_il2cpp_TypeInfo_var);
		MyScreen__ctor_m1DC4D7088853401EA2BB15A924B0AE6959E9C481(__this, NULL);
		// x = 0;
		__this->___x_41 = 0;
		// y = 0;
		__this->___y_42 = 0;
		// h = Canvas.hCan;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		__this->___h_44 = L_7;
		// hTab = 35 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hTab_47 = ((int32_t)il2cpp_codegen_multiply(((int32_t)35), L_8));
		// hText = 30;
		__this->___hText_49 = ((int32_t)30);
		// tfChat = new TField("chat", this, new IActionChat());
		IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* L_9 = (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B*)il2cpp_codegen_object_new(IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		IActionChat__ctor_m6DBD25037EE01ACE806F6E72995103767D7DBC9D(L_9, NULL);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_10 = (TField_t56E19AE85CA63279C53042EF348814217A9F0E70*)il2cpp_codegen_object_new(TField_t56E19AE85CA63279C53042EF348814217A9F0E70_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TField__ctor_mE4A34FFC930468769976182F232FC2A570A86C1E(L_10, _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01, __this, L_9, NULL);
		__this->___tfChat_66 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tfChat_66), (void*)L_10);
		// tfChat.setFocus(true);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_11 = __this->___tfChat_66;
		NullCheck(L_11);
		TField_setFocus_mA8024E4550C22D184C8A62F68AE5E388899A0E01(L_11, (bool)1, NULL);
		// tfChat.showSubTextField = false;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_12 = __this->___tfChat_66;
		NullCheck(L_12);
		L_12->___showSubTextField_71 = (bool)0;
		// tfChat.autoScaleScreen = true;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_13 = __this->___tfChat_66;
		NullCheck(L_13);
		L_13->___autoScaleScreen_70 = (bool)1;
		// tfChat.setIputType(ipKeyboard.TEXT);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_14 = __this->___tfChat_66;
		il2cpp_codegen_runtime_class_init_inline(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		int32_t L_15 = ((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___TEXT_1;
		NullCheck(L_14);
		TField_setIputType_m72F29E07E1F1F559628ABB8FFC773EDB68298B46_inline(L_14, L_15, NULL);
		// init(Canvas.hCan);
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		MessageScr_init_m51C63B1A6A4F0E398327A2101D73F9761C46B55B(__this, L_16, NULL);
		// tfChat.x = 5 * AvMain.hd;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_17 = __this->___tfChat_66;
		int32_t L_18 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_17);
		L_17->___x_6 = ((int32_t)il2cpp_codegen_multiply(5, L_18));
		// tfChat.setMaxTextLenght(40);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_19 = __this->___tfChat_66;
		NullCheck(L_19);
		TField_setMaxTextLenght_m61EBFB02EBBFD04345FCF29A2FE30D03120575FD_inline(L_19, ((int32_t)40), NULL);
		// tfChat.action = new IActionChat();
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_20 = __this->___tfChat_66;
		IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* L_21 = (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B*)il2cpp_codegen_object_new(IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		IActionChat__ctor_m6DBD25037EE01ACE806F6E72995103767D7DBC9D(L_21, NULL);
		NullCheck(L_20);
		L_20->___action_27 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___action_27), (void*)L_21);
		// imgArrow = new Image[2];
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_22 = (ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)SZArrayNew(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var, (uint32_t)2);
		((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71), (void*)L_22);
		// imgArrow[0] = Image.createImagePNG(T.getPath() + "/main/ar");
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_23 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71;
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteral70860459425A49A7D18F21FA4517AD9A8B962D93, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_26;
		L_26 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_25, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_26);
		// imgArrow[1] = Image.createImagePNG(T.getPath() + "/main/ar0");
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_27 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71;
		String_t* L_28;
		L_28 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, _stringLiteral74BA6D4CD3CD6FCAE7EA5D140CA6D84DDE58B4C1, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_30;
		L_30 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_30);
		// imgBound = Image.createImagePNG(T.getPath() + "/iconMenu/nummsg");
		String_t* L_31;
		L_31 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, _stringLiteral521A1685AEBD2FF7566B0D96D59D042FAF2E91FE, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_33;
		L_33 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_32, NULL);
		__this->___imgBound_72 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgBound_72), (void*)L_33);
		// imgDel = new FrameImage(Image.createImagePNG(T.getPath() + "/iconMenu/btDelMes"), 37 * AvMain.hd, 23 * AvMain.hd);
		String_t* L_34;
		L_34 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_34, _stringLiteralEF4B4F52EE81DA85F9A3587CFAA4DB9236B4216F, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_36;
		L_36 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_35, NULL);
		int32_t L_37 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_38 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_39 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_39, L_36, ((int32_t)il2cpp_codegen_multiply(((int32_t)37), L_37)), ((int32_t)il2cpp_codegen_multiply(((int32_t)23), L_38)), NULL);
		__this->___imgDel_69 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgDel_69), (void*)L_39);
		// init(h);
		int32_t L_40 = __this->___h_44;
		MessageScr_init_m51C63B1A6A4F0E398327A2101D73F9761C46B55B(__this, L_40, NULL);
		// }
		return;
	}
}
// MessageScr MessageScr::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* MessageScr_gI_m1B4E64897A6E06F84F010C67652682C548FE2E5A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MessageScr());
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_0 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_1 = (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B*)il2cpp_codegen_object_new(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageScr__ctor_m89C0DBD12A83D251F32916EDA02456F625AEE377(L_1, NULL);
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_2 = L_1;
		((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_3 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		return L_3;
	}
}
// System.Void MessageScr::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_init_m51C63B1A6A4F0E398327A2101D73F9761C46B55B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_hc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// h = hc;
		int32_t L_0 = ___0_hc;
		__this->___h_44 = L_0;
		// w = Canvas.w;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		__this->___w_43 = L_1;
		// wTab = 100 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_2 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___wTab_45 = ((int32_t)il2cpp_codegen_multiply(((int32_t)100), L_2));
		// if (Screen.orientation == ScreenOrientation.Portrait)
		int32_t L_3;
		L_3 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		// wTab = 80 * AvMain.hd;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___wTab_45 = ((int32_t)il2cpp_codegen_multiply(((int32_t)80), L_4));
	}

IL_0036:
	{
		// hDis = h - hTab;
		int32_t L_5 = __this->___h_44;
		int32_t L_6 = __this->___hTab_47;
		__this->___hDis_48 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		// tfChat.y = hc - tfChat.height - 3 * AvMain.hd;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_7 = __this->___tfChat_66;
		int32_t L_8 = ___0_hc;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_9 = __this->___tfChat_66;
		NullCheck(L_9);
		int32_t L_10 = L_9->___height_9;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_7);
		L_7->___y_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_8, L_10)), ((int32_t)il2cpp_codegen_multiply(3, L_11))));
		// cmdChat = new Command(T.chat, new IActionChat());
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_12 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___chat_117;
		IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* L_13 = (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B*)il2cpp_codegen_object_new(IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		IActionChat__ctor_m6DBD25037EE01ACE806F6E72995103767D7DBC9D(L_13, NULL);
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_14 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Command__ctor_m6608741414A6EEA975D4ABCA28FA17F9BD7EF05C(L_14, L_12, L_13, NULL);
		__this->___cmdChat_67 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cmdChat_67), (void*)L_14);
		// cmdChat.x = Canvas.w - PaintPopup.wButtonSmall / 2 - 2 * AvMain.hd;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_15 = __this->___cmdChat_67;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_17 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___wButtonSmall_29;
		int32_t L_18 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_15);
		L_15->___x_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)(L_17/2)))), ((int32_t)il2cpp_codegen_multiply(2, L_18))));
		// cmdChat.y = tfChat.y + tfChat.height / 2 - PaintPopup.hButtonSmall / 2;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_19 = __this->___cmdChat_67;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_20 = __this->___tfChat_66;
		NullCheck(L_20);
		int32_t L_21 = L_20->___y_7;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_22 = __this->___tfChat_66;
		NullCheck(L_22);
		int32_t L_23 = L_22->___height_9;
		int32_t L_24 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hButtonSmall_30;
		NullCheck(L_19);
		L_19->___y_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_23/2)))), ((int32_t)(L_24/2))));
		// tfChat.width = cmdChat.x - PaintPopup.wButtonSmall / 2 - 10 * AvMain.hd;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_25 = __this->___tfChat_66;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_26 = __this->___cmdChat_67;
		NullCheck(L_26);
		int32_t L_27 = L_26->___x_6;
		int32_t L_28 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___wButtonSmall_29;
		int32_t L_29 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_25);
		L_25->___width_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)(L_28/2)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_29))));
		// changeFocusTab(focusTab);
		int32_t L_30 = __this->___focusTab_46;
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, L_30, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::doSendMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_doSendMsg_mB20A13536C80E5D4B0830B39C13D9B585750C097 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3957E1855C9E8111C71222DF8E491C5026B5C07A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (tfChat.getText().Equals(string.Empty))
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_0 = __this->___tfChat_66;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TField_getText_mFCD7D323EF26FC195005BA96783EE50137C5A47A_inline(L_0, NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// string text = tfChat.getText();
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_4 = __this->___tfChat_66;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TField_getText_mFCD7D323EF26FC195005BA96783EE50137C5A47A_inline(L_4, NULL);
		V_0 = L_5;
		// if (text.IndexOf("hack") != -1)
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_6, _stringLiteral3957E1855C9E8111C71222DF8E491C5026B5C07A, NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_00bc;
		}
	}
	{
		// text += " ";
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_9;
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		V_1 = 0;
		goto IL_0082;
	}

IL_0045:
	{
		// TextMsg textMsg = (TextMsg)chatPlayer.text.elementAt(i);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_10 = __this->___chatPlayer_64;
		NullCheck(L_10);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_11 = L_10->___text_3;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_11, L_12, NULL);
		V_2 = ((TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455*)CastclassClass((RuntimeObject*)L_13, TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var));
		// for (int j = 0; j < textMsg.text.Length; j++)
		V_3 = 0;
		goto IL_0073;
	}

IL_0060:
	{
		// text += textMsg.text[j];
		String_t* L_14 = V_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_15 = V_2;
		NullCheck(L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15->___text_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_19, NULL);
		V_0 = L_20;
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0073:
	{
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_22 = V_3;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_23 = V_2;
		NullCheck(L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23->___text_0;
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_26 = V_1;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_27 = __this->___chatPlayer_64;
		NullCheck(L_27);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_28 = L_27->___text_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_28, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_29)))
		{
			goto IL_0045;
		}
	}
	{
		// GlobalService.gI().doServerKick(chatPlayer.IDPlayer, text);
		GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* L_30;
		L_30 = GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65(NULL);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_31 = __this->___chatPlayer_64;
		NullCheck(L_31);
		int32_t L_32 = L_31->___IDPlayer_0;
		String_t* L_33 = V_0;
		NullCheck(L_30);
		GlobalService_doServerKick_m0098512237C6AC276210891B97D2AFFEB67F0A69(L_30, L_32, L_33, NULL);
		// tfChat.setText(string.Empty);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_34 = __this->___tfChat_66;
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_34);
		TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE(L_34, L_35, NULL);
		return;
	}

IL_00bc:
	{
		// GlobalService.gI().chatTo(chatPlayer.IDPlayer, text);
		GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* L_36;
		L_36 = GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65(NULL);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_37 = __this->___chatPlayer_64;
		NullCheck(L_37);
		int32_t L_38 = L_37->___IDPlayer_0;
		String_t* L_39 = V_0;
		NullCheck(L_36);
		GlobalService_chatTo_m81A66D49C5E0D963DF3E7CBE3518E7E2B7507104(L_36, L_38, L_39, NULL);
		// tfChat.setText(string.Empty);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_40 = __this->___tfChat_66;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_40);
		TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE(L_40, L_41, NULL);
		// addPlayer(chatPlayer.IDPlayer, chatPlayer.name, text, true, null);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_42 = __this->___chatPlayer_64;
		NullCheck(L_42);
		int32_t L_43 = L_42->___IDPlayer_0;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_44 = __this->___chatPlayer_64;
		NullCheck(L_44);
		String_t* L_45 = L_44->___name_1;
		String_t* L_46 = V_0;
		MessageScr_addPlayer_mC5D580C3FE5E3395AE331E56304CBCC1CA39C715(__this, L_43, L_45, L_46, (bool)1, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::switchToMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_switchToMe_m80198A8F70724C6B8695E1EAF72DA6932B78B98D (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3461526C43CECAA51FCD61A07B36369F1BD426);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (imgTick == null)
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_0 = __this->___imgTick_68;
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		// imgTick = new FrameImage(Image.createImagePNG(T.getPath() + "/iconMenu/tickMSg"), 6 * AvMain.hd, 6 * AvMain.hd);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral7F3461526C43CECAA51FCD61A07B36369F1BD426, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_3;
		L_3 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_5 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_6 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_6, L_3, ((int32_t)il2cpp_codegen_multiply(6, L_4)), ((int32_t)il2cpp_codegen_multiply(6, L_5)), NULL);
		__this->___imgTick_68 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgTick_68), (void*)L_6);
	}

IL_0035:
	{
		// lastScr = Canvas.currentMyScreen;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_7 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		__this->___lastScr_65 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastScr_65), (void*)L_7);
		// init(Canvas.hCan);
		int32_t L_8 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		MessageScr_init_m51C63B1A6A4F0E398327A2101D73F9761C46B55B(__this, L_8, NULL);
		// base.switchToMe();
		MyScreen_switchToMe_mC24CFE20D75C42D96747425FA6E8EF4ACDE24D52_inline(__this, NULL);
		// focusTab = 1;
		__this->___focusTab_46 = 1;
		// changeFocusTab(0);
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, 0, NULL);
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		// }
		return;
	}
}
// System.Void MessageScr::addText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_addText_mF30EE90E6E7AF14F2035F142D77C69652C6D0BC9 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listTextTab_1.addElement(new ElementPlayer(name, text));
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___listTextTab_1_62;
		String_t* L_1 = ___0_name;
		String_t* L_2 = ___1_text;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_3 = (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)il2cpp_codegen_object_new(ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ElementPlayer__ctor_m5B713B1086FE1F42461C6C497C854A6D8DE88952(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_0, L_3, NULL);
		// if (listTextTab_1.size() > 100)
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = __this->___listTextTab_1_62;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_4, NULL);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)100))))
		{
			goto IL_002d;
		}
	}
	{
		// listTextTab_1.removeElementAt(0);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_6 = __this->___listTextTab_1_62;
		NullCheck(L_6);
		MyVector_removeElementAt_mBAAE9A96CE172AF34B3FAFAF22E50D5F191E97C5(L_6, 0, NULL);
	}

IL_002d:
	{
		// if (focusTab == 0)
		int32_t L_7 = __this->___focusTab_46;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// size = listTextTab_1.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_8 = __this->___listTextTab_1_62;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_8, NULL);
		__this->___size_51 = L_9;
		// setLimit();
		MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void MessageScr::startChat(Avatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_startChat_m9C4C8B9367B1447FB21E922164228CC97E639F43 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, Avatar_t5280686025A629043829B8D5A31541F05B328D76* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gI().addPlayer(p.IDDB, p.name, string.Empty, false, null);
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_0;
		L_0 = MessageScr_gI_m1B4E64897A6E06F84F010C67652682C548FE2E5A(NULL);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_1 = ___0_p;
		NullCheck(L_1);
		int32_t L_2 = ((Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB*)L_1)->___IDDB_25;
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_3 = ___0_p;
		NullCheck(L_3);
		String_t* L_4 = ((Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB*)L_3)->___name_26;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		MessageScr_addPlayer_mC5D580C3FE5E3395AE331E56304CBCC1CA39C715(L_0, L_2, L_4, L_5, (bool)0, (RuntimeObject*)NULL, NULL);
		// chatPlayer = (ElementPlayer)listPlayer.elementAt(listPlayer.size() - 1);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_6 = __this->___listPlayer_63;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_7 = __this->___listPlayer_63;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_7, NULL);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		__this->___chatPlayer_64 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_9, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatPlayer_64), (void*)((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_9, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var)));
		// switchToMe();
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, __this);
		// changeFocusTab(2);
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, 2, NULL);
		// }
		return;
	}
}
// ElementPlayer MessageScr::getPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* MessageScr_getPlayer_m60B7453040FA20240303618D330D93D5F355ED69 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* V_1 = NULL;
	{
		// for (int i = 0; i < listPlayer.size(); i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// ElementPlayer elementPlayer = (ElementPlayer)listPlayer.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___listPlayer_63;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		V_1 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_2, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		// if (elementPlayer.IDPlayer == id)
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___IDPlayer_0;
		int32_t L_5 = ___0_id;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		// return elementPlayer;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_6 = V_1;
		return L_6;
	}

IL_0021:
	{
		// for (int i = 0; i < listPlayer.size(); i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < listPlayer.size(); i++)
		int32_t L_8 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_9 = __this->___listPlayer_63;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)NULL;
	}
}
// System.Void MessageScr::addPlayer(System.Int32,System.String,System.String,System.Boolean,IAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_addPlayer_mC5D580C3FE5E3395AE331E56304CBCC1CA39C715 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_ID, String_t* ___1_name, String_t* ___2_text, bool ___3_isOwner, RuntimeObject* ___4_act, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// ElementPlayer player = getPlayer(ID);
		int32_t L_0 = ___0_ID;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_1;
		L_1 = MessageScr_getPlayer_m60B7453040FA20240303618D330D93D5F355ED69(__this, L_0, NULL);
		V_0 = L_1;
		// if (player == null)
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_2 = V_0;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		// player = new ElementPlayer(ID, name, text);
		int32_t L_3 = ___0_ID;
		String_t* L_4 = ___1_name;
		String_t* L_5 = ___2_text;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_6 = (ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)il2cpp_codegen_object_new(ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ElementPlayer__ctor_m1B3F5D792E19E9F122117C402670C8668847E1AC(L_6, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		// player.action = act;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_7 = V_0;
		RuntimeObject* L_8 = ___4_act;
		NullCheck(L_7);
		L_7->___action_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___action_4), (void*)L_8);
		// listPlayer.addElement(player);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_9 = __this->___listPlayer_63;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_10 = V_0;
		NullCheck(L_9);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_9, L_10, NULL);
		goto IL_00a5;
	}

IL_002a:
	{
		// player.addText(text, isOwner);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_11 = V_0;
		String_t* L_12 = ___2_text;
		bool L_13 = ___3_isOwner;
		NullCheck(L_11);
		ElementPlayer_addText_m9AF8521BF00C8A9F4BC792909AC3147A1FD43FEA(L_11, L_12, L_13, NULL);
		// if (focusTab == 2 && player == chatPlayer)
		int32_t L_14 = __this->___focusTab_46;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00a5;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_15 = V_0;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_16 = __this->___chatPlayer_64;
		if ((!(((RuntimeObject*)(ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)L_15) == ((RuntimeObject*)(ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)L_16))))
		{
			goto IL_00a5;
		}
	}
	{
		// int num = 0;
		V_1 = 0;
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		V_2 = 0;
		goto IL_0085;
	}

IL_004b:
	{
		// TextMsg textMsg = (TextMsg)chatPlayer.text.elementAt(i);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_17 = __this->___chatPlayer_64;
		NullCheck(L_17);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_18 = L_17->___text_3;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_18, L_19, NULL);
		V_3 = ((TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455*)CastclassClass((RuntimeObject*)L_20, TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var));
		// for (int j = 0; j < textMsg.text.Length; j++)
		V_4 = 0;
		goto IL_0071;
	}

IL_0067:
	{
		// num++;
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0071:
	{
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_23 = V_4;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_24 = V_3;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24->___text_0;
		NullCheck(L_25);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0067;
		}
	}
	{
		// num += 2;
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0085:
	{
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_28 = V_2;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_29 = __this->___chatPlayer_64;
		NullCheck(L_29);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_30 = L_29->___text_3;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_30, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_004b;
		}
	}
	{
		// size = num;
		int32_t L_32 = V_1;
		__this->___size_51 = L_32;
		// setLimit();
		MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530(__this, NULL);
	}

IL_00a5:
	{
		// if (focusTab == 1)
		int32_t L_33 = __this->___focusTab_46;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		// size = listPlayer.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_34 = __this->___listPlayer_63;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_34, NULL);
		__this->___size_51 = L_35;
		// setLimit();
		MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530(__this, NULL);
	}

IL_00c5:
	{
		// if (focusTab != 1 || Canvas.currentMyScreen != me)
		int32_t L_36 = __this->___focusTab_46;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_37 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_38 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		if ((((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_37) == ((RuntimeObject*)(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B*)L_38)))
		{
			goto IL_00e1;
		}
	}

IL_00da:
	{
		// isNewMsg = true;
		__this->___isNewMsg_70 = (bool)1;
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void MessageScr::setLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int num = size * hText - (hDis - 14 * AvMain.hd);
		int32_t L_0 = __this->___size_51;
		int32_t L_1 = __this->___hText_49;
		int32_t L_2 = __this->___hDis_48;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)14), L_3))))));
		// if (cmtoY == cmyLim)
		int32_t L_4 = __this->___cmtoY_57;
		int32_t L_5 = __this->___cmyLim_61;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		// cmtoY = num;
		int32_t L_6 = V_0;
		__this->___cmtoY_57 = L_6;
	}

IL_0033:
	{
		// cmyLim = num;
		int32_t L_7 = V_0;
		__this->___cmyLim_61 = L_7;
		// if (cmyLim < 0)
		int32_t L_8 = __this->___cmyLim_61;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_61 = 0;
		// cmy = (cmtoY = 0);
		int32_t L_9 = 0;
		V_1 = L_9;
		__this->___cmtoY_57 = L_9;
		int32_t L_10 = V_1;
		__this->___cmy_58 = L_10;
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void MessageScr::keyPress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_keyPress_mDDEECF529E962C1C4240E987FE06DC8E8A74119B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_keyCode, const RuntimeMethod* method) 
{
	{
		// if (focusTab != 1 && tfChat.isFocused())
		int32_t L_0 = __this->___focusTab_46;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_1 = __this->___tfChat_66;
		NullCheck(L_1);
		bool L_2;
		L_2 = TField_isFocused_m8C9DC746D93D5BBDE3CFDB7BB258A2466E35F9BE(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// tfChat.keyPressed(keyCode);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_3 = __this->___tfChat_66;
		int32_t L_4 = ___0_keyCode;
		NullCheck(L_3);
		bool L_5;
		L_5 = TField_keyPressed_mED9EADEA8478C1A10AA9236D1BBDB602D0096221(L_3, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void MessageScr::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_update_mF674CEC2386EB5A9249E551968A50AD3766FD38B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeOpen > 0)
		int32_t L_0 = __this->___timeOpen_82;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// timeOpen--;
		int32_t L_1 = __this->___timeOpen_82;
		__this->___timeOpen_82 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (timeOpen == 0)
		int32_t L_2 = __this->___timeOpen_82;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// click();
		MessageScr_click_m8CB8E935CCFD33BED454DB8B2317BCC772747473(__this, NULL);
	}

IL_0025:
	{
		// if (focusTab != 1 && (chatPlayer == null || focusTab != 2 || !chatPlayer.name.Equals("admin")))
		int32_t L_3 = __this->___focusTab_46;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_4 = __this->___chatPlayer_64;
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = __this->___focusTab_46;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_6 = __this->___chatPlayer_64;
		NullCheck(L_6);
		String_t* L_7 = L_6->___name_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, _stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}

IL_0056:
	{
		// tfChat.update();
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_9 = __this->___tfChat_66;
		NullCheck(L_9);
		TField_update_m814B2505FCF4D5DC3BBD89A8E21B96893C392984(L_9, NULL);
	}

IL_0061:
	{
		// moveCamera();
		MessageScr_moveCamera_m388E08DF99231D4558F078CA05363B1D8F527B46(__this, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::moveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_moveCamera_m388E08DF99231D4558F078CA05363B1D8F527B46 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	{
		// if (vY != 0)
		int32_t L_0 = __this->___vY_90;
		if (!L_0)
		{
			goto IL_0137;
		}
	}
	{
		// if (cmy < 0 || cmy > cmyLim)
		int32_t L_1 = __this->___cmy_58;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = __this->___cmy_58;
		int32_t L_3 = __this->___cmyLim_61;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0060;
		}
	}

IL_0022:
	{
		// vY -= vY / 4;
		int32_t L_4 = __this->___vY_90;
		int32_t L_5 = __this->___vY_90;
		__this->___vY_90 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5/4))));
		// cmy += vY / 20;
		int32_t L_6 = __this->___cmy_58;
		int32_t L_7 = __this->___vY_90;
		__this->___cmy_58 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7/((int32_t)20)))));
		// if (vY / 10 <= 1)
		int32_t L_8 = __this->___vY_90;
		if ((((int32_t)((int32_t)(L_8/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// vY = 0;
		__this->___vY_90 = 0;
	}

IL_0060:
	{
		// if (cmy < 0)
		int32_t L_9 = __this->___cmy_58;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// if (cmy < -hDis / 2)
		int32_t L_10 = __this->___cmy_58;
		int32_t L_11 = __this->___hDis_48;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((-L_11))/2)))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = -hDis / 2;
		int32_t L_12 = __this->___hDis_48;
		__this->___cmy_58 = ((int32_t)(((-L_12))/2));
		// cmtoY = 0;
		__this->___cmtoY_57 = 0;
		// vY = 0;
		__this->___vY_90 = 0;
		goto IL_0101;
	}

IL_009c:
	{
		// else if (cmy > cmyLim)
		int32_t L_13 = __this->___cmy_58;
		int32_t L_14 = __this->___cmyLim_61;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00eb;
		}
	}
	{
		// if (cmy < cmyLim + hDis / 2)
		int32_t L_15 = __this->___cmy_58;
		int32_t L_16 = __this->___cmyLim_61;
		int32_t L_17 = __this->___hDis_48;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17/2)))))))
		{
			goto IL_0101;
		}
	}
	{
		// cmy = cmyLim + hDis / 2;
		int32_t L_18 = __this->___cmyLim_61;
		int32_t L_19 = __this->___hDis_48;
		__this->___cmy_58 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_19/2))));
		// cmtoY = cmyLim;
		int32_t L_20 = __this->___cmyLim_61;
		__this->___cmtoY_57 = L_20;
		// vY = 0;
		__this->___vY_90 = 0;
		goto IL_0101;
	}

IL_00eb:
	{
		// cmy += vY / 10;
		int32_t L_21 = __this->___cmy_58;
		int32_t L_22 = __this->___vY_90;
		__this->___cmy_58 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22/((int32_t)10)))));
	}

IL_0101:
	{
		// cmtoY = cmy;
		int32_t L_23 = __this->___cmy_58;
		__this->___cmtoY_57 = L_23;
		// vY -= vY / 10;
		int32_t L_24 = __this->___vY_90;
		int32_t L_25 = __this->___vY_90;
		__this->___vY_90 = ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)(L_25/((int32_t)10)))));
		// if (vY / 10 == 0)
		int32_t L_26 = __this->___vY_90;
		if (((int32_t)(L_26/((int32_t)10))))
		{
			goto IL_016b;
		}
	}
	{
		// vY = 0;
		__this->___vY_90 = 0;
		goto IL_016b;
	}

IL_0137:
	{
		// else if (!trans)
		bool L_27 = __this->___trans_77;
		if (L_27)
		{
			goto IL_016b;
		}
	}
	{
		// if (cmy < 0)
		int32_t L_28 = __this->___cmy_58;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		// cmtoY = 0;
		__this->___cmtoY_57 = 0;
		goto IL_016b;
	}

IL_0151:
	{
		// else if (cmy > cmyLim)
		int32_t L_29 = __this->___cmy_58;
		int32_t L_30 = __this->___cmyLim_61;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_016b;
		}
	}
	{
		// cmtoY = cmyLim;
		int32_t L_31 = __this->___cmyLim_61;
		__this->___cmtoY_57 = L_31;
	}

IL_016b:
	{
		// if (cmy != cmtoY)
		int32_t L_32 = __this->___cmy_58;
		int32_t L_33 = __this->___cmtoY_57;
		if ((((int32_t)L_32) == ((int32_t)L_33)))
		{
			goto IL_01c5;
		}
	}
	{
		// cmvy = cmtoY - cmy << 2;
		int32_t L_34 = __this->___cmtoY_57;
		int32_t L_35 = __this->___cmy_58;
		__this->___cmvy_60 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_34, L_35))<<2));
		// cmdy += cmvy;
		int32_t L_36 = __this->___cmdy_59;
		int32_t L_37 = __this->___cmvy_60;
		__this->___cmdy_59 = ((int32_t)il2cpp_codegen_add(L_36, L_37));
		// cmy += cmdy >> 4;
		int32_t L_38 = __this->___cmy_58;
		int32_t L_39 = __this->___cmdy_59;
		__this->___cmy_58 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)(L_39>>4))));
		// cmdy &= 15;
		int32_t L_40 = __this->___cmdy_59;
		__this->___cmdy_59 = ((int32_t)(L_40&((int32_t)15)));
	}

IL_01c5:
	{
		// }
		return;
	}
}
// System.Void MessageScr::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_updateKey_m4C266631C750BC2710181F8D2F6CFE9B2B411FAF (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// base.updateKey();
		AvMain_updateKey_m90C1E1FA00417229EAB96356C695CD2F31485EDD(__this, NULL);
		// int num = wTab + 20;
		int32_t L_0 = __this->___wTab_45;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)20)));
		// if (Canvas.isPointerClick)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_0147;
		}
	}
	{
		// if (Canvas.isPoint(Canvas.w - 25 * AvMain.hd - 20 * AvMain.hd, y + hTab - 20 * AvMain.hd, 40 * AvMain.hd, 40 * AvMain.hd))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_5 = __this->___y_42;
		int32_t L_6 = __this->___hTab_47;
		int32_t L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_8 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_9 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		bool L_10;
		L_10 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_3)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_4)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_7)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_9)), NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// isTranKey = true;
		__this->___isTranKey_74 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// countClose = 5;
		__this->___countClose_52 = (int8_t)5;
		goto IL_00c2;
	}

IL_0074:
	{
		// for (int i = 0; i < numTab; i++)
		V_1 = 0;
		goto IL_00b9;
	}

IL_0078:
	{
		// if (Canvas.isPoint(x + 12 * AvMain.hd + i * num, y, num, PaintPopup.hTab))
		int32_t L_11 = __this->___x_41;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_12 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___y_42;
		int32_t L_16 = V_0;
		int8_t L_17 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_12)))), ((int32_t)il2cpp_codegen_multiply(L_13, L_14)))), L_15, L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// isTranKey = true;
		__this->___isTranKey_74 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// indexTab = (sbyte)i;
		int32_t L_19 = V_1;
		__this->___indexTab_76 = ((int8_t)L_19);
		// break;
		goto IL_00c2;
	}

IL_00b5:
	{
		// for (int i = 0; i < numTab; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00b9:
	{
		// for (int i = 0; i < numTab; i++)
		int32_t L_21 = V_1;
		int8_t L_22 = __this->___numTab_53;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0078;
		}
	}

IL_00c2:
	{
		// if (indexDel != -1 && Canvas.isPoint(w - imgDel.frameWidth - 10 * AvMain.hd - 10 * AvMain.hd, y + PaintPopup.hTab + 10 * AvMain.hd + indexDel * hText, imgDel.frameWidth + 20 * AvMain.hd, hText))
		int32_t L_23 = __this->___indexDel_73;
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_24 = __this->___w_43;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_25 = __this->___imgDel_69;
		NullCheck(L_25);
		int32_t L_26 = L_25->___frameWidth_0;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_27 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_28 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_29 = __this->___y_42;
		int8_t L_30 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		int32_t L_31 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_32 = __this->___indexDel_73;
		int32_t L_33 = __this->___hText_49;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_34 = __this->___imgDel_69;
		NullCheck(L_34);
		int32_t L_35 = L_34->___frameWidth_0;
		int32_t L_36 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_37 = __this->___hText_49;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_24, L_26)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_27)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_28)))), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, (int32_t)L_30)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_31)))), ((int32_t)il2cpp_codegen_multiply(L_32, L_33)))), ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_36)))), L_37, NULL);
		if (!L_38)
		{
			goto IL_0147;
		}
	}
	{
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// isTranKey = true;
		__this->___isTranKey_74 = (bool)1;
		// isClickDel = true;
		__this->___isClickDel_75 = (bool)1;
	}

IL_0147:
	{
		// if (isTranKey)
		bool L_39 = __this->___isTranKey_74;
		if (!L_39)
		{
			goto IL_028d;
		}
	}
	{
		// if (Canvas.isPointerDown)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_40 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_40)
		{
			goto IL_01ed;
		}
	}
	{
		// if (countClose == 5 && !Canvas.isPoint(Canvas.w - 25 * AvMain.hd - 20 * AvMain.hd, y + hTab - 20 * AvMain.hd, 40 * AvMain.hd, 40 * AvMain.hd))
		int8_t L_41 = __this->___countClose_52;
		if ((!(((uint32_t)L_41) == ((uint32_t)5))))
		{
			goto IL_01b2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_42 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_43 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_44 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_45 = __this->___y_42;
		int32_t L_46 = __this->___hTab_47;
		int32_t L_47 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_48 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_49 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		bool L_50;
		L_50 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_43)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_44)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_45, L_46)), ((int32_t)il2cpp_codegen_multiply(((int32_t)20), L_47)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_48)), ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_49)), NULL);
		if (L_50)
		{
			goto IL_01b2;
		}
	}
	{
		// countClose = 0;
		__this->___countClose_52 = (int8_t)0;
		goto IL_01ed;
	}

IL_01b2:
	{
		// else if (indexTab != -1 && !Canvas.isPoint(x + 12 * AvMain.hd + indexTab * num, y, num, PaintPopup.hTab))
		int8_t L_51 = __this->___indexTab_76;
		if ((((int32_t)L_51) == ((int32_t)(-1))))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_52 = __this->___x_41;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_53 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int8_t L_54 = __this->___indexTab_76;
		int32_t L_55 = V_0;
		int32_t L_56 = __this->___y_42;
		int32_t L_57 = V_0;
		int8_t L_58 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_53)))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_54, L_55)))), L_56, L_57, L_58, NULL);
		if (L_59)
		{
			goto IL_01ed;
		}
	}
	{
		// indexTab = -1;
		__this->___indexTab_76 = (int8_t)(-1);
	}

IL_01ed:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_60 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_60)
		{
			goto IL_028d;
		}
	}
	{
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
		// isTranKey = false;
		__this->___isTranKey_74 = (bool)0;
		// if (isClickDel)
		bool L_61 = __this->___isClickDel_75;
		if (!L_61)
		{
			goto IL_0234;
		}
	}
	{
		// isClickDel = false;
		__this->___isClickDel_75 = (bool)0;
		// listPlayer.removeElementAt(indexDel);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_62 = __this->___listPlayer_63;
		int32_t L_63 = __this->___indexDel_73;
		NullCheck(L_62);
		MyVector_removeElementAt_mBAAE9A96CE172AF34B3FAFAF22E50D5F191E97C5(L_62, L_63, NULL);
		// changeFocusTab(1);
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, 1, NULL);
		// indexDel = -1;
		__this->___indexDel_73 = (-1);
		goto IL_028d;
	}

IL_0234:
	{
		// else if (indexTab != -1)
		int8_t L_64 = __this->___indexTab_76;
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0252;
		}
	}
	{
		// changeFocusTab(indexTab);
		int8_t L_65 = __this->___indexTab_76;
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, L_65, NULL);
		// indexTab = -1;
		__this->___indexTab_76 = (int8_t)(-1);
		goto IL_028d;
	}

IL_0252:
	{
		// else if (countClose == 5)
		int8_t L_66 = __this->___countClose_52;
		if ((!(((uint32_t)L_66) == ((uint32_t)5))))
		{
			goto IL_028d;
		}
	}
	{
		// lastScr.switchToMe();
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_67 = __this->___lastScr_65;
		NullCheck(L_67);
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, L_67);
		// if (Screen.orientation != ScreenOrientation.Portrait && ipKeyboard.tk != null)
		int32_t L_68;
		L_68 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			goto IL_0286;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* L_69 = ((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0;
		if (!L_69)
		{
			goto IL_0286;
		}
	}
	{
		// ipKeyboard.tk.active = false;
		il2cpp_codegen_runtime_class_init_inline(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* L_70 = ((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0;
		NullCheck(L_70);
		TouchScreenKeyboard_set_active_m4382D57F87E4C86B59864E86BE93A8A2A474B7C2(L_70, (bool)0, NULL);
		// ipKeyboard.tk = null;
		((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0 = (TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0), (void*)(TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL);
	}

IL_0286:
	{
		// countClose = 0;
		__this->___countClose_52 = (int8_t)0;
	}

IL_028d:
	{
		// updateKeyText();
		MessageScr_updateKeyText_m1E995AC810EE8D6D8FD19795F374B57FA7537E5B(__this, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::changeFocusTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, int32_t ___0_foc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_foc;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0121;
			}
		}
	}
	{
		goto IL_0262;
	}

IL_0017:
	{
		// if (AvMain.hd == 1)
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// hText = 40;
		__this->___hText_49 = ((int32_t)40);
		goto IL_0031;
	}

IL_0029:
	{
		// hText = 60;
		__this->___hText_49 = ((int32_t)60);
	}

IL_0031:
	{
		// hDis = h - PaintPopup.hTab - tfChat.height - 10 * AvMain.hd;
		int32_t L_2 = __this->___h_44;
		int8_t L_3 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_4 = __this->___tfChat_66;
		NullCheck(L_4);
		int32_t L_5 = L_4->___height_9;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_6 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hDis_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, (int32_t)L_3)), L_5)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_6))));
		// size = listTextTab_1.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_7 = __this->___listTextTab_1_62;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_7, NULL);
		__this->___size_51 = L_8;
		// setLimit();
		MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530(__this, NULL);
		// center = cmdChat;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_9 = __this->___cmdChat_67;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15), (void*)L_9);
		// break;
		goto IL_0262;
	}

IL_0080:
	{
		// if (AvMain.hd == 1)
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		// hText = 50;
		__this->___hText_49 = ((int32_t)50);
		goto IL_009a;
	}

IL_0092:
	{
		// hText = 70;
		__this->___hText_49 = ((int32_t)70);
	}

IL_009a:
	{
		// hDis = h - PaintPopup.hTab - 12 * AvMain.hd;
		int32_t L_11 = __this->___h_44;
		int8_t L_12 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_13 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hDis_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, (int32_t)L_12)), ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_13))));
		// cmyLim = listPlayer.size() * hText - (hDis - 10 * AvMain.hd);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_14 = __this->___listPlayer_63;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_14, NULL);
		int32_t L_16 = __this->___hText_49;
		int32_t L_17 = __this->___hDis_48;
		int32_t L_18 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___cmyLim_61 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_18))))));
		// size = listPlayer.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_19 = __this->___listPlayer_63;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_19, NULL);
		__this->___size_51 = L_20;
		// center = null;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15), (void*)(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL);
		// if (Screen.orientation != ScreenOrientation.Portrait && ipKeyboard.tk != null)
		int32_t L_21;
		L_21 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_0115;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* L_22 = ((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0;
		if (!L_22)
		{
			goto IL_0115;
		}
	}
	{
		// ipKeyboard.tk.active = false;
		il2cpp_codegen_runtime_class_init_inline(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var);
		TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* L_23 = ((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0;
		NullCheck(L_23);
		TouchScreenKeyboard_set_active_m4382D57F87E4C86B59864E86BE93A8A2A474B7C2(L_23, (bool)0, NULL);
		// ipKeyboard.tk = null;
		((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0 = (TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_StaticFields*)il2cpp_codegen_static_fields_for(ipKeyboard_t440D609E5BCAC55A8F4E0DB49975BA2F07F7B174_il2cpp_TypeInfo_var))->___tk_0), (void*)(TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL);
	}

IL_0115:
	{
		// isNewMsg = false;
		__this->___isNewMsg_70 = (bool)0;
		// break;
		goto IL_0262;
	}

IL_0121:
	{
		// numTab = 3;
		__this->___numTab_53 = (int8_t)3;
		// hText = Canvas.fontChat.getHeight();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_24);
		__this->___hText_49 = L_25;
		// hDis = h - PaintPopup.hTab - 5 * AvMain.hd;
		int32_t L_26 = __this->___h_44;
		int8_t L_27 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		__this->___hDis_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_26, (int32_t)L_27)), ((int32_t)il2cpp_codegen_multiply(5, L_28))));
		// center = null;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15), (void*)(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL);
		// if (foc != 1 && (chatPlayer == null || foc != 2 || !chatPlayer.name.Equals("admin")))
		int32_t L_29 = ___0_foc;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_01aa;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_30 = __this->___chatPlayer_64;
		if (!L_30)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_31 = ___0_foc;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_0180;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_32 = __this->___chatPlayer_64;
		NullCheck(L_32);
		String_t* L_33 = L_32->___name_1;
		NullCheck(L_33);
		bool L_34;
		L_34 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_33, _stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8, NULL);
		if (L_34)
		{
			goto IL_01aa;
		}
	}

IL_0180:
	{
		// hDis = h - PaintPopup.hTab - tfChat.height;
		int32_t L_35 = __this->___h_44;
		int8_t L_36 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_37 = __this->___tfChat_66;
		NullCheck(L_37);
		int32_t L_38 = L_37->___height_9;
		__this->___hDis_48 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_35, (int32_t)L_36)), L_38));
		// center = cmdChat;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_39 = __this->___cmdChat_67;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15), (void*)L_39);
	}

IL_01aa:
	{
		// int num = 0;
		V_0 = 0;
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		V_1 = 0;
		goto IL_01e6;
	}

IL_01b0:
	{
		// TextMsg textMsg = (TextMsg)chatPlayer.text.elementAt(i);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_40 = __this->___chatPlayer_64;
		NullCheck(L_40);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_41 = L_40->___text_3;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_41, L_42, NULL);
		V_2 = ((TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455*)CastclassClass((RuntimeObject*)L_43, TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var));
		// for (int j = 0; j < textMsg.text.Length; j++)
		V_3 = 0;
		goto IL_01d3;
	}

IL_01cb:
	{
		// num++;
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_01d3:
	{
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_46 = V_3;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_47 = V_2;
		NullCheck(L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47->___text_0;
		NullCheck(L_48);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_01cb;
		}
	}
	{
		// num += 2;
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 2));
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_01e6:
	{
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_51 = V_1;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_52 = __this->___chatPlayer_64;
		NullCheck(L_52);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_53 = L_52->___text_3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_53, NULL);
		if ((((int32_t)L_51) < ((int32_t)L_54)))
		{
			goto IL_01b0;
		}
	}
	{
		// cmyLim = num * hText - hDis;
		int32_t L_55 = V_0;
		int32_t L_56 = __this->___hText_49;
		int32_t L_57 = __this->___hDis_48;
		__this->___cmyLim_61 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_55, L_56)), L_57));
		// size = num;
		int32_t L_58 = V_0;
		__this->___size_51 = L_58;
		// nameTab[foc] = chatPlayer.name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = __this->___nameTab_54;
		int32_t L_60 = ___0_foc;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_61 = __this->___chatPlayer_64;
		NullCheck(L_61);
		String_t* L_62 = L_61->___name_1;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (String_t*)L_62);
		// if (nameTab[foc].Length > 10)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = __this->___nameTab_54;
		int32_t L_64 = ___0_foc;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		String_t* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		int32_t L_67;
		L_67 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_66, NULL);
		if ((((int32_t)L_67) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0251;
		}
	}
	{
		// nameTab[foc] = nameTab[foc].Substring(0, 10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = __this->___nameTab_54;
		int32_t L_69 = ___0_foc;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = __this->___nameTab_54;
		int32_t L_71 = ___0_foc;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		String_t* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_73, 0, ((int32_t)10), NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_74);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (String_t*)L_74);
	}

IL_0251:
	{
		// hString = (sbyte)Canvas.fontChat.getHeight();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_75 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_75);
		__this->___hString_56 = ((int8_t)L_76);
	}

IL_0262:
	{
		// if (cmyLim < 0)
		int32_t L_77 = __this->___cmyLim_61;
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_0272;
		}
	}
	{
		// cmyLim = 0;
		__this->___cmyLim_61 = 0;
	}

IL_0272:
	{
		// if (cmy > cmyLim)
		int32_t L_78 = __this->___cmy_58;
		int32_t L_79 = __this->___cmyLim_61;
		if ((((int32_t)L_78) <= ((int32_t)L_79)))
		{
			goto IL_0297;
		}
	}
	{
		// cmy = (cmtoY = cmyLim);
		int32_t L_80 = __this->___cmyLim_61;
		int32_t L_81 = L_80;
		V_4 = L_81;
		__this->___cmtoY_57 = L_81;
		int32_t L_82 = V_4;
		__this->___cmy_58 = L_82;
	}

IL_0297:
	{
		// cmtoY = (cmy = cmyLim);
		int32_t L_83 = __this->___cmyLim_61;
		int32_t L_84 = L_83;
		V_4 = L_84;
		__this->___cmy_58 = L_84;
		int32_t L_85 = V_4;
		__this->___cmtoY_57 = L_85;
		// focusTab = foc;
		int32_t L_86 = ___0_foc;
		__this->___focusTab_46 = L_86;
		// }
		return;
	}
}
// System.Void MessageScr::updateKeyText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_updateKeyText_m1E995AC810EE8D6D8FD19795F374B57FA7537E5B (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// count++;
		int64_t L_0 = __this->___count_87;
		__this->___count_87 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// if (Canvas.isPointerClick && Canvas.isPoint(x, y + hTab, w, hDis))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_1)
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_2 = __this->___x_41;
		int32_t L_3 = __this->___y_42;
		int32_t L_4 = __this->___hTab_47;
		int32_t L_5 = __this->___w_43;
		int32_t L_6 = __this->___hDis_48;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_00ee;
		}
	}
	{
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// pyLast = Canvas.pyLast;
		int32_t L_8 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___pyLast_11;
		__this->___pyLast_83 = L_8;
		// isG = false;
		__this->___isG_78 = (bool)0;
		// if (vY != 0)
		int32_t L_9 = __this->___vY_90;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// isG = true;
		__this->___isG_78 = (bool)1;
	}

IL_0069:
	{
		// pa = cmtoY;
		int32_t L_10 = __this->___cmtoY_57;
		__this->___pa_80 = L_10;
		// timeDelay = count;
		int64_t L_11 = __this->___count_87;
		__this->___timeDelay_86 = L_11;
		// trans = true;
		__this->___trans_77 = (bool)1;
		// int num = y + hTab + 10 * AvMain.hd;
		int32_t L_12 = __this->___y_42;
		int32_t L_13 = __this->___hTab_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_14))));
		// int num2 = (cmtoY + Canvas.py - num) / hText;
		int32_t L_15 = __this->___cmtoY_57;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___hText_49;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17))/L_18));
		// if (Canvas.isPoint(0, y + PaintPopup.hTab + 10 * AvMain.hd + num2 * hText, w, hText))
		int32_t L_19 = __this->___y_42;
		int8_t L_20 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		int32_t L_21 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_22 = V_1;
		int32_t L_23 = __this->___hText_49;
		int32_t L_24 = __this->___w_43;
		int32_t L_25 = __this->___hText_49;
		bool L_26;
		L_26 = Canvas_isPoint_m23A243E8335C12EB3F1168AC19B9DCAEB471C986(0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_19, (int32_t)L_20)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_21)))), ((int32_t)il2cpp_codegen_multiply(L_22, L_23)))), L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_00ee;
		}
	}
	{
		// isDel = true;
		__this->___isDel_79 = (bool)1;
	}

IL_00ee:
	{
		// if (trans)
		bool L_27 = __this->___trans_77;
		if (!L_27)
		{
			goto IL_03c5;
		}
	}
	{
		// int num3 = pyLast - Canvas.py;
		int32_t L_28 = __this->___pyLast_83;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_29 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
		// pyLast = Canvas.py;
		int32_t L_30 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___pyLast_83 = L_30;
		// long num4 = count - timeDelay;
		int64_t L_31 = __this->___count_87;
		int64_t L_32 = __this->___timeDelay_86;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_31, L_32));
		// if (Canvas.isPointerDown)
		bool L_33 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_33)
		{
			goto IL_02ca;
		}
	}
	{
		// if (count % 2 == 0)
		int64_t L_34 = __this->___count_87;
		if (((int64_t)(L_34%((int64_t)2))))
		{
			goto IL_014b;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_35 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_84 = L_35;
		// timePoint = count;
		int64_t L_36 = __this->___count_87;
		__this->___timePoint_88 = L_36;
	}

IL_014b:
	{
		// vY = 0;
		__this->___vY_90 = 0;
		// if (Math.abs(num3) < 10 * AvMain.hd)
		int32_t L_37 = V_2;
		int32_t L_38;
		L_38 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_39 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_39)))))
		{
			goto IL_01a9;
		}
	}
	{
		// int num5 = y + hTab + 10 * AvMain.hd;
		int32_t L_40 = __this->___y_42;
		int32_t L_41 = __this->___hTab_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_42 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, L_41)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_42))));
		// int num6 = (cmtoY + Canvas.py - num5) / hText;
		int32_t L_43 = __this->___cmtoY_57;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_44 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_45 = V_4;
		int32_t L_46 = __this->___hText_49;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), L_45))/L_46));
		// if (num6 >= 0 && num6 < size)
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_01a9;
		}
	}
	{
		int32_t L_48 = V_5;
		int32_t L_49 = __this->___size_51;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_01a9;
		}
	}
	{
		// selected = num6;
		int32_t L_50 = V_5;
		__this->___selected_50 = L_50;
	}

IL_01a9:
	{
		// if (isDel && Canvas.dx() >= 10 * AvMain.hd)
		bool L_51 = __this->___isDel_79;
		if (!L_51)
		{
			goto IL_01f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_52;
		L_52 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_53 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_53)))))
		{
			goto IL_01f8;
		}
	}
	{
		// int num7 = y + hTab + 10 * AvMain.hd;
		int32_t L_54 = __this->___y_42;
		int32_t L_55 = __this->___hTab_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_56 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_54, L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_56))));
		// int num8 = (cmtoY + Canvas.py - num7) / hText;
		int32_t L_57 = __this->___cmtoY_57;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_58 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_59 = V_6;
		int32_t L_60 = __this->___hText_49;
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_57, L_58)), L_59))/L_60));
		// indexDel = num8;
		int32_t L_61 = V_7;
		__this->___indexDel_73 = L_61;
	}

IL_01f8:
	{
		// if (CRes.abs(Canvas.dy()) >= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_63;
		L_63 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_62, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_64 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_64)))))
		{
			goto IL_0215;
		}
	}
	{
		// isHide = true;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)1;
		goto IL_026d;
	}

IL_0215:
	{
		// else if (num4 > 3 && num4 < 8)
		int64_t L_65 = V_3;
		if ((((int64_t)L_65) <= ((int64_t)((int64_t)3))))
		{
			goto IL_026d;
		}
	}
	{
		int64_t L_66 = V_3;
		if ((((int64_t)L_66) >= ((int64_t)((int64_t)8))))
		{
			goto IL_026d;
		}
	}
	{
		// int num9 = y + hTab + 10 * AvMain.hd;
		int32_t L_67 = __this->___y_42;
		int32_t L_68 = __this->___hTab_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_69 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_67, L_68)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_69))));
		// int num10 = (cmtoY + Canvas.py - num9) / hText;
		int32_t L_70 = __this->___cmtoY_57;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_71 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		int32_t L_72 = V_8;
		int32_t L_73 = __this->___hText_49;
		V_9 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_70, L_71)), L_72))/L_73));
		// if (num10 >= 0 && num10 < size && !isG)
		int32_t L_74 = V_9;
		if ((((int32_t)L_74) < ((int32_t)0)))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_75 = V_9;
		int32_t L_76 = __this->___size_51;
		if ((((int32_t)L_75) >= ((int32_t)L_76)))
		{
			goto IL_026d;
		}
	}
	{
		bool L_77 = __this->___isG_78;
		if (L_77)
		{
			goto IL_026d;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
	}

IL_026d:
	{
		// if (cmtoY < 0 || cmtoY > cmyLim)
		int32_t L_78 = __this->___cmtoY_57;
		if ((((int32_t)L_78) < ((int32_t)0)))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_79 = __this->___cmtoY_57;
		int32_t L_80 = __this->___cmyLim_61;
		if ((((int32_t)L_79) <= ((int32_t)L_80)))
		{
			goto IL_02a2;
		}
	}

IL_0284:
	{
		// cmtoY = pa + num3 / 2;
		int32_t L_81 = __this->___pa_80;
		int32_t L_82 = V_2;
		__this->___cmtoY_57 = ((int32_t)il2cpp_codegen_add(L_81, ((int32_t)(L_82/2))));
		// pa = cmtoY;
		int32_t L_83 = __this->___cmtoY_57;
		__this->___pa_80 = L_83;
		goto IL_02be;
	}

IL_02a2:
	{
		// cmtoY = pa + num3 / 2;
		int32_t L_84 = __this->___pa_80;
		int32_t L_85 = V_2;
		__this->___cmtoY_57 = ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)(L_85/2))));
		// pa = cmtoY;
		int32_t L_86 = __this->___cmtoY_57;
		__this->___pa_80 = L_86;
	}

IL_02be:
	{
		// cmy = cmtoY;
		int32_t L_87 = __this->___cmtoY_57;
		__this->___cmy_58 = L_87;
	}

IL_02ca:
	{
		// if (Canvas.isPointerRelease)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_88 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_88)
		{
			goto IL_03c5;
		}
	}
	{
		// trans = false;
		__this->___trans_77 = (bool)0;
		// isG = false;
		__this->___isG_78 = (bool)0;
		// if (isDel && Canvas.dx() < -10 * AvMain.hd)
		bool L_89 = __this->___isDel_79;
		if (!L_89)
		{
			goto IL_0300;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_90;
		L_90 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_91 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_90) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)-10), L_91)))))
		{
			goto IL_0300;
		}
	}
	{
		// indexDel = -1;
		__this->___indexDel_73 = (-1);
	}

IL_0300:
	{
		// isDel = false;
		__this->___isDel_79 = (bool)0;
		// int num11 = (int)(count - timePoint);
		int64_t L_92 = __this->___count_87;
		int64_t L_93 = __this->___timePoint_88;
		V_10 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_92, L_93)));
		// int num12 = dyTran - Canvas.py;
		int32_t L_94 = __this->___dyTran_84;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_95 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_94, L_95));
		// if (CRes.abs(num12) > 40 && num11 < 10 && cmtoY > 0 && cmtoY < cmyLim)
		int32_t L_96 = V_11;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_97;
		L_97 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_96, NULL);
		if ((((int32_t)L_97) <= ((int32_t)((int32_t)40))))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_98 = V_10;
		if ((((int32_t)L_98) >= ((int32_t)((int32_t)10))))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_99 = __this->___cmtoY_57;
		if ((((int32_t)L_99) <= ((int32_t)0)))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_100 = __this->___cmtoY_57;
		int32_t L_101 = __this->___cmyLim_61;
		if ((((int32_t)L_100) >= ((int32_t)L_101)))
		{
			goto IL_035b;
		}
	}
	{
		// vY = num12 / num11 * 10;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		__this->___vY_90 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_102/L_103)), ((int32_t)10)));
	}

IL_035b:
	{
		// timePoint = -1L;
		__this->___timePoint_88 = ((int64_t)(-1));
		// if (Math.abs(num3) < 10 * AvMain.hd && Math.abs(Canvas.dx()) < 10 * AvMain.hd)
		int32_t L_104 = V_2;
		int32_t L_105;
		L_105 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_104, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_106 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_105) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_106)))))
		{
			goto IL_03a4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_107;
		L_107 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		int32_t L_108;
		L_108 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_107, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_109 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		if ((((int32_t)L_108) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_109)))))
		{
			goto IL_03a4;
		}
	}
	{
		// if (num4 <= 4)
		int64_t L_110 = V_3;
		if ((((int64_t)L_110) > ((int64_t)((int64_t)4))))
		{
			goto IL_039c;
		}
	}
	{
		// isHide = false;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17 = (bool)0;
		// timeOpen = 5;
		__this->___timeOpen_82 = 5;
		goto IL_03b8;
	}

IL_039c:
	{
		// click();
		MessageScr_click_m8CB8E935CCFD33BED454DB8B2317BCC772747473(__this, NULL);
		goto IL_03b8;
	}

IL_03a4:
	{
		// else if (Math.abs(Canvas.dx()) <= 10 * AvMain.hd)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_111;
		L_111 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		int32_t L_112;
		L_112 = Math_abs_m9EBB513752A930AECA9ED005549135F97E154308(L_111, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_113 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
	}

IL_03b8:
	{
		// trans = false;
		__this->___trans_77 = (bool)0;
		// Canvas.isPointerRelease = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6 = (bool)0;
	}

IL_03c5:
	{
		// base.updateKey();
		AvMain_updateKey_m90C1E1FA00417229EAB96356C695CD2F31485EDD(__this, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_click_m8CB8E935CCFD33BED454DB8B2317BCC772747473 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* V_0 = NULL;
	{
		// if (selected > size - 1)
		int32_t L_0 = __this->___selected_50;
		int32_t L_1 = __this->___size_51;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		// selected = size - 1;
		int32_t L_2 = __this->___size_51;
		__this->___selected_50 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		return;
	}

IL_001f:
	{
		// else if (focusTab == 1 && listPlayer.size() > 0)
		int32_t L_3 = __this->___focusTab_46;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_00b6;
		}
	}
	{
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = __this->___listPlayer_63;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_4, NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// ElementPlayer elementPlayer = (ElementPlayer)listPlayer.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_6 = __this->___listPlayer_63;
		int32_t L_7 = __this->___selected_50;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_6, L_7, NULL);
		V_0 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_8, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		// if (elementPlayer.action != null)
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___action_4;
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		// elementPlayer.action.perform();
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___action_4;
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_12);
		// listPlayer.removeElement(elementPlayer);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_13 = __this->___listPlayer_63;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_14 = V_0;
		NullCheck(L_13);
		MyVector_removeElement_mD02AC92E6BBD8E66F530EB978E180069029E70E0(L_13, L_14, NULL);
		// size = listPlayer.size();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_15 = __this->___listPlayer_63;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_15, NULL);
		__this->___size_51 = L_16;
		// setLimit();
		MessageScr_setLimit_mD503253F49FD2FA4CA91D99F2AB2BCD8A2A79530(__this, NULL);
		return;
	}

IL_0087:
	{
		// chatPlayer = (ElementPlayer)listPlayer.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_17 = __this->___listPlayer_63;
		int32_t L_18 = __this->___selected_50;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_17, L_18, NULL);
		__this->___chatPlayer_64 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_19, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatPlayer_64), (void*)((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_19, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var)));
		// chatPlayer.numSMS = 0;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_20 = __this->___chatPlayer_64;
		NullCheck(L_20);
		L_20->___numSMS_5 = (int16_t)0;
		// changeFocusTab(2);
		MessageScr_changeFocusTab_m0371D88F6445F9DE6752FADDA50DC91BDC19A8D3(__this, 2, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void MessageScr::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paint_m3DE20D771C35FDD38D76EF6323D30D14D1C60999 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* G_B3_0 = NULL;
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	FrameImage_t22B8F29B26087709566812A258AB227B26817986* G_B4_1 = NULL;
	{
		// lastScr.paintMain(g);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_0 = __this->___lastScr_65;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		NullCheck(L_0);
		VirtualActionInvoker1< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* >::Invoke(21 /* System.Void MyScreen::paintMain(MyGraphics) */, L_0, L_1);
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_2, NULL);
		// Canvas.paint.paintTransBack(g);
		RuntimeObject* L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		NullCheck(L_3);
		InterfaceActionInvoker1< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* >::Invoke(24 /* System.Void IPaint::paintTransBack(MyGraphics) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_3, L_4);
		// Canvas.paint.paintBoxTab(g, x, y, h, w, focusTab, PaintPopup.gI().wSub, wTab, PaintPopup.hTab, numTab, 3, PaintPopup.gI().count, PaintPopup.gI().colorTab, nameTab[focusTab], -1, -1, false, true, nameTab, 0f, null);
		RuntimeObject* L_5 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___paint_54;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_6 = ___0_g;
		int32_t L_7 = __this->___x_41;
		int32_t L_8 = __this->___y_42;
		int32_t L_9 = __this->___h_44;
		int32_t L_10 = __this->___w_43;
		int32_t L_11 = __this->___focusTab_46;
		PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* L_12;
		L_12 = PaintPopup_gI_mB6AA99D3CE731979E0898982002FB985A48C32A8(NULL);
		NullCheck(L_12);
		int32_t L_13 = L_12->___wSub_9;
		int32_t L_14 = __this->___wTab_45;
		int8_t L_15 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		int8_t L_16 = __this->___numTab_53;
		PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* L_17;
		L_17 = PaintPopup_gI_mB6AA99D3CE731979E0898982002FB985A48C32A8(NULL);
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___count_13;
		PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107* L_19;
		L_19 = PaintPopup_gI_mB6AA99D3CE731979E0898982002FB985A48C32A8(NULL);
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___colorTab_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = __this->___nameTab_54;
		int32_t L_22 = __this->___focusTab_46;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___nameTab_54;
		NullCheck(L_5);
		InterfaceActionInvoker21< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, String_t*, int8_t, int8_t, bool, bool, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, float, ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672* >::Invoke(1 /* System.Void IPaint::paintBoxTab(MyGraphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.String,System.SByte,System.SByte,System.Boolean,System.Boolean,System.String[],System.Single,Image[][]) */, IPaint_tEE422BA9C3A61DB9666DE37D2AA13B938E64CD9F_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_13, L_14, L_15, L_16, 3, L_18, L_20, L_24, (int8_t)(-1), (int8_t)(-1), (bool)0, (bool)1, L_25, (0.0f), (ImageU5BU5DU5BU5D_t929E943844CCA2D629ADE637CC149CBDBD3A8672*)NULL);
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_26 = ___0_g;
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_26, NULL);
		// int num = wTab + 10 * AvMain.hd;
		int32_t L_27 = __this->___wTab_45;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_28))));
		// if (isNewMsg)
		bool L_29 = __this->___isNewMsg_70;
		if (!L_29)
		{
			goto IL_010b;
		}
	}
	{
		// imgTick.drawFrame((Canvas.gameTick % 20 <= 9) ? 1 : 0, x + 12 * AvMain.hd + num + num / 2 + wTab / 2 - 8 * AvMain.hd, y + hTab - 17 * AvMain.hd, 0, 3, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_30 = __this->___imgTick_68;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_31 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___gameTick_12;
		G_B2_0 = L_30;
		if ((((int32_t)((int32_t)(L_31%((int32_t)20)))) <= ((int32_t)((int32_t)9))))
		{
			G_B3_0 = L_30;
			goto IL_00c6;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_00c7:
	{
		int32_t L_32 = __this->___x_41;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_33 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_34 = V_0;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->___wTab_45;
		int32_t L_37 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_38 = __this->___y_42;
		int32_t L_39 = __this->___hTab_47;
		int32_t L_40 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_41 = ___0_g;
		NullCheck(G_B4_1);
		FrameImage_drawFrame_m39AFA2B5C04276BF573FC90AFB4A02C68A2AF6E3(G_B4_1, G_B4_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_33)))), L_34)), ((int32_t)(L_35/2)))), ((int32_t)(L_36/2)))), ((int32_t)il2cpp_codegen_multiply(8, L_37)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), ((int32_t)il2cpp_codegen_multiply(((int32_t)17), L_40)))), 0, 3, L_41, NULL);
	}

IL_010b:
	{
		// g.setClip(x, y + PaintPopup.hTab + 4 * AvMain.hd, w, hDis);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_42 = ___0_g;
		int32_t L_43 = __this->___x_41;
		int32_t L_44 = __this->___y_42;
		int8_t L_45 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_46 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_47 = __this->___w_43;
		int32_t L_48 = __this->___hDis_48;
		NullCheck(L_42);
		MyGraphics_setClip_mD5FB420EAF9266245BA1699AC1B2E2C98867C8E8(L_42, ((float)L_43), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_44, (int32_t)L_45)), ((int32_t)il2cpp_codegen_multiply(4, L_46))))), ((float)L_47), ((float)L_48), NULL);
		// g.translate(x, y + PaintPopup.hTab + 10 * AvMain.hd);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_49 = ___0_g;
		int32_t L_50 = __this->___x_41;
		int32_t L_51 = __this->___y_42;
		int8_t L_52 = ((PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_StaticFields*)il2cpp_codegen_static_fields_for(PaintPopup_tFBF74377B36164C700DA24A95FFEDA9888C4D107_il2cpp_TypeInfo_var))->___hTab_16;
		int32_t L_53 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_49);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_49, ((float)L_50), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_51, (int32_t)L_52)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_53))))), NULL);
		// int num2 = cmy / hText - 1;
		int32_t L_54 = __this->___cmy_58;
		int32_t L_55 = __this->___hText_49;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_54/L_55)), 1));
		// if (num2 < 0)
		int32_t L_56 = V_1;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			goto IL_0174;
		}
	}
	{
		// num2 = 0;
		V_1 = 0;
	}

IL_0174:
	{
		// int num3 = num2 + h / hText;
		int32_t L_57 = V_1;
		int32_t L_58 = __this->___h_44;
		int32_t L_59 = __this->___hText_49;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)(L_58/L_59))));
		// if (num3 > size)
		int32_t L_60 = V_2;
		int32_t L_61 = __this->___size_51;
		if ((((int32_t)L_60) <= ((int32_t)L_61)))
		{
			goto IL_0194;
		}
	}
	{
		// num3 = size;
		int32_t L_62 = __this->___size_51;
		V_2 = L_62;
	}

IL_0194:
	{
		// switch (focusTab)
		int32_t L_63 = __this->___focusTab_46;
		V_3 = L_63;
		int32_t L_64 = V_3;
		switch (L_64)
		{
			case 0:
			{
				goto IL_01af;
			}
			case 1:
			{
				goto IL_01ba;
			}
			case 2:
			{
				goto IL_01c5;
			}
		}
	}
	{
		goto IL_01ce;
	}

IL_01af:
	{
		// paintPublicTab(g, num2, num3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_65 = ___0_g;
		int32_t L_66 = V_1;
		int32_t L_67 = V_2;
		MessageScr_paintPublicTab_m2553509D62B904BC4718F93DDEA2179551277F8D(__this, L_65, L_66, L_67, NULL);
		// break;
		goto IL_01ce;
	}

IL_01ba:
	{
		// paintListPlayerTab(g, num2, num3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_68 = ___0_g;
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		MessageScr_paintListPlayerTab_mA7873B5932E064DCCF81D9BDB25CE4C1093CA638(__this, L_68, L_69, L_70, NULL);
		// break;
		goto IL_01ce;
	}

IL_01c5:
	{
		// paintChatTab(g, num2, num3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_71 = ___0_g;
		int32_t L_72 = V_1;
		int32_t L_73 = V_2;
		MessageScr_paintChatTab_mFF0C32C6FADB7DCBE19602357E78C004323E0370(__this, L_71, L_72, L_73, NULL);
	}

IL_01ce:
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_74 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_74, NULL);
		// if (focusTab != 1 && (chatPlayer == null || focusTab != 2 || !chatPlayer.name.Equals("admin")))
		int32_t L_75 = __this->___focusTab_46;
		if ((((int32_t)L_75) == ((int32_t)1)))
		{
			goto IL_0211;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_76 = __this->___chatPlayer_64;
		if (!L_76)
		{
			goto IL_0205;
		}
	}
	{
		int32_t L_77 = __this->___focusTab_46;
		if ((!(((uint32_t)L_77) == ((uint32_t)2))))
		{
			goto IL_0205;
		}
	}
	{
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_78 = __this->___chatPlayer_64;
		NullCheck(L_78);
		String_t* L_79 = L_78->___name_1;
		NullCheck(L_79);
		bool L_80;
		L_80 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_79, _stringLiteral7C87541FD3F3EF5016E12D411900C87A6046A8E8, NULL);
		if (L_80)
		{
			goto IL_0211;
		}
	}

IL_0205:
	{
		// tfChat.paint(g);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_81 = __this->___tfChat_66;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_82 = ___0_g;
		NullCheck(L_81);
		TField_paint_m8480E17AE84084BDAA14B7988A8ACE667911354A(L_81, L_82, NULL);
	}

IL_0211:
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_83 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_83, NULL);
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_84 = ___0_g;
		MyScreen_paint_m526352F2F397B86061C0A33C5B0247E695AE2E1B(__this, L_84, NULL);
		// g.drawImage(ListScr.imgCloseTabFull[countClose / 3], Canvas.w - 25 * AvMain.hd, y + hTab, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_85 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_il2cpp_TypeInfo_var);
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_86 = ((ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_StaticFields*)il2cpp_codegen_static_fields_for(ListScr_t25E4084C253399664A670E8D570C559BE7EB77FB_il2cpp_TypeInfo_var))->___imgCloseTabFull_59;
		int8_t L_87 = __this->___countClose_52;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)((int32_t)L_87/3));
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		int32_t L_90 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_91 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_92 = __this->___y_42;
		int32_t L_93 = __this->___hTab_47;
		NullCheck(L_85);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_85, L_89, ((float)((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)il2cpp_codegen_multiply(((int32_t)25), L_91))))), ((float)((int32_t)il2cpp_codegen_add(L_92, L_93))), 3, NULL);
		// }
		return;
	}
}
// System.Void MessageScr::paintChatTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintChatTab_mFF0C32C6FADB7DCBE19602357E78C004323E0370 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		int32_t L_1 = __this->___cmy_58;
		NullCheck(L_0);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_0, (0.0f), ((float)((-L_1))), NULL);
		// int num = 0;
		V_0 = 0;
		// g.setColor(0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_2 = ___0_g;
		NullCheck(L_2);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_2, 0, NULL);
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		V_1 = 0;
		goto IL_01ef;
	}

IL_0023:
	{
		// TextMsg textMsg = (TextMsg)chatPlayer.text.elementAt(i);
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_3 = __this->___chatPlayer_64;
		NullCheck(L_3);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = L_3->___text_3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_4, L_5, NULL);
		V_2 = ((TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455*)CastclassClass((RuntimeObject*)L_6, TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455_il2cpp_TypeInfo_var));
		// if (!textMsg.isOwner)
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_7 = V_2;
		NullCheck(L_7);
		bool L_8 = L_7->___isOwner_1;
		if (L_8)
		{
			goto IL_0106;
		}
	}
	{
		// ChatPopup.paintRoundRect(g, 5 * AvMain.hd, num - 2 * AvMain.hd, textMsg.wPopup, textMsg.text.Length * hString + 10 * AvMain.hd, 12320735, 9493435, 2);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_9 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_11 = V_0;
		int32_t L_12 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_13 = V_2;
		NullCheck(L_13);
		int16_t L_14 = L_13->___wPopup_2;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_15 = V_2;
		NullCheck(L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15->___text_0;
		NullCheck(L_16);
		int8_t L_17 = __this->___hString_56;
		int32_t L_18 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0_il2cpp_TypeInfo_var);
		ChatPopup_paintRoundRect_mA98D2CDD67A644712E196B5168C759E05F68956F(L_9, ((int32_t)il2cpp_codegen_multiply(5, L_10)), ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)il2cpp_codegen_multiply(2, L_12)))), L_14, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_16)->max_length)), (int32_t)L_17)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_18)))), ((int32_t)12320735), ((int32_t)9493435), (int8_t)2, NULL);
		// g.drawImage(imgArrow[1], 23 * AvMain.hd, num - 3 * AvMain.hd + textMsg.text.Length * hString + 10 * AvMain.hd, MyGraphics.TOP | MyGraphics.HCENTER);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_20 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71;
		NullCheck(L_20);
		int32_t L_21 = 1;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_24 = V_0;
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_26 = V_2;
		NullCheck(L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26->___text_0;
		NullCheck(L_27);
		int8_t L_28 = __this->___hString_56;
		int32_t L_29 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var);
		int32_t L_30 = ((MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_StaticFields*)il2cpp_codegen_static_fields_for(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var))->___TOP_4;
		int32_t L_31 = ((MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_StaticFields*)il2cpp_codegen_static_fields_for(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var))->___HCENTER_0;
		NullCheck(L_19);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_19, L_22, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)23), L_23))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)il2cpp_codegen_multiply(3, L_25)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_27)->max_length)), (int32_t)L_28)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_29))))), ((int32_t)(L_30|L_31)), NULL);
		// for (int j = 0; j < textMsg.text.Length; j++)
		V_3 = 0;
		goto IL_00f6;
	}

IL_00cc:
	{
		// Canvas.fontChat.drawString(g, textMsg.text[j], 10 * AvMain.hd, num, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_32 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_33 = ___0_g;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_34 = V_2;
		NullCheck(L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34->___text_0;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_39 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_40 = V_0;
		NullCheck(L_32);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_32, L_33, L_38, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_39)), L_40, 0);
		// num += hString;
		int32_t L_41 = V_0;
		int8_t L_42 = __this->___hString_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, (int32_t)L_42));
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00f6:
	{
		// for (int j = 0; j < textMsg.text.Length; j++)
		int32_t L_44 = V_3;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_45 = V_2;
		NullCheck(L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45->___text_0;
		NullCheck(L_46);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01e0;
	}

IL_0106:
	{
		// ChatPopup.paintRoundRect(g, Canvas.w - 5 * AvMain.hd - textMsg.wPopup, num - 2 * AvMain.hd, textMsg.wPopup, textMsg.text.Length * hString + 10 * AvMain.hd, 16777215, 14145495, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_47 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_48 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_49 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_50 = V_2;
		NullCheck(L_50);
		int16_t L_51 = L_50->___wPopup_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_54 = V_2;
		NullCheck(L_54);
		int16_t L_55 = L_54->___wPopup_2;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_56 = V_2;
		NullCheck(L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56->___text_0;
		NullCheck(L_57);
		int8_t L_58 = __this->___hString_56;
		int32_t L_59 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(ChatPopup_t58DBCAC770751E27651BF2B4C859C82316AD19F0_il2cpp_TypeInfo_var);
		ChatPopup_paintRoundRect_mA98D2CDD67A644712E196B5168C759E05F68956F(L_47, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_48, ((int32_t)il2cpp_codegen_multiply(5, L_49)))), (int32_t)L_51)), ((int32_t)il2cpp_codegen_subtract(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_57)->max_length)), (int32_t)L_58)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_59)))), ((int32_t)16777215), ((int32_t)14145495), (int8_t)0, NULL);
		// g.drawImage(imgArrow[0], Canvas.w - 23 * AvMain.hd, num - 3 * AvMain.hd + textMsg.text.Length * hString + 10 * AvMain.hd, MyGraphics.TOP | MyGraphics.HCENTER);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_60 = ___0_g;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_61 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___imgArrow_71;
		NullCheck(L_61);
		int32_t L_62 = 0;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_65 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_66 = V_0;
		int32_t L_67 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_68 = V_2;
		NullCheck(L_68);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_68->___text_0;
		NullCheck(L_69);
		int8_t L_70 = __this->___hString_56;
		int32_t L_71 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var);
		int32_t L_72 = ((MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_StaticFields*)il2cpp_codegen_static_fields_for(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var))->___TOP_4;
		int32_t L_73 = ((MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_StaticFields*)il2cpp_codegen_static_fields_for(MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56_il2cpp_TypeInfo_var))->___HCENTER_0;
		NullCheck(L_60);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_60, L_63, ((float)((int32_t)il2cpp_codegen_subtract(L_64, ((int32_t)il2cpp_codegen_multiply(((int32_t)23), L_65))))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_66, ((int32_t)il2cpp_codegen_multiply(3, L_67)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_69)->max_length)), (int32_t)L_70)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_71))))), ((int32_t)(L_72|L_73)), NULL);
		// for (int k = 0; k < textMsg.text.Length; k++)
		V_4 = 0;
		goto IL_01d4;
	}

IL_01a1:
	{
		// Canvas.fontChat.drawString(g, textMsg.text[k], Canvas.w - 10 * AvMain.hd, num, 1);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_74 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_75 = ___0_g;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_76 = V_2;
		NullCheck(L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_76->___text_0;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		String_t* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_82 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_83 = V_0;
		NullCheck(L_74);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_74, L_75, L_80, ((int32_t)il2cpp_codegen_subtract(L_81, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_82)))), L_83, 1);
		// num += hString;
		int32_t L_84 = V_0;
		int8_t L_85 = __this->___hString_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_84, (int32_t)L_85));
		// for (int k = 0; k < textMsg.text.Length; k++)
		int32_t L_86 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_01d4:
	{
		// for (int k = 0; k < textMsg.text.Length; k++)
		int32_t L_87 = V_4;
		TextMsg_t58576C78A0C22A89DAC69AA7631278162E648455* L_88 = V_2;
		NullCheck(L_88);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_88->___text_0;
		NullCheck(L_89);
		if ((((int32_t)L_87) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01a1;
		}
	}

IL_01e0:
	{
		// num += hText * 2;
		int32_t L_90 = V_0;
		int32_t L_91 = __this->___hText_49;
		V_0 = ((int32_t)il2cpp_codegen_add(L_90, ((int32_t)il2cpp_codegen_multiply(L_91, 2))));
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_92 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01ef:
	{
		// for (int i = 0; i < chatPlayer.text.size(); i++)
		int32_t L_93 = V_1;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_94 = __this->___chatPlayer_64;
		NullCheck(L_94);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_95 = L_94->___text_3;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_95, NULL);
		if ((((int32_t)L_93) < ((int32_t)L_96)))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MessageScr::paintListPlayerTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintListPlayerTab_mA7873B5932E064DCCF81D9BDB25CE4C1093CA638 (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* V_1 = NULL;
	{
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		int32_t L_1 = __this->___cmy_58;
		NullCheck(L_0);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_0, (0.0f), ((float)((-L_1))), NULL);
		// if (listPlayer.size() > 0)
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_2 = __this->___listPlayer_63;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		// for (int i = x0; i < y0; i++)
		int32_t L_4 = ___1_x0;
		V_0 = L_4;
		goto IL_020d;
	}

IL_002b:
	{
		// g.setColor(16777215);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_5 = ___0_g;
		NullCheck(L_5);
		MyGraphics_setColor_m2E132AAAE0A6CFC3CB33601A5109F922E9884A14(L_5, ((int32_t)16777215), NULL);
		// g.fillRect(5 * AvMain.hd, (i + 1) * hText + 1, w - 10 * AvMain.hd, 1f);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_6 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_7 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___hText_49;
		int32_t L_10 = __this->___w_43;
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_6);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_6, ((float)((int32_t)il2cpp_codegen_multiply(5, L_7))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), L_9)), 1))), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_11))))), (1.0f), NULL);
		// if (i == selected && !isHide)
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___selected_50;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00a5;
		}
	}
	{
		bool L_14 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___isHide_17;
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// g.fillRect(5 * AvMain.hd, i * hText, w - 10 * AvMain.hd, hText);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_15 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_16 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___hText_49;
		int32_t L_19 = __this->___w_43;
		int32_t L_20 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_21 = __this->___hText_49;
		NullCheck(L_15);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_15, ((float)((int32_t)il2cpp_codegen_multiply(5, L_16))), ((float)((int32_t)il2cpp_codegen_multiply(L_17, L_18))), ((float)((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_20))))), ((float)L_21), NULL);
	}

IL_00a5:
	{
		// ElementPlayer elementPlayer = (ElementPlayer)listPlayer.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_22 = __this->___listPlayer_63;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_22, L_23, NULL);
		V_1 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_24, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		// Canvas.tempFont.drawString(g, elementPlayer.name, 8 * AvMain.hd, i * hText + hText / 2 - Canvas.tempFont.getHeight() + 2 * AvMain.hd, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_25 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___tempFont_48;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_26 = ___0_g;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->___name_1;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_29 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_30 = V_0;
		int32_t L_31 = __this->___hText_49;
		int32_t L_32 = __this->___hText_49;
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_33 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___tempFont_48;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_33);
		int32_t L_35 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_25);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_25, L_26, L_28, ((int32_t)il2cpp_codegen_multiply(8, L_29)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, L_31)), ((int32_t)(L_32/2)))), L_34)), ((int32_t)il2cpp_codegen_multiply(2, L_35)))), 0);
		// Canvas.fontChat.drawString(g, elementPlayer.subText, 8 * AvMain.hd, i * hText + hText / 2 - 2 * AvMain.hd, 0);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_36 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_37 = ___0_g;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_38 = V_1;
		NullCheck(L_38);
		String_t* L_39 = L_38->___subText_2;
		int32_t L_40 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___hText_49;
		int32_t L_43 = __this->___hText_49;
		int32_t L_44 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_36);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_36, L_37, L_39, ((int32_t)il2cpp_codegen_multiply(8, L_40)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_41, L_42)), ((int32_t)(L_43/2)))), ((int32_t)il2cpp_codegen_multiply(2, L_44)))), 0);
		// if (elementPlayer.numSMS > 0 && indexDel == -1)
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_45 = V_1;
		NullCheck(L_45);
		int16_t L_46 = L_45->___numSMS_5;
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_47 = __this->___indexDel_73;
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_01b8;
		}
	}
	{
		// g.drawImage(imgBound, w - 15 * AvMain.hd, i * hText + hText / 2, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_48 = ___0_g;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_49 = __this->___imgBound_72;
		int32_t L_50 = __this->___w_43;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_51 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_52 = V_0;
		int32_t L_53 = __this->___hText_49;
		int32_t L_54 = __this->___hText_49;
		NullCheck(L_48);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_48, L_49, ((float)((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)il2cpp_codegen_multiply(((int32_t)15), L_51))))), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_52, L_53)), ((int32_t)(L_54/2))))), 3, NULL);
		// Canvas.menuFont.drawString(g, elementPlayer.numSMS + string.Empty, w - 15 * AvMain.hd, i * hText + hText / 2 - Canvas.menuFont.getHeight() / 2, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_55 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuFont_47;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_56 = ___0_g;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_57 = V_1;
		NullCheck(L_57);
		int16_t* L_58 = (int16_t*)(&L_57->___numSMS_5);
		String_t* L_59;
		L_59 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23(L_58, NULL);
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		String_t* L_61;
		L_61 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_59, L_60, NULL);
		int32_t L_62 = __this->___w_43;
		int32_t L_63 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_64 = V_0;
		int32_t L_65 = __this->___hText_49;
		int32_t L_66 = __this->___hText_49;
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_67 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuFont_47;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_67);
		NullCheck(L_55);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_55, L_56, L_61, ((int32_t)il2cpp_codegen_subtract(L_62, ((int32_t)il2cpp_codegen_multiply(((int32_t)15), L_63)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_64, L_65)), ((int32_t)(L_66/2)))), ((int32_t)(L_68/2)))), 2);
	}

IL_01b8:
	{
		// if (i == indexDel)
		int32_t L_69 = V_0;
		int32_t L_70 = __this->___indexDel_73;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0209;
		}
	}
	{
		// imgDel.drawFrame(0, w - imgDel.frameWidth - 10 * AvMain.hd, i * hText + hText / 2 - imgDel.frameHeight / 2, 0, g);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_71 = __this->___imgDel_69;
		int32_t L_72 = __this->___w_43;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_73 = __this->___imgDel_69;
		NullCheck(L_73);
		int32_t L_74 = L_73->___frameWidth_0;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_75 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_76 = V_0;
		int32_t L_77 = __this->___hText_49;
		int32_t L_78 = __this->___hText_49;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_79 = __this->___imgDel_69;
		NullCheck(L_79);
		int32_t L_80 = L_79->___frameHeight_1;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_81 = ___0_g;
		NullCheck(L_71);
		FrameImage_drawFrame_mA4D894B931D5D1568E7A900EAA5ED9BD719C7354(L_71, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_72, L_74)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_75)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_76, L_77)), ((int32_t)(L_78/2)))), ((int32_t)(L_80/2)))), 0, L_81, NULL);
	}

IL_0209:
	{
		// for (int i = x0; i < y0; i++)
		int32_t L_82 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_020d:
	{
		// for (int i = x0; i < y0; i++)
		int32_t L_83 = V_0;
		int32_t L_84 = ___2_y0;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_002b;
		}
	}

IL_0214:
	{
		// g.fillRect(5 * AvMain.hd, y0 * hText, w - 10 * AvMain.hd, 1f);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_85 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_86 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_87 = ___2_y0;
		int32_t L_88 = __this->___hText_49;
		int32_t L_89 = __this->___w_43;
		int32_t L_90 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_85);
		MyGraphics_fillRect_m3DC8F1ECEC8A32DBE958F1CD8DBC679FBE7B0D39(L_85, ((float)((int32_t)il2cpp_codegen_multiply(5, L_86))), ((float)((int32_t)il2cpp_codegen_multiply(L_87, L_88))), ((float)((int32_t)il2cpp_codegen_subtract(L_89, ((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_90))))), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MessageScr::paintPublicTab(MyGraphics,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageScr_paintPublicTab_m2553509D62B904BC4718F93DDEA2179551277F8D (MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, int32_t ___1_x0, int32_t ___2_y0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* V_1 = NULL;
	{
		// g.translate(0f, -cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		int32_t L_1 = __this->___cmy_58;
		NullCheck(L_0);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_0, (0.0f), ((float)((-L_1))), NULL);
		// for (int i = x0; i < y0; i++)
		int32_t L_2 = ___1_x0;
		V_0 = L_2;
		goto IL_00a1;
	}

IL_001a:
	{
		// ElementPlayer elementPlayer = (ElementPlayer)listTextTab_1.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_3 = __this->___listTextTab_1_62;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_3, L_4, NULL);
		V_1 = ((ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2*)CastclassClass((RuntimeObject*)L_5, ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2_il2cpp_TypeInfo_var));
		// Canvas.tempFont.drawString(g, elementPlayer.name + ":", 5 * AvMain.hd, i * hText + hText / 2 - Canvas.tempFont.getHeight() + 4 * AvMain.hd, 0);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___tempFont_48;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_7 = ___0_g;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___name_1;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_11 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___hText_49;
		int32_t L_14 = __this->___hText_49;
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_15 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___tempFont_48;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 FontX::getHeight() */, L_15);
		int32_t L_17 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		NullCheck(L_6);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_6, L_7, L_10, ((int32_t)il2cpp_codegen_multiply(5, L_11)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, L_13)), ((int32_t)(L_14/2)))), L_16)), ((int32_t)il2cpp_codegen_multiply(4, L_17)))), 0);
		// Canvas.fontChat.drawString(g, elementPlayer.subText, 5 * AvMain.hd, i * hText + hText / 2, 0);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_18 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___fontChat_50;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		ElementPlayer_t1D9A434206E5A7315FB5502BE6355EBFFEC6D3B2* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___subText_2;
		int32_t L_22 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___hText_49;
		int32_t L_25 = __this->___hText_49;
		NullCheck(L_18);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, L_18, L_19, L_21, ((int32_t)il2cpp_codegen_multiply(5, L_22)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), ((int32_t)(L_25/2)))), 0);
		// for (int i = x0; i < y0; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a1:
	{
		// for (int i = x0; i < y0; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = ___2_y0;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_001a;
		}
	}
	{
		// }
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
// System.Void MessageScr/IActionChat::perform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionChat_perform_m853C767648767D2F57B362D17CFED715ECD09F22 (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (me.focusTab == 0)
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_0 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		NullCheck(L_0);
		int32_t L_1 = L_0->___focusTab_46;
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		// MapScr.gI().onChatFromMe(me.tfChat.getText());
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_2;
		L_2 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_3 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		NullCheck(L_3);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_4 = L_3->___tfChat_66;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TField_getText_mFCD7D323EF26FC195005BA96783EE50137C5A47A_inline(L_4, NULL);
		NullCheck(L_2);
		MapScr_onChatFromMe_mD978F3F5D4D8205E983696327592BAB4517653B4(L_2, L_5, NULL);
		// me.tfChat.setText(string.Empty);
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_6 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		NullCheck(L_6);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_7 = L_6->___tfChat_66;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE(L_7, L_8, NULL);
		return;
	}

IL_003a:
	{
		// else if (me.focusTab == 2)
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_9 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		NullCheck(L_9);
		int32_t L_10 = L_9->___focusTab_46;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		// me.doSendMsg();
		MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B* L_11 = ((MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_StaticFields*)il2cpp_codegen_static_fields_for(MessageScr_t50F651076C1A16A67D6AF345551A2858F8AA704B_il2cpp_TypeInfo_var))->___me_40;
		NullCheck(L_11);
		MessageScr_doSendMsg_mB20A13536C80E5D4B0830B39C13D9B585750C097(L_11, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void MessageScr/IActionChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActionChat__ctor_m6DBD25037EE01ACE806F6E72995103767D7DBC9D (IActionChat_tDB5D40A7A808DB11CD6D4F34FFCA52FB287B223B* __this, const RuntimeMethod* method) 
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
// System.Void MiniMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap__ctor_m8E01B682E318B58AF49A5ED5E74FFD3F5CB1B4DB (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral419B76CA25654FDC3FF3BCE9983B88422FB5FF5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E8FF26D2FFEFAC564C2896A438395703CE7C8D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7722FC709001ABC7B5FF3DF1FC4C940A68179FDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD720DE3699A6BAB394126CFDD31F8FE4FB874067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBAB29C7286EE0FC0E107C936B4EBC2C3AC973F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public sbyte wSmall = 16;
		__this->___wSmall_47 = (int8_t)((int32_t)16);
		// public MiniMap()
		il2cpp_codegen_runtime_class_init_inline(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C_il2cpp_TypeInfo_var);
		MyScreen__ctor_m1DC4D7088853401EA2BB15A924B0AE6959E9C481(__this, NULL);
		// imgArrow = new FrameImage(Image.createImagePNG(T.getPath() + "/main/up"), 13 * AvMain.hd, 11 * AvMain.hd);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral419B76CA25654FDC3FF3BCE9983B88422FB5FF5B, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_2;
		L_2 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_5 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_5, L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)13), L_3)), ((int32_t)il2cpp_codegen_multiply(((int32_t)11), L_4)), NULL);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgArrow_42 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgArrow_42), (void*)L_5);
		// imgSmallIcon = Image.createImage(T.getPath() + "/effect/sIc");
		String_t* L_6;
		L_6 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralDBAB29C7286EE0FC0E107C936B4EBC2C3AC973F2, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_8;
		L_8 = Image_createImage_mAE35E2D9090F867E18A42F31AE84B179D2592C2A(L_7, NULL);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgSmallIcon_50 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgSmallIcon_50), (void*)L_8);
		// imgBackIcon = Image.createImagePNG(T.getPath() + "/effect/b_p");
		String_t* L_9;
		L_9 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralD720DE3699A6BAB394126CFDD31F8FE4FB874067, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_11;
		L_11 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_10, NULL);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgBackIcon_51 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgBackIcon_51), (void*)L_11);
		// imgPopupName = new FrameImage(Image.createImagePNG(T.getPath() + "/temp/minimapbanner"), 85 * AvMain.hd, 35 * AvMain.hd);
		String_t* L_12;
		L_12 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteral5E8FF26D2FFEFAC564C2896A438395703CE7C8D1, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_14;
		L_14 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_13, NULL);
		int32_t L_15 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_16 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_17 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_17, L_14, ((int32_t)il2cpp_codegen_multiply(((int32_t)85), L_15)), ((int32_t)il2cpp_codegen_multiply(((int32_t)35), L_16)), NULL);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopupName_72 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopupName_72), (void*)L_17);
		// imgClound = new Image[2];
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_18 = (ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288*)SZArrayNew(ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___imgClound_69 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgClound_69), (void*)L_18);
		// for (int i = 0; i < 2; i++)
		V_0 = 0;
		goto IL_00d3;
	}

IL_00ac:
	{
		// imgClound[i] = Image.createImagePNG(T.getPath() + "/effect/clMini" + i);
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_19 = __this->___imgClound_69;
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_21, _stringLiteral7722FC709001ABC7B5FF3DF1FC4C940A68179FDA, L_22, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_24;
		L_24 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_23, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908*)L_24);
		// for (int i = 0; i < 2; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00d3:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}
	{
		// }
		return;
	}
}
// MiniMap MiniMap::gI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* MiniMap_gI_m511018300E83F84A4938B9519283E6D6801345F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (me != null) ? me : (me = new MiniMap());
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* L_0 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___me_40;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* L_1 = (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A*)il2cpp_codegen_object_new(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MiniMap__ctor_m8E01B682E318B58AF49A5ED5E74FFD3F5CB1B4DB(L_1, NULL);
		MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___me_40 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___me_40), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* L_3 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___me_40;
		return L_3;
	}
}
// System.Void MiniMap::switchToMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_switchToMe_m9CC799C17949552D6C68BD609394EC3EF12F9448 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	{
		// base.switchToMe();
		MyScreen_switchToMe_mC24CFE20D75C42D96747425FA6E8EF4ACDE24D52_inline(__this, NULL);
		// isHide = true;
		__this->___isHide_66 = (bool)1;
		// }
		return;
	}
}
// System.Void MiniMap::switchToMe(MyScreen)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_switchToMe_m99243DA20B69B79708F2FBCB04038710A98372A3 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* ___0_last, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastScr = Canvas.currentMyScreen;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		__this->___lastScr_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastScr_63), (void*)L_0);
		// base.switchToMe();
		MyScreen_switchToMe_mC24CFE20D75C42D96747425FA6E8EF4ACDE24D52_inline(__this, NULL);
		// if (!GlobalLogicHandler.isNewVersion)
		bool L_1 = ((GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2_StaticFields*)il2cpp_codegen_static_fields_for(GlobalLogicHandler_t5A6BEF5E6E3CED79A62BAF68F5644478C05CAAB2_il2cpp_TypeInfo_var))->___isNewVersion_2;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Canvas.endDlg();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_endDlg_mCF2D0888239AECB5DA884B31F713966BBE672214(NULL);
	}

IL_001d:
	{
		// if (Session_ME.gI().isConnected() && Canvas.isInitChar)
		il2cpp_codegen_runtime_class_init_inline(Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var);
		Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB* L_2;
		L_2 = Session_ME_gI_m08EE51E01B34D2C15C6BA5D68AF6B05C2A74CB76(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Session_ME_isConnected_mDA83BFCEDD0D124FB743C10F2ED83F8721AE0B42_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_4 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isInitChar_35;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// Canvas.welcome = new Welcome();
		Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* L_5 = (Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD*)il2cpp_codegen_object_new(Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Welcome__ctor_mFFEF5E0DB038BBB27231E2B655E4480FF6FA0750(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___welcome_61 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___welcome_61), (void*)L_5);
		// Canvas.welcome.initMiniMap();
		Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___welcome_61;
		NullCheck(L_6);
		Welcome_initMiniMap_m883E941AC830B66AF0AD61BDC872A5A828B19D46(L_6, NULL);
	}

IL_0044:
	{
		// if (Canvas.load == 0)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___load_38;
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		// Canvas.load = 1;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___load_38 = 1;
	}

IL_0051:
	{
		// initZoom();
		VirtualActionInvoker0::Invoke(20 /* System.Void MyScreen::initZoom() */, __this);
		// LoadMap.TYPEMAP = -1;
		il2cpp_codegen_runtime_class_init_inline(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var);
		((LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_StaticFields*)il2cpp_codegen_static_fields_for(LoadMap_tF83C357BC0823CEDFAA5F44EEA1EDF3F6872CC1C_il2cpp_TypeInfo_var))->___TYPEMAP_92 = (-1);
		// Canvas.currentEffect.removeAllElements();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_8 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentEffect_31;
		NullCheck(L_8);
		MyVector_removeAllElements_mF2D6466281DBBB597BBEDED74C9214256D0CE7D1(L_8, NULL);
		// FarmScr.cell = null;
		il2cpp_codegen_runtime_class_init_inline(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var);
		((FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_StaticFields*)il2cpp_codegen_static_fields_for(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var))->___cell_43 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_StaticFields*)il2cpp_codegen_static_fields_for(FarmScr_t6D5AFBEA65530B2EBAC6D3027C000BC4081D5F6C_il2cpp_TypeInfo_var))->___cell_43), (void*)(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)NULL);
		// SoundManager.playSoundBG(85);
		il2cpp_codegen_runtime_class_init_inline(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		SoundManager_playSoundBG_mDD4500D828E1A1BD38D7D5632B81BEFED3E5F5A6(((int32_t)85), NULL);
		// Canvas.setPopupTime(nameSV);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		String_t* L_9 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___nameSV_73;
		Canvas_setPopupTime_m31CDE8585866382F88B0874B3DCB7D620B2E1F26(L_9, NULL);
		// MapScr.idMapOld = -1;
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		((MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_StaticFields*)il2cpp_codegen_static_fields_for(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var))->___idMapOld_80 = (-1);
		// }
		return;
	}
}
// System.Void MiniMap::initZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_initZoom_mCA0779C5B424C23FCC8BB1A3C43D4AC6D7E12227 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	{
		// init();
		MiniMap_init_m8427B8970BBCBA9470045BD9E234302303AA7AFD(__this, NULL);
		// tran();
		MiniMap_tran_m9EAD1AF8FC39432372A618D263AB68D43298A22A(__this, NULL);
		// }
		return;
	}
}
// System.Void MiniMap::commandTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_commandTab_mF83AA4B1F25DDDB8E2DE98B947D1B9E68D28DDA7 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index == 1)
		int32_t L_0 = ___0_index;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// MapScr.gI().switchToMe();
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_1;
		L_1 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, L_1);
		// imgPopup = null;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71), (void*)(FrameImage_t22B8F29B26087709566812A258AB227B26817986*)NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void MiniMap::commandActionPointer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_commandActionPointer_mB370DB6188DBD07C5292FAEA58545AFD4FAA20F7 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, int32_t ___0_index, int32_t ___1_subIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0067;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0048;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// GlobalService.gI().requestService(6, string.Empty);
		GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* L_1;
		L_1 = GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65(NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		GlobalService_requestService_m3D8A7EDC3BA3E4EF1E270D7686EEB9EED450784C(L_1, (int8_t)6, L_2, NULL);
		// break;
		return;
	}

IL_0030:
	{
		// MapScr.gI().doChangePass();
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_3;
		L_3 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		NullCheck(L_3);
		MapScr_doChangePass_mC3C140B600DBE720C7439D1C639C674CD1727909(L_3, NULL);
		// break;
		return;
	}

IL_003b:
	{
		// GlobalService.gI().requestService(3, null);
		GlobalService_t95C548932CD9E9F6366CBDD20DD62EC92E16BA72* L_4;
		L_4 = GlobalService_gI_m981A5FC7036416C35221BFBC28700486AFD98E65(NULL);
		NullCheck(L_4);
		GlobalService_requestService_m3D8A7EDC3BA3E4EF1E270D7686EEB9EED450784C(L_4, (int8_t)3, (String_t*)NULL, NULL);
		// break;
		return;
	}

IL_0048:
	{
		// OptionScr.gI().switchToMe();
		OptionScr_tFAA9C28AC78E1DCC83E9698F5B017F41372EF2A5* L_5;
		L_5 = OptionScr_gI_m51CF6E9EB72787C0EC26B3D683F158EF3860A8EF(NULL);
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, L_5);
		// break;
		return;
	}

IL_0053:
	{
		// MapScr.gI().exitGame();
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_6;
		L_6 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		NullCheck(L_6);
		MapScr_exitGame_m8B7C0E329330F9567FB89AD1587061EAAD0944E1(L_6, NULL);
		// ServerListScr.gI().switchToMe();
		ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE* L_7;
		L_7 = ServerListScr_gI_m79211DBA024D6A83008E3066BBB2BC4EA6C864D3(NULL);
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, L_7);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void MiniMap::doMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_doMenu_m7F8F6D979EAB7BC9D20421F750A2BBCE32FC7317 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C06BC0E9FDD024ABCE1A9F23F83A2BEE67CFBB9);
		s_Il2CppMethodInitialized = true;
	}
	MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* V_0 = NULL;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_1 = NULL;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_2 = NULL;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_3 = NULL;
	Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* V_4 = NULL;
	{
		// if (Canvas.welcome == null || !Welcome.isPaintArrow)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___welcome_61;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		bool L_1 = ((Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_StaticFields*)il2cpp_codegen_static_fields_for(Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var))->___isPaintArrow_38;
		if (L_1)
		{
			goto IL_00a7;
		}
	}

IL_0011:
	{
		// MyVector myVector = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_2 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_2, NULL);
		V_0 = L_2;
		// myVector.addElement(new Command("??ng k?", actionReg));
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_5 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Command__ctor_m6608741414A6EEA975D4ABCA28FA17F9BD7EF05C(L_5, _stringLiteral6C06BC0E9FDD024ABCE1A9F23F83A2BEE67CFBB9, L_4, NULL);
		NullCheck(L_3);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_3, L_5, NULL);
		// Command o = new Command(T.info, 0, this);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_6 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___info_205;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_7 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601(L_7, L_6, 0, __this, NULL);
		V_1 = L_7;
		// Command o2 = new Command(T.changePass, 1, this);
		String_t* L_8 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___changePass_206;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_9 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601(L_9, L_8, 1, __this, NULL);
		V_2 = L_9;
		// myVector.addElement(o);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_10 = V_0;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_11 = V_1;
		NullCheck(L_10);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_10, L_11, NULL);
		// myVector.addElement(o2);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_12 = V_0;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_13 = V_2;
		NullCheck(L_12);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_12, L_13, NULL);
		// Command o3 = new Command(T.otherGame, 3, this);
		String_t* L_14 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___otherGame_220;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_15 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601(L_15, L_14, 3, __this, NULL);
		V_3 = L_15;
		// Command o4 = new Command(T.option, 4, this);
		String_t* L_16 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___option_58;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_17 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601(L_17, L_16, 4, __this, NULL);
		V_4 = L_17;
		// myVector.addElement(o3);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_18 = V_0;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_19 = V_3;
		NullCheck(L_18);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_18, L_19, NULL);
		// myVector.addElement(o4);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_20 = V_0;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_21 = V_4;
		NullCheck(L_20);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_20, L_21, NULL);
		// myVector.addElement(new Command(T.chooseAnotherCity, 5, this));
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_22 = V_0;
		String_t* L_23 = ((T_t31AD343159665D2C3F238EC9A9CCA0278D064887_StaticFields*)il2cpp_codegen_static_fields_for(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var))->___chooseAnotherCity_292;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_24 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)il2cpp_codegen_object_new(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Command__ctor_mF78323DF1826CE08D7F3559B7C4DC1740289C601(L_24, L_23, 5, __this, NULL);
		NullCheck(L_22);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_22, L_24, NULL);
		// if (Canvas.currentMyScreen != PopupShop.gI())
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_25 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		il2cpp_codegen_runtime_class_init_inline(PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865_il2cpp_TypeInfo_var);
		PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865* L_26;
		L_26 = PopupShop_gI_m9C8738F50059A232F06007CC5F0C4D88B2B90652(NULL);
		if ((((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_25) == ((RuntimeObject*)(PopupShop_t86D7C8007FBAFC8A995C2B960F2800B1FA054865*)L_26)))
		{
			goto IL_00a7;
		}
	}
	{
		// MenuCenter.gI().startAt(myVector);
		MenuCenter_tDCAE62F8A604ECDC2C1CB8E7C32D144483CC333F* L_27;
		L_27 = MenuCenter_gI_m0065E10B66F76132267C0E293EECF5B858097158(NULL);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_28 = V_0;
		NullCheck(L_27);
		MenuCenter_startAt_m27AAA0191D489A333816EB9381FCF6E18A41A0B7(L_27, L_28, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void MiniMap::close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_close_m6013E17F1DCDA7400065F4FBCE575E06A84042B2 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isCityMap && Canvas.currentMyScreen != ServerListScr.me)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		bool L_0 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___isCityMap_67;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20;
		ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE* L_2 = ((ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE_StaticFields*)il2cpp_codegen_static_fields_for(ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE_il2cpp_TypeInfo_var))->___me_40;
		if ((((RuntimeObject*)(MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C*)L_1) == ((RuntimeObject*)(ServerListScr_tD6A391B9C2D3C70BE88167B38F020F4CF5EC64AE*)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// MapScr.gI().switchToMe();
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_3;
		L_3 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(19 /* System.Void MyScreen::switchToMe() */, L_3);
		// imgPopup = null;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71), (void*)(FrameImage_t22B8F29B26087709566812A258AB227B26817986*)NULL);
		return;
	}

IL_0024:
	{
		// MapScr.gI().doExitGame();
		il2cpp_codegen_runtime_class_init_inline(MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E_il2cpp_TypeInfo_var);
		MapScr_t4E5B5FFE2514902338EFE2387CE13AD9E229DB2E* L_4;
		L_4 = MapScr_gI_mBA48396ADCDA4CC2DB88FFF504AE023FA1072FD0(NULL);
		NullCheck(L_4);
		MapScr_doExitGame_mB9F291C5CBB6BD0A0540675924D124CFAD04FE15(L_4, NULL);
		// }
		return;
	}
}
// System.Void MiniMap::setInfo(FrameImage,System.SByte[],MyVector,System.SByte,System.Int32,Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_setInfo_m4917F3BD6797219B293422C3C4334C6AC05F65AB (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, FrameImage_t22B8F29B26087709566812A258AB227B26817986* ___0_img, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___1_map, MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* ___2_pos, int8_t ___3_wMn, int32_t ___4_wsmall, Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* ___5_cmdCenter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral511550B56F48B3A16D50B08A6B7D85B84B5A175E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// AvatarData.getImgIcon(839);
		il2cpp_codegen_runtime_class_init_inline(AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF_il2cpp_TypeInfo_var);
		ImageIcon_t1D316E47B60148033D7EFDA4677CDC9CAAC46A8C* L_0;
		L_0 = AvatarData_getImgIcon_mCBFEC969C3B16B5855DBD7D0923893C0998FF3D8((int16_t)((int32_t)839), NULL);
		// GameMidlet.avatar.ableShow = false;
		il2cpp_codegen_runtime_class_init_inline(GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var);
		Avatar_t5280686025A629043829B8D5A31541F05B328D76* L_1 = ((GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_StaticFields*)il2cpp_codegen_static_fields_for(GameMidlet_tFD9198A8DAC9B07B11E740D3AA194381385FC93F_il2cpp_TypeInfo_var))->___avatar_25;
		NullCheck(L_1);
		((Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB*)L_1)->___ableShow_42 = (bool)0;
		// wSmall = (sbyte)wsmall;
		int32_t L_2 = ___4_wsmall;
		__this->___wSmall_47 = ((int8_t)L_2);
		// this.map = map;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = ___1_map;
		__this->___map_43 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___map_43), (void*)L_3);
		// listPos = pos;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_4 = ___2_pos;
		__this->___listPos_44 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listPos_44), (void*)L_4);
		// wMini = wMn;
		int8_t L_5 = ___3_wMn;
		__this->___wMini_45 = L_5;
		// this.cmdCenter = cmdCenter;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_6 = ___5_cmdCenter;
		__this->___cmdCenter_74 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cmdCenter_74), (void*)L_6);
		// if (Canvas.stypeInt == 0)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___stypeInt_70;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// center = cmdCenter;
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_8 = ___5_cmdCenter;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___center_15), (void*)L_8);
	}

IL_004c:
	{
		// hMini = (sbyte)(map.Length / wMini);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___1_map;
		NullCheck(L_9);
		int8_t L_10 = __this->___wMini_45;
		__this->___hMini_46 = ((int8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_9)->max_length))/(int32_t)L_10)));
		// right = null;
		((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___right_16 = (Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C*)__this)->___right_16), (void*)(Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1*)NULL);
		// init();
		MiniMap_init_m8427B8970BBCBA9470045BD9E234302303AA7AFD(__this, NULL);
		// cmdUpdateKey = null;
		__this->___cmdUpdateKey_64 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cmdUpdateKey_64), (void*)(RuntimeObject*)NULL);
		// listClound.removeAllElements();
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_11 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		NullCheck(L_11);
		MyVector_removeAllElements_mF2D6466281DBBB597BBEDED74C9214256D0CE7D1(L_11, NULL);
		// for (int i = 0; i < 7; i++)
		V_0 = 0;
		goto IL_00c8;
	}

IL_007f:
	{
		// listClound.addElement(new AvPosition(i * (wMini * wSmall) / 10 + 50, CRes.rnd(10) * (hMini * wSmall / 10) + 20, CRes.rnd(2)));
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_12 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		int32_t L_13 = V_0;
		int8_t L_14 = __this->___wMini_45;
		int8_t L_15 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262(((int32_t)10), NULL);
		int8_t L_17 = __this->___hMini_46;
		int8_t L_18 = __this->___wSmall_47;
		int32_t L_19;
		L_19 = CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262(2, NULL);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_20 = (AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)il2cpp_codegen_object_new(AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		AvPosition__ctor_mC7F6313CCA32B2D03D46116A3BDD1BD6D02182EC(L_20, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15))))/((int32_t)10))), ((int32_t)50))), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18))/((int32_t)10))))), ((int32_t)20))), L_19, NULL);
		NullCheck(L_12);
		MyVector_addElement_mEAC138D2FA33E278970E8870AF36E6F9B335916E(L_12, L_20, NULL);
		// for (int i = 0; i < 7; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c8:
	{
		// for (int i = 0; i < 7; i++)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)7)))
		{
			goto IL_007f;
		}
	}
	{
		// cmtoY = (cmy = (cmx = (cmtoX = (selected = 0))));
		int32_t L_23 = 0;
		V_1 = L_23;
		__this->___selected_52 = L_23;
		int32_t L_24 = V_1;
		float L_25 = ((float)L_24);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_25;
		float L_26 = L_25;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_26;
		float L_27 = L_26;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_27;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_27;
		// tran();
		MiniMap_tran_m9EAD1AF8FC39432372A618D263AB68D43298A22A(__this, NULL);
		// if (isCityMap)
		bool L_28 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___isCityMap_67;
		if (!L_28)
		{
			goto IL_0129;
		}
	}
	{
		// imgPopup = new FrameImage(Image.createImagePNG(T.getPath() + "/effect/k"), 40 * AvMain.hd, 40 * AvMain.hd);
		il2cpp_codegen_runtime_class_init_inline(T_t31AD343159665D2C3F238EC9A9CCA0278D064887_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = T_getPath_mC829974FD5F80FDB0CE81E4A34F73C1DC4AF0386(NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_29, _stringLiteral511550B56F48B3A16D50B08A6B7D85B84B5A175E, NULL);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_31;
		L_31 = Image_createImagePNG_mA614B63F71A706E974D339F73C64EC72307E52C8(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_32 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_33 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_34 = (FrameImage_t22B8F29B26087709566812A258AB227B26817986*)il2cpp_codegen_object_new(FrameImage_t22B8F29B26087709566812A258AB227B26817986_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		FrameImage__ctor_m6F0B6F46CC429C9F4DE105B9054AF6EA70B64079(L_34, L_31, ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_32)), ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_33)), NULL);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71), (void*)L_34);
	}

IL_0129:
	{
		// imgMap = img;
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_35 = ___0_img;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgMap_41 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgMap_41), (void*)L_35);
		// }
		return;
	}
}
// System.Void MiniMap::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_init_m8427B8970BBCBA9470045BD9E234302303AA7AFD (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* G_B3_2 = NULL;
	{
		// x = (Canvas.w - wMini * wSmall) / 2;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int8_t L_1 = __this->___wMini_45;
		int8_t L_2 = __this->___wSmall_47;
		__this->___x_48 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))))/2));
		// y = (Canvas.hCan - ((AvMain.hFillTab == 0) ? Canvas.hTab : AvMain.hFillTab) - hMini * wSmall) / 2;
		int32_t L_3 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hFillTab_3;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (!L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_5 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hFillTab_3;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hTab_55;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		int8_t L_7 = __this->___hMini_46;
		int8_t L_8 = __this->___wSmall_47;
		NullCheck(G_B3_2);
		G_B3_2->___y_49 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(G_B3_1, G_B3_0)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8))))/2));
		// if (x < 0)
		int32_t L_9 = __this->___x_48;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// x = 0;
		__this->___x_48 = 0;
	}

IL_005a:
	{
		// if (y < 0)
		int32_t L_10 = __this->___y_49;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// y = 0;
		__this->___y_49 = 0;
	}

IL_006a:
	{
		// float num = wSmall;
		int8_t L_11 = __this->___wSmall_47;
		// cmxLim = wMini * wSmall - Canvas.w;
		int8_t L_12 = __this->___wMini_45;
		int8_t L_13 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57 = ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13)), L_14)));
		// cmyLim = hMini * wSmall - Canvas.hCan;
		int8_t L_15 = __this->___hMini_46;
		int8_t L_16 = __this->___wSmall_47;
		int32_t L_17 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62 = ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_16)), L_17)));
		// if (cmxLim < 0f)
		float L_18 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// cmxLim = (cmx = 0f);
		float L_19 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_19;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57 = L_19;
	}

IL_00bf:
	{
		// if (cmyLim < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_20 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		// cmyLim = (cmy = 0f);
		float L_21 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_21;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62 = L_21;
	}

IL_00db:
	{
		// }
		return;
	}
}
// System.Void MiniMap::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_update_m34F1B0940A4E6B0CA8AC5A38BCBFFD34626E70B3 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* V_1 = NULL;
	int32_t V_2 = 0;
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* V_3 = NULL;
	int32_t G_B48_0 = 0;
	int32_t G_B48_1 = 0;
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* G_B48_2 = NULL;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* G_B47_2 = NULL;
	int32_t G_B49_0 = 0;
	int32_t G_B49_1 = 0;
	int32_t G_B49_2 = 0;
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* G_B49_3 = NULL;
	{
		// for (int i = 0; i < listPos.size(); i++)
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		// PositionMap positionMap = (PositionMap)listPos.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___listPos_44;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		V_1 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_2, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		// if (i != selected)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___selected_52;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_003e;
		}
	}
	{
		// positionMap.count++;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_5 = V_1;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___count_7;
		NullCheck(L_6);
		L_6->___count_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if (positionMap.count >= 18)
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___count_7;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)18))))
		{
			goto IL_003e;
		}
	}
	{
		// positionMap.count = 0;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_10 = V_1;
		NullCheck(L_10);
		L_10->___count_7 = 0;
	}

IL_003e:
	{
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_12 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_13 = __this->___listPos_44;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		// if (vY != 0)
		int32_t L_15 = __this->___vY_76;
		if (!L_15)
		{
			goto IL_00f7;
		}
	}
	{
		// if (cmy < 0f || cmy > cmyLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_16 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		if ((((float)L_16) < ((float)(0.0f))))
		{
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_17 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		float L_18 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00b0;
		}
	}

IL_0073:
	{
		// vY -= vY / 4;
		int32_t L_19 = __this->___vY_76;
		int32_t L_20 = __this->___vY_76;
		__this->___vY_76 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)(L_20/4))));
		// cmy += vY / 20;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_21 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		int32_t L_22 = __this->___vY_76;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = ((float)il2cpp_codegen_add(L_21, ((float)((int32_t)(L_22/((int32_t)20))))));
		// if (vY / 10 <= 1)
		int32_t L_23 = __this->___vY_76;
		if ((((int32_t)((int32_t)(L_23/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		// vY = 0;
		__this->___vY_76 = 0;
	}

IL_00b0:
	{
		// cmy += vY / 20;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_24 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		int32_t L_25 = __this->___vY_76;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = ((float)il2cpp_codegen_add(L_24, ((float)((int32_t)(L_25/((int32_t)20))))));
		// cmtoY = cmy;
		float L_26 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_26;
		// vY -= vY / 20;
		int32_t L_27 = __this->___vY_76;
		int32_t L_28 = __this->___vY_76;
		__this->___vY_76 = ((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)(L_28/((int32_t)20)))));
		// if (vY / 10 == 0)
		int32_t L_29 = __this->___vY_76;
		if (((int32_t)(L_29/((int32_t)10))))
		{
			goto IL_00f7;
		}
	}
	{
		// vY = 0;
		__this->___vY_76 = 0;
	}

IL_00f7:
	{
		// if (cmy < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_30 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_0116;
		}
	}
	{
		// cmtoY = 0f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = (0.0f);
		// vY = 0;
		__this->___vY_76 = 0;
		goto IL_0133;
	}

IL_0116:
	{
		// else if (cmy > cmyLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_31 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		float L_32 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_31) > ((float)L_32))))
		{
			goto IL_0133;
		}
	}
	{
		// cmtoY = cmyLim;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_33 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_33;
		// vY = 0;
		__this->___vY_76 = 0;
	}

IL_0133:
	{
		// if (vX != 0)
		int32_t L_34 = __this->___vX_77;
		if (!L_34)
		{
			goto IL_01da;
		}
	}
	{
		// if (cmx < 0f || cmx > cmxLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_35 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		if ((((float)L_35) < ((float)(0.0f))))
		{
			goto IL_0156;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_36 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_37 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0193;
		}
	}

IL_0156:
	{
		// vX -= vX / 4;
		int32_t L_38 = __this->___vX_77;
		int32_t L_39 = __this->___vX_77;
		__this->___vX_77 = ((int32_t)il2cpp_codegen_subtract(L_38, ((int32_t)(L_39/4))));
		// cmx += vX / 20;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_40 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		int32_t L_41 = __this->___vX_77;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = ((float)il2cpp_codegen_add(L_40, ((float)((int32_t)(L_41/((int32_t)20))))));
		// if (vX / 10 <= 1)
		int32_t L_42 = __this->___vX_77;
		if ((((int32_t)((int32_t)(L_42/((int32_t)10)))) > ((int32_t)1)))
		{
			goto IL_0193;
		}
	}
	{
		// vX = 0;
		__this->___vX_77 = 0;
	}

IL_0193:
	{
		// cmx += vX / 20;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_43 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		int32_t L_44 = __this->___vX_77;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = ((float)il2cpp_codegen_add(L_43, ((float)((int32_t)(L_44/((int32_t)20))))));
		// vX -= vX / 20;
		int32_t L_45 = __this->___vX_77;
		int32_t L_46 = __this->___vX_77;
		__this->___vX_77 = ((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)(L_46/((int32_t)20)))));
		// cmtoX = cmx;
		float L_47 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_47;
		// if (vX / 10 == 0)
		int32_t L_48 = __this->___vX_77;
		if (((int32_t)(L_48/((int32_t)10))))
		{
			goto IL_01da;
		}
	}
	{
		// vX = 0;
		__this->___vX_77 = 0;
	}

IL_01da:
	{
		// if (cmx < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_49 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		if ((!(((float)L_49) < ((float)(0.0f)))))
		{
			goto IL_01f9;
		}
	}
	{
		// cmtoX = 0f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = (0.0f);
		// vX = 0;
		__this->___vX_77 = 0;
		goto IL_0216;
	}

IL_01f9:
	{
		// else if (cmx > cmxLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_50 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_51 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_0216;
		}
	}
	{
		// cmtoX = cmxLim;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_52 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_52;
		// vX = 0;
		__this->___vX_77 = 0;
	}

IL_0216:
	{
		// if (!Canvas.isZoom)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_53 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isZoom_78;
		if (L_53)
		{
			goto IL_02c6;
		}
	}
	{
		// if (cmy != cmtoY)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_54 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		float L_55 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		if ((((float)L_54) == ((float)L_55)))
		{
			goto IL_0273;
		}
	}
	{
		// cmvy = (int)(cmtoY - cmy) << 2;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_56 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		float L_57 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmvy_61 = ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_56, L_57)))<<2)));
		// cmdy += cmvy;
		float L_58 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdy_60;
		float L_59 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmvy_61;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdy_60 = ((float)il2cpp_codegen_add(L_58, L_59));
		// cmy += (int)cmdy >> 4;
		float L_60 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		float L_61 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdy_60;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = ((float)il2cpp_codegen_add(L_60, ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_61)>>4)))));
		// cmdy = (int)cmdy & 0xF;
		float L_62 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdy_60;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdy_60 = ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_62)&((int32_t)15))));
	}

IL_0273:
	{
		// if (cmx != cmtoX)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_63 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_64 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		if ((((float)L_63) == ((float)L_64)))
		{
			goto IL_02c6;
		}
	}
	{
		// cmvx = (int)(cmtoX - cmx) << 2;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_65 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		float L_66 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmvx_56 = ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_65, L_66)))<<2)));
		// cmdx += cmvx;
		float L_67 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdx_55;
		float L_68 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmvx_56;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdx_55 = ((float)il2cpp_codegen_add(L_67, L_68));
		// cmx += (int)cmdx >> 4;
		float L_69 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_70 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdx_55;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = ((float)il2cpp_codegen_add(L_69, ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_70)>>4)))));
		// cmdx = (int)cmdx & 0xF;
		float L_71 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdx_55;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmdx_55 = ((float)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_71)&((int32_t)15))));
	}

IL_02c6:
	{
		// if (cmtoY < 0f || cmy < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_72 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		if ((((float)L_72) < ((float)(0.0f))))
		{
			goto IL_02de;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_73 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		if ((!(((float)L_73) < ((float)(0.0f)))))
		{
			goto IL_02ee;
		}
	}

IL_02de:
	{
		// cmtoY = (cmy = 0f);
		float L_74 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_74;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_74;
	}

IL_02ee:
	{
		// if (cmtoY > cmyLim || cmy > cmyLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_75 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		float L_76 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((((float)L_75) > ((float)L_76)))
		{
			goto IL_0306;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_77 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		float L_78 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_77) > ((float)L_78))))
		{
			goto IL_0316;
		}
	}

IL_0306:
	{
		// cmtoY = (cmy = cmyLim);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_79 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		float L_80 = L_79;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_80;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_80;
	}

IL_0316:
	{
		// if (cmtoX < 0f || cmx < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_81 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		if ((((float)L_81) < ((float)(0.0f))))
		{
			goto IL_032e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_82 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		if ((!(((float)L_82) < ((float)(0.0f)))))
		{
			goto IL_033e;
		}
	}

IL_032e:
	{
		// cmtoX = (cmx = 0f);
		float L_83 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_83;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_83;
	}

IL_033e:
	{
		// if (cmtoX > cmxLim || cmx > cmxLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_84 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		float L_85 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((((float)L_84) > ((float)L_85)))
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_86 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_87 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_86) > ((float)L_87))))
		{
			goto IL_0366;
		}
	}

IL_0356:
	{
		// cmtoX = (cmx = cmxLim);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_88 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		float L_89 = L_88;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_89;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_89;
	}

IL_0366:
	{
		// for (int j = 0; j < listClound.size(); j++)
		V_2 = 0;
		goto IL_0407;
	}

IL_036d:
	{
		// AvPosition avPosition = (AvPosition)listClound.elementAt(j);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_90 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		int32_t L_91 = V_2;
		NullCheck(L_90);
		RuntimeObject* L_92;
		L_92 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_90, L_91, NULL);
		V_3 = ((AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)CastclassClass((RuntimeObject*)L_92, AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var));
		// avPosition.x -= avPosition.anchor + ((Canvas.gameTick % 5 == 1) ? 1 : 0);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_93 = V_3;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_94 = L_93;
		NullCheck(L_94);
		int32_t L_95 = L_94->___x_0;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_96 = V_3;
		NullCheck(L_96);
		int32_t L_97 = L_96->___anchor_2;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_98 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___gameTick_12;
		G_B47_0 = L_97;
		G_B47_1 = L_95;
		G_B47_2 = L_94;
		if ((((int32_t)((int32_t)(L_98%5))) == ((int32_t)1)))
		{
			G_B48_0 = L_97;
			G_B48_1 = L_95;
			G_B48_2 = L_94;
			goto IL_0398;
		}
	}
	{
		G_B49_0 = 0;
		G_B49_1 = G_B47_0;
		G_B49_2 = G_B47_1;
		G_B49_3 = G_B47_2;
		goto IL_0399;
	}

IL_0398:
	{
		G_B49_0 = 1;
		G_B49_1 = G_B48_0;
		G_B49_2 = G_B48_1;
		G_B49_3 = G_B48_2;
	}

IL_0399:
	{
		NullCheck(G_B49_3);
		G_B49_3->___x_0 = ((int32_t)il2cpp_codegen_subtract(G_B49_2, ((int32_t)il2cpp_codegen_add(G_B49_1, G_B49_0))));
		// if (avPosition.x < -x - 50)
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_99 = V_3;
		NullCheck(L_99);
		int32_t L_100 = L_99->___x_0;
		int32_t L_101 = __this->___x_48;
		if ((((int32_t)L_100) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((-L_101)), ((int32_t)50))))))
		{
			goto IL_0403;
		}
	}
	{
		// avPosition.x = x + CRes.rnd(4) * 50 + wMini * wSmall;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_102 = V_3;
		int32_t L_103 = __this->___x_48;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_104;
		L_104 = CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262(4, NULL);
		int8_t L_105 = __this->___wMini_45;
		int8_t L_106 = __this->___wSmall_47;
		NullCheck(L_102);
		L_102->___x_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_103, ((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)50))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_105, (int32_t)L_106))));
		// avPosition.y = CRes.rnd(10) * (hMini * wSmall / 10) + 10;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_107 = V_3;
		int32_t L_108;
		L_108 = CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262(((int32_t)10), NULL);
		int8_t L_109 = __this->___hMini_46;
		int8_t L_110 = __this->___wSmall_47;
		NullCheck(L_107);
		L_107->___y_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_108, ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, (int32_t)L_110))/((int32_t)10))))), ((int32_t)10)));
		// avPosition.anchor = CRes.rnd(2);
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_111 = V_3;
		int32_t L_112;
		L_112 = CRes_rnd_m75508435AF0A3D736F1F03D19ECD12E179F02262(2, NULL);
		NullCheck(L_111);
		L_111->___anchor_2 = L_112;
	}

IL_0403:
	{
		// for (int j = 0; j < listClound.size(); j++)
		int32_t L_113 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0407:
	{
		// for (int j = 0; j < listClound.size(); j++)
		int32_t L_114 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_115 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_115, NULL);
		if ((((int32_t)L_114) < ((int32_t)L_116)))
		{
			goto IL_036d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MiniMap::updateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_updateKey_mE50D69243050C9C2B327AC7C78D1182A6939D744 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* V_7 = NULL;
	{
		// count++;
		int64_t L_0 = __this->___count_84;
		__this->___count_84 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		// base.updateKey();
		AvMain_updateKey_m90C1E1FA00417229EAB96356C695CD2F31485EDD(__this, NULL);
		// if (Canvas.isPointer(0, 0, Canvas.w, Canvas.h))
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		int32_t L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___h_14;
		bool L_3;
		L_3 = Canvas_isPointer_m9F705FFE0515CFFE86E2E3E8B3AD1B059CBCB5B1(0, 0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0326;
		}
	}
	{
		// int num = Canvas.dx();
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Canvas_dx_m926C622D8F3765344C8011B819A72540F32FF17E(NULL);
		V_0 = L_4;
		// int num2 = Canvas.dy();
		int32_t L_5;
		L_5 = Canvas_dy_m8AB18249E30A3B74A55646B7274EBC25FBC9E605(NULL);
		V_1 = L_5;
		// if (Canvas.isPointerClick)
		bool L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7;
		if (!L_6)
		{
			goto IL_0102;
		}
	}
	{
		// ableTrans = true;
		__this->___ableTrans_80 = (bool)1;
		// Canvas.isPointerClick = false;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerClick_7 = (bool)0;
		// for (int i = 0; i < listPos.size(); i++)
		V_2 = 0;
		goto IL_00f1;
	}

IL_0055:
	{
		// PositionMap positionMap = (PositionMap)listPos.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_7 = __this->___listPos_44;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_7, L_8, NULL);
		V_3 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_9, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		// if (Canvas.isPointer((int)((float)(x + positionMap.x * wSmall + wSmall / 2) - cmx - (float)(48 * AvMain.hd / 2)), (int)((float)(y + positionMap.y * wSmall + wSmall / 2) - cmy - (float)(56 * AvMain.hd)), 48 * AvMain.hd, 56 * AvMain.hd))
		int32_t L_10 = __this->___x_48;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = L_11->___x_0;
		int8_t L_13 = __this->___wSmall_47;
		int8_t L_14 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_15 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_16 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_17 = __this->___y_49;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___y_1;
		int8_t L_20 = __this->___wSmall_47;
		int8_t L_21 = __this->___wSmall_47;
		float L_22 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		int32_t L_23 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_24 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_25 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Canvas_isPointer_m9F705FFE0515CFFE86E2E3E8B3AD1B059CBCB5B1(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_12, (int32_t)L_13)))), ((int32_t)((int32_t)L_14/2))))), L_15)), ((float)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)48), L_16))/2)))))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_multiply(L_19, (int32_t)L_20)))), ((int32_t)((int32_t)L_21/2))))), L_22)), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)56), L_23)))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)48), L_24)), ((int32_t)il2cpp_codegen_multiply(((int32_t)56), L_25)), NULL);
		if (!L_26)
		{
			goto IL_00ed;
		}
	}
	{
		// selected = i;
		int32_t L_27 = V_2;
		__this->___selected_52 = L_27;
		// isHide = false;
		__this->___isHide_66 = (bool)0;
		// return;
		return;
	}

IL_00ed:
	{
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00f1:
	{
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_29 = V_2;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_30 = __this->___listPos_44;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0055;
		}
	}

IL_0102:
	{
		// if (ableTrans && Canvas.isPointerDown)
		bool L_32 = __this->___ableTrans_80;
		if (!L_32)
		{
			goto IL_01c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_33 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerDown_5;
		if (!L_33)
		{
			goto IL_01c6;
		}
	}
	{
		// if (CRes.abs(num) >= 20 && CRes.abs(num2) >= 20)
		int32_t L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_34, NULL);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)20))))
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_36, NULL);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0132;
		}
	}
	{
		// isHide = true;
		__this->___isHide_66 = (bool)1;
	}

IL_0132:
	{
		// if (Canvas.gameTick % 3 == 0)
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_38 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___gameTick_12;
		if (((int32_t)(L_38%3)))
		{
			goto IL_015d;
		}
	}
	{
		// dyTran = Canvas.py;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_39 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		__this->___dyTran_81 = L_39;
		// dxTran = Canvas.px;
		int32_t L_40 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		__this->___dxTran_82 = L_40;
		// timePointY = count;
		int64_t L_41 = __this->___count_84;
		__this->___timePointY_83 = L_41;
	}

IL_015d:
	{
		// vY = 0;
		__this->___vY_76 = 0;
		// vX = 0;
		__this->___vX_77 = 0;
		// if (!trans)
		bool L_42 = __this->___trans_65;
		if (L_42)
		{
			goto IL_0190;
		}
	}
	{
		// trans = true;
		__this->___trans_65 = (bool)1;
		// pa = cmx;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_43 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		__this->___pa_78 = L_43;
		// pb = cmy;
		float L_44 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		__this->___pb_79 = L_44;
	}

IL_0190:
	{
		// cmtoY = pb + (float)num2;
		float L_45 = __this->___pb_79;
		int32_t L_46 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = ((float)il2cpp_codegen_add(L_45, ((float)L_46)));
		// cmtoX = pa + (float)num;
		float L_47 = __this->___pa_78;
		int32_t L_48 = V_0;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = ((float)il2cpp_codegen_add(L_47, ((float)L_48)));
		// setLimit();
		MiniMap_setLimit_mABE6BF319016B986E7677B5FAB24397CD3B709CD(__this, NULL);
		// cmy = cmtoY;
		float L_49 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_49;
		// cmx = cmtoX;
		float L_50 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_50;
	}

IL_01c6:
	{
		// if (ableTrans && Canvas.isPointerRelease)
		bool L_51 = __this->___ableTrans_80;
		if (!L_51)
		{
			goto IL_0326;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_52 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isPointerRelease_6;
		if (!L_52)
		{
			goto IL_0326;
		}
	}
	{
		// int num3 = (int)(count - timePointY);
		int64_t L_53 = __this->___count_84;
		int64_t L_54 = __this->___timePointY_83;
		V_4 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_53, L_54)));
		// int num4 = dyTran - Canvas.py;
		int32_t L_55 = __this->___dyTran_81;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_56 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___py_9;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_55, L_56));
		// if (num3 < 10)
		int32_t L_57 = V_4;
		if ((((int32_t)L_57) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0259;
		}
	}
	{
		// if (cmtoY >= 0f && cmtoY < cmyLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_58 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		if ((!(((float)L_58) >= ((float)(0.0f)))))
		{
			goto IL_0225;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_59 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		float L_60 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_59) < ((float)L_60))))
		{
			goto IL_0225;
		}
	}
	{
		// vY = num4 / num3 * 10;
		int32_t L_61 = V_5;
		int32_t L_62 = V_4;
		__this->___vY_76 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_61/L_62)), ((int32_t)10)));
	}

IL_0225:
	{
		// int num5 = dxTran - Canvas.px;
		int32_t L_63 = __this->___dxTran_82;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_64 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___px_8;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_63, L_64));
		// if (cmtoX >= 0f && cmtoX < cmxLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_65 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		if ((!(((float)L_65) >= ((float)(0.0f)))))
		{
			goto IL_0259;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_66 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		float L_67 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_66) < ((float)L_67))))
		{
			goto IL_0259;
		}
	}
	{
		// vX = num5 / num3 * 10;
		int32_t L_68 = V_6;
		int32_t L_69 = V_4;
		__this->___vX_77 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_68/L_69)), ((int32_t)10)));
	}

IL_0259:
	{
		// timePointY = -1L;
		__this->___timePointY_83 = ((int64_t)(-1));
		// trans = false;
		__this->___trans_65 = (bool)0;
		// ableTrans = false;
		__this->___ableTrans_80 = (bool)0;
		// if (CRes.abs(num) < 20 && CRes.abs(num2) < 20)
		int32_t L_70 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_71;
		L_71 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_70, NULL);
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0326;
		}
	}
	{
		int32_t L_72 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CRes_t8079C23635E387D6858C9EC0007F001132A5764D_il2cpp_TypeInfo_var);
		int32_t L_73;
		L_73 = CRes_abs_mFB4EECBD490D0BAD920BFC438E72C08F076F766E(L_72, NULL);
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0326;
		}
	}
	{
		// PositionMap positionMap2 = (PositionMap)listPos.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_74 = __this->___listPos_44;
		int32_t L_75 = __this->___selected_52;
		NullCheck(L_74);
		RuntimeObject* L_76;
		L_76 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_74, L_75, NULL);
		V_7 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_76, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		// if (Canvas.isPointer((int)((float)(x + positionMap2.x * wSmall + wSmall / 2) - cmx - (float)(48 * AvMain.hd / 2)), (int)((float)(y + positionMap2.y * wSmall + wSmall / 2) - cmy - (float)(56 * AvMain.hd)), 48 * AvMain.hd, 56 * AvMain.hd))
		int32_t L_77 = __this->___x_48;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_78 = V_7;
		NullCheck(L_78);
		int32_t L_79 = L_78->___x_0;
		int8_t L_80 = __this->___wSmall_47;
		int8_t L_81 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_82 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_83 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_84 = __this->___y_49;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_85 = V_7;
		NullCheck(L_85);
		int32_t L_86 = L_85->___y_1;
		int8_t L_87 = __this->___wSmall_47;
		int8_t L_88 = __this->___wSmall_47;
		float L_89 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		int32_t L_90 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_91 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		int32_t L_92 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Canvas_isPointer_m9F705FFE0515CFFE86E2E3E8B3AD1B059CBCB5B1(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_77, ((int32_t)il2cpp_codegen_multiply(L_79, (int32_t)L_80)))), ((int32_t)((int32_t)L_81/2))))), L_82)), ((float)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)48), L_83))/2)))))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_86, (int32_t)L_87)))), ((int32_t)((int32_t)L_88/2))))), L_89)), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)56), L_90)))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)48), L_91)), ((int32_t)il2cpp_codegen_multiply(((int32_t)56), L_92)), NULL);
		if (!L_93)
		{
			goto IL_0326;
		}
	}
	{
		// cmdCenter.perform();
		Command_tC5575D51036CBC79804FB725177C7C6CC3F8C8A1* L_94 = __this->___cmdCenter_74;
		NullCheck(L_94);
		Command_perform_m4A38137E5DD3DC0BA5B8BF4C2BC80A6E71721179(L_94, NULL);
		// return;
		return;
	}

IL_0326:
	{
		// if (cmdUpdateKey != null)
		RuntimeObject* L_95 = __this->___cmdUpdateKey_64;
		if (!L_95)
		{
			goto IL_0339;
		}
	}
	{
		// cmdUpdateKey.perform();
		RuntimeObject* L_96 = __this->___cmdUpdateKey_64;
		NullCheck(L_96);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IAction::perform() */, IAction_t999F3F7DACB52B8F3DF50953B2A75A086EECBD74_il2cpp_TypeInfo_var, L_96);
	}

IL_0339:
	{
		// }
		return;
	}
}
// System.Void MiniMap::tran()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_tran_m9EAD1AF8FC39432372A618D263AB68D43298A22A (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PositionMap positionMap = (PositionMap)listPos.elementAt(selected);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___listPos_44;
		int32_t L_1 = __this->___selected_52;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		// cmtoX = positionMap.x * wSmall - Canvas.w / 2;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_3 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_2, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		NullCheck(L_3);
		int32_t L_4 = L_3->___x_0;
		int8_t L_5 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_4, (int32_t)L_5)), ((int32_t)(L_6/2)))));
		// cmtoY = positionMap.y * wSmall - Canvas.hCan / 2;
		NullCheck(L_3);
		int32_t L_7 = L_3->___y_1;
		int8_t L_8 = __this->___wSmall_47;
		int32_t L_9 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_7, (int32_t)L_8)), ((int32_t)(L_9/2)))));
		// setLimit();
		MiniMap_setLimit_mABE6BF319016B986E7677B5FAB24397CD3B709CD(__this, NULL);
		// if (Canvas.isZoom)
		bool L_10 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___isZoom_78;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// cmx = cmtoX;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_11 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54 = L_11;
		// cmy = cmtoY;
		float L_12 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59 = L_12;
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void MiniMap::setLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_setLimit_mABE6BF319016B986E7677B5FAB24397CD3B709CD (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cmtoY < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_0 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		// cmtoY = 0f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = (0.0f);
	}

IL_0016:
	{
		// if (cmtoY > cmyLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_1 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58;
		float L_2 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// cmtoY = cmyLim;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_3 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmyLim_62;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoY_58 = L_3;
	}

IL_002c:
	{
		// if (cmtoX < 0f)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_4 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// cmtoX = 0f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = (0.0f);
	}

IL_0042:
	{
		// if (cmtoX > cmxLim)
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_5 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53;
		float L_6 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0058;
		}
	}
	{
		// cmtoX = cmxLim;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_7 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmxLim_57;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmtoX_53 = L_7;
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void MiniMap::paint(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paint_m1A850C1E1243A7C9A9822502E7F2753F61E29F40 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// paintMain(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		VirtualActionInvoker1< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* >::Invoke(21 /* System.Void MyScreen::paintMain(MyGraphics) */, __this, L_0);
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_1, NULL);
		// if (Canvas.welcome == null || !Welcome.isPaintArrow)
		Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD* L_2 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___welcome_61;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var);
		bool L_3 = ((Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_StaticFields*)il2cpp_codegen_static_fields_for(Welcome_tD07F4F4D25069C64102DC8FE1D97B9996902E1CD_il2cpp_TypeInfo_var))->___isPaintArrow_38;
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_001b:
	{
		// base.paint(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		MyScreen_paint_m526352F2F397B86061C0A33C5B0247E695AE2E1B(__this, L_4, NULL);
	}

IL_0022:
	{
		// Canvas.paintPlus(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_5 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_paintPlus_mD21BE7439276441A4C16C85B9F1570E79C066EBA(L_5, NULL);
		// }
		return;
	}
}
// System.Void MiniMap::paintMain(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paintMain_m82B6935B3CA40F5223AB18FB1ADA30AB77C2D81C (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* V_2 = NULL;
	{
		// Canvas.resetTrans(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_0 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_resetTrans_m4C80427FD50DD18EC69DE826AE0A6AB93BABC356(L_0, NULL);
		// g.translate(x, y);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_1 = ___0_g;
		int32_t L_2 = __this->___x_48;
		int32_t L_3 = __this->___y_49;
		NullCheck(L_1);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_1, ((float)L_2), ((float)L_3), NULL);
		// g.translate(0f - cmx, 0f - cmy);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_4 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_5 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		float L_6 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		NullCheck(L_4);
		MyGraphics_translate_m49597D8A72ACF38BC0FD180440C0DE33BAF102C0(L_4, ((float)il2cpp_codegen_subtract((0.0f), L_5)), ((float)il2cpp_codegen_subtract((0.0f), L_6)), NULL);
		// if (imgCreateMap != null)
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_7 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgCreateMap_75;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// g.drawImage(imgCreateMap, 0f, 0f, 0);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_8 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_9 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgCreateMap_75;
		NullCheck(L_8);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_8, L_9, (0.0f), (0.0f), 0, NULL);
		goto IL_009a;
	}

IL_0055:
	{
		// for (int i = 0; i < map.Length; i++)
		V_0 = 0;
		goto IL_008f;
	}

IL_0059:
	{
		// imgMap.drawFrameXY(map[i], i % wMini * wSmall, i / wMini * wSmall, 0, g);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_10 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgMap_41;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = __this->___map_43;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_0;
		int8_t L_16 = __this->___wMini_45;
		int8_t L_17 = __this->___wSmall_47;
		int32_t L_18 = V_0;
		int8_t L_19 = __this->___wMini_45;
		int8_t L_20 = __this->___wSmall_47;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_21 = ___0_g;
		NullCheck(L_10);
		FrameImage_drawFrameXY_mAA964A47ECB7CDAE8E567FA4F79C82EEA7521E25(L_10, L_14, ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_15%(int32_t)L_16)), (int32_t)L_17)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_18/(int32_t)L_19)), (int32_t)L_20)), 0, L_21, NULL);
		// for (int i = 0; i < map.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < map.Length; i++)
		int32_t L_23 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = __this->___map_43;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0059;
		}
	}

IL_009a:
	{
		// for (int j = 0; j < listPos.size(); j++)
		V_1 = 0;
		goto IL_01bb;
	}

IL_00a1:
	{
		// PositionMap positionMap = (PositionMap)listPos.elementAt(j);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_25 = __this->___listPos_44;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_25, L_26, NULL);
		V_2 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_27, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		// if (j == selected && !isHide)
		int32_t L_28 = V_1;
		int32_t L_29 = __this->___selected_52;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_017c;
		}
	}
	{
		bool L_30 = __this->___isHide_66;
		if (L_30)
		{
			goto IL_017c;
		}
	}
	{
		// g.drawImage(imgBackIcon, positionMap.x * wSmall + wSmall / 2, positionMap.y * wSmall, 33);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_31 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_32 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgBackIcon_51;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = L_33->___x_0;
		int8_t L_35 = __this->___wSmall_47;
		int8_t L_36 = __this->___wSmall_47;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = L_37->___y_1;
		int8_t L_39 = __this->___wSmall_47;
		NullCheck(L_31);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_31, L_32, ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, (int32_t)L_35)), ((int32_t)((int32_t)L_36/2))))), ((float)((int32_t)il2cpp_codegen_multiply(L_38, (int32_t)L_39))), ((int32_t)33), NULL);
		// if (isCityMap)
		bool L_40 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___isCityMap_67;
		if (!L_40)
		{
			goto IL_0140;
		}
	}
	{
		// imgPopup.drawFrame(j, positionMap.x * wSmall + wSmall / 2, positionMap.y * wSmall - 12 * AvMain.hd, 0, 33, g);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		FrameImage_t22B8F29B26087709566812A258AB227B26817986* L_41 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgPopup_71;
		int32_t L_42 = V_1;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_43 = V_2;
		NullCheck(L_43);
		int32_t L_44 = L_43->___x_0;
		int8_t L_45 = __this->___wSmall_47;
		int8_t L_46 = __this->___wSmall_47;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48 = L_47->___y_1;
		int8_t L_49 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_50 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_51 = ___0_g;
		NullCheck(L_41);
		FrameImage_drawFrame_m39AFA2B5C04276BF573FC90AFB4A02C68A2AF6E3(L_41, L_42, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_44, (int32_t)L_45)), ((int32_t)((int32_t)L_46/2)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_48, (int32_t)L_49)), ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_50)))), 0, ((int32_t)33), L_51, NULL);
		goto IL_01b7;
	}

IL_0140:
	{
		// AvatarData.paintImg(g, positionMap.idImg, positionMap.x * wSmall + wSmall / 2, positionMap.y * wSmall - 12 * AvMain.hd, 33);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_52 = ___0_g;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_53 = V_2;
		NullCheck(L_53);
		int16_t L_54 = L_53->___idImg_4;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = L_55->___x_0;
		int8_t L_57 = __this->___wSmall_47;
		int8_t L_58 = __this->___wSmall_47;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = L_59->___y_1;
		int8_t L_61 = __this->___wSmall_47;
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_62 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		il2cpp_codegen_runtime_class_init_inline(AvatarData_tF93B6D3E85243E9A4C8744CD4085AA6C3D38CFCF_il2cpp_TypeInfo_var);
		AvatarData_paintImg_mF512C2AA7B77D6212AACB81593A7E40005CE1A85(L_52, L_54, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_56, (int32_t)L_57)), ((int32_t)((int32_t)L_58/2)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_60, (int32_t)L_61)), ((int32_t)il2cpp_codegen_multiply(((int32_t)12), L_62)))), ((int32_t)33), NULL);
		goto IL_01b7;
	}

IL_017c:
	{
		// g.drawImage(imgSmallIcon, positionMap.x * wSmall + wSmall / 2, positionMap.y * wSmall - positionMap.count / 3, 33);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_63 = ___0_g;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_64 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___imgSmallIcon_50;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = L_65->___x_0;
		int8_t L_67 = __this->___wSmall_47;
		int8_t L_68 = __this->___wSmall_47;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = L_69->___y_1;
		int8_t L_71 = __this->___wSmall_47;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73 = L_72->___count_7;
		NullCheck(L_63);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_63, L_64, ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_66, (int32_t)L_67)), ((int32_t)((int32_t)L_68/2))))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_70, (int32_t)L_71)), ((int32_t)(L_73/3))))), ((int32_t)33), NULL);
	}

IL_01b7:
	{
		// for (int j = 0; j < listPos.size(); j++)
		int32_t L_74 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01bb:
	{
		// for (int j = 0; j < listPos.size(); j++)
		int32_t L_75 = V_1;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_76 = __this->___listPos_44;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_76, NULL);
		if ((((int32_t)L_75) < ((int32_t)L_77)))
		{
			goto IL_00a1;
		}
	}
	{
		// paintName(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_78 = ___0_g;
		MiniMap_paintName_m79355BC822BE277A2DD1C95CE3DAA4FAF779CA8B(__this, L_78, NULL);
		// paintClound(g);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_79 = ___0_g;
		MiniMap_paintClound_mE13EC7D3D2135C3987115E54330BF288F52E2434(__this, L_79, NULL);
		// }
		return;
	}
}
// System.Void MiniMap::paintName(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paintName_m79355BC822BE277A2DD1C95CE3DAA4FAF779CA8B (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	String_t* G_B12_2 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B12_3 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B12_4 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	String_t* G_B10_2 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B10_3 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B10_4 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	String_t* G_B11_2 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B11_3 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B11_4 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	String_t* G_B13_3 = NULL;
	MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* G_B13_4 = NULL;
	FontX_t31077A1C08A398E3B861843A50BE103531A54518* G_B13_5 = NULL;
	{
		// for (int i = 0; i < listPos.size(); i++)
		V_0 = 0;
		goto IL_0105;
	}

IL_0007:
	{
		// PositionMap positionMap = (PositionMap)listPos.elementAt(i);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = __this->___listPos_44;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_0, L_1, NULL);
		V_1 = ((PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028*)CastclassClass((RuntimeObject*)L_2, PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028_il2cpp_TypeInfo_var));
		// float num = positionMap.x * wSmall;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___x_0;
		int8_t L_5 = __this->___wSmall_47;
		V_2 = ((float)((int32_t)il2cpp_codegen_multiply(L_4, (int32_t)L_5)));
		// float num2 = positionMap.y * wSmall;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		int8_t L_8 = __this->___wSmall_47;
		V_3 = ((float)((int32_t)il2cpp_codegen_multiply(L_7, (int32_t)L_8)));
		// if (num2 < cmy + 50f)
		float L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_10 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		if ((!(((float)L_9) < ((float)((float)il2cpp_codegen_add(L_10, (50.0f)))))))
		{
			goto IL_0051;
		}
	}
	{
		// num2 = cmy + 50f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_11 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		V_3 = ((float)il2cpp_codegen_add(L_11, (50.0f)));
	}

IL_0051:
	{
		// if (num2 > cmy + (float)Canvas.hCan - 20f)
		float L_12 = V_3;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_13 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		if ((!(((float)L_12) > ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_13, ((float)L_14))), (20.0f)))))))
		{
			goto IL_0079;
		}
	}
	{
		// num2 = cmy + (float)Canvas.hCan - 20f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_15 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___hCan_19;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_15, ((float)L_16))), (20.0f)));
	}

IL_0079:
	{
		// if (num < cmx + 20f)
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_18 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_add(L_18, (20.0f)))))))
		{
			goto IL_0093;
		}
	}
	{
		// num = cmx + 20f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_19 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		V_2 = ((float)il2cpp_codegen_add(L_19, (20.0f)));
	}

IL_0093:
	{
		// if (num > cmx + (float)Canvas.w - 47f)
		float L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_21 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_22 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		if ((!(((float)L_20) > ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_21, ((float)L_22))), (47.0f)))))))
		{
			goto IL_00bb;
		}
	}
	{
		// num = cmx + (float)Canvas.w - 47f;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_23 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_24 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_23, ((float)L_24))), (47.0f)));
	}

IL_00bb:
	{
		// Canvas.borderFont.drawString(g, positionMap.text, (int)num + 10, (int)num2 - ((i != selected || isHide) ? (35 * AvMain.hd) : (70 * AvMain.hd)) - positionMap.count / 6, 2);
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		FontX_t31077A1C08A398E3B861843A50BE103531A54518* L_25 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___borderFont_41;
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_26 = ___0_g;
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->___text_3;
		float L_29 = V_2;
		float L_30 = V_3;
		int32_t L_31 = V_0;
		int32_t L_32 = __this->___selected_52;
		G_B10_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_30);
		G_B10_1 = ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_29), ((int32_t)10)));
		G_B10_2 = L_28;
		G_B10_3 = L_26;
		G_B10_4 = L_25;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			G_B12_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_30);
			G_B12_1 = ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_29), ((int32_t)10)));
			G_B12_2 = L_28;
			G_B12_3 = L_26;
			G_B12_4 = L_25;
			goto IL_00e9;
		}
	}
	{
		bool L_33 = __this->___isHide_66;
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
		G_B11_4 = G_B10_4;
		if (L_33)
		{
			G_B12_0 = G_B10_0;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			G_B12_4 = G_B10_4;
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_34 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B13_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)70), L_34));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		G_B13_4 = G_B11_3;
		G_B13_5 = G_B11_4;
		goto IL_00f1;
	}

IL_00e9:
	{
		il2cpp_codegen_runtime_class_init_inline(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var);
		int32_t L_35 = ((AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_StaticFields*)il2cpp_codegen_static_fields_for(AvMain_t9416A1BD4F14E12EAF30904E88F8B9CFD212670C_il2cpp_TypeInfo_var))->___hd_0;
		G_B13_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)35), L_35));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		G_B13_5 = G_B12_4;
	}

IL_00f1:
	{
		PositionMap_t71BAF83A429284EDF0F6BB83A7301E1C199FB028* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->___count_7;
		NullCheck(G_B13_5);
		VirtualActionInvoker5< MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void FontX::drawString(MyGraphics,System.String,System.Int32,System.Int32,System.Int32) */, G_B13_5, G_B13_4, G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(G_B13_1, G_B13_0)), ((int32_t)(L_37/6)))), 2);
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0105:
	{
		// for (int i = 0; i < listPos.size(); i++)
		int32_t L_39 = V_0;
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_40 = __this->___listPos_44;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_40, NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MiniMap::paintClound(MyGraphics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_paintClound_mE13EC7D3D2135C3987115E54330BF288F52E2434 (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* V_2 = NULL;
	{
		// int num = listClound.size();
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MyVector_size_mF025A05E2021611BFB9E107342658AEB05222BA9(L_0, NULL);
		V_0 = L_1;
		// for (int i = 0; i < num; i++)
		V_1 = 0;
		goto IL_00a7;
	}

IL_0012:
	{
		// AvPosition avPosition = (AvPosition)listClound.elementAt(i);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_2 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = MyVector_elementAt_m2058CB2FBF87C401368BB43AE172A9BB65956E4E(L_2, L_3, NULL);
		V_2 = ((AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4*)CastclassClass((RuntimeObject*)L_4, AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4_il2cpp_TypeInfo_var));
		// if ((float)avPosition.x > cmx - 30f && (float)avPosition.x < cmx + 30f + (float)Canvas.w && (float)avPosition.y > cmy - 20f && (float)avPosition.y < cmy + 20f + (float)Canvas.h)
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = L_5->___x_0;
		float L_7 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		if ((!(((float)((float)L_6)) > ((float)((float)il2cpp_codegen_subtract(L_7, (30.0f)))))))
		{
			goto IL_00a3;
		}
	}
	{
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->___x_0;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_10 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmx_54;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_11 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___w_13;
		if ((!(((float)((float)L_9)) < ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_10, (30.0f))), ((float)L_11)))))))
		{
			goto IL_00a3;
		}
	}
	{
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___y_1;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_14 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		if ((!(((float)((float)L_13)) > ((float)((float)il2cpp_codegen_subtract(L_14, (20.0f)))))))
		{
			goto IL_00a3;
		}
	}
	{
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___y_1;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		float L_17 = ((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___cmy_59;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		int32_t L_18 = ((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___h_14;
		if ((!(((float)((float)L_16)) < ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_17, (20.0f))), ((float)L_18)))))))
		{
			goto IL_00a3;
		}
	}
	{
		// g.drawImage(imgClound[avPosition.anchor], avPosition.x, avPosition.y, 3);
		MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* L_19 = ___0_g;
		ImageU5BU5D_t81AEB0E7716FBD0993208104AF9289B5C8CFC288* L_20 = __this->___imgClound_69;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = L_21->___anchor_2;
		NullCheck(L_20);
		int32_t L_23 = L_22;
		Image_t88AA1A2EF052D8D9F2559D593A4EB7853C305908* L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___x_0;
		AvPosition_tD1E81FC873BCF40FBA5AF11F1E1603961B72DDC4* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = L_27->___y_1;
		NullCheck(L_19);
		MyGraphics_drawImage_mC9C82E5FCDD4FDA99A69821F46A3D267F46E9955(L_19, L_24, ((float)L_26), ((float)L_28), 3, NULL);
	}

IL_00a3:
	{
		// for (int i = 0; i < num; i++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a7:
	{
		// for (int i = 0; i < num; i++)
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MiniMap::onRegisterByEmail(System.SByte,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap_onRegisterByEmail_m7794EB0AA4A305395D1A80BCEC067FFD55906D7F (MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A* __this, int8_t ___0_step, String_t* ___1_des, String_t* ___2_name, String_t* ___3_pass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54ACF5274E3FF190C766CEEAA1EE2472A7296FCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A2B2184C5083D71635D18FE335CC842862D793);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Out.println("onRegisterByEmail: " + name + "   " + pass);
		String_t* L_0 = ___2_name;
		String_t* L_1 = ___3_pass;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral54ACF5274E3FF190C766CEEAA1EE2472A7296FCC, L_0, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, L_1, NULL);
		Out_println_mDBA56AD04D69071EEC075F3CC3EA4906B485B817(L_2, NULL);
		// if (step == 0)
		int8_t L_3 = ___0_step;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// actionReg = new IActionRequestReg(des);
		String_t* L_4 = ___1_des;
		IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0* L_5 = (IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0*)il2cpp_codegen_object_new(IActionRequestReg_t0DBC4CD45EF658B6514C249E6CE13769275B6BD0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IActionRequestReg__ctor_m7C6777BB2AECF03A09DD5464A831229EBE68741C(L_5, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85), (void*)L_5);
		return;
	}

IL_0026:
	{
		// else if (step == 1)
		int8_t L_6 = ___0_step;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		// actionReg = new IActionRequestOK(des);
		String_t* L_7 = ___1_des;
		IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032* L_8 = (IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032*)il2cpp_codegen_object_new(IActionRequestOK_t042CCAC075E9C336EC1E6A21DB53341E9B384032_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		IActionRequestOK__ctor_mC16F206EFF672EB3D993C2B2C5484ACAE143FC07(L_8, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85), (void*)L_8);
		return;
	}

IL_0036:
	{
		// else if (step == 2)
		int8_t L_9 = ___0_step;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0075;
		}
	}
	{
		// LoginScr.gI().tfUser.setText(name);
		LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* L_10;
		L_10 = LoginScr_gI_m8B4CA7931650DFE43973E34D0C258FA60F104E29(NULL);
		NullCheck(L_10);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_11 = L_10->___tfUser_41;
		String_t* L_12 = ___2_name;
		NullCheck(L_11);
		TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE(L_11, L_12, NULL);
		// LoginScr.gI().tfPass.setText(pass);
		LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* L_13;
		L_13 = LoginScr_gI_m8B4CA7931650DFE43973E34D0C258FA60F104E29(NULL);
		NullCheck(L_13);
		TField_t56E19AE85CA63279C53042EF348814217A9F0E70* L_14 = L_13->___tfPass_42;
		String_t* L_15 = ___3_pass;
		NullCheck(L_14);
		TField_setText_m082270065C3961E053A902D7C7BCC3B932CF4FAE(L_14, L_15, NULL);
		// LoginScr.gI().saveLogin();
		LoginScr_tC859CD60B2ED059FFFD2EB2B7FE1C7347A9847F8* L_16;
		L_16 = LoginScr_gI_m8B4CA7931650DFE43973E34D0C258FA60F104E29(NULL);
		NullCheck(L_16);
		LoginScr_saveLogin_m0DB666551015CA3BA810478EDE9D8063A32257C6(L_16, NULL);
		// Canvas.startOKDlg("??ng k? th?nh c?ng.");
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		Canvas_startOKDlg_m99D060735CB1D22F120889080272C70DF97FC315(_stringLiteral81A2B2184C5083D71635D18FE335CC842862D793, NULL);
		// actionReg = null;
		il2cpp_codegen_runtime_class_init_inline(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___actionReg_85), (void*)(RuntimeObject*)NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void MiniMap::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniMap__cctor_mE8E5DEBBCBFE168EB9EDC1D5A28BB6F61EC5A82F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isCityMap = false;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___isCityMap_67 = (bool)0;
		// public static bool isChange = true;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___isChange_68 = (bool)1;
		// private static MyVector listClound = new MyVector();
		MyVector_t5E551DE127AB217F3BF51644B186993381C11E30* L_0 = (MyVector_t5E551DE127AB217F3BF51644B186993381C11E30*)il2cpp_codegen_object_new(MyVector_t5E551DE127AB217F3BF51644B186993381C11E30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MyVector__ctor_m9CAA74C33B5605E7806E3F1C9E1D78A97AE10692(L_0, NULL);
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___listClound_70), (void*)L_0);
		// public static string nameSV = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___nameSV_73 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_StaticFields*)il2cpp_codegen_static_fields_for(MiniMap_t0BAE0AACDC94379F870923515C880479CBF8582A_il2cpp_TypeInfo_var))->___nameSV_73), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MenuMain_show_mE728801F57A8E264CCBB69F68C606EB35063C15F_inline (MenuMain_t26CE8001D878F9A0A1EA8F48454B91D97F0C504A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Canvas.menuMain = this;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___menuMain_22), (void*)__this);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MyGraphics_getTranslateX_m2DB0508A33DED848DBF27AC195D60001FE6CB920_inline (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, const RuntimeMethod* method) 
{
	{
		// return translateX;
		float L_0 = __this->___translateX_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MyGraphics_getTranslateY_mBE99771F46EC11F951F2741403EDBC090A19979E_inline (MyGraphics_t710D283C2DE1DB8B1F18C0FD3A702CD4A3E80B56* __this, const RuntimeMethod* method) 
{
	{
		// return translateY;
		float L_0 = __this->___translateY_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_setIputType_m72F29E07E1F1F559628ABB8FFC773EDB68298B46_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, int32_t ___0_iputType, const RuntimeMethod* method) 
{
	{
		// inputType = iputType;
		int32_t L_0 = ___0_iputType;
		__this->___inputType_42 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_setMaxTextLenght_m61EBFB02EBBFD04345FCF29A2FE30D03120575FD_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, int32_t ___0_maxTextLenght, const RuntimeMethod* method) 
{
	{
		// this.maxTextLenght = maxTextLenght;
		int32_t L_0 = ___0_maxTextLenght;
		__this->___maxTextLenght_36 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TField_getText_mFCD7D323EF26FC195005BA96783EE50137C5A47A_inline (TField_t56E19AE85CA63279C53042EF348814217A9F0E70* __this, const RuntimeMethod* method) 
{
	{
		// return text;
		String_t* L_0 = __this->___text_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MyScreen_switchToMe_mC24CFE20D75C42D96747425FA6E8EF4ACDE24D52_inline (MyScreen_t46BCE97DAD5F54BC76F71035FEB3DC0A45165B5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Canvas.currentMyScreen = this;
		il2cpp_codegen_runtime_class_init_inline(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var);
		((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_tB1BFD6C57E26C3C7D2F1FF029CBCF18B22E64F64_il2cpp_TypeInfo_var))->___currentMyScreen_20), (void*)__this);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Session_ME_isConnected_mDA83BFCEDD0D124FB743C10F2ED83F8721AE0B42_inline (Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return connected;
		il2cpp_codegen_runtime_class_init_inline(Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var);
		bool L_0 = ((Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_StaticFields*)il2cpp_codegen_static_fields_for(Session_ME_t04C33DE1A7AD3EF7D655E860FAD232C9D38B44DB_il2cpp_TypeInfo_var))->___connected_6;
		return L_0;
	}
}
