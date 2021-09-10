// WidgetBlueprintGeneratedClass UMG_SettingControl_Combo.UMG_SettingControl_Combo_C
// Size: 0x398 (Inherited: 0x340)
struct UUMG_SettingControl_Combo_C : USettingWidget_Combo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UComboBoxString* ComboBox; // 0x348(0x08)
	struct TArray<struct FText> Options; // 0x350(0x10)
	struct FText CustomText; // 0x360(0x18)
	struct TArray<struct FText> Hide Options; // 0x378(0x10)
	struct TArray<struct FString> OptionsStrings; // 0x388(0x10)

	void IsValidOption(bool Valid); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.IsValidOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void SetOptions(struct TArray<struct FText> Options); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.SetOptions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void SetValueIndex(int32_t Index); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.SetValueIndex // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Apply(); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetHideOptions(struct TArray<struct FText> HideOptions); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.SetHideOptions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingControl_Combo(int32_t EntryPoint); // Function UMG_SettingControl_Combo.UMG_SettingControl_Combo_C.ExecuteUbergraph_UMG_SettingControl_Combo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

