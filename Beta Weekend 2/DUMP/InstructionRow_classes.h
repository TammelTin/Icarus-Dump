// WidgetBlueprintGeneratedClass InstructionRow.InstructionRow_C
// Size: 0x288 (Inherited: 0x260)
struct UInstructionRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_47; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)

	void BP_OnEntryReleased(); // Function InstructionRow.InstructionRow_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function InstructionRow.InstructionRow_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function InstructionRow.InstructionRow_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_InstructionRow(int32_t EntryPoint); // Function InstructionRow.InstructionRow_C.ExecuteUbergraph_InstructionRow // (Final|UbergraphFunction) // @ game+0x1a38c80
};

