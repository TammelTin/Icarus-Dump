// BlueprintGeneratedClass BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C
// Size: 0x484 (Inherited: 0x3d0)
struct ABP_StaticItem_TreePrimitive_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UExperienceComponent* Experience; // 0x3d8(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x3e0(0x08)
	float KillFireTimeline_FireTemperatureMultiplier_A5931A634B2ED32ECBDFACA3307BB127; // 0x3e8(0x04)
	enum class ETimelineDirection KillFireTimeline__Direction_A5931A634B2ED32ECBDFACA3307BB127; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UTimelineComponent* KillFireTimeline; // 0x3f0(0x08)
	bool RequiresSubdivide; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float AngularDampingZ; // 0x3fc(0x04)
	struct FItemRewardsRowHandle RewardsRowHandle; // 0x400(0x18)
	bool SubdivideImmediately; // 0x418(0x01)
	bool SubdivideCopyMeshTransform; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct FTreePrimitiveSubdivideMeshes SubdivideMeshes; // 0x420(0x30)
	struct FVector2D AudioCooldownLengthRange; // 0x450(0x08)
	float AudioImpulseThreshold; // 0x458(0x04)
	float AudioImpulseRangeMax; // 0x45c(0x04)
	float AudioCooldownEndTime; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UFMODEvent* CollisionFMODEvent; // 0x468(0x08)
	float HitEventsLifespan; // 0x470(0x04)
	float DefaultMass; // 0x474(0x04)
	struct UFMODEvent* FMODEvent_Split; // 0x478(0x08)
	float RewardMultiplier; // 0x480(0x04)

	void ScaleItemReward(struct FItemData In, struct FItemData Out); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ScaleItemReward // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_PlaySubdivideFX(float Mass, int32_t Pieces); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.MULTI_PlaySubdivideFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TrySubdivide(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.TrySubdivide // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateAngularDamping(float DeltaSeconds); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.UpdateAngularDamping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryPlayCollisionSound(struct FVector Impulse, struct FHitResult Hit); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.TryPlayCollisionSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RequiresSubdivide(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.OnRep_RequiresSubdivide // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialize(struct FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, struct FTreePrimitiveSubdivideMeshes SubdivideMeshes, struct UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void KillFireTimeline__FinishedFunc(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.KillFireTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void KillFireTimeline__UpdateFunc(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.KillFireTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void SetupFireParams(float FireSpread, float FireTemperature, struct FVector LocalFireOrigin, struct FVector LocalBoundsSize); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.SetupFireParams // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DisableHitEvents(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.DisableHitEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnActorStateDeath(struct UActorState* ActorState); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.OnActorStateDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_StaticItem_TreePrimitive(int32_t EntryPoint); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ExecuteUbergraph_BP_StaticItem_TreePrimitive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

