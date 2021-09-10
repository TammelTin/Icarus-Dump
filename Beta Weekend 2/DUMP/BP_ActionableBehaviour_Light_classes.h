// BlueprintGeneratedClass BP_ActionableBehaviour_Light.BP_ActionableBehaviour_Light_C
// Size: 0x300 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Light_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCapsuleComponent* HitCollider; // 0x2e0(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e8(0x08)
	struct AActor* OwningActor; // 0x2f0(0x08)
	struct ABP_SkeletalItem_LightBase_C* LightBase; // 0x2f8(0x08)

	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Light.BP_ActionableBehaviour_Light_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Light.BP_ActionableBehaviour_Light_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Light.BP_ActionableBehaviour_Light_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Light(int32_t EntryPoint); // Function BP_ActionableBehaviour_Light.BP_ActionableBehaviour_Light_C.ExecuteUbergraph_BP_ActionableBehaviour_Light // (Final|UbergraphFunction) // @ game+0x1a38c80
};

