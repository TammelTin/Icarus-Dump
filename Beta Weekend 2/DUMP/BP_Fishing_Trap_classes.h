// BlueprintGeneratedClass BP_Fishing_Trap.BP_Fishing_Trap_C
// Size: 0x5a0 (Inherited: 0x550)
struct ABP_Fishing_Trap_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UStaticMeshComponent* Cylinder3; // 0x558(0x08)
	struct UStaticMeshComponent* Cylinder2; // 0x560(0x08)
	struct UStaticMeshComponent* Cylinder1; // 0x568(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x570(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x578(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x580(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x588(0x08)
	float TimeToCatch; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct UInventory* InventoryRef; // 0x598(0x08)

	void Init(); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddFishToInventory(); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.AddFishToInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CatchFish(); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.CatchFish // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ItemRemoved(struct UInventory* Inventory, int32_t Location); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.ItemRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.ItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_UpdateFish(bool Visible); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.MULTI_UpdateFish // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartFishing(); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.StartFishing // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Fishing_Trap(int32_t EntryPoint); // Function BP_Fishing_Trap.BP_Fishing_Trap_C.ExecuteUbergraph_BP_Fishing_Trap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

