// WidgetBlueprintGeneratedClass UMG_ConfirmationPopup.UMG_ConfirmationPopup_C
// Size: 0x2d8 (Inherited: 0x288)
struct UUMG_ConfirmationPopup_C : UConfirmationPopupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* Description; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_97; // 0x2b0(0x08)
	struct UUMG_IconTextButton_C* OptionAButton; // 0x2b8(0x08)
	struct UUMG_IconTextButton_C* OptionBButton; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnAnyItemSelected; // 0x2c8(0x10)

	void OnObjectSelectionComplete(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.OnObjectSelectionComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CallCancel(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.CallCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void SetPromptDetails(struct FConfirmationPopupDetails ConfirmationPopupDetails); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.SetPromptDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ConfirmationPopup(int32_t EntryPoint); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.ExecuteUbergraph_UMG_ConfirmationPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnAnyItemSelected__DelegateSignature(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.OnAnyItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

