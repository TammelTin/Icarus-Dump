// BlueprintGeneratedClass BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C
// Size: 0x398 (Inherited: 0x370)
struct UBP_Actionable_Melee_ExtinguishFire_C : UBP_ActionableBehaviour_Generic_Melee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UFMODEvent* FMODEvent_Extinguish; // 0x378(0x08)
	float ExtinguishChance; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FString HitAnimNotifyName; // 0x388(0x10)

	void ProcessDurability(int32_t DuribilityLoss); // Function BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C.ProcessDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Try Extinguish(struct FVector SpherePos, struct AActor* InvokingActor, int32_t ExtinguishCount); // Function BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C.Try Extinguish // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult SweepResult); // Function BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C.OnActionHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_ExtinguishEffects(struct FVector HitLocation); // Function BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C.MULTI_ExtinguishEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Actionable_Melee_ExtinguishFire(int32_t EntryPoint); // Function BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C.ExecuteUbergraph_BP_Actionable_Melee_ExtinguishFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

