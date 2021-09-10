// WidgetBlueprintGeneratedClass UMG_DamageVariation.UMG_DamageVariation_C
// Size: 0x272 (Inherited: 0x260)
struct UUMG_DamageVariation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Description; // 0x268(0x08)
	bool IsSetBonus; // 0x270(0x01)
	bool IsSetBonusActive; // 0x271(0x01)

	void Initialise(int32_t Min, int32_t Max, bool Melee); // Function UMG_DamageVariation.UMG_DamageVariation_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnEntryReleased(); // Function UMG_DamageVariation.UMG_DamageVariation_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_DamageVariation.UMG_DamageVariation_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_DamageVariation.UMG_DamageVariation_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_DamageVariation.UMG_DamageVariation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DamageVariation(int32_t EntryPoint); // Function UMG_DamageVariation.UMG_DamageVariation_C.ExecuteUbergraph_UMG_DamageVariation // (Final|UbergraphFunction) // @ game+0x1a38c80
};

