// WidgetBlueprintGeneratedClass UMG_RecipeElementTooltip.UMG_RecipeElementTooltip_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_RecipeElementTooltip_C : UUserWidget {
	struct UTextBlock* Name; // 0x260(0x08)
	struct UTextBlock* State; // 0x268(0x08)
	struct UUMG_RecipeInput_C* UMG_RecipeInput; // 0x270(0x08)
	struct AActor* LinkedActor; // 0x278(0x08)

	void UpdateHolographicPreview(struct FItemData Item, enum class ProcessorPreview PreviewState, enum class EIcarusResourceType ResourceType, int32_t CurrentAmount, int32_t RecipeMultiplier, bool Output); // Function UMG_RecipeElementTooltip.UMG_RecipeElementTooltip_C.UpdateHolographicPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

