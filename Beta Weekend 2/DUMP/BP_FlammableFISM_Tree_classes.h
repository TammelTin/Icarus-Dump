// BlueprintGeneratedClass BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C
// Size: 0x4a8 (Inherited: 0x3a0)
struct UBP_FlammableFISM_Tree_C : UBP_FlammableFISM_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct TMap<int32_t, struct UNiagaraComponent*> TreeFireNiagaraSystems; // 0x3a8(0x50)
	struct TMap<int32_t, struct UStaticMeshComponent*> TreeFireStaticMeshes; // 0x3f8(0x50)
	struct TMap<struct FFLODDescriptionsEnum, struct TSoftObjectPtr<UStaticMesh>> FlammableStaticMeshes; // 0x448(0x50)
	struct TArray<struct UStaticMesh*> LoadedFlammableStaticMeshes; // 0x498(0x10)

	void UpdateInstanceVisualData_Combusted(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData TargetVisualData); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Combusted // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateInstanceVisualData_Combustion(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData TargetVisualData); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Combustion // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateInstanceVisualData_Pyrolysis(struct UFlammableInstanceFLOD* Instance, float DeltaSeconds, struct FFlammableFISMVisualData TargetVisualData); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateInstanceVisualData_Pyrolysis // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool UpdateQueuedInstanceEffects(int32_t InstanceIndex, struct FFlammableFISMVisualData VisualData); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.UpdateQueuedInstanceEffects // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CleanupEffectsStaticMesh(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CleanupEffectsStaticMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetOrCreateEffectsStaticMesh(struct UFlammableInstanceFLOD* Instance, struct UStaticMeshComponent* StaticMeshComponent); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.GetOrCreateEffectsStaticMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnReplacedInstanceCombusted(struct FFLODInstanceID NewInstance, struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnReplacedInstanceCombusted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CombustingExit(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CombustingExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FBoxSphereBounds GetInstanceLocalBounds(int32_t InstanceIndex); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.GetInstanceLocalBounds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void CombustingEnter(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.CombustingEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C(struct UObject* Loaded); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnLoaded_3E3354A942260BE9BFE6BDAAECC7E52C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Detached_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.OnFlammableInstanceState_Detached_Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FlammableFISM_Tree(int32_t EntryPoint); // Function BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C.ExecuteUbergraph_BP_FlammableFISM_Tree // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

