// WidgetBlueprintGeneratedClass UMG_DamageIndicator.UMG_DamageIndicator_C
// Size: 0x291 (Inherited: 0x260)
struct UUMG_DamageIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Blink; // 0x268(0x08)
	struct UWidgetAnimation* FadeOut; // 0x270(0x08)
	struct UImage* Img_ProgressBar; // 0x278(0x08)
	struct UBorder* Rotator; // 0x280(0x08)
	struct AActor* Attacker; // 0x288(0x08)
	bool Deactivate; // 0x290(0x01)

	void Delayed Remove(); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.Delayed Remove // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFadeFinished(); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.OnFadeFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void TickIndicatorUpdate(); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.TickIndicatorUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Refresh(); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DamageIndicator(int32_t EntryPoint); // Function UMG_DamageIndicator.UMG_DamageIndicator_C.ExecuteUbergraph_UMG_DamageIndicator // (Final|UbergraphFunction) // @ game+0x1a38c80
};

