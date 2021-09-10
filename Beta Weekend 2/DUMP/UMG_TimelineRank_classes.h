// WidgetBlueprintGeneratedClass UMG_TimelineRank.UMG_TimelineRank_C
// Size: 0x3dc (Inherited: 0x260)
struct UUMG_TimelineRank_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ContentDivider; // 0x268(0x08)
	struct URetainerBox* Desaturater; // 0x270(0x08)
	struct UBorder* DividerBorder; // 0x278(0x08)
	struct UBorder* Gradient; // 0x280(0x08)
	struct UTextBlock* Level; // 0x288(0x08)
	struct UBackgroundBlur* Locked; // 0x290(0x08)
	struct UBorder* LockedBorder; // 0x298(0x08)
	struct UImage* LockedIcon; // 0x2a0(0x08)
	struct UBorder* MainContentBorder; // 0x2a8(0x08)
	struct UImage* ProgressionArrow; // 0x2b0(0x08)
	struct UImage* tickimage; // 0x2b8(0x08)
	struct UBorder* UnlockedBox; // 0x2c0(0x08)
	struct UImage* UnlockRankIcon; // 0x2c8(0x08)
	struct UVerticalBox* Unlocks; // 0x2d0(0x08)
	bool IsUnlocked; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FSlateColor UnlockedGreen; // 0x2e0(0x28)
	struct FSlateColor LockedGrey; // 0x308(0x28)
	struct FSlateColor UnlockedOrange; // 0x330(0x28)
	bool FeatureLocked; // 0x358(0x01)
	bool IsFirst; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	struct FCharacterTimelineRowHandle Character Rank; // 0x35c(0x18)
	char pad_374[0x4]; // 0x374(0x04)
	struct FCharacterTimeline Character Timeline; // 0x378(0x60)
	int32_t Player Level; // 0x3d8(0x04)

	void Reset(); // Function UMG_TimelineRank.UMG_TimelineRank_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_757F0809412B340B54DE28B479DF1535(struct UObject* Loaded); // Function UMG_TimelineRank.UMG_TimelineRank_C.OnLoaded_757F0809412B340B54DE28B479DF1535 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_TimelineRank.UMG_TimelineRank_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_TimelineRank.UMG_TimelineRank_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TimelineRank(int32_t EntryPoint); // Function UMG_TimelineRank.UMG_TimelineRank_C.ExecuteUbergraph_UMG_TimelineRank // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

