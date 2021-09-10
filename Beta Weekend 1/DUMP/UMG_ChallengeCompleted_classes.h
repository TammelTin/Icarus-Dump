// WidgetBlueprintGeneratedClass UMG_ChallengeCompleted.UMG_ChallengeCompleted_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_ChallengeCompleted_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Show; // 0x268(0x08)
	struct UTextBlock* ChallengeName; // 0x270(0x08)
	struct UBorder* Container; // 0x278(0x08)
	struct UTextBlock* Description; // 0x280(0x08)

	void Construct(); // Function UMG_ChallengeCompleted.UMG_ChallengeCompleted_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ChallengeCompleted.UMG_ChallengeCompleted_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnChallengeComplete(struct FChallengesRowHandle Challenge); // Function UMG_ChallengeCompleted.UMG_ChallengeCompleted_C.OnChallengeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ChallengeCompleted(int32_t EntryPoint); // Function UMG_ChallengeCompleted.UMG_ChallengeCompleted_C.ExecuteUbergraph_UMG_ChallengeCompleted // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

