// WidgetBlueprintGeneratedClass UMG_SettingsMenu.UMG_SettingsMenu_C
// Size: 0x2d1 (Inherited: 0x280)
struct UUMG_SettingsMenu_C : USettingsMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x288(0x08)
	struct UHorizontalBox* CategoryBox; // 0x290(0x08)
	struct UNamedSlot* ConfirmationSlot; // 0x298(0x08)
	struct UImage* Gradient; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* ResetButton; // 0x2a8(0x08)
	struct UTextBlock* SettingOptionDescription; // 0x2b0(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2b8(0x08)
	struct FMulticastInlineDelegate SettingsBack; // 0x2c0(0x10)
	bool IsDirty; // 0x2d0(0x01)

	void Setup(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetSwitcherContent(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.ResetSwitcherContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetContentState(enum class ESettingsCategory State); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.SetContentState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Setting Hovered(struct UUMG_SettingRowBorder_C* Setting Object); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Setting Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setting Unhovered(struct UUMG_SettingRowBorder_C* Setting Object); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Setting Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Category Toggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Category Toggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On View Refresh(struct UUMG_SettingsView_C* View); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.On View Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Dirty(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Dirty // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Visibility Changed(enum class ESlateVisibility InVisibility); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.On Visibility Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Save(bool bForce); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.Save // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingsMenu(int32_t EntryPoint); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.ExecuteUbergraph_UMG_SettingsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SettingsBack__DelegateSignature(); // Function UMG_SettingsMenu.UMG_SettingsMenu_C.SettingsBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

