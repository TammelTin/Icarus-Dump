// WidgetBlueprintGeneratedClass UMG_CharacterTimeline.UMG_CharacterTimeline_C
// Size: 0x2f8 (Inherited: 0x260)
struct UUMG_CharacterTimeline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x268(0x08)
	struct UImage* CurrentBadge; // 0x270(0x08)
	struct UImage* divider2; // 0x278(0x08)
	struct UTextBlock* ExpText; // 0x280(0x08)
	struct UTextBlock* LevelText; // 0x288(0x08)
	struct UHorizontalBox* RankContainer; // 0x290(0x08)
	struct UUMG_TimelineRank_C* UMG_TimelineRank; // 0x298(0x08)
	struct UProgressBar* YourExp; // 0x2a0(0x08)
	int32_t Player Level; // 0x2a8(0x04)
	int32_t NextLevelExp; // 0x2ac(0x04)
	int32_t CurrentExp; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate BackClicked; // 0x2b8(0x10)
	bool First; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TSoftObjectPtr<UTexture2D> ImageToSet; // 0x2d0(0x28)

	void OnLoaded_908D25584B0A4299D954C0BA196BC8C4(struct UObject* Loaded); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.OnLoaded_908D25584B0A4299D954C0BA196BC8C4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterTimeline(int32_t EntryPoint); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.ExecuteUbergraph_UMG_CharacterTimeline // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void BackClicked__DelegateSignature(); // Function UMG_CharacterTimeline.UMG_CharacterTimeline_C.BackClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

