// WidgetBlueprintGeneratedClass UMG_OutOfBounds.UMG_OutOfBounds_C
// Size: 0x284 (Inherited: 0x260)
struct UUMG_OutOfBounds_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UBorder* StaticImage; // 0x270(0x08)
	struct UTextBlock* TimerText; // 0x278(0x08)
	float RemainingTime; // 0x280(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_OutOfBounds.UMG_OutOfBounds_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PlayFadeIn(); // Function UMG_OutOfBounds.UMG_OutOfBounds_C.PlayFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_OutOfBounds(int32_t EntryPoint); // Function UMG_OutOfBounds.UMG_OutOfBounds_C.ExecuteUbergraph_UMG_OutOfBounds // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

