// BlueprintGeneratedClass BP_Torch_Floor.BP_Torch_Floor_C
// Size: 0x598 (Inherited: 0x550)
struct ABP_Torch_Floor_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x558(0x08)
	struct UStaticMeshComponent* SM_ITM_Torch_Rag; // 0x560(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x568(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x570(0x08)
	struct UPointLightComponent* PointLight_Fill; // 0x578(0x08)
	struct UPointLightComponent* PointLight_ShadowCaster; // 0x580(0x08)
	bool ActiveEffects; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct UInventory* FuelInventory; // 0x590(0x08)

	void GetWidgetClass(struct UUserWidget* Widget); // Function BP_Torch_Floor.BP_Torch_Floor_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayAddFuelSound(); // Function BP_Torch_Floor.BP_Torch_Floor_C.PlayAddFuelSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.AddFuel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Toggle(); // Function BP_Torch_Floor.BP_Torch_Floor_C.Toggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_Torch_Floor.BP_Torch_Floor_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorActiveStateChanged(bool IsActive); // Function BP_Torch_Floor.BP_Torch_Floor_C.OnGeneratorActiveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Torch_Floor.BP_Torch_Floor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void Multi_OnAddedFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.Multi_OnAddedFuel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CustomEvent_1(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_Torch_Floor.BP_Torch_Floor_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Torch_Floor(int32_t EntryPoint); // Function BP_Torch_Floor.BP_Torch_Floor_C.ExecuteUbergraph_BP_Torch_Floor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

