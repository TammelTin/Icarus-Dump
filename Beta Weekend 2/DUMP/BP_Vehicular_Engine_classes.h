// BlueprintGeneratedClass BP_Vehicular_Engine.BP_Vehicular_Engine_C
// Size: 0x198 (Inherited: 0x169)
struct UBP_Vehicular_Engine_C : UBP_VehicularBase_C {
	char pad_169[0x7]; // 0x169(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct TArray<struct UBP_Vehicular_FuelTank_C*> FuelSources; // 0x178(0x10)
	struct ABP_VehicleComponent_Engine_C* EngineActor; // 0x188(0x08)
	bool NeedsFuelSources; // 0x190(0x01)
	bool RunningState; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	float FuelConsumptionMultiplier; // 0x194(0x04)

	bool IsFunctional(); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.IsFunctional // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void TryFindFuelSource(); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.TryFindFuelSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnEngineFuelChanged(struct UInventory* Inventory, int32_t Location); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.OnEngineFuelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasValidFuelSource(bool EngineHasValidFuelSource); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.HasValidFuelSource // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ProcessFuel(float DeltaSeconds); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.ProcessFuel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RefreshFuelSources(); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.RefreshFuelSources // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Vehicular_Engine(int32_t EntryPoint); // Function BP_Vehicular_Engine.BP_Vehicular_Engine_C.ExecuteUbergraph_BP_Vehicular_Engine // (Final|UbergraphFunction) // @ game+0x1a38c80
};

