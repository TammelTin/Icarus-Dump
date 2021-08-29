// WidgetBlueprintGeneratedClass UMG_BasicButton_3.UMG_BasicButton_2_C
// Size: 0x730 (Inherited: 0x458)
struct UUMG_BasicButton_2_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UBorder* AdditionalBorder; // 0x460(0x08)
	struct UNamedSlot* AdditionalContent; // 0x468(0x08)
	struct UTextBlock* ButtonText; // 0x470(0x08)
	struct UOverlay* HighlightFlagOverlay; // 0x478(0x08)
	struct UButton* ImageButton; // 0x480(0x08)
	struct USizeBox* SizeBox; // 0x488(0x08)
	struct FButtonStyle NormalStyle; // 0x490(0x278)
	float Width; // 0x708(0x04)
	enum class ETextJustify Justification; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct FSessionFlagsRowHandle HighlightFlag; // 0x710(0x18)
	struct UUMG_QuestHelper_C* QuestHelper; // 0x728(0x08)

	void UpdateTextColour(); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.UpdateTextColour // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnHover(); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.OnHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FocusUpdated(bool bNewFocus); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.FocusUpdated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetImageButton(struct UButton* ImageButton); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.GetImageButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetButtonText(struct UTextBlock* ButtonText); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.GetButtonText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E81CAC15E2B(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E81CAC15E2B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_BasicButton_3(int32_t EntryPoint); // Function UMG_BasicButton_3.UMG_BasicButton_2_C.ExecuteUbergraph_UMG_BasicButton_3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

