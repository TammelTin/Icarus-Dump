// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C
// Size: 0x418 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_SimplePlace_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct AActor* BehaviourOwner; // 0x2e0(0x08)
	float TraceDistance; // 0x2e8(0x04)
	bool TickTraceOnClients; // 0x2ec(0x01)
	bool DoSecondaryDownwardTrace; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	struct FHitResult OnActionTraceHit; // 0x2f0(0x8c)
	enum class EActionableEventType ActionTypeCache; // 0x37c(0x01)
	enum class EActionableTrigger ActionTriggerCache; // 0x37d(0x01)
	enum class ETraceTypeQuery TraceChannel; // 0x37e(0x01)
	char pad_37F[0x1]; // 0x37f(0x01)
	struct AActor* OwningActor; // 0x380(0x08)
	bool WasLastTraceValid; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FHitResult LastCameraTrace; // 0x38c(0x8c)

	void GetTraceIgnoreActors(struct TArray<struct AActor*> OutIgnoreActors); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.GetTraceIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool PerformLineTrace(struct FVector TraceStart, struct FVector TraceEnd, bool TraceComplex, struct TArray<struct AActor*> IgnoreActors, struct FHitResult OutHit); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.PerformLineTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool DoTrace(struct FHitResult OutHit); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.DoTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool ShouldTrace); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ShouldActionCameraTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTraceDistance(float TraceDistance); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.GetTraceDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.TickCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionCameraTraceHit(struct FHitResult Hit); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.OnActionCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Server_OnActionCameraTraceHit(struct FHitResult HitTrace); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.Server_OnActionCameraTraceHit // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace(int32_t EntryPoint); // Function BP_ActionableBehaviour_SimplePlace.BP_ActionableBehaviour_SimplePlace_C.ExecuteUbergraph_BP_ActionableBehaviour_SimplePlace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

