// BlueprintGeneratedClass BP_Fireplace.BP_Fireplace_C
// Size: 0x739 (Inherited: 0x700)
struct ABP_Fireplace_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Fireplace_Interior_SHA; // 0x708(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x710(0x08)
	struct UPointLightComponent* PointLight_MainBounce; // 0x718(0x08)
	struct UPointLightComponent* PointLight_InRight; // 0x720(0x08)
	struct UPointLightComponent* PointLight_InLeft; // 0x728(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x730(0x08)
	bool ActiveEffects; // 0x738(0x01)

	void OnRep_ActiveEffects(); // Function BP_Fireplace.BP_Fireplace_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_Fireplace.BP_Fireplace_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Fireplace.BP_Fireplace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Fireplace(int32_t EntryPoint); // Function BP_Fireplace.BP_Fireplace_C.ExecuteUbergraph_BP_Fireplace // (Final|UbergraphFunction) // @ game+0x1a05090
};

