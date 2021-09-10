// WidgetBlueprintGeneratedClass CF_BaseCombo2.CF_BaseCombo2_C
// Size: 0x300 (Inherited: 0x2d9)
struct UCF_BaseCombo2_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* ComboBox1; // 0x2e8(0x08)
	struct UCustomComboBox* ComboBox2; // 0x2f0(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton; // 0x2f8(0x08)

	void HandleArg(int32_t Index, struct FString Arg); // Function CF_BaseCombo2.CF_BaseCombo2_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_BaseCombo2.CF_BaseCombo2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseCombo2.CF_BaseCombo2_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void Execute(); // Function CF_BaseCombo2.CF_BaseCombo2_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HandleExecute(struct UUserWidget* Widget1, struct UUserWidget* Widget2); // Function CF_BaseCombo2.CF_BaseCombo2_C.HandleExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseCombo2.CF_BaseCombo2_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Handle On Item Set(struct UUserWidget* Widget, bool Combo2); // Function CF_BaseCombo2.CF_BaseCombo2_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ComboBox2_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseCombo2.CF_BaseCombo2_C.BndEvt__ComboBox2_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function CF_BaseCombo2.CF_BaseCombo2_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_BaseCombo2(int32_t EntryPoint); // Function CF_BaseCombo2.CF_BaseCombo2_C.ExecuteUbergraph_CF_BaseCombo2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

