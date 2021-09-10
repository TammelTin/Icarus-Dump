// WidgetBlueprintGeneratedClass UMG_StatDescription.UMG_StatDescription_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_StatDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Description; // 0x268(0x08)
	int32_t StatValue; // 0x270(0x04)
	bool IsSetBonus; // 0x274(0x01)
	bool IsSetBonusActive; // 0x275(0x01)
	bool IsActive; // 0x276(0x01)
	char pad_277[0x1]; // 0x277(0x01)
	struct FStatsEnum Stat; // 0x278(0x10)

	void Initialise(struct FStatsEnum Stat, int32_t Value); // Function UMG_StatDescription.UMG_StatDescription_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnEntryReleased(); // Function UMG_StatDescription.UMG_StatDescription_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_StatDescription.UMG_StatDescription_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_StatDescription.UMG_StatDescription_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_StatDescription.UMG_StatDescription_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Set Active State(bool Active); // Function UMG_StatDescription.UMG_StatDescription_C.Set Active State // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_StatDescription(int32_t EntryPoint); // Function UMG_StatDescription.UMG_StatDescription_C.ExecuteUbergraph_UMG_StatDescription // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

