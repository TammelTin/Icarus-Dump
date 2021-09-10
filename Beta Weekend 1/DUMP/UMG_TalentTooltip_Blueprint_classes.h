// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C
// Size: 0x331 (Inherited: 0x280)
struct UUMG_TalentTooltip_Blueprint_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* ActionText; // 0x288(0x08)
	struct UImage* Base; // 0x290(0x08)
	struct UImage* BenchIcons; // 0x298(0x08)
	struct UTextBlock* BlueprintDescription; // 0x2a0(0x08)
	struct UTextBlock* BlueprintName; // 0x2a8(0x08)
	struct UImage* BottomGlow; // 0x2b0(0x08)
	struct UVerticalBox* ClickToUnlockSection; // 0x2b8(0x08)
	struct UTextBlock* CostAmount; // 0x2c0(0x08)
	struct UOverlay* CostSection; // 0x2c8(0x08)
	struct UOverlay* CraftedAtOverlay; // 0x2d0(0x08)
	struct UTextBlock* CraftingLocation; // 0x2d8(0x08)
	struct UHorizontalBox* HorizontalBox_177; // 0x2e0(0x08)
	struct USizeBox* RequiredMats; // 0x2e8(0x08)
	struct UVerticalBox* RequiredMatsSection; // 0x2f0(0x08)
	struct UImage* UnlockImage; // 0x2f8(0x08)
	struct FTalentsRowHandle OldTalent; // 0x300(0x18)
	struct FProcessorRecipesRowHandle Recipe; // 0x318(0x18)
	bool HasMaterials; // 0x330(0x01)

	void UpdateVisibility(); // Function UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetRecipeSlow(struct FProcessorRecipesRowHandle Recipe); // Function UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C.GetRecipeSlow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnTalentSet(); // Function UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TalentTooltip_Blueprint(int32_t EntryPoint); // Function UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C.ExecuteUbergraph_UMG_TalentTooltip_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

