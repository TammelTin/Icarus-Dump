// WidgetBlueprintGeneratedClass CF_BaseFloat.CF_BaseFloat_C
// Size: 0x2fd (Inherited: 0x2d9)
struct UCF_BaseFloat_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct USpinBox* Integer; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)
	float Number; // 0x2f8(0x04)
	bool Percentage; // 0x2fc(0x01)

	float GetFloatValue(); // Function CF_BaseFloat.CF_BaseFloat_C.GetFloatValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // Function CF_BaseFloat.CF_BaseFloat_C.BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseFloat.CF_BaseFloat_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseFloat.CF_BaseFloat_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseFloat(int32_t EntryPoint); // Function CF_BaseFloat.CF_BaseFloat_C.ExecuteUbergraph_CF_BaseFloat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

