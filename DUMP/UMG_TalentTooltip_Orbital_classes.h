// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Orbital.UMG_TalentTooltip_Orbital_C
// Size: 0x2b0 (Inherited: 0x280)
struct UUMG_TalentTooltip_Orbital_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* Description; // 0x288(0x08)
	struct UVerticalBox* DescriptionBox; // 0x290(0x08)
	struct UTextBlock* TalentName; // 0x298(0x08)
	struct UUMG_TalentTooltip_Orbital_HoldToCraft_C* UMG_HoldFunction_Tooltip; // 0x2a0(0x08)
	struct UUMG_TalentTooltip_Orbital_RecipeRequirements_C* UMG_OrbitalRecipeRequirements; // 0x2a8(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_TalentTooltip_Orbital.UMG_TalentTooltip_Orbital_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnTalentSet(); // Function UMG_TalentTooltip_Orbital.UMG_TalentTooltip_Orbital_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TalentTooltip_Orbital(int32_t EntryPoint); // Function UMG_TalentTooltip_Orbital.UMG_TalentTooltip_Orbital_C.ExecuteUbergraph_UMG_TalentTooltip_Orbital // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

