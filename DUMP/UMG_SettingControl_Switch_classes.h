// WidgetBlueprintGeneratedClass UMG_SettingControl_Switch.UMG_SettingControl_Switch_C
// Size: 0x388 (Inherited: 0x340)
struct UUMG_SettingControl_Switch_C : USettingWidget_Switch {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UHorizontalBox* ToggleContainer; // 0x348(0x08)
	struct TArray<struct FText> ToggleOptions; // 0x350(0x10)
	struct TArray<struct FText> OptionToolTips; // 0x360(0x10)
	int32_t DefaultToggleIndex; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UUMG_ToggleButtonBase_C* ToggleWidgetClass; // 0x378(0x08)
	int32_t ActiveToggleIndex; // 0x380(0x04)
	float WidthOverride; // 0x384(0x04)

	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetToggleOption(int32_t ToggleIndex); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.SetToggleOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConstructToggles(); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.ConstructToggles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ToggleButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.ToggleButtonToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLabels(struct TArray<struct FText> Labels); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.SetLabels // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void SetValueIndex(int32_t Index); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.SetValueIndex // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Apply(); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingControl_Switch(int32_t EntryPoint); // Function UMG_SettingControl_Switch.UMG_SettingControl_Switch_C.ExecuteUbergraph_UMG_SettingControl_Switch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

