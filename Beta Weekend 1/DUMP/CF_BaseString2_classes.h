// WidgetBlueprintGeneratedClass CF_BaseString2.CF_BaseString2_C
// Size: 0x300 (Inherited: 0x2d9)
struct UCF_BaseString2_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UEditableText* Key; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)
	struct UEditableText* Value; // 0x2f8(0x08)

	float GetFloatValue(); // Function CF_BaseString2.CF_BaseString2_C.GetFloatValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseString2.CF_BaseString2_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseString2.CF_BaseString2_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_BaseString2(int32_t EntryPoint); // Function CF_BaseString2.CF_BaseString2_C.ExecuteUbergraph_CF_BaseString2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

