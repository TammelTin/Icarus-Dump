// WidgetBlueprintGeneratedClass UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C
// Size: 0x310 (Inherited: 0x2d0)
struct UUMG_CharacterSetting_TextBase_C : UUMG_CharacterSetting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UImage* Divider_4; // 0x2d8(0x08)
	struct UUMG_BasicButton_2_C* LeftButton; // 0x2e0(0x08)
	struct UUMG_BasicButton_2_C* RightButton; // 0x2e8(0x08)
	struct UTextBlock* Text; // 0x2f0(0x08)
	struct UTextBlock* Text_SettingName; // 0x2f8(0x08)
	struct FMulticastInlineDelegate SelectionUpdated_1; // 0x300(0x10)

	void UpdateVisuals(); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.UpdateVisuals // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterSetting_TextBase(int32_t EntryPoint); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.ExecuteUbergraph_UMG_CharacterSetting_TextBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SelectionUpdated_0__DelegateSignature(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // Function UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C.SelectionUpdated_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

