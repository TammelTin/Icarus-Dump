// WidgetBlueprintGeneratedClass UMG_RecipeElementBase.UMG_RecipeElementBase_C
// Size: 0x308 (Inherited: 0x260)
struct UUMG_RecipeElementBase_C : UUserWidget {
	struct FItemData Item; // 0x260(0x80)
	int32_t CurrentAmount; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct AActor* LinkedActor; // 0x2e8(0x08)
	struct UUMG_RecipeElementTooltip_C* HolographicPreview; // 0x2f0(0x08)
	bool DisableTooltip; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	int32_t Multiplier; // 0x2fc(0x04)
	enum class EIcarusResourceType ResourceType; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t RequiredResourceAmount; // 0x304(0x04)

	bool IsOutput(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsOutput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool IsResource(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsResource // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CurrentAmountUpdated(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.CurrentAmountUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCurrentAmount(int32_t CurrentAmount); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.SetCurrentAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateStateRecipe(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateStateRecipe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

