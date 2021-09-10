// BlueprintGeneratedClass BP_Light_Worklamp_Basic.BP_Light_Worklamp_Basic_C
// Size: 0x561 (Inherited: 0x550)
struct ABP_Light_Worklamp_Basic_C : ABP_DeployableBase_C {
	struct USpotLightComponent* Spotlight_Main; // 0x550(0x08)
	struct UStaticMeshComponent* Lamp; // 0x558(0x08)
	bool LightActive; // 0x560(0x01)

	void OnRep_LightActive(); // Function BP_Light_Worklamp_Basic.BP_Light_Worklamp_Basic_C.OnRep_LightActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Light_Worklamp_Basic.BP_Light_Worklamp_Basic_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

