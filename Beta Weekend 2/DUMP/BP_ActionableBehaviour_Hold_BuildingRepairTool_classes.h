// BlueprintGeneratedClass BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C
// Size: 0x388 (Inherited: 0x330)
struct UBP_ActionableBehaviour_Hold_BuildingRepairTool_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct AActor* OwningActor; // 0x338(0x08)
	struct AActor* BehaviourOwner; // 0x340(0x08)
	float TraceDistance; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct ABP_Building_Base_C* LastBuildingHit; // 0x350(0x08)
	struct TArray<struct UObject*> StoredMontages; // 0x358(0x10)
	struct FString HitAnimNotifyName; // 0x368(0x10)
	struct FName HeadAttachSocket; // 0x378(0x08)
	struct UFMODEvent* HitSound; // 0x380(0x08)

	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.GetStatAdjustedDurability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProcessDurability(); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ProcessDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlaySwing(struct AIcarusPlayerCharacter* TargetPlayer); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.PlaySwing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayHitSound(); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.PlayHitSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetHitFromViewTraces(struct FHitResult OutHit); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.GetHitFromViewTraces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult Result); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.GetHitResultPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool DoTrace(struct FHitResult OutHit); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.DoTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CanHold(); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.CanHold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnLoaded_2B8B2B624CE5F97DAE6892B789BB7CFF(struct UObject* Loaded); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.OnLoaded_2B8B2B624CE5F97DAE6892B789BB7CFF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CompleteHold(bool Success); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.CompleteHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void DoSwing(enum class EActionableEventType ActionType); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.DoSwing // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActionTimeout(); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ActionTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.Server_StartHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_EndHold(bool Success, struct AActor* ActorEndedHoldOn); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.Server_EndHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold_BuildingRepairTool(int32_t EntryPoint); // Function BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C.ExecuteUbergraph_BP_ActionableBehaviour_Hold_BuildingRepairTool // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

