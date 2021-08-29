// BlueprintGeneratedClass BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C
// Size: 0x7f0 (Inherited: 0x7e4)
struct UBP_ActionableBehaviour_Deployable_Foliage_C : UBP_ActionableBehaviour_DeployableBase_C {
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct UFLODRecord* PlacementRecord; // 0x7e8(0x08)

	void OnDeploy(struct ADeployable* SpawnedDeployable); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.OnDeploy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckValidPlacement(struct FHitResult InHit, bool IsValidPlacement); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.CheckValidPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetPreviewStaticMeshAsset(struct TSoftObjectPtr<UStaticMesh> StaticMeshAsset); // Function BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C.GetPreviewStaticMeshAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

