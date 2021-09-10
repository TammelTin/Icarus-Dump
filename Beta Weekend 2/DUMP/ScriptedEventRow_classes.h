// WidgetBlueprintGeneratedClass ScriptedEventRow.ScriptedEventRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UScriptedEventRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText EventName; // 0x270(0x18)
	struct FScriptedEventsRowHandle ScriptedEvent; // 0x288(0x18)

	void AddScriptedEvent(struct FText RowName); // Function ScriptedEventRow.ScriptedEventRow_C.AddScriptedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_ScriptedEventRow(int32_t EntryPoint); // Function ScriptedEventRow.ScriptedEventRow_C.ExecuteUbergraph_ScriptedEventRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

