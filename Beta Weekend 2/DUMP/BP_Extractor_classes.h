// BlueprintGeneratedClass BP_Extractor.BP_Extractor_C
// Size: 0x721 (Inherited: 0x6f0)
struct ABP_Extractor_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UParticleSystemComponent* ParticleSystem_Loop; // 0x6f8(0x08)
	struct UPointLightComponent* PointLight; // 0x700(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x708(0x08)
	struct UFMODAudioComponent* FMOD_Extractor_Audio; // 0x710(0x08)
	struct ABP_OreDeposit_C* LinkedDeposit; // 0x718(0x08)
	bool ActiveEffects; // 0x720(0x01)

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // Function BP_Extractor.BP_Extractor_C.GetCriticalHitBones // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FAIRelationshipsRowHandle GetRelationshipData(); // Function BP_Extractor.BP_Extractor_C.GetRelationshipData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	int32_t GetTargetAlertness(); // Function BP_Extractor.BP_Extractor_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FVector GetTargetLocation(); // Function BP_Extractor.BP_Extractor_C.GetTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsActorAlive(); // Function BP_Extractor.BP_Extractor_C.IsActorAlive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsHidden(); // Function BP_Extractor.BP_Extractor_C.IsHidden // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_Extractor.BP_Extractor_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsFunctional(bool bFunctional); // Function BP_Extractor.BP_Extractor_C.IsFunctional // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_Extractor.BP_Extractor_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActiveTick(float Delta); // Function BP_Extractor.BP_Extractor_C.ActiveTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessorStateChanged(bool bIsActive); // Function BP_Extractor.BP_Extractor_C.OnProcessorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Extractor.BP_Extractor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Extractor(int32_t EntryPoint); // Function BP_Extractor.BP_Extractor_C.ExecuteUbergraph_BP_Extractor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

