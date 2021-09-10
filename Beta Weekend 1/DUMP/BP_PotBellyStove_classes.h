// BlueprintGeneratedClass BP_PotBellyStove.BP_PotBellyStove_C
// Size: 0x719 (Inherited: 0x700)
struct ABP_PotBellyStove_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x708(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x710(0x08)
	bool ActiveEffects; // 0x718(0x01)

	void OnRep_ActiveEffects(); // Function BP_PotBellyStove.BP_PotBellyStove_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_PotBellyStove.BP_PotBellyStove_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_PotBellyStove.BP_PotBellyStove_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_PotBellyStove(int32_t EntryPoint); // Function BP_PotBellyStove.BP_PotBellyStove_C.ExecuteUbergraph_BP_PotBellyStove // (Final|UbergraphFunction) // @ game+0x1a05090
};

