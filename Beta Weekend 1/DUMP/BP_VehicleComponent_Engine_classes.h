// BlueprintGeneratedClass BP_VehicleComponent_Engine.BP_VehicleComponent_Engine_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct ABP_VehicleComponent_Engine_C : ABP_StaticItem_VehicleComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	bool ShowDebug; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UEnergyComponent* Energy; // 0x3f0(0x08)

	void DebugEngine(float DeltaSeconds); // Function BP_VehicleComponent_Engine.BP_VehicleComponent_Engine_C.DebugEngine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_VehicleComponent_Engine.BP_VehicleComponent_Engine_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_VehicleComponent_Engine.BP_VehicleComponent_Engine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_VehicleComponent_Engine(int32_t EntryPoint); // Function BP_VehicleComponent_Engine.BP_VehicleComponent_Engine_C.ExecuteUbergraph_BP_VehicleComponent_Engine // (Final|UbergraphFunction) // @ game+0x1a05090
};

