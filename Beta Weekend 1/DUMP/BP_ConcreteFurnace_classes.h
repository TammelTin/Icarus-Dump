// BlueprintGeneratedClass BP_ConcreteFurnace.BP_ConcreteFurnace_C
// Size: 0x729 (Inherited: 0x700)
struct ABP_ConcreteFurnace_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct USpotLightComponent* SpotLight; // 0x708(0x08)
	struct UPointLightComponent* PointLight; // 0x710(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x718(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x720(0x08)
	bool ActiveEffects; // 0x728(0x01)

	void OnRep_ActiveEffects(); // Function BP_ConcreteFurnace.BP_ConcreteFurnace_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ConcreteFurnace.BP_ConcreteFurnace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_ConcreteFurnace.BP_ConcreteFurnace_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ConcreteFurnace(int32_t EntryPoint); // Function BP_ConcreteFurnace.BP_ConcreteFurnace_C.ExecuteUbergraph_BP_ConcreteFurnace // (Final|UbergraphFunction) // @ game+0x1a05090
};

