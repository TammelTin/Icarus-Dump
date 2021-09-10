// WidgetBlueprintGeneratedClass UMG_MultiToggle.UMG_MultiToggle_C
// Size: 0x2ec (Inherited: 0x280)
struct UUMG_MultiToggle_C : UUMG_SettingControlBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UHorizontalBox* ToggleContainer; // 0x288(0x08)
	struct TArray<struct FText> ToggleOptions; // 0x290(0x10)
	struct TArray<struct FText> OptionToolTips; // 0x2a0(0x10)
	int32_t DefaultToggleIndex; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UUMG_ToggleButtonBase_C* ToggleWidgetClass; // 0x2b8(0x08)
	int32_t ActiveToggleIndex; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FMulticastInlineDelegate MultiToggleStateChanged; // 0x2c8(0x10)
	struct FMulticastInlineDelegate ToggleClicked; // 0x2d8(0x10)
	float WidthOverride; // 0x2e8(0x04)

	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_MultiToggle.UMG_MultiToggle_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetToggleOption(int32_t ToggleIndex); // Function UMG_MultiToggle.UMG_MultiToggle_C.SetToggleOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConstructToggles(); // Function UMG_MultiToggle.UMG_MultiToggle_C.ConstructToggles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_MultiToggle.UMG_MultiToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_MultiToggle.UMG_MultiToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ToggleButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MultiToggle.UMG_MultiToggle_C.ToggleButtonToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleButtonClicked(struct UUMG_ButtonBase_C* Button); // Function UMG_MultiToggle.UMG_MultiToggle_C.ToggleButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_MultiToggle(int32_t EntryPoint); // Function UMG_MultiToggle.UMG_MultiToggle_C.ExecuteUbergraph_UMG_MultiToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void ToggleClicked__DelegateSignature(int32_t ToggleIndex, bool IsActive); // Function UMG_MultiToggle.UMG_MultiToggle_C.ToggleClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // Function UMG_MultiToggle.UMG_MultiToggle_C.MultiToggleStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

