// WidgetBlueprintGeneratedClass UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C
// Size: 0xa70 (Inherited: 0x7d4)
struct UUMG_ToggleButton_SettingControl_C : UUMG_ToggleButtonBase_C {
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d8(0x08)
	struct UTextBlock* ButtonText; // 0x7e0(0x08)
	struct UButton* ImageButton; // 0x7e8(0x08)
	struct USizeBox* SizeBox; // 0x7f0(0x08)
	struct FButtonStyle NormalStyle; // 0x7f8(0x278)

	void FocusUpdated(bool bNewFocus); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetImageButton(struct UButton* ImageButton); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Construct(); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ToggleButton_SettingControl(int32_t EntryPoint); // Function UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C.ExecuteUbergraph_UMG_ToggleButton_SettingControl // (Final|UbergraphFunction) // @ game+0x1a38c80
};

