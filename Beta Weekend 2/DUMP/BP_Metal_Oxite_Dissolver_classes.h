// BlueprintGeneratedClass BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C
// Size: 0x750 (Inherited: 0x6f0)
struct ABP_Metal_Oxite_Dissolver_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UPointLightComponent* PointLight7; // 0x6f8(0x08)
	struct UPointLightComponent* PointLight6; // 0x700(0x08)
	struct UPointLightComponent* PointLight5; // 0x708(0x08)
	struct UPointLightComponent* PointLight4; // 0x710(0x08)
	struct UPointLightComponent* PointLight3; // 0x718(0x08)
	struct UPointLightComponent* PointLight2; // 0x720(0x08)
	struct UPointLightComponent* PointLight1; // 0x728(0x08)
	struct USceneComponent* Scene_Lights; // 0x730(0x08)
	struct UStaticMeshComponent* SM_DEP_Oxite_Dissolver_Metal_SHA; // 0x738(0x08)
	bool ActiveEffects; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
	struct FTimerHandle ActiveEventTimer; // 0x748(0x08)

	void FillEffect(); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.FillEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessorStateChanged(bool bIsActive); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.OnProcessorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Metal_Oxite_Dissolver(int32_t EntryPoint); // Function BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C.ExecuteUbergraph_BP_Metal_Oxite_Dissolver // (Final|UbergraphFunction) // @ game+0x1a38c80
};

