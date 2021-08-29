// WidgetBlueprintGeneratedClass UMG_CloseButton_3.UMG_CloseButton_2_C
// Size: 0x359 (Inherited: 0x260)
struct UUMG_CloseButton_2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* CloseIcon; // 0x268(0x08)
	struct UButton* ImageButton; // 0x270(0x08)
	struct USizeBox* SizeBox; // 0x278(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x280(0x10)
	struct UFont* TextFont; // 0x290(0x08)
	struct FSlateColor Colour_Normal; // 0x298(0x28)
	struct FSlateColor Colour_Hovered; // 0x2c0(0x28)
	struct FSlateColor Colour_Disabled; // 0x2e8(0x28)
	struct FSlateColor Colour_Pressed; // 0x310(0x28)
	struct UMaterialInstance* Image_Normal; // 0x338(0x08)
	struct UMaterialInstance* Image_Pressed; // 0x340(0x08)
	struct UMaterialInstance* Image_Hovered; // 0x348(0x08)
	struct UMaterialInstance* Image_Disabled; // 0x350(0x08)
	bool bShouldHidePanelDisplay; // 0x358(0x01)

	void SetDisabled(bool NewParam); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.Get_ButtonText_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetTextStyle(bool Bold, bool Italic); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.SetButtonImages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTextColour(struct FLinearColor Colour); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.UpdateTextColour // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTextSize(int32_t TextSize); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.SetTextSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetText(struct FText Text); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CloseButton_3(int32_t EntryPoint); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.ExecuteUbergraph_UMG_CloseButton_3 // (Final|UbergraphFunction) // @ game+0x1a05090
	void Clicked__DelegateSignature(); // Function UMG_CloseButton_3.UMG_CloseButton_2_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

