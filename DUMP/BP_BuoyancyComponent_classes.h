// BlueprintGeneratedClass BP_BuoyancyComponent.BP_BuoyancyComponent_C
// Size: 0x128 (Inherited: 0x118)
struct UBP_BuoyancyComponent_C : UBuoyancyBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	bool Floating; // 0x120(0x01)
	bool GeneratePoints; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	int32_t SwimmingModifierUID; // 0x124(0x04)

	void OnRep_Floating(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.OnRep_Floating // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GeneratePointsFromSockets(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.GeneratePointsFromSockets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GenerateMeshPoints(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.GenerateMeshPoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClearTestPoints(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.ClearTestPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GeneratePointsForMesh(struct UStaticMeshComponent* Mesh, bool HalfPoints); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.GeneratePointsForMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GenerateFloatingPointsFromMesh(struct TArray<struct UStaticMeshComponent*> Meshes); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.GenerateFloatingPointsFromMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateState(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateOverlappedState(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.UpdateOverlappedState // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void GenerateFloatingPoints(); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.GenerateFloatingPoints // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BuoyancyComponent(int32_t EntryPoint); // Function BP_BuoyancyComponent.BP_BuoyancyComponent_C.ExecuteUbergraph_BP_BuoyancyComponent // (Final|UbergraphFunction) // @ game+0x1a05090
};

