// WidgetBlueprintGeneratedClass UMG_ButtonBase.UMG_ButtonBase_C
// Size: 0x458 (Inherited: 0x280)
struct UUMG_ButtonBase_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x288(0x10)
	struct UFont* TextFont; // 0x298(0x08)
	int32_t Text_Size; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FText Text; // 0x2a8(0x18)
	bool Bold; // 0x2c0(0x01)
	bool Italic; // 0x2c1(0x01)
	bool Uppercase; // 0x2c2(0x01)
	char pad_2C3[0x5]; // 0x2c3(0x05)
	struct FSlateColor Text_Normal; // 0x2c8(0x28)
	struct FSlateColor Text_Hovered; // 0x2f0(0x28)
	struct FSlateColor Text_Pressed; // 0x318(0x28)
	struct FSlateColor Text_Disabled; // 0x340(0x28)
	struct UMaterialInstance* Image_Normal; // 0x368(0x08)
	struct UMaterialInstance* Image_Hovered; // 0x370(0x08)
	struct UMaterialInstance* Image_Pressed; // 0x378(0x08)
	struct UMaterialInstance* Image_Disabled; // 0x380(0x08)
	bool Orange; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FSlateColor Text_Orange_Normal; // 0x390(0x28)
	struct FSlateColor Text_Orange_Hovered; // 0x3b8(0x28)
	struct FSlateColor Text_Orange_Pressed; // 0x3e0(0x28)
	struct FSlateColor Text_Orange_Disabled; // 0x408(0x28)
	struct UTextBlock* ButtonTextRef; // 0x430(0x08)
	struct UButton* ImageButtonRef; // 0x438(0x08)
	struct UFMODEvent* Sound_OnClick; // 0x440(0x08)
	struct FLinearColor CachedTextColor; // 0x448(0x10)

	void Update Visuals(); // Function UMG_ButtonBase.UMG_ButtonBase_C.Update Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetImageButton(struct UButton* ImageButton); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnClicked(); // Function UMG_ButtonBase.UMG_ButtonBase_C.OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnReleased(); // Function UMG_ButtonBase.UMG_ButtonBase_C.OnReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetDisabledTextColour(struct FSlateColor Colour); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetDisabledTextColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetPressedTextColour(struct FSlateColor Colour); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetPressedTextColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetHoveredTextColour(struct FSlateColor Colour); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetHoveredTextColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetNormalTextColour(struct FSlateColor Colour); // Function UMG_ButtonBase.UMG_ButtonBase_C.GetNormalTextColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnPressed(); // Function UMG_ButtonBase.UMG_ButtonBase_C.OnPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnUnhover(); // Function UMG_ButtonBase.UMG_ButtonBase_C.OnUnhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnHover(); // Function UMG_ButtonBase.UMG_ButtonBase_C.OnHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTextColour(); // Function UMG_ButtonBase.UMG_ButtonBase_C.UpdateTextColour // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTextColours(struct FSlateColor Normal, struct FSlateColor Hover, struct FSlateColor Pressed, struct FSlateColor Disabled); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextColours // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsDisabled(bool Disabled); // Function UMG_ButtonBase.UMG_ButtonBase_C.IsDisabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetDisabled(bool Disabled); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTextStyle(bool Bold, bool Italic); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetButtonImages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTextSize(int32_t TextSize); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetText(struct FText Text); // Function UMG_ButtonBase.UMG_ButtonBase_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_ButtonBase.UMG_ButtonBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ButtonBase.UMG_ButtonBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ButtonBase(int32_t EntryPoint); // Function UMG_ButtonBase.UMG_ButtonBase_C.ExecuteUbergraph_UMG_ButtonBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ButtonBase.UMG_ButtonBase_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

