// WidgetBlueprintGeneratedClass W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C
// Size: 0x2cd (Inherited: 0x280)
struct UW_PostProcessEntry_Slider_C : UW_PostProcessEntry_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCheckBox* CheckBox_201; // 0x288(0x08)
	struct USlider* Slider; // 0x290(0x08)
	struct UTextBlock* TextBlock; // 0x298(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a0(0x08)
	struct FText Name; // 0x2a8(0x18)
	int32_t FontSize; // 0x2c0(0x04)
	float TextFill; // 0x2c4(0x04)
	float DefaultSliderValue; // 0x2c8(0x04)
	bool HasEnableBox; // 0x2cc(0x01)

	void UpdateSliderEnabled(); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.UpdateSliderEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsEntryEnabled(); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.IsEntryEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.InitFromSaveGameValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSaveGameValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitFromDefaultValue(); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.InitFromDefaultValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText GetSliderText(); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSliderText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	float GetSliderValue(); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_PostProcessEntry_Slider(int32_t EntryPoint); // Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.ExecuteUbergraph_W_PostProcessEntry_Slider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

