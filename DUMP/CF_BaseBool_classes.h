// WidgetBlueprintGeneratedClass CF_BaseBool.CF_BaseBool_C
// Size: 0x2f9 (Inherited: 0x2d9)
struct UCF_BaseBool_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_108; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_3; // 0x2f0(0x08)
	bool Checked; // 0x2f8(0x01)

	bool GetCheckboxState(); // Function CF_BaseBool.CF_BaseBool_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetTitleText(); // Function CF_BaseBool.CF_BaseBool_C.GetTitleText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetCheckboxText(); // Function CF_BaseBool.CF_BaseBool_C.GetCheckboxText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Execute(); // Function CF_BaseBool.CF_BaseBool_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCheckboxStateChanged(bool NewState); // Function CF_BaseBool.CF_BaseBool_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Toggle(); // Function CF_BaseBool.CF_BaseBool_C.Toggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function CF_BaseBool.CF_BaseBool_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Trigger CheckBoxStateChanged(bool NewState); // Function CF_BaseBool.CF_BaseBool_C.Trigger CheckBoxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function CF_BaseBool.CF_BaseBool_C.BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseBool(int32_t EntryPoint); // Function CF_BaseBool.CF_BaseBool_C.ExecuteUbergraph_CF_BaseBool // (Final|UbergraphFunction) // @ game+0x1a05090
};

