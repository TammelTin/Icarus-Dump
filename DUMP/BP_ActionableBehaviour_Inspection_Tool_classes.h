// BlueprintGeneratedClass BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C
// Size: 0x2f9 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Inspection_Tool_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e0(0x08)
	struct AActor* OwningActor; // 0x2e8(0x08)
	struct ABP_InspectionToolSpawner_C* HeldActor; // 0x2f0(0x08)
	enum class EDevToolMode Mode; // 0x2f8(0x01)

	void DestroyAllSpawns(); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.DestroyAllSpawns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LineTrace(bool HoldTrace); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.LineTrace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Inspection_Tool(int32_t EntryPoint); // Function BP_ActionableBehaviour_Inspection_Tool.BP_ActionableBehaviour_Inspection_Tool_C.ExecuteUbergraph_BP_ActionableBehaviour_Inspection_Tool // (Final|UbergraphFunction) // @ game+0x1a05090
};

