// WidgetBlueprintGeneratedClass CF_AutomationInstructionSet.CF_AutomationInstructionSet_C
// Size: 0x340 (Inherited: 0x2d9)
struct UCF_AutomationInstructionSet_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UVerticalBox* InstructionBox; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)
	struct TArray<struct FString> Instructions; // 0x2f8(0x10)
	struct UCheatOverlayBase* Overlay; // 0x308(0x08)
	struct TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder_1; // 0x310(0x28)
	struct FName ScriptName; // 0x338(0x08)

	void Set Instructions(struct TArray<struct FString> Instructions); // Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.Set Instructions // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Execute(); // Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_AutomationInstructionSet(int32_t EntryPoint); // Function CF_AutomationInstructionSet.CF_AutomationInstructionSet_C.ExecuteUbergraph_CF_AutomationInstructionSet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

