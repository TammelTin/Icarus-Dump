// WidgetBlueprintGeneratedClass LoadoutRow.LoadoutRow_C
// Size: 0x288 (Inherited: 0x260)
struct ULoadoutRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText LoadoutName; // 0x270(0x18)

	void AddLoadout(struct FName Loadout); // Function LoadoutRow.LoadoutRow_C.AddLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_LoadoutRow(int32_t EntryPoint); // Function LoadoutRow.LoadoutRow_C.ExecuteUbergraph_LoadoutRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

