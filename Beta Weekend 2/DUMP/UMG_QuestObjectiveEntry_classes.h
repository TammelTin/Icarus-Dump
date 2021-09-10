// WidgetBlueprintGeneratedClass UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C
// Size: 0x2a9 (Inherited: 0x260)
struct UUMG_QuestObjectiveEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CompleteAnimation; // 0x268(0x08)
	struct UBorder* Complete; // 0x270(0x08)
	struct UBorder* CompletedBox; // 0x278(0x08)
	struct UImage* glow; // 0x280(0x08)
	struct UImage* Gradient; // 0x288(0x08)
	struct UVerticalBox* MainVertBox; // 0x290(0x08)
	struct UTextBlock* ObjectiveText; // 0x298(0x08)
	int32_t Index; // 0x2a0(0x04)
	int32_t SubIndex; // 0x2a4(0x04)
	bool CachedComplete; // 0x2a8(0x01)

	void Finished_FA89F8484A04F5B013BEE5B07F351D47(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_FA89F8484A04F5B013BEE5B07F351D47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_54BD1BA940CD590F99FE70B029DA39D5(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_54BD1BA940CD590F99FE70B029DA39D5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnEntryReleased(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void TickObjective(); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.TickObjective // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_QuestObjectiveEntry(int32_t EntryPoint); // Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.ExecuteUbergraph_UMG_QuestObjectiveEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

