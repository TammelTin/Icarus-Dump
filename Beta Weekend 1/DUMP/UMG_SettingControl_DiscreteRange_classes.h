// WidgetBlueprintGeneratedClass UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C
// Size: 0x398 (Inherited: 0x340)
struct UUMG_SettingControl_DiscreteRange_C : USettingWidget_DiscreteRange {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UTextBlock* SettingText; // 0x348(0x08)
	struct USlider* SliderControl; // 0x350(0x08)
	struct UProgressBar* SliderProgress; // 0x358(0x08)
	int32_t MaxValue; // 0x360(0x04)
	int32_t DecimalPlaces; // 0x364(0x04)
	int32_t CurrentValue; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct FText> NamedEntries; // 0x370(0x10)
	struct FText PreviousEntry; // 0x380(0x18)

	void GetCurrentEntry(struct FText Entry); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.GetCurrentEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateRangeValue(); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.UpdateRangeValue // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature(); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void SetDefault(struct FText Default); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.SetDefault // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void SetOptions(struct TArray<struct FText> Options); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.SetOptions // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void SetValueIndex(int32_t Index, bool bForceRefresh); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.SetValueIndex // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Apply(); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettingControl_DiscreteRange(int32_t EntryPoint); // Function UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C.ExecuteUbergraph_UMG_SettingControl_DiscreteRange // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

