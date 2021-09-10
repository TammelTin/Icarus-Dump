// BlueprintGeneratedClass BP_Farming_Plot_Base.BP_Farming_Plot_Base_C
// Size: 0x588 (Inherited: 0x550)
struct ABP_Farming_Plot_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UStaticMeshComponent* Crop; // 0x558(0x08)
	bool IsSeeded; // 0x560(0x01)
	bool IsHarvestable; // 0x561(0x01)
	char pad_562[0x2]; // 0x562(0x02)
	int32_t CurrentGrowthStage; // 0x564(0x04)
	float CurrentTime; // 0x568(0x04)
	struct FFarmingSeedsRowHandle CurrentSeedRow; // 0x56c(0x18)
	float NextStageTime; // 0x584(0x04)

	void ResetPlot(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ResetPlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Deployable_Interact // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GrowthComplete(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetGrowthStage(int32_t SetGrowthStage, bool Success); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SetGrowthStage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSeedType(struct FItemData InputItem, struct FFarmingSeedsRowHandle SeedRow); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetSeedType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlantSeed(struct FItemData PlantSeedItem); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlantSeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsValidSeedTypes(struct FItemData SeedValidCheck, bool Success); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.IsValidSeedTypes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_FE41683E4F188C84A159B2A0CEBA162E(struct UObject* Loaded); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_FE41683E4F188C84A159B2A0CEBA162E // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ClearMesh(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ClearMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadMesh(struct TSoftObjectPtr<UStaticMesh> StaticMeshSoft); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.LoadMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Farming_Plot_Base(int32_t EntryPoint); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ExecuteUbergraph_BP_Farming_Plot_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

