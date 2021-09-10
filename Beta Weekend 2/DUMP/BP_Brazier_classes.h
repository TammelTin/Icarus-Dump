// BlueprintGeneratedClass BP_Brazier.BP_Brazier_C
// Size: 0x571 (Inherited: 0x550)
struct ABP_Brazier_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UNiagaraComponent* Niagara; // 0x558(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x560(0x08)
	struct UPointLightComponent* PointLight_MainBounce; // 0x568(0x08)
	bool ActiveEffects; // 0x570(0x01)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Brazier.BP_Brazier_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_Brazier.BP_Brazier_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_Brazier.BP_Brazier_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Brazier.BP_Brazier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Brazier(int32_t EntryPoint); // Function BP_Brazier.BP_Brazier_C.ExecuteUbergraph_BP_Brazier // (Final|UbergraphFunction) // @ game+0x1a38c80
};

