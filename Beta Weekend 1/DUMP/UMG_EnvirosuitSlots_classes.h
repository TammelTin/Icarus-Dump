// WidgetBlueprintGeneratedClass UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C
// Size: 0x300 (Inherited: 0x260)
struct UUMG_EnvirosuitSlots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* FlagHighlightOverlay; // 0x268(0x08)
	struct UUMG_SurvivalProgress_C* Food; // 0x270(0x08)
	struct UUniformGridPanel* FoodLayout; // 0x278(0x08)
	struct UTextBlock* FoodProgressText; // 0x280(0x08)
	struct UUMG_SurvivalProgress_C* Oxygen; // 0x288(0x08)
	struct UUniformGridPanel* OxygenLayout; // 0x290(0x08)
	struct UTextBlock* OxygenProgressText; // 0x298(0x08)
	struct UImage* Seperator; // 0x2a0(0x08)
	struct UImage* Seperator_2; // 0x2a8(0x08)
	struct UImage* Seperator_3; // 0x2b0(0x08)
	struct UImage* Seperator1; // 0x2b8(0x08)
	struct UImage* Seperator1_2; // 0x2c0(0x08)
	struct UImage* Seperator1_3; // 0x2c8(0x08)
	struct UUMG_SurvivalProgress_C* Water; // 0x2d0(0x08)
	struct UUniformGridPanel* WaterLayout; // 0x2d8(0x08)
	struct UTextBlock* WaterProgressText; // 0x2e0(0x08)
	struct UInventory* EquipmentInventory; // 0x2e8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x2f0(0x08)
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; // 0x2f8(0x08)

	void SlotCountChanged(struct UInventory* Inventory); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.SlotCountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateInventorySlots(); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.UpdateInventorySlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.QuickShiftInventoryHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FText UpdateWater(); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.UpdateWater // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText UpdateFood(); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.UpdateFood // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText UpdateOxygen(); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.UpdateOxygen // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Initialise(struct UInventory* BoundInventory, struct ABP_IcarusPlayerCharacterSurvival_C* Player); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E81E2D7438F(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E81E2D7438F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_EnvirosuitSlots(int32_t EntryPoint); // Function UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C.ExecuteUbergraph_UMG_EnvirosuitSlots // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

