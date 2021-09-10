// BlueprintGeneratedClass BP_Torch_Floor.BP_Torch_Floor_C
// Size: 0x5a0 (Inherited: 0x560)
struct ABP_Torch_Floor_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UStaticMeshComponent* SM_ITM_Torch_Rag; // 0x568(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x570(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x578(0x08)
	struct UPointLightComponent* PointLight_Fill; // 0x580(0x08)
	struct UPointLightComponent* PointLight_ShadowCaster; // 0x588(0x08)
	bool ActiveEffects; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct UInventory* FuelInventory; // 0x598(0x08)

	void GetWidgetClass(struct UUserWidget* Widget); // Function BP_Torch_Floor.BP_Torch_Floor_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayAddFuelSound(); // Function BP_Torch_Floor.BP_Torch_Floor_C.PlayAddFuelSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.AddFuel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Toggle(); // Function BP_Torch_Floor.BP_Torch_Floor_C.Toggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ActiveEffects(); // Function BP_Torch_Floor.BP_Torch_Floor_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Torch_Floor.BP_Torch_Floor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorActiveStateChanged(bool IsActive); // Function BP_Torch_Floor.BP_Torch_Floor_C.OnGeneratorActiveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multi_OnAddedFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.Multi_OnAddedFuel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Torch_Floor(int32_t EntryPoint); // Function BP_Torch_Floor.BP_Torch_Floor_C.ExecuteUbergraph_BP_Torch_Floor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

