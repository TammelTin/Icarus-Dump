// BlueprintGeneratedClass BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C
// Size: 0x380 (Inherited: 0x358)
struct ABP_PlayerPreview_Survival_C : ABP_PlayerPreview_C {
	struct UPointLightComponent* PointLight3; // 0x358(0x08)
	struct UPointLightComponent* PointLight1; // 0x360(0x08)
	struct USceneComponent* Scene; // 0x368(0x08)
	struct UUMG_MainInventory_C* InventoryWidget; // 0x370(0x08)
	struct ABP_AtmosphereController_C* AtmoController; // 0x378(0x08)

	void On Connected Player Initialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.On Connected Player Initialised // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshPlayerCosmetics(); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.RefreshPlayerCosmetics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetPlayer(struct AIcarusPlayerCharacter* InPlayer); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*> MeshArray, struct TArray<struct TSoftClassPtr<UObject>> MeshAnimBPs, struct USkeletalMesh* BodyMesh); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ConstructPlayerMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetAtmosphereController(struct ABP_AtmosphereController_C* Output_Get); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.GetAtmosphereController // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreviewVisibility(); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.UpdatePreviewVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResolveVisibility(bool Visible); // Function BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C.ResolveVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
};

