// WidgetBlueprintGeneratedClass UMG_SettingRowBorder.UMG_SettingRowBorder_C
// Size: 0x328 (Inherited: 0x288)
struct UUMG_SettingRowBorder_C : USettingRowBorder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBorder* Border_84; // 0x290(0x08)
	struct UImage* DarkTint; // 0x298(0x08)
	struct UUMG_SettingTooltipHover_C* Help; // 0x2a0(0x08)
	struct UButton* HoverButton; // 0x2a8(0x08)
	struct UBorder* NameBorder; // 0x2b0(0x08)
	struct USizeBox* OuterSizeBox; // 0x2b8(0x08)
	struct UNamedSlot* SettingsControlSlot; // 0x2c0(0x08)
	struct UTextBlock* SettingText; // 0x2c8(0x08)
	struct FText SettingOptionText; // 0x2d0(0x18)
	struct FText SettingOptionDescription; // 0x2e8(0x18)
	float SettingControlFill; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct FMulticastInlineDelegate SettingOptionHovered; // 0x308(0x10)
	struct FMulticastInlineDelegate SettingOptionUnhovered; // 0x318(0x10)

	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_108_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.BndEvt__Button_108_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Post Setup(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Post Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Enabled State(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Update Enabled State // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideName(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.HideName // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SettingRowBorder(int32_t EntryPoint); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.ExecuteUbergraph_UMG_SettingRowBorder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

