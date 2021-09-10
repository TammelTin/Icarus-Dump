// WidgetBlueprintGeneratedClass StatRow.StatRow_C
// Size: 0x298 (Inherited: 0x260)
struct UStatRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText StatName; // 0x270(0x18)
	struct FStatsEnum Stat; // 0x288(0x10)

	void SetStat(struct FStatsEnum NewStat); // Function StatRow.StatRow_C.SetStat // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_StatRow(int32_t EntryPoint); // Function StatRow.StatRow_C.ExecuteUbergraph_StatRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

