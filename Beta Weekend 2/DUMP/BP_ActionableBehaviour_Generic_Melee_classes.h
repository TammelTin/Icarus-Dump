// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C
// Size: 0x370 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Generic_Melee_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCapsuleComponent* HitCollider; // 0x2e0(0x08)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x2e8(0x08)
	bool ActionCooldownActive; // 0x2f0(0x01)
	bool IsHitReacting; // 0x2f1(0x01)
	bool DebugDraw; // 0x2f2(0x01)
	bool IsSweepingCollision; // 0x2f3(0x01)
	struct FVector LastColliderLocation; // 0x2f4(0x0c)
	struct FToolDamage ToolDamage; // 0x300(0x38)
	bool ShouldSweepCollision; // 0x338(0x01)
	enum class ETraceTypeQuery CollisionTraceChannel; // 0x339(0x01)
	bool ShouldReverseAnimOnHit; // 0x33a(0x01)
	char pad_33B[0x1]; // 0x33b(0x01)
	float ScreenshakeScale; // 0x33c(0x04)
	bool DebugForceOwnership; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FRandomStream RandomStream_1; // 0x344(0x08)
	float HitTraceDistance; // 0x34c(0x04)
	bool WasHitSuccess; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TArray<struct UObject*> StoredMontages; // 0x358(0x10)
	struct UFMODEvent* FMODEvent_InsufficientStamina; // 0x368(0x08)

	void PlayMeleeSwing(struct AIcarusPlayerCharacter* TargetPlayer); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayMeleeSwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayActionInsufficientStaminaSound(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayActionInsufficientStaminaSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayActionItemBrokenSound(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayActionItemBrokenSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetStatAdjustedDurability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult Result); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetHitResultPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetHitFromViewTraces(struct FHitResult OutHit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetHitFromViewTraces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SelectRandomWeightedMontage_1(struct TArray<struct FName> Sections, struct UAnimMontage* Montage, struct FName ChosenSection); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SelectRandomWeightedMontage_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayHitSound(bool HitSuccessful, struct FVector HitLocation, enum class EPhysicalSurface SurfaceHit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayHitSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayScreenshake(float Scale, bool Hit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PlayScreenshake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct USkeletalMeshComponent* GetAnimatingMesh(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.GetAnimatingMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HitCollision(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.HitCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InvokeHit(struct FHitResult Hit); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.InvokeHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SweepCollision(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SweepCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult SweepResult); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionHitEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetSweepingEnabled(bool Enabled); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.SetSweepingEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB(struct UObject* Loaded); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult SweepResult); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActionTimeout(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ActionTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void DoSwing(enum class EActionableEventType ActionType); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.DoSwing // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionInsufficientStamina // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StopRepeating(); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.StopRepeating // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.OnActionInsufficientDurability // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee(int32_t EntryPoint); // Function BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C.ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

