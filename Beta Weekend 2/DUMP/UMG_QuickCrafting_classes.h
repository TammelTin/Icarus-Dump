// WidgetBlueprintGeneratedClass UMG_QuickCrafting.UMG_QuickCrafting_C
// Size: 0x289 (Inherited: 0x260)
struct UUMG_QuickCrafting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URetainerBox* RetainerBox_1; // 0x268(0x08)
	struct UUMG_CraftingProgressbar_C* UMG_CraftingProgressbar; // 0x270(0x08)
	struct UUMG_RecipeElement_C* UMG_RecipeElement; // 0x278(0x08)
	struct UCanvasPanel* VisibleBox; // 0x280(0x08)
	bool Initialised; // 0x288(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_QuickCrafting.UMG_QuickCrafting_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessingItemUpdated(struct FProcessingItem Item); // Function UMG_QuickCrafting.UMG_QuickCrafting_C.OnProcessingItemUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_QuickCrafting(int32_t EntryPoint); // Function UMG_QuickCrafting.UMG_QuickCrafting_C.ExecuteUbergraph_UMG_QuickCrafting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

