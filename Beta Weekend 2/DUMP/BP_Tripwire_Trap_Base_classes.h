// BlueprintGeneratedClass BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C
// Size: 0x621 (Inherited: 0x550)
struct ABP_Tripwire_Trap_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct USceneComponent* PayloadLocator; // 0x558(0x08)
	struct USceneComponent* Effects; // 0x560(0x08)
	struct UBoxComponent* TriggerShape; // 0x568(0x08)
	int32_t DamageOnOverlap; // 0x570(0x04)
	int32_t DamageOnTick; // 0x574(0x04)
	int32_t DurabilityDamageOnHit; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct ABP_Payload_C* PayloadToSpawn; // 0x580(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* GOAPChar; // 0x588(0x08)
	struct FHitResult SweepResult; // 0x590(0x8c)
	float PayloadDamage; // 0x61c(0x04)
	bool DestroyOnOverlap; // 0x620(0x01)

	void PlayHitEffects(); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.PlayHitEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.DoDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LaunchCharacter(struct ACharacter* IcarusCharacter); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.LaunchCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Tripwire_Trap_Base(int32_t EntryPoint); // Function BP_Tripwire_Trap_Base.BP_Tripwire_Trap_Base_C.ExecuteUbergraph_BP_Tripwire_Trap_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

