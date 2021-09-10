// BlueprintGeneratedClass BP_Slotable.BP_Slotable_C
// Size: 0x1ec (Inherited: 0xd0)
struct UBP_Slotable_C : USlotableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FTimerHandle SlotRenderTick; // 0xd8(0x08)
	struct UStaticMeshComponent* HighlightedVisualizer; // 0xe0(0x08)
	struct FString RequiredSocketNameSubstring; // 0xe8(0x10)
	struct UStaticMeshComponent* LinkedMesh; // 0xf8(0x08)
	struct TMap<struct FVector, struct FSlotWrapper> SocketMap; // 0x100(0x50)
	struct TArray<struct FVector> SocketStatusKeysReplicated; // 0x150(0x10)
	struct TArray<struct FSlotWrapper> SlotWrapperReplicated; // 0x160(0x10)
	struct FMulticastInlineDelegate ItemAddedToSlot; // 0x170(0x10)
	struct UInventory* LinkedInventory; // 0x180(0x08)
	struct TArray<struct UStaticMesh*> StaticmeshHardRefs; // 0x188(0x10)
	struct TMap<int32_t, float> SlotFreezeTimer; // 0x198(0x50)
	int32_t SlotCount; // 0x1e8(0x04)

	struct AIcarusActor* GetActorInSlot(int32_t Index); // Function BP_Slotable.BP_Slotable_C.GetActorInSlot // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PushConfigToInventorySlots(); // Function BP_Slotable.BP_Slotable_C.PushConfigToInventorySlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddToSlotFromItemData(struct FVector SocketLocation, struct FTransform SocketTrans, struct FItemData ItemData, struct AIcarusItem* IcarusItem); // Function BP_Slotable.BP_Slotable_C.AddToSlotFromItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InventoryLocationToSlotLink(struct FVector Slot, struct AIcarusItem* Item); // Function BP_Slotable.BP_Slotable_C.InventoryLocationToSlotLink // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SlotableInteract(struct AIcarusPlayerCharacter* Instigator, bool SuccessfullyInteracted); // Function BP_Slotable.BP_Slotable_C.SlotableInteract // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsComponentAVisualizer(struct UActorComponent* Component, bool IsVisualizer); // Function BP_Slotable.BP_Slotable_C.IsComponentAVisualizer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnRep_SlotWrapperReplicated(); // Function BP_Slotable.BP_Slotable_C.OnRep_SlotWrapperReplicated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConfigureVisualizerMeshDefaults(struct UStaticMeshComponent* StaticMeshComponent, struct UStaticMesh* MeshToUse); // Function BP_Slotable.BP_Slotable_C.ConfigureVisualizerMeshDefaults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClientUpdateSocketMapFromArrays(); // Function BP_Slotable.BP_Slotable_C.ClientUpdateSocketMapFromArrays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerUpdateSlotVisualizer(struct FVector Location, struct UStaticMeshComponent* Socket Visualizer); // Function BP_Slotable.BP_Slotable_C.ServerUpdateSlotVisualizer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerUpdateSlotItem(struct FVector Location, struct AIcarusItem* Item); // Function BP_Slotable.BP_Slotable_C.ServerUpdateSlotItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CanInteract(struct AIcarusPlayerCharacter* PlayerChar, bool CanInteract, bool HitSlotVisualizer, bool PassedQuery, struct UStaticMeshComponent* HitStaticMesh Component); // Function BP_Slotable.BP_Slotable_C.CanInteract // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DoesItemMeetSlotQuery(struct AIcarusItem* Item, struct FVector Slot, bool QueryMet); // Function BP_Slotable.BP_Slotable_C.DoesItemMeetSlotQuery // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_SocketStatusKeysReplicated(); // Function BP_Slotable.BP_Slotable_C.OnRep_SocketStatusKeysReplicated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetClosestSocketToLocation(struct FVector WorldSpaceLocation, struct FVector ClosestSocket2, struct FTransform ClosestSocketTrans, struct FName ClosestSocketName, float ClosestDistance2, struct FSlotWrapper ClosestSlotWrapper); // Function BP_Slotable.BP_Slotable_C.GetClosestSocketToLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindNearestLookedAtSocket(struct AIcarusPlayerCharacter* PlayerChar2, bool HitSlotVisualizer, struct FVector ClosestSocketLocation2, struct AIcarusItem* MappedItem2, struct FTransform ClosestSocketTrans2, struct FName ClosestSocketName2, float ClosestDistance, struct FSlotWrapper ClosestSlotWrapper); // Function BP_Slotable.BP_Slotable_C.FindNearestLookedAtSocket // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitSockets(); // Function BP_Slotable.BP_Slotable_C.InitSockets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_66DA3BA040838D67FF74688CF800B7E9(struct UObject* Loaded); // Function BP_Slotable.BP_Slotable_C.OnLoaded_66DA3BA040838D67FF74688CF800B7E9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Slotable.BP_Slotable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SlotRenderChange(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_Slotable.BP_Slotable_C.SlotRenderChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LookTick(); // Function BP_Slotable.BP_Slotable_C.LookTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AsyncClientUpdateSocketStatus(); // Function BP_Slotable.BP_Slotable_C.AsyncClientUpdateSocketStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void itemaddedbind(struct UInventory* Inventory, int32_t Location); // Function BP_Slotable.BP_Slotable_C.itemaddedbind // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void itemremovebind(struct UInventory* Inventory, int32_t Location); // Function BP_Slotable.BP_Slotable_C.itemremovebind // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void itemsupdated(); // Function BP_Slotable.BP_Slotable_C.itemsupdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Slotable.BP_Slotable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AsyncConfigAllVisualizers(); // Function BP_Slotable.BP_Slotable_C.AsyncConfigAllVisualizers // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_Slotable.BP_Slotable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Slotable(int32_t EntryPoint); // Function BP_Slotable.BP_Slotable_C.ExecuteUbergraph_BP_Slotable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ItemAddedToSlot__DelegateSignature(struct FVector Slot, struct AIcarusItem* NewItem); // Function BP_Slotable.BP_Slotable_C.ItemAddedToSlot__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

