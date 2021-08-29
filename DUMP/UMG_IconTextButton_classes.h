// WidgetBlueprintGeneratedClass UMG_IconTextButton.UMG_IconTextButton_C
// Size: 0x450 (Inherited: 0x260)
struct UUMG_IconTextButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ButtonText; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UButton* ImageButton; // 0x278(0x08)
	struct USizeBox* SizeBox; // 0x280(0x08)
	struct USpacer* Spacer_187; // 0x288(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x290(0x10)
	struct UFont* TextFont; // 0x2a0(0x08)
	int32_t Text_Size; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FText Text; // 0x2b0(0x18)
	bool Bold; // 0x2c8(0x01)
	bool Italic; // 0x2c9(0x01)
	bool Uppercase; // 0x2ca(0x01)
	char pad_2CB[0x5]; // 0x2cb(0x05)
	struct FSlateColor Text_Normal; // 0x2d0(0x28)
	struct FSlateColor Text_Hovered; // 0x2f8(0x28)
	struct FSlateColor Text_Disabled; // 0x320(0x28)
	struct FSlateColor Text_Pressed; // 0x348(0x28)
	struct UMaterialInstance* Image_Normal; // 0x370(0x08)
	struct UMaterialInstance* Image_Pressed; // 0x378(0x08)
	struct UMaterialInstance* Image_Hovered; // 0x380(0x08)
	struct UMaterialInstance* Image_Disabled; // 0x388(0x08)
	bool Orange; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FSlateColor Text_Orange_Disabled; // 0x398(0x28)
	struct FSlateColor Text_Orange_Pressed; // 0x3c0(0x28)
	struct FSlateColor Text_Orange_Normal; // 0x3e8(0x28)
	struct FSlateColor Text_Orange_Hovered; // 0x410(0x28)
	struct UTexture2D* Button Icon; // 0x438(0x08)
	struct UFMODEvent* Sound_OnClicked; // 0x440(0x08)
	struct UFMODEvent* Sound_Hover; // 0x448(0x08)

	void SetDisabled(bool NewParam); // Function UMG_IconTextButton.UMG_IconTextButton_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // Function UMG_IconTextButton.UMG_IconTextButton_C.Get_ButtonText_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetTextStyle(bool Bold, bool Italic); // Function UMG_IconTextButton.UMG_IconTextButton_C.SetTextStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // Function UMG_IconTextButton.UMG_IconTextButton_C.SetButtonImages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTextColour(struct FLinearColor Colour); // Function UMG_IconTextButton.UMG_IconTextButton_C.UpdateTextColour // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTextSize(int32_t TextSize); // Function UMG_IconTextButton.UMG_IconTextButton_C.SetTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetText(struct FText Text); // Function UMG_IconTextButton.UMG_IconTextButton_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_IconTextButton.UMG_IconTextButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_IconTextButton.UMG_IconTextButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_IconTextButton.UMG_IconTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_IconTextButton.UMG_IconTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateSpacer(); // Function UMG_IconTextButton.UMG_IconTextButton_C.UpdateSpacer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_IconTextButton(int32_t EntryPoint); // Function UMG_IconTextButton.UMG_IconTextButton_C.ExecuteUbergraph_UMG_IconTextButton // (Final|UbergraphFunction) // @ game+0x1a05090
	void Clicked__DelegateSignature(); // Function UMG_IconTextButton.UMG_IconTextButton_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

