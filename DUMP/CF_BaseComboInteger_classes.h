// WidgetBlueprintGeneratedClass CF_BaseComboInteger.CF_BaseComboInteger_C
// Size: 0x30c (Inherited: 0x2d9)
struct UCF_BaseComboInteger_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* ComboBox; // 0x2e8(0x08)
	struct USpinBox* Count; // 0x2f0(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton; // 0x2f8(0x08)
	int32_t Number; // 0x300(0x04)
	int32_t MinCountValue; // 0x304(0x04)
	int32_t MaxCountValue; // 0x308(0x04)

	void HandleArg(int32_t Index, struct FString Arg); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetNumber(); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.GetNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Execute(); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseComboInteger(int32_t EntryPoint); // Function CF_BaseComboInteger.CF_BaseComboInteger_C.ExecuteUbergraph_CF_BaseComboInteger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

