// BlueprintGeneratedClass BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C
// Size: 0x343 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Pyromancy_Flame_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e0(0x08)
	struct AActor* OwningActor; // 0x2e8(0x08)
	struct ABP_InspectionToolSpawner_C* HeldActor; // 0x2f0(0x08)
	struct TArray<struct UObject*> StoredMontages; // 0x2f8(0x10)
	bool IsChanneling; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FFlammableTarget FlammableTarget; // 0x310(0x28)
	struct UFlammableInstance* FlammableInstance; // 0x338(0x08)
	bool DebugInstance; // 0x340(0x01)
	bool ChannelIgnite; // 0x341(0x01)
	bool CastIgnite; // 0x342(0x01)

	void TryExtinguish(); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.TryExtinguish // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryIgnite(); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.TryIgnite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761(struct UObject* Loaded); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.OnLoaded_2B8B2B624CE5F97DAE6892B7A4207761 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame(int32_t EntryPoint); // Function BP_ActionableBehaviour_Pyromancy_Flame.BP_ActionableBehaviour_Pyromancy_Flame_C.ExecuteUbergraph_BP_ActionableBehaviour_Pyromancy_Flame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

