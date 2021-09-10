// BlueprintGeneratedClass BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C
// Size: 0x5a0 (Inherited: 0x550)
struct ABP_BasicOxiteDissolver_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UStaticMeshComponent* Balloon; // 0x558(0x08)
	struct UNiagaraComponent* Niagara; // 0x560(0x08)
	struct UFMODAudioComponent* FMOD_Active_Audio; // 0x568(0x08)
	bool ActiveEffects; // 0x570(0x01)
	bool RequiresUpdate; // 0x571(0x01)
	char pad_572[0x2]; // 0x572(0x02)
	int32_t UnitsToTransfer; // 0x574(0x04)
	struct UInventory* GeneralInventory; // 0x578(0x08)
	float FillScale; // 0x580(0x04)
	int32_t StoredUnits; // 0x584(0x04)
	int32_t MaximumStoredUnits; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UFMODEvent* AddOxiteSound; // 0x590(0x08)
	struct UFMODEvent* ConsumeOxygenSound; // 0x598(0x08)

	void GetWidgetClass(struct UUserWidget* Widget); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Leak(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.Leak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_FillScale(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.OnRep_FillScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void GeneratorActiveStateUpdated(bool IsActive); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.GeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FillableUnitsUpdated(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.FillableUnitsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.OnInventoryItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Multi_OnConsumeOxygen(struct AIcarusPlayerCharacter* Instigator); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.Multi_OnConsumeOxygen // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Multi_OnAddOxite(); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.Multi_OnAddOxite // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_BasicOxiteDissolver(int32_t EntryPoint); // Function BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C.ExecuteUbergraph_BP_BasicOxiteDissolver // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

