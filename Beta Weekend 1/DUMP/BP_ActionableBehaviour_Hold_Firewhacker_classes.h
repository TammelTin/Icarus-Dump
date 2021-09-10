// BlueprintGeneratedClass BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C
// Size: 0x3b0 (Inherited: 0x330)
struct UBP_ActionableBehaviour_Hold_Firewhacker_C : UBP_ActionableBehaviour_Hold_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct AActor* OwningActor; // 0x338(0x08)
	struct AActor* BehaviourOwner; // 0x340(0x08)
	float TraceDistance; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct ABP_Building_Base_C* LastBuildingHit; // 0x350(0x08)
	bool WasHitSuccess; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<struct UObject*> StoredMontages; // 0x360(0x10)
	struct AIcarusActor* ObjectToRepair; // 0x370(0x08)
	struct AActor* Last Invoking Actor; // 0x378(0x08)
	float ExtinguishChance; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UFMODEvent* ExtinguishSound; // 0x388(0x08)
	struct FString HitAnimNotifyName; // 0x390(0x10)
	struct UFMODEvent* HitSound; // 0x3a0(0x08)
	struct FName Head Attach Socket; // 0x3a8(0x08)

	void ProcessDurability(int32_t DurabilityLoss); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ProcessDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.GetStatAdjustedDurability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayHitSound(); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.PlayHitSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayExtinguishSound(struct FVector Location); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.PlayExtinguishSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Try Extinguish(struct FVector SpherePos, int32_t ExtinguishCount); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.Try Extinguish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetHitFromViewTraces(struct FHitResult OutHit); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.GetHitFromViewTraces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult Result); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.GetHitResultPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DoTrace(struct FHitResult OutHit, bool DidHit); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.DoTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CanHold(); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.CanHold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnLoaded_2B8B2B624CE5F97DAE6892B7B7280BB0(struct UObject* Loaded); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.OnLoaded_2B8B2B624CE5F97DAE6892B7B7280BB0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CompleteHold(bool Success); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.CompleteHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void DoSwing(enum class EActionableEventType ActionType); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.DoSwing // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ActionTimeout(); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ActionTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.Server_StartHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_EndHold(bool Success, struct AActor* ActorEndedHoldOn); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.Server_EndHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Do montage(struct UObject* TargetActor); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.Do montage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multi_PlayExtinguishFX(struct FVector Location); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.Multi_PlayExtinguishFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold_Firewhacker(int32_t EntryPoint); // Function BP_ActionableBehaviour_Hold_Firewhacker.BP_ActionableBehaviour_Hold_Firewhacker_C.ExecuteUbergraph_BP_ActionableBehaviour_Hold_Firewhacker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

