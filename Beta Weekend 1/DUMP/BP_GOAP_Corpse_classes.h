// BlueprintGeneratedClass BP_GOAP_Corpse.BP_GOAP_Corpse_C
// Size: 0x4f8 (Inherited: 0x3f0)
struct ABP_GOAP_Corpse_C : AIcarusCorpse {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UInventoryComponent* Inventory; // 0x3f8(0x08)
	struct FPoseSnapshot RagdollPose; // 0x400(0x38)
	bool HasBeenSkinned; // 0x438(0x01)
	bool CurrentlyBeingHarvested; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	struct FItemsStaticRowHandle CorpseItem; // 0x43c(0x18)
	struct FName OnBackSimulateBelowBone; // 0x454(0x08)
	struct FVector BackPositionOffset; // 0x45c(0x0c)
	struct FRotator BackRotationOffset; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct USkeletalMesh* SkeletonMesh; // 0x478(0x08)
	bool IsSkeleton; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct UPhysicsAsset* TPCarryPhysicsAsset; // 0x488(0x08)
	struct FTimerHandle SettleTimer; // 0x490(0x08)
	struct FPoseSnapshot NetworkedPose; // 0x498(0x38)
	float MaxCorpseSettleTime; // 0x4d0(0x04)
	struct FVector HackyFixForClients; // 0x4d4(0x0c)
	struct UPhysicsAsset* FPCarryPhysicsAsset; // 0x4e0(0x08)
	struct UAnimSequence* TPCarryAnim_CHA; // 0x4e8(0x08)
	struct UFMODEvent* HarvestBonesSound; // 0x4f0(0x08)

	struct FPoseSnapshot GetRagdollPose(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.GetRagdollPose // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void HideGOAPCharacter(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HideGOAPCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsSkeletonUpdated(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.IsSkeletonUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Actor Broken(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.On Actor Broken // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HarvestBones(struct AIcarusPlayerController* PlayerController); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HarvestBones // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EmptyCorpse(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.EmptyCorpse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_HackyFixForClients(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_HackyFixForClients // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_NetworkedPose(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_NetworkedPose // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_IsSkeleton(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_IsSkeleton // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GenerateItem(int32_t Min, int32_t Max, float Multiplier, struct FItemTemplateRowHandle Item, struct FItemData OutputItem); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.GenerateItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PickupCorpse(struct ABP_IcarusPlayerCharacterSurvival_C* TargetPlayer); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PickupCorpse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PopulateContents(float Multiplier, struct AIcarusPlayerCharacter* Player); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PopulateContents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSkinnedStateUpdated(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnSkinnedStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_HasBeenSkinned(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_HasBeenSkinned // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnItemRemoved(struct UInventory* Inventory, int32_t Location); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnItemRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ForceSettle(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ForceSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BeginDelayedSettle(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.BeginDelayedSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideInstigator(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HideInstigator // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_GOAP_Corpse(int32_t EntryPoint); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ExecuteUbergraph_BP_GOAP_Corpse // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

