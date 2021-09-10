// WidgetBlueprintGeneratedClass CF_BaseCombo.CF_BaseCombo_C
// Size: 0x2f8 (Inherited: 0x2d9)
struct UCF_BaseCombo_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* ComboBox; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)

	void HandleArg(int32_t Index, struct FString Arg); // Function CF_BaseCombo.CF_BaseCombo_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseCombo.CF_BaseCombo_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void Execute(); // Function CF_BaseCombo.CF_BaseCombo_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // Function CF_BaseCombo.CF_BaseCombo_C.HandleExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseCombo.CF_BaseCombo_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_BaseCombo.CF_BaseCombo_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseCombo.CF_BaseCombo_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseCombo(int32_t EntryPoint); // Function CF_BaseCombo.CF_BaseCombo_C.ExecuteUbergraph_CF_BaseCombo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

