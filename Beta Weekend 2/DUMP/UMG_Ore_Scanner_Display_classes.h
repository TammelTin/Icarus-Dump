// WidgetBlueprintGeneratedClass UMG_Ore_Scanner_Display.UMG_Ore_Scanner_Display_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_Ore_Scanner_Display_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* DistanceText; // 0x268(0x08)
	struct UTextBlock* ResourceFoundText; // 0x270(0x08)
	struct UTextBlock* ResourceText; // 0x278(0x08)

	void SetResourceText(struct FText ResourceDisplayName); // Function UMG_Ore_Scanner_Display.UMG_Ore_Scanner_Display_C.SetResourceText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetDistanceText(struct FText Distance); // Function UMG_Ore_Scanner_Display.UMG_Ore_Scanner_Display_C.SetDistanceText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetResourceFoundText(struct FText ResourceFound); // Function UMG_Ore_Scanner_Display.UMG_Ore_Scanner_Display_C.SetResourceFoundText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Ore_Scanner_Display(int32_t EntryPoint); // Function UMG_Ore_Scanner_Display.UMG_Ore_Scanner_Display_C.ExecuteUbergraph_UMG_Ore_Scanner_Display // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

