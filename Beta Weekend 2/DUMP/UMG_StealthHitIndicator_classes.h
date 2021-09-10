// WidgetBlueprintGeneratedClass UMG_StealthHitIndicator.UMG_StealthHitIndicator_C
// Size: 0x279 (Inherited: 0x260)
struct UUMG_StealthHitIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Pulse; // 0x268(0x08)
	struct UTextBlock* StealthDamageText; // 0x270(0x08)
	enum class EStealthAttackType StealthType; // 0x278(0x01)

	void OnAnimComplete(); // Function UMG_StealthHitIndicator.UMG_StealthHitIndicator_C.OnAnimComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_StealthHitIndicator.UMG_StealthHitIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_StealthHitIndicator(int32_t EntryPoint); // Function UMG_StealthHitIndicator.UMG_StealthHitIndicator_C.ExecuteUbergraph_UMG_StealthHitIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

