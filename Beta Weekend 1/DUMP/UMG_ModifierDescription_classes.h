// WidgetBlueprintGeneratedClass UMG_ModifierDescription.UMG_ModifierDescription_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_ModifierDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Description; // 0x268(0x08)
	struct FString BuffName; // 0x270(0x10)

	void Initialise(struct FString Buff Name); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BP_OnEntryReleased(); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ModifierDescription(int32_t EntryPoint); // Function UMG_ModifierDescription.UMG_ModifierDescription_C.ExecuteUbergraph_UMG_ModifierDescription // (Final|UbergraphFunction) // @ game+0x1a05090
};

