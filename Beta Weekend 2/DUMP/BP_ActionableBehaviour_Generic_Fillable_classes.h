// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C
// Size: 0x2f0 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Generic_Fillable_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCapsuleComponent* HitCollider; // 0x2e0(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e8(0x08)

	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Fillable(int32_t EntryPoint); // Function BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C.ExecuteUbergraph_BP_ActionableBehaviour_Generic_Fillable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

