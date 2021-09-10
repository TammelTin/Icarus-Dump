// WidgetBlueprintGeneratedClass UMG_RecipeElementMulti.UMG_RecipeElementMulti_C
// Size: 0x368 (Inherited: 0x2e8)
struct UUMG_RecipeElementMulti_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UBorder* BackFill; // 0x2f0(0x08)
	struct UImage* CornersImage; // 0x2f8(0x08)
	struct UBorder* DarkenBorder; // 0x300(0x08)
	struct UOverlay* HoverCorners; // 0x308(0x08)
	struct UBorder* LeftFill; // 0x310(0x08)
	struct UHorizontalBox* LeftSide; // 0x318(0x08)
	struct UImage* MidImage; // 0x320(0x08)
	struct UOverlay* Overlay_3; // 0x328(0x08)
	struct UHorizontalBox* RightSide; // 0x330(0x08)
	struct UObject* OLDNormalImage; // 0x338(0x08)
	struct UObject* OLDHoveredImage; // 0x340(0x08)
	struct UObject* OLDPressedImage; // 0x348(0x08)
	struct UObject* OLDInvalidNormalImage; // 0x350(0x08)
	struct UObject* OLDInvalidHoverImage; // 0x358(0x08)
	struct UObject* OLDInvalidPressedImage; // 0x360(0x08)

	struct UOverlay* GetOverlay(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct UOverlay* GetHoverCornerWidget(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetHoverCornerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetState(bool Valid); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseIcons(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.InitialiseIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetProcessorRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetResourceIcon(enum class EIcarusResourceType Type, struct UTexture2D* Icon); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetResourceIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FSlateBrush UpdateRecipeFrame(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.UpdateRecipeFrame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void BP_OnEntryReleased(); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_RecipeElementMulti(int32_t EntryPoint); // Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.ExecuteUbergraph_UMG_RecipeElementMulti // (Final|UbergraphFunction) // @ game+0x1a38c80
};

