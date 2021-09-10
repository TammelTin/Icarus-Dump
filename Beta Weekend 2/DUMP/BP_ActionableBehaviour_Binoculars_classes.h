// BlueprintGeneratedClass BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C
// Size: 0x2e4 (Inherited: 0x2c0)
struct UBP_ActionableBehaviour_Binoculars_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UCapsuleComponent* HitCollider; // 0x2c8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2d0(0x08)
	struct AActor* OwningActor; // 0x2d8(0x08)
	float DefaultFOV; // 0x2e0(0x04)

	void SetFOV(float FOV); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.SetFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Binoculars(int32_t EntryPoint); // Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ExecuteUbergraph_BP_ActionableBehaviour_Binoculars // (Final|UbergraphFunction) // @ game+0x1a38c80
};

