// WidgetBlueprintGeneratedClass UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C
// Size: 0x375 (Inherited: 0x340)
struct UUMG_SettingControl_Continuous_C : USettingWidget_ContinuousRange {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UTextBlock* SettingText; // 0x348(0x08)
	struct USlider* SliderControl; // 0x350(0x08)
	struct UProgressBar* SliderProgress; // 0x358(0x08)
	float MinValue; // 0x360(0x04)
	float MaxValue; // 0x364(0x04)
	int32_t DecimalPlaces; // 0x368(0x04)
	float StepSize; // 0x36c(0x04)
	float CurrentValue; // 0x370(0x04)
	bool Apply During Drag; // 0x374(0x01)

	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRangeValue(bool ForceRefresh); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.UpdateRangeValue // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRangeText(float Value); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.UpdateRangeText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature(); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void SetStepSize(float StepSize); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.SetStepSize // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetRange(float MinVal, float MaxVal); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.SetRange // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Setup(); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.Setup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetValue(float Value, bool bForceRefresh); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.SetValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Apply(); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetApplyDuringDrag(bool bApplyDuringDrag); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.SetApplyDuringDrag // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SettingControl_Continuous(int32_t EntryPoint); // Function UMG_SettingControl_Continuous.UMG_SettingControl_Continuous_C.ExecuteUbergraph_UMG_SettingControl_Continuous // (Final|UbergraphFunction) // @ game+0x1a38c80
};

