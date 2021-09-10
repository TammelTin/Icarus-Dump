// WidgetBlueprintGeneratedClass UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C
// Size: 0x318 (Inherited: 0x2e8)
struct UUMG_RecipeElementNonInteractive_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UHorizontalBox* LeftSide; // 0x2f0(0x08)
	struct UBorder* Output; // 0x2f8(0x08)
	struct UOverlay* Overlay_2; // 0x300(0x08)
	struct UImage* RecipeBase; // 0x308(0x08)
	struct UBorder* RecipeFrame; // 0x310(0x08)

	struct UOverlay* GetOverlay(); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseIcons(); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.InitialiseIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetProcessorRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetResourceIcon(struct UTexture2D* Icon); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetResourceIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FSlateBrush UpdateRecipeFrame(); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.UpdateRecipeFrame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void BP_OnEntryReleased(); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_RecipeElementNonInteractive(int32_t EntryPoint); // Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.ExecuteUbergraph_UMG_RecipeElementNonInteractive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

