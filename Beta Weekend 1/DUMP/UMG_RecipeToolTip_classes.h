// WidgetBlueprintGeneratedClass UMG_RecipeToolTip.UMG_RecipeToolTip_C
// Size: 0x2e0 (Inherited: 0x260)
struct UUMG_RecipeToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_177; // 0x268(0x08)
	struct UTextBlock* Name; // 0x270(0x08)
	struct UBorder* NameBorder; // 0x278(0x08)
	struct USpacer* Spacer_396; // 0x280(0x08)
	struct UTextBlock* TextBlock_217; // 0x288(0x08)
	struct FProcessingItem Recipe; // 0x290(0x28)
	struct AActor* LinkedActor; // 0x2b8(0x08)
	struct TArray<struct UUMG_RecipeToolTipElement_C*> ToolTipElements; // 0x2c0(0x10)
	bool UpdateStateRecipe; // 0x2d0(0x01)
	bool ShowOutput; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct AActor* CraftingActor; // 0x2d8(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrigger(); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.UpdateTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RecipeToolTip(int32_t EntryPoint); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.ExecuteUbergraph_UMG_RecipeToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

