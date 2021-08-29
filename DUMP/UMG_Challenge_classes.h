// WidgetBlueprintGeneratedClass UMG_Challenge.UMG_Challenge_C
// Size: 0x368 (Inherited: 0x260)
struct UUMG_Challenge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BaseBackground; // 0x268(0x08)
	struct UTextBlock* ChallengeName; // 0x270(0x08)
	struct UTextBlock* DescriptionText; // 0x278(0x08)
	struct UImage* Gradient; // 0x280(0x08)
	struct UBorder* OuterFrame; // 0x288(0x08)
	struct UTextBlock* ProgressText; // 0x290(0x08)
	struct UBorder* RewardBox; // 0x298(0x08)
	struct UTextBlock* RewardText; // 0x2a0(0x08)
	struct UUMG_ChallengeProgressbar_C* UMG_ChallengeProgressbar; // 0x2a8(0x08)
	bool Complete; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FChallengesRowHandle Challenge; // 0x2b4(0x18)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FSlateColor CompletedTitle_Colour; // 0x2d0(0x28)
	struct FF_ChallengeState Base; // 0x2f8(0x70)

	void ChallengeComplete(struct FF_ChallengeState NewParam); // Function UMG_Challenge.UMG_Challenge_C.ChallengeComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetComplete(); // Function UMG_Challenge.UMG_Challenge_C.SetComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Challenge.UMG_Challenge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Challenge(int32_t EntryPoint); // Function UMG_Challenge.UMG_Challenge_C.ExecuteUbergraph_UMG_Challenge // (Final|UbergraphFunction) // @ game+0x1a05090
};

