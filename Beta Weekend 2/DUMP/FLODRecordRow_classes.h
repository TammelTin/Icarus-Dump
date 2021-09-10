// WidgetBlueprintGeneratedClass FLODRecordRow.FLODRecordRow_C
// Size: 0x290 (Inherited: 0x260)
struct UFLODRecordRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText FLODRecordName; // 0x270(0x18)
	struct UFLODRecord* FLODRecord; // 0x288(0x08)

	void SetFLODRecord(struct UFLODRecord* FLODRecord); // Function FLODRecordRow.FLODRecordRow_C.SetFLODRecord // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_FLODRecordRow(int32_t EntryPoint); // Function FLODRecordRow.FLODRecordRow_C.ExecuteUbergraph_FLODRecordRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

