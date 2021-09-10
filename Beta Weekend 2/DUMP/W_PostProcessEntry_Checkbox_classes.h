// WidgetBlueprintGeneratedClass W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C
// Size: 0x2b9 (Inherited: 0x280)
struct UW_PostProcessEntry_Checkbox_C : UW_PostProcessEntry_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCheckBox* CheckBox_201; // 0x288(0x08)
	struct UTextBlock* TextBlock_3; // 0x290(0x08)
	struct FText Name; // 0x298(0x18)
	int32_t FontSize; // 0x2b0(0x04)
	float TextFill; // 0x2b4(0x04)
	bool DefaultState; // 0x2b8(0x01)

	void GetSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.GetSaveGameValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.InitFromSaveGameValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitFromDefaultValue(); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.InitFromDefaultValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool GetCheckboxState(); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_PostProcessEntry_Checkbox(int32_t EntryPoint); // Function W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C.ExecuteUbergraph_W_PostProcessEntry_Checkbox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

