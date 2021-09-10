// WidgetBlueprintGeneratedClass UMG_CraftingPreview.UMG_CraftingPreview_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_CraftingPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* RecipeName; // 0x268(0x08)
	struct UUMG_RecipeElement_C* UMG_RecipeElement; // 0x270(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x278(0x10)

	void Recipe(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Recipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetRecipe(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.GetRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetRecipe(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.SetRecipe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void RecipeClicked(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.RecipeClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CraftingPreview(int32_t EntryPoint); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.ExecuteUbergraph_UMG_CraftingPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Clicked__DelegateSignature(); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

