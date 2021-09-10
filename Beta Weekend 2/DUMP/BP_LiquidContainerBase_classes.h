// BlueprintGeneratedClass BP_LiquidContainerBase.BP_LiquidContainerBase_C
// Size: 0x570 (Inherited: 0x550)
struct ABP_LiquidContainerBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UTextRenderComponent* FillableTypeText; // 0x558(0x08)
	struct UTextRenderComponent* CapacityText; // 0x560(0x08)
	struct UFillableComponent* Fillable; // 0x568(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFillableTypeText(); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.UpdateFillableTypeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCapacityText(); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.UpdateCapacityText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.Interact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_LiquidContainerBase(int32_t EntryPoint); // Function BP_LiquidContainerBase.BP_LiquidContainerBase_C.ExecuteUbergraph_BP_LiquidContainerBase // (Final|UbergraphFunction) // @ game+0x1a38c80
};

