// BlueprintGeneratedClass BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C
// Size: 0x580 (Inherited: 0x550)
struct ABP_Wood_Hedgehog_Medium_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UBoxComponent* BoxCombined; // 0x558(0x08)
	struct UParticleSystemComponent* ParticleSystem_Blood; // 0x560(0x08)
	struct UNiagaraComponent* Niagara_Wood_Damage; // 0x568(0x08)
	struct UBoxComponent* BoxLower; // 0x570(0x08)
	struct UBoxComponent* BoxUpper; // 0x578(0x08)

	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.DoDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LaunchCharacter(struct ACharacter* IcarusCharacter); // Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.LaunchCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Wood_Hedgehog_Medium(int32_t EntryPoint); // Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.ExecuteUbergraph_BP_Wood_Hedgehog_Medium // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

