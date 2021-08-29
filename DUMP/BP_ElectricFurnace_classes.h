// BlueprintGeneratedClass BP_ElectricFurnace.BP_ElectricFurnace_C
// Size: 0x751 (Inherited: 0x700)
struct ABP_ElectricFurnace_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct URectLightComponent* RectLight1; // 0x708(0x08)
	struct USpotLightComponent* SpotLight1; // 0x710(0x08)
	struct USceneComponent* Lights1; // 0x718(0x08)
	struct USpotLightComponent* SpotLight; // 0x720(0x08)
	struct UPointLightComponent* PointLight; // 0x728(0x08)
	struct URectLightComponent* RectLight; // 0x730(0x08)
	struct USceneComponent* Lights; // 0x738(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x740(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x748(0x08)
	bool ActiveEffects; // 0x750(0x01)

	void OnRep_ActiveEffects(); // Function BP_ElectricFurnace.BP_ElectricFurnace_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ElectricFurnace.BP_ElectricFurnace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_ElectricFurnace.BP_ElectricFurnace_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ElectricFurnace(int32_t EntryPoint); // Function BP_ElectricFurnace.BP_ElectricFurnace_C.ExecuteUbergraph_BP_ElectricFurnace // (Final|UbergraphFunction) // @ game+0x1a05090
};

