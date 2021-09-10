// WidgetBlueprintGeneratedClass CF_BaseComboBool.CF_BaseComboBool_C
// Size: 0x308 (Inherited: 0x2d9)
struct UCF_BaseComboBool_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCheckBox* CheckBox; // 0x2e8(0x08)
	struct UCustomComboBox* ComboBox; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_95; // 0x2f8(0x08)
	struct UCheckBox* NewVar_1; // 0x300(0x08)

	struct FText GetCheckboxText(); // Function CF_BaseComboBool.CF_BaseComboBool_C.GetCheckboxText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void HandleArg(int32_t Index, struct FString Arg); // Function CF_BaseComboBool.CF_BaseComboBool_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseComboBool.CF_BaseComboBool_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CheckBox_218_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function CF_BaseComboBool.CF_BaseComboBool_C.BndEvt__CheckBox_218_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseComboBool.CF_BaseComboBool_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void HandleOnItemSet(struct UUserWidget* Widget); // Function CF_BaseComboBool.CF_BaseComboBool_C.HandleOnItemSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HandleOnCheckboxStateChanged(struct UUserWidget* SelectedWidget, bool IsChecked); // Function CF_BaseComboBool.CF_BaseComboBool_C.HandleOnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Execute(); // Function CF_BaseComboBool.CF_BaseComboBool_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseComboBool(int32_t EntryPoint); // Function CF_BaseComboBool.CF_BaseComboBool_C.ExecuteUbergraph_CF_BaseComboBool // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

