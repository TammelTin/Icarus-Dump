// WidgetBlueprintGeneratedClass CF_BaseString.CF_BaseString_C
// Size: 0x2f8 (Inherited: 0x2d9)
struct UCF_BaseString_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UEditableText* Text; // 0x2e8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f0(0x08)

	float GetFloatValue(); // Function CF_BaseString.CF_BaseString_C.GetFloatValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdatePreview(struct TArray<struct FString> Args); // Function CF_BaseString.CF_BaseString_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_BaseString.CF_BaseString_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_BaseString(int32_t EntryPoint); // Function CF_BaseString.CF_BaseString_C.ExecuteUbergraph_CF_BaseString // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

