// BlueprintGeneratedClass BP_CropPlot_Base.BP_CropPlot_Base_C
// Size: 0x5b0 (Inherited: 0x560)
struct ABP_CropPlot_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UStaticMeshComponent* SpawnerLoc; // 0x568(0x08)
	struct UTextRenderComponent* State; // 0x570(0x08)
	struct UStaticMeshComponent* Crops; // 0x578(0x08)
	bool IsSeeded; // 0x580(0x01)
	bool IsHarvestable; // 0x581(0x01)
	char pad_582[0x2]; // 0x582(0x02)
	struct FVector CropMeshScale; // 0x584(0x0c)
	float GrowthStageTime; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct FTimerHandle GrowPlantsTimer; // 0x598(0x08)
	struct AActor* SpawnedCrops; // 0x5a0(0x08)
	struct AActor* CropsBlueprint; // 0x5a8(0x08)

	void DestroySpawnedActor(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.DestroySpawnedActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetCropsState(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.ResetCropsState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetStateText(struct FText StateText); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.SetStateText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_CropMeshScale(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.OnRep_CropMeshScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CropsScale(struct FVector Scale); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.CropsScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CropsVisibility(bool Visible); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.CropsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MUL_PlantSeed(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.MUL_PlantSeed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MUL_HarvestCrops(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.MUL_HarvestCrops // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SRV_PlantSeed(struct AActor* CropsBlueprint); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.SRV_PlantSeed // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void GrowPlants(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.GrowPlants // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MUL_CropsGrown(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.MUL_CropsGrown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SRV_SpawnCrops(); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.SRV_SpawnCrops // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_CropPlot_Base(int32_t EntryPoint); // Function BP_CropPlot_Base.BP_CropPlot_Base_C.ExecuteUbergraph_BP_CropPlot_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

