// WidgetBlueprintGeneratedClass CF_BaseGrid.CF_BaseGrid_C
// Size: 0x310 (Inherited: 0x2d9)
struct UCF_BaseGrid_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* GridCombo; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton; // 0x2f0(0x08)
	struct USpinBox* UV_x; // 0x2f8(0x08)
	struct USpinBox* UV_y; // 0x300(0x08)
	float UV_XValue; // 0x308(0x04)
	float UV_YValue; // 0x30c(0x04)

	void HandleArg(int32_t Index, struct FString Arg); // Function CF_BaseGrid.CF_BaseGrid_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseGrid.CF_BaseGrid_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Execute(); // Function CF_BaseGrid.CF_BaseGrid_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Handle Execute(struct FString Grid, float UV_x, float UV_y); // Function CF_BaseGrid.CF_BaseGrid_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_BaseGrid.CF_BaseGrid_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_BaseGrid.CF_BaseGrid_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_BaseGrid(int32_t EntryPoint); // Function CF_BaseGrid.CF_BaseGrid_C.ExecuteUbergraph_CF_BaseGrid // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

