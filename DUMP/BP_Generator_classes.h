// BlueprintGeneratedClass BP_Generator.BP_Generator_C
// Size: 0x598 (Inherited: 0x560)
struct ABP_Generator_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UCameraComponent* Camera; // 0x568(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x570(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x578(0x08)
	struct FTimerHandle FunctionTimerRef; // 0x580(0x08)
	float Range; // 0x588(0x04)
	bool ActiveEffects; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct UInventory* FuelInventory; // 0x590(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Generator.BP_Generator_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ActiveEffects(); // Function BP_Generator.BP_Generator_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PowerSuitableMachines(); // Function BP_Generator.BP_Generator_C.PowerSuitableMachines // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Generator.BP_Generator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_Generator.BP_Generator_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GeneratorActive(bool Active); // Function BP_Generator.BP_Generator_C.GeneratorActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Generator(int32_t EntryPoint); // Function BP_Generator.BP_Generator_C.ExecuteUbergraph_BP_Generator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

