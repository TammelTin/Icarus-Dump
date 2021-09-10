// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C
// Size: 0x2d0 (Inherited: 0x260)
struct UUMG_CharacterSetting_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct TArray<struct FRowHandle> CustomisationOptions; // 0x268(0x10)
	int32_t SelectedOptionIndex; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FMulticastInlineDelegate SelectionUpdated; // 0x280(0x10)
	bool HasNoneOption; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FPreviewCameraSettingsEnum SettingFocus; // 0x298(0x10)
	struct FText SettingName; // 0x2a8(0x18)
	struct TArray<enum class ECharacterCustomisationContext> CustomisationContextWhitelist; // 0x2c0(0x10)

	void VerifySettingsValid(); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.VerifySettingsValid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSelectionDisplayName(struct FText DisplayName); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectionDisplayName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSelectedOption(struct FRowHandle SelectedRow); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectedOption // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateVisuals(); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.UpdateVisuals // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ChangeSelection(int32_t Index); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ChangeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearOptions(bool ClearIndex); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ClearOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddOption(struct FRowHandle Option, int32_t Index); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.AddOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterSetting_Base(int32_t EntryPoint); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ExecuteUbergraph_UMG_CharacterSetting_Base // (Final|UbergraphFunction) // @ game+0x1a38c80
	void SelectionUpdated__DelegateSignature(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.SelectionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

