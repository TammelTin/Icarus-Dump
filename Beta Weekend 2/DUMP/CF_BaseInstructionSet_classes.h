// WidgetBlueprintGeneratedClass CF_BaseInstructionSet.CF_BaseInstructionSet_C
// Size: 0x320 (Inherited: 0x2d9)
struct UCF_BaseInstructionSet_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UVerticalBox* InstructionBox; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)
	struct TArray<struct FString> Instructions; // 0x2f8(0x10)
	struct UCheatOverlayBase* Overlay; // 0x308(0x08)
	struct TArray<struct FString> RawInstructions; // 0x310(0x10)

	void UpdateArgs(struct TArray<struct FString> InArguments); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.UpdateArgs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Set Instructions(struct TArray<struct FString> Instructions); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.Set Instructions // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Execute(); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_BaseInstructionSet(int32_t EntryPoint); // Function CF_BaseInstructionSet.CF_BaseInstructionSet_C.ExecuteUbergraph_CF_BaseInstructionSet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

