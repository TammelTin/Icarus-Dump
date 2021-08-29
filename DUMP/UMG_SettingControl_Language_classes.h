// WidgetBlueprintGeneratedClass UMG_SettingControl_Language.UMG_SettingControl_Language_C
// Size: 0x378 (Inherited: 0x350)
struct UUMG_SettingControl_Language_C : USettingWidget_Language {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UComboBoxString* ComboBox; // 0x358(0x08)
	struct UProgressBar* CoverageBar; // 0x360(0x08)
	struct TArray<struct FString> Cultures; // 0x368(0x10)

	void UpdateCoverage(); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.UpdateCoverage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Apply(); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLanguage(struct FString Language); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.SetLanguage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Populate Options(); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.Populate Options // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingControl_Language(int32_t EntryPoint); // Function UMG_SettingControl_Language.UMG_SettingControl_Language_C.ExecuteUbergraph_UMG_SettingControl_Language // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

