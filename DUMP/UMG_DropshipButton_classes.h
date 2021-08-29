// WidgetBlueprintGeneratedClass UMG_DropshipButton.UMG_DropshipButton_C
// Size: 0x7e0 (Inherited: 0x458)
struct UUMG_DropshipButton_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UTextBlock* ButtonText; // 0x460(0x08)
	struct UButton* ImageButton; // 0x468(0x08)
	struct UTextBlock* IUNUSE; // 0x470(0x08)
	struct UTextBlock* Loadout; // 0x478(0x08)
	struct UBorder* SelectedBorder; // 0x480(0x08)
	struct FButtonStyle NormalStyle; // 0x488(0x278)
	int32_t DropshipIndex; // 0x700(0x04)
	bool InUse; // 0x704(0x01)
	bool InLoadout; // 0x705(0x01)
	bool IsSelected; // 0x706(0x01)
	char pad_707[0x1]; // 0x707(0x01)
	struct FSlateColor TextColour_Selected; // 0x708(0x28)
	struct FSlateColor TextColour_Base; // 0x730(0x28)
	struct FSlateBrush Normal; // 0x758(0x88)

	void GetNormalTextColour(struct FSlateColor Colour); // Function UMG_DropshipButton.UMG_DropshipButton_C.GetNormalTextColour // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetSelected(bool Selected); // Function UMG_DropshipButton.UMG_DropshipButton_C.SetSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FocusUpdated(bool bNewFocus); // Function UMG_DropshipButton.UMG_DropshipButton_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_DropshipButton.UMG_DropshipButton_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetImageButton(struct UButton* ImageButton); // Function UMG_DropshipButton.UMG_DropshipButton_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_DropshipButton.UMG_DropshipButton_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Construct(); // Function UMG_DropshipButton.UMG_DropshipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_DropshipButton(int32_t EntryPoint); // Function UMG_DropshipButton.UMG_DropshipButton_C.ExecuteUbergraph_UMG_DropshipButton // (Final|UbergraphFunction) // @ game+0x1a05090
};

