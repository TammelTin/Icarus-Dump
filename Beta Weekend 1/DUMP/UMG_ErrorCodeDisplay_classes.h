// WidgetBlueprintGeneratedClass UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_ErrorCodeDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Code; // 0x268(0x08)
	struct UTextBlock* Description; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x278(0x08)

	void ShowError(struct FErrorCodesEnum ErrorCode); // Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.ShowError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ErrorCodeDisplay(int32_t EntryPoint); // Function UMG_ErrorCodeDisplay.UMG_ErrorCodeDisplay_C.ExecuteUbergraph_UMG_ErrorCodeDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

