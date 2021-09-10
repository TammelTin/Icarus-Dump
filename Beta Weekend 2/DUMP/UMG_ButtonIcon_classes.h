// WidgetBlueprintGeneratedClass UMG_ButtonIcon.UMG_ButtonIcon_C
// Size: 0x360 (Inherited: 0x260)
struct UUMG_ButtonIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
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
	struct UTexture2D* IconImage; // 0x358(0x08)

	void SetDisabled(bool NewParam); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.Get_ButtonText_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetTextStyle(bool Bold, bool Italic); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetButtonImages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTextColour(struct FLinearColor Colour); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.UpdateTextColour // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTextSize(int32_t TextSize); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetText(struct FText Text); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReInitialise(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.ReInitialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ButtonIcon(int32_t EntryPoint); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.ExecuteUbergraph_UMG_ButtonIcon // (Final|UbergraphFunction) // @ game+0x1a38c80
	void Clicked__DelegateSignature(); // Function UMG_ButtonIcon.UMG_ButtonIcon_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

