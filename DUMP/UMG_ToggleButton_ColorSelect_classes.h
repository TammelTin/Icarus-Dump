// WidgetBlueprintGeneratedClass UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C
// Size: 0xa99 (Inherited: 0x7d4)
struct UUMG_ToggleButton_ColorSelect_C : UUMG_ToggleButtonBase_C {
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d8(0x08)
	struct UHorizontalBox* HorizontalBox_ColourContainer; // 0x7e0(0x08)
	struct UButton* ImageButton; // 0x7e8(0x08)
	struct USizeBox* SizeBox; // 0x7f0(0x08)
	struct FButtonStyle NormalStyle; // 0x7f8(0x278)
	struct FCharacterCreationDataRowHandle CharacterCustomisationRow; // 0xa70(0x18)
	struct FPreviewCameraSettingsEnum CameraFocus; // 0xa88(0x10)
	bool RotateColourDisplay; // 0xa98(0x01)

	void FocusUpdated(bool bNewFocus); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetImageButton(struct UButton* ImageButton); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Construct(); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ToggleButton_ColorSelect(int32_t EntryPoint); // Function UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C.ExecuteUbergraph_UMG_ToggleButton_ColorSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

