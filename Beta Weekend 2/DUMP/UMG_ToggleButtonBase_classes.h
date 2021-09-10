// WidgetBlueprintGeneratedClass UMG_ToggleButtonBase.UMG_ToggleButtonBase_C
// Size: 0x7d4 (Inherited: 0x458)
struct UUMG_ToggleButtonBase_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	bool IsToggled; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct FMulticastInlineDelegate Toggled; // 0x468(0x10)
	bool IsRadioToggle; // 0x478(0x01)
	bool CanUntoggleSelf; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FMulticastInlineDelegate Untoggled; // 0x480(0x10)
	struct FSlateColor Toggled_Text_Normal; // 0x490(0x28)
	struct FSlateColor Toggled_Text_Hovered; // 0x4b8(0x28)
	struct FSlateColor Toggled_Text_Pressed; // 0x4e0(0x28)
	struct FSlateColor Toggled_Text_Disabled; // 0x508(0x28)
	struct UMaterialInstance* Toggled_Image_Normal; // 0x530(0x08)
	struct UMaterialInstance* Toggled_Image_Hovered; // 0x538(0x08)
	struct UMaterialInstance* Toggled_Image_Pressed; // 0x540(0x08)
	struct UMaterialInstance* Toggled_Image_Disabled; // 0x548(0x08)
	struct FButtonStyle CachedImageButtonStyle; // 0x550(0x278)
	struct UPanelWidget* RadioParent; // 0x7c8(0x08)
	float WidthOverride; // 0x7d0(0x04)

	void VisuallyToggleButton(bool VisualToggledState); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.VisuallyToggleButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetDisabledTextColour(struct FSlateColor Colour); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetDisabledTextColour // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetPressedTextColour(struct FSlateColor Colour); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetPressedTextColour // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetHoveredTextColour(struct FSlateColor Colour); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetHoveredTextColour // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetNormalTextColour(struct FSlateColor Colour); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetNormalTextColour // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UntoggleOthers(struct UPanelWidget* InRadioParent); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.UntoggleOthers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetToggled(bool Toggled); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.SetToggled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnClickEvent(struct UUMG_ButtonBase_C* Button); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.OnClickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ToggleButtonBase(int32_t EntryPoint); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.ExecuteUbergraph_UMG_ToggleButtonBase // (Final|UbergraphFunction) // @ game+0x1a38c80
	void Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Untoggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Toggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

