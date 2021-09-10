// WidgetBlueprintGeneratedClass UMG_SettingsSection.UMG_SettingsSection_C
// Size: 0x370 (Inherited: 0x300)
struct UUMG_SettingsSection_C : USettingsSection {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UHorizontalBox* ApplyBox; // 0x308(0x08)
	struct UUMG_BasicButton_2_C* ApplyButton; // 0x310(0x08)
	struct UUMG_SettingTooltipHover_C* Help; // 0x318(0x08)
	struct UUMG_BasicButton_2_C* ResetButton; // 0x320(0x08)
	struct UVerticalBox* SettingArea; // 0x328(0x08)
	struct UVerticalBox* SettingBox; // 0x330(0x08)
	struct UTextBlock* Title; // 0x338(0x08)
	struct FMulticastInlineDelegate SettingOptionHovered; // 0x340(0x10)
	struct FMulticastInlineDelegate SettingOptionUnhovered; // 0x350(0x10)
	bool Odd; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UNamedSlot* ConfirmationSlot; // 0x368(0x08)

	struct USettingWidget_Language* CreateLanguage(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateLanguage // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct USettingWidget_Keybindings* CreateKeybindings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateKeybindings // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct USettingWidget_Switch* CreateSwitch(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateSwitch // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct USettingWidget_DiscreteRange* CreateDiscreteRange(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateDiscreteRange // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct USettingWidget_ContinuousRange* CreateContinuousRange(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateContinuousRange // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct USettingWidget_Combo* CreateCombo(); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateCombo // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UUMG_SettingRowBorder_C* CreateOptionBorder(struct APlayerController* OwningPlayer); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateOptionBorder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddNewWidget(struct USettingWidget* SettingWidget); // Function UMG_SettingsSection.UMG_SettingsSection_C.AddNewWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetDisplayName(struct FText DisplayName); // Function UMG_SettingsSection.UMG_SettingsSection_C.SetDisplayName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void PostSetup(); // Function UMG_SettingsSection.UMG_SettingsSection_C.PostSetup // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Setting Option Hovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.Setting Option Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setting Option Unhovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.Setting Option Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsSection.UMG_SettingsSection_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsSection.UMG_SettingsSection_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void DirtySection(); // Function UMG_SettingsSection.UMG_SettingsSection_C.DirtySection // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnRefresh(); // Function UMG_SettingsSection.UMG_SettingsSection_C.OnRefresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Settings Updated(); // Function UMG_SettingsSection.UMG_SettingsSection_C.On Settings Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ApplySettings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.ApplySettings // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void On Confirmation Result(bool Result); // Function UMG_SettingsSection.UMG_SettingsSection_C.On Confirmation Result // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RevertSettings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.RevertSettings // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingsSection(int32_t EntryPoint); // Function UMG_SettingsSection.UMG_SettingsSection_C.ExecuteUbergraph_UMG_SettingsSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.SettingOptionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.SettingOptionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

