// BlueprintGeneratedClass BP_ProcessorBase.BP_ProcessorBase_C
// Size: 0x6f0 (Inherited: 0x550)
struct ABP_ProcessorBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UAudioOcclusionComponent* AudioOcclusionComponent; // 0x558(0x08)
	struct UStaticMeshComponent* PreviewItemStaticMesh; // 0x560(0x08)
	struct USkeletalMeshComponent* PreviewItemSkeletalMesh; // 0x568(0x08)
	struct USceneComponent* Scene; // 0x570(0x08)
	struct USceneComponent* InputOverflow; // 0x578(0x08)
	struct USceneComponent* OutputOverflow; // 0x580(0x08)
	struct UChildActorComponent* Holographic3; // 0x588(0x08)
	struct UChildActorComponent* Holographic5; // 0x590(0x08)
	struct UIcarusStaticMeshComponent* CraftingItem5; // 0x598(0x08)
	struct UChildActorComponent* Item5; // 0x5a0(0x08)
	struct UIcarusStaticMeshComponent* CraftingItem4; // 0x5a8(0x08)
	struct UChildActorComponent* Holographic4; // 0x5b0(0x08)
	struct UChildActorComponent* Item4; // 0x5b8(0x08)
	struct UIcarusStaticMeshComponent* CraftingItem3; // 0x5c0(0x08)
	struct UChildActorComponent* Item3; // 0x5c8(0x08)
	struct UIcarusStaticMeshComponent* CraftingItem2; // 0x5d0(0x08)
	struct UChildActorComponent* Holographic2; // 0x5d8(0x08)
	struct UChildActorComponent* Item2; // 0x5e0(0x08)
	struct UIcarusStaticMeshComponent* CraftingItem1; // 0x5e8(0x08)
	struct UChildActorComponent* Holographic1; // 0x5f0(0x08)
	struct UChildActorComponent* Item1; // 0x5f8(0x08)
	struct UCameraComponent* Camera; // 0x600(0x08)
	struct FItemData ProcessingItem; // 0x608(0x80)
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; // 0x688(0x08)
	struct TArray<struct UChildActorComponent*> 3DItems; // 0x690(0x10)
	struct FMulticastInlineDelegate UpdateOutputItem; // 0x6a0(0x10)
	struct TArray<struct ABP_HolographicObject_C*> HolographicItems; // 0x6b0(0x10)
	float TickDelta; // 0x6c0(0x04)
	bool HasEnergyComponent; // 0x6c4(0x01)
	char pad_6C5[0x3]; // 0x6c5(0x03)
	struct UInventory* Processor Inventory; // 0x6c8(0x08)
	struct UInventory* FuelInventory; // 0x6d0(0x08)
	struct UProcessingComponent* Processing; // 0x6d8(0x08)
	bool DisplayPreviewMesh; // 0x6e0(0x01)
	bool DisplayRecipeMesh; // 0x6e1(0x01)
	bool PreviewSkeletal; // 0x6e2(0x01)
	char pad_6E3[0x5]; // 0x6e3(0x05)
	struct UGeneratorComponent* Generator; // 0x6e8(0x08)

	void PlayCraftedItemSound(struct FProcessingItem Item); // Function BP_ProcessorBase.BP_ProcessorBase_C.PlayCraftedItemSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessingCompleted(struct FProcessingItem Item); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnProcessingCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_ProcessorBase.BP_ProcessorBase_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessorStateUpdated(bool bIsActive); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnProcessorStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GeneratorActiveStateUpdated(bool IsActive); // Function BP_ProcessorBase.BP_ProcessorBase_C.GeneratorActiveStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActivateAutoCraft(struct UInventory* Inventory, int32_t Location); // Function BP_ProcessorBase.BP_ProcessorBase_C.ActivateAutoCraft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetClientState(bool ViewPreviews); // Function BP_ProcessorBase.BP_ProcessorBase_C.SetClientState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadPreview(struct TArray<struct FProcessorPreviewData> Data); // Function BP_ProcessorBase.BP_ProcessorBase_C.LoadPreview // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProcessingItemChanged(); // Function BP_ProcessorBase.BP_ProcessorBase_C.ProcessingItemChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActiveChanged(); // Function BP_ProcessorBase.BP_ProcessorBase_C.ActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePreview(); // Function BP_ProcessorBase.BP_ProcessorBase_C.UpdatePreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InventoryItemModified(struct UInventory* Inventory, int32_t Location); // Function BP_ProcessorBase.BP_ProcessorBase_C.InventoryItemModified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessingObjectChanged(struct FProcessingItem New Object); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnProcessingObjectChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessingStopped(enum class EProcessorStoppedReason Reason); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnProcessingStopped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnServer_Interact(struct AActor* Instigator); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnServer_Interact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActiveTick(float Delta); // Function BP_ProcessorBase.BP_ProcessorBase_C.ActiveTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ProcessingItem(); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnRep_ProcessingItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_75C3752F4BB17B7AAD55059E0024F8A5(struct UObject* Loaded); // Function BP_ProcessorBase.BP_ProcessorBase_C.OnLoaded_75C3752F4BB17B7AAD55059E0024F8A5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ProcessorBase.BP_ProcessorBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void LoadPreviewMesh(struct TSoftObjectPtr<UObject> Soft Mesh); // Function BP_ProcessorBase.BP_ProcessorBase_C.LoadPreviewMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ProcessorBase.BP_ProcessorBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void MC_LocalEffects(); // Function BP_ProcessorBase.BP_ProcessorBase_C.MC_LocalEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Multi_OnCraftedItem(struct FProcessingItem Item); // Function BP_ProcessorBase.BP_ProcessorBase_C.Multi_OnCraftedItem // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ProcessorBase(int32_t EntryPoint); // Function BP_ProcessorBase.BP_ProcessorBase_C.ExecuteUbergraph_BP_ProcessorBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void UpdateOutputItem__DelegateSignature(); // Function BP_ProcessorBase.BP_ProcessorBase_C.UpdateOutputItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

