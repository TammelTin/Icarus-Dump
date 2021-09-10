// WidgetBlueprintGeneratedClass FLODTileRow.FLODTileRow_C
// Size: 0x290 (Inherited: 0x260)
struct UFLODTileRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText FLODTileName; // 0x270(0x18)
	struct AFLODTile* FLODTile; // 0x288(0x08)

	void SetFLODTile(struct AFLODTile* FLODTile); // Function FLODTileRow.FLODTileRow_C.SetFLODTile // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_FLODTileRow(int32_t EntryPoint); // Function FLODTileRow.FLODTileRow_C.ExecuteUbergraph_FLODTileRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

