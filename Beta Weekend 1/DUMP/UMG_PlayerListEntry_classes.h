// WidgetBlueprintGeneratedClass UMG_PlayerListEntry.UMG_PlayerListEntry_C
// Size: 0xc91 (Inherited: 0x260)
struct UUMG_PlayerListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* CharacterEntry; // 0x268(0x08)
	struct UTextBlock* CharacterName; // 0x270(0x08)
	struct UTextBlock* CharacterStatus; // 0x278(0x08)
	struct UImage* Image_96; // 0x280(0x08)
	struct UHorizontalBox* RatingButtons; // 0x288(0x08)
	struct UBorder* SettledState; // 0x290(0x08)
	struct UButton* ThumbsDown; // 0x298(0x08)
	struct UButton* ThumbsUp; // 0x2a0(0x08)
	struct UBorder* UnSettledState; // 0x2a8(0x08)
	struct FButtonStyle Button_Up_Default; // 0x2b0(0x278)
	struct FButtonStyle Button_Up_Selected; // 0x528(0x278)
	struct FButtonStyle Button_Down_Default; // 0x7a0(0x278)
	struct FButtonStyle Button_Down_Selected; // 0xa18(0x278)
	bool CanRate; // 0xc90(0x01)

	void ShowRatings(); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ShowRatings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Rating Button Style(bool Liked); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.Set Rating Button Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsSettled(bool Settled); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.IsSettled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PlayerListEntry(int32_t EntryPoint); // Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ExecuteUbergraph_UMG_PlayerListEntry // (Final|UbergraphFunction) // @ game+0x1a05090
};

