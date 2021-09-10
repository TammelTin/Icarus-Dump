// WidgetBlueprintGeneratedClass UMG_TopLevelButton.UMG_TopLevelButton_C
// Size: 0x7f8 (Inherited: 0x458)
struct UUMG_TopLevelButton_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* CornerHovers; // 0x460(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x468(0x08)
	struct UTextBlock* ButtonText; // 0x470(0x08)
	struct UImage* CategoryImage; // 0x478(0x08)
	struct UTextBlock* DescriptionText; // 0x480(0x08)
	struct USizeBox* DescriptionTextBox; // 0x488(0x08)
	struct UOverlay* HoverCorners; // 0x490(0x08)
	struct UImage* Image_2; // 0x498(0x08)
	struct UImage* Image_3; // 0x4a0(0x08)
	struct UImage* Image_4; // 0x4a8(0x08)
	struct UImage* Image_49; // 0x4b0(0x08)
	struct UButton* ImageButton; // 0x4b8(0x08)
	struct USizeBox* MainSizeBox; // 0x4c0(0x08)
	struct UBorder* OuterFrame; // 0x4c8(0x08)
	struct FButtonStyle NormalStyle; // 0x4d0(0x278)
	float Width; // 0x748(0x04)
	char pad_74C[0x4]; // 0x74c(0x04)
	struct FSlateBrush CategoryImageVariable; // 0x750(0x88)
	bool IsOrange; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
	struct FText SetDescriptionText; // 0x7e0(0x18)

	void OrangeButton(); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.OrangeButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusUpdated(bool bNewFocus); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetImageButton(struct UButton* ImageButton); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TopLevelButton(int32_t EntryPoint); // Function UMG_TopLevelButton.UMG_TopLevelButton_C.ExecuteUbergraph_UMG_TopLevelButton // (Final|UbergraphFunction) // @ game+0x1a38c80
};

