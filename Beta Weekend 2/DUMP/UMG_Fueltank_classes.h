// WidgetBlueprintGeneratedClass UMG_Fueltank.UMG_Fueltank_C
// Size: 0x2b8 (Inherited: 0x280)
struct UUMG_Fueltank_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_Inventory_C* Fuel; // 0x288(0x08)
	struct UProgressBar* Fuelbar; // 0x290(0x08)
	struct UCanvasPanel* FuelFrame; // 0x298(0x08)
	struct UUMG_Inventory_C* Player; // 0x2a0(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; // 0x2a8(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_3; // 0x2b0(0x08)

	float GetFuelbarPercent(); // Function UMG_Fueltank.UMG_Fueltank_C.GetFuelbarPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Initialise(struct UInventory* FuelInventory, struct UInventory* PlayerInventory); // Function UMG_Fueltank.UMG_Fueltank_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Fueltank.UMG_Fueltank_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Fueltank(int32_t EntryPoint); // Function UMG_Fueltank.UMG_Fueltank_C.ExecuteUbergraph_UMG_Fueltank // (Final|UbergraphFunction) // @ game+0x1a38c80
};

