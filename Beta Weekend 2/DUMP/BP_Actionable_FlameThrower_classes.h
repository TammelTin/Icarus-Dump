// BlueprintGeneratedClass BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C
// Size: 0x2f9 (Inherited: 0x2d1)
struct UBP_Actionable_FlameThrower_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e0(0x08)
	struct AActor* OwningActor; // 0x2e8(0x08)
	struct ABP_SkeletalItem_FlameThrower_Small_C* SKItem; // 0x2f0(0x08)
	bool DoFire; // 0x2f8(0x01)

	void TickTimer(); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.TickTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SphereTrace(); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.SphereTrace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Multi_SpawnFX(struct FVector ImpactPoint, struct FVector ImpactNormal); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.Multi_SpawnFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Actionable_FlameThrower(int32_t EntryPoint); // Function BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C.ExecuteUbergraph_BP_Actionable_FlameThrower // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

