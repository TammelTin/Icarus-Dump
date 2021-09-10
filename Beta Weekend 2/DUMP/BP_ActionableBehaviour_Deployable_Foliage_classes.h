// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C
// Size: 0x7f8 (Inherited: 0x7f0)
struct UBP_ActionableBehaviour_Deployable_Foliage_C : UBP_ActionableBehaviour_DeployableBase_C {
	struct UFLODRecord* PlacementRecord; // 0x7f0(0x08)

	void OnDeploy(struct ADeployable* SpawnedDeployable); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.OnDeploy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckValidPlacement(struct FHitResult InHit, bool IsValidPlacement, struct FText InvalidReason); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.CheckValidPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetPreviewStaticMeshAsset(struct TSoftObjectPtr<UStaticMesh> StaticMeshAsset); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.GetPreviewStaticMeshAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

