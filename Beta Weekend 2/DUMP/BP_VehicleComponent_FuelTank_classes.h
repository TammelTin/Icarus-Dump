// BlueprintGeneratedClass BP_VehicleComponent_FuelTank.BP_VehicleComponent_FuelTank_C
// Size: 0x418 (Inherited: 0x3e0)
struct ABP_VehicleComponent_FuelTank_C : ABP_StaticItem_VehicleComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UCameraComponent* Camera; // 0x3e8(0x08)
	bool ShowDebug; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UInventory* FuelInventory; // 0x3f8(0x08)
	struct FItemTemplateRowHandle DebugBeginFuelItem; // 0x400(0x18)

	void DebugFuel(float DeltaSeconds); // Function BP_VehicleComponent_FuelTank.BP_VehicleComponent_FuelTank_C.DebugFuel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_VehicleComponent_FuelTank.BP_VehicleComponent_FuelTank_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_VehicleComponent_FuelTank.BP_VehicleComponent_FuelTank_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleComponent_FuelTank(int32_t EntryPoint); // Function BP_VehicleComponent_FuelTank.BP_VehicleComponent_FuelTank_C.ExecuteUbergraph_BP_VehicleComponent_FuelTank // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

