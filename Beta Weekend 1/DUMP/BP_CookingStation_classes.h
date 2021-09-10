// BlueprintGeneratedClass BP_CookingStation.BP_CookingStation_C
// Size: 0x739 (Inherited: 0x700)
struct ABP_CookingStation_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_FuelSlot; // 0x708(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Wood1; // 0x710(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat3; // 0x718(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat2; // 0x720(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat1; // 0x728(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x730(0x08)
	bool ActiveEffects; // 0x738(0x01)

	void OnRep_ActiveEffects(); // Function BP_CookingStation.BP_CookingStation_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_CookingStation.BP_CookingStation_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_CookingStation.BP_CookingStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnEnergyComponentStateChanged(bool IsActive); // Function BP_CookingStation.BP_CookingStation_C.OnEnergyComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProcessorStateChanged(bool bIsActive); // Function BP_CookingStation.BP_CookingStation_C.OnProcessorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_CookingStation(int32_t EntryPoint); // Function BP_CookingStation.BP_CookingStation_C.ExecuteUbergraph_BP_CookingStation // (Final|UbergraphFunction) // @ game+0x1a05090
};

