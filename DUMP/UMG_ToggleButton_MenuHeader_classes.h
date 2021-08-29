// WidgetBlueprintGeneratedClass UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C
// Size: 0xa98 (Inherited: 0x7d4)
struct UUMG_ToggleButton_MenuHeader_C : UUMG_ToggleButtonBase_C {
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d8(0x08)
	struct UTextBlock* ButtonText; // 0x7e0(0x08)
	struct UButton* ImageButton; // 0x7e8(0x08)
	struct UOverlay* Overlay_1; // 0x7f0(0x08)
	struct USizeBox* SizeBox; // 0x7f8(0x08)
	struct FButtonStyle NormalStyle; // 0x800(0x278)
	struct FSessionFlagsRowHandle HighlightFlag; // 0xa78(0x18)
	struct UUMG_QuestHelper_C* QuestHelper; // 0xa90(0x08)

	void FocusUpdated(bool bNewFocus); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetImageButton(struct UButton* ImageButton); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E817C638AC2(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E817C638AC2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ToggleButton_MenuHeader(int32_t EntryPoint); // Function UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C.ExecuteUbergraph_UMG_ToggleButton_MenuHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

