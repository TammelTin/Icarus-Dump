// WidgetBlueprintGeneratedClass UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C
// Size: 0x2e8 (Inherited: 0x280)
struct UUMG_VehicleComponentInventory_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_Inventory_C* Backpack; // 0x288(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_2_C_2; // 0x290(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_C_3; // 0x298(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; // 0x2a0(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_173; // 0x2a8(0x08)
	struct UUMG_Titlebar_C* UMG_Titlebar; // 0x2b0(0x08)
	struct UUMG_VehicleComponentSet_C* VehicleComponentSet_Base; // 0x2b8(0x08)
	struct UUMG_VehicleComponentSet_C* VehicleComponentSet_Wheel1; // 0x2c0(0x08)
	struct UUMG_VehicleComponentSet_C* VehicleComponentSet_Wheel2; // 0x2c8(0x08)
	struct UUMG_VehicleComponentSet_C* VehicleComponentSet_Wheel3; // 0x2d0(0x08)
	struct UUMG_VehicleComponentSet_C* VehicleComponentSet_Wheel4; // 0x2d8(0x08)
	struct ABP_VehicleBase_C* Vehicle; // 0x2e0(0x08)

	void DisableVehicleComponentSet(int32_t VehicleComponentSetIndex); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.DisableVehicleComponentSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InventoryQuickShiftHandler(int32_t Location, struct UInventoryComponent* Inventory); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.InventoryQuickShiftHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseVehicleComponentSet(int32_t VehicleComponentSetIndex, struct FString Title, struct TArray<enum class EVehicleComponentType> VehicleComponentTypes, int32_t VehicleComponentsTypeIndex); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.InitialiseVehicleComponentSet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_VehicleComponentInventory(int32_t EntryPoint); // Function UMG_VehicleComponentInventory.UMG_VehicleComponentInventory_C.ExecuteUbergraph_UMG_VehicleComponentInventory // (Final|UbergraphFunction) // @ game+0x1a38c80
};

