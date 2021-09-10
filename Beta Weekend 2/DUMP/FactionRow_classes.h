// WidgetBlueprintGeneratedClass FactionRow.FactionRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UFactionRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText SetupName; // 0x270(0x18)
	struct FFactionMissionsRowHandle FactionRow; // 0x288(0x18)

	void AddFaction(struct FText RowName); // Function FactionRow.FactionRow_C.AddFaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_FactionRow(int32_t EntryPoint); // Function FactionRow.FactionRow_C.ExecuteUbergraph_FactionRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

