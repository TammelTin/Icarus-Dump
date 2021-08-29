// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C
// Size: 0x341 (Inherited: 0x308)
struct UUMG_RecipeToolTipElement_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UBorder* Border_2; // 0x310(0x08)
	struct UTextBlock* Name; // 0x318(0x08)
	struct UBorder* NameBorder; // 0x320(0x08)
	struct UImage* Picture; // 0x328(0x08)
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; // 0x330(0x08)
	bool ShowName; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float ElementPadding; // 0x33c(0x04)
	bool Output; // 0x340(0x01)

	bool IsOutput(); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.IsOutput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CurrentAmountUpdated(); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.CurrentAmountUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.UpdateBackgroundImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RecipeToolTipElement(int32_t EntryPoint); // Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.ExecuteUbergraph_UMG_RecipeToolTipElement // (Final|UbergraphFunction) // @ game+0x1a05090
};

