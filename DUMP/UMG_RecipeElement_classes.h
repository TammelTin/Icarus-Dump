// WidgetBlueprintGeneratedClass UMG_RecipeElement.UMG_RecipeElement_C
// Size: 0x3c4 (Inherited: 0x2e8)
struct UUMG_RecipeElement_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* CompleteAnimation; // 0x2f0(0x08)
	struct UImage* CornersImage; // 0x2f8(0x08)
	struct UProgressBar* CraftingProgressBar; // 0x300(0x08)
	struct UBorder* DarkenBorder; // 0x308(0x08)
	struct UOverlay* HoverCorners; // 0x310(0x08)
	struct UBorder* Icon; // 0x318(0x08)
	struct UOverlay* Overlay_2; // 0x320(0x08)
	struct UBorder* RecipeFrame; // 0x328(0x08)
	struct UImage* UnlockGlow; // 0x330(0x08)
	struct UImage* UnlockLines; // 0x338(0x08)
	struct UObject* OLDPressedImage; // 0x340(0x08)
	struct UObject* OLDHoveredImage; // 0x348(0x08)
	struct UObject* OLDNormalImage; // 0x350(0x08)
	struct FSlateColor NameColor; // 0x358(0x28)
	struct FSlateColor HighlightColor; // 0x380(0x28)
	struct UObject* OLDInvalidNormalImage; // 0x3a8(0x08)
	struct UObject* OLDInvalidHoverImage; // 0x3b0(0x08)
	struct UObject* OLDInvalidPressedImage; // 0x3b8(0x08)
	float CurrentProgress; // 0x3c0(0x04)

	struct UOverlay* GetOverlay(); // Function UMG_RecipeElement.UMG_RecipeElement_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UOverlay* GetHoverCornerWidget(); // Function UMG_RecipeElement.UMG_RecipeElement_C.GetHoverCornerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetState(bool Valid); // Function UMG_RecipeElement.UMG_RecipeElement_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseIcons(); // Function UMG_RecipeElement.UMG_RecipeElement_C.InitialiseIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // Function UMG_RecipeElement.UMG_RecipeElement_C.GetProcessorRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ValidRecipe(bool Valid); // Function UMG_RecipeElement.UMG_RecipeElement_C.ValidRecipe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetNonInteractive(); // Function UMG_RecipeElement.UMG_RecipeElement_C.SetNonInteractive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Clear(); // Function UMG_RecipeElement.UMG_RecipeElement_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FSlateBrush UpdateRecipeFrame(); // Function UMG_RecipeElement.UMG_RecipeElement_C.UpdateRecipeFrame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Finished_1A93246B4B7271E4B7205CB7080352F3(); // Function UMG_RecipeElement.UMG_RecipeElement_C.Finished_1A93246B4B7271E4B7205CB7080352F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void SetProgress(float Percent, struct FProcessorRecipesRowHandle CurrentQueueRecipe, bool QueueEmpty); // Function UMG_RecipeElement.UMG_RecipeElement_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BP_OnEntryReleased(); // Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RecipeElement(int32_t EntryPoint); // Function UMG_RecipeElement.UMG_RecipeElement_C.ExecuteUbergraph_UMG_RecipeElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

