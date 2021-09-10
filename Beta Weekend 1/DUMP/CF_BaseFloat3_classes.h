// WidgetBlueprintGeneratedClass CF_BaseFloat3.CF_BaseFloat3_C
// Size: 0x314 (Inherited: 0x2d9)
struct UCF_BaseFloat3_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct USpinBox* Integer; // 0x2e8(0x08)
	struct USpinBox* Integer_2; // 0x2f0(0x08)
	struct USpinBox* Integer_3; // 0x2f8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x300(0x08)
	struct FVector Vector; // 0x308(0x0c)

	void UpdatePreviewImpl(struct TArray<struct FString> Array); // Function CF_BaseFloat3.CF_BaseFloat3_C.UpdatePreviewImpl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseFloat3.CF_BaseFloat3_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseFloat3.CF_BaseFloat3_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseFloat3.CF_BaseFloat3_C.BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Integer_1_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseFloat3.CF_BaseFloat3_C.BndEvt__Integer_1_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Integer_2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseFloat3.CF_BaseFloat3_C.BndEvt__Integer_2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseFloat3(int32_t EntryPoint); // Function CF_BaseFloat3.CF_BaseFloat3_C.ExecuteUbergraph_CF_BaseFloat3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

