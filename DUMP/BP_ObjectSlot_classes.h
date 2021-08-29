// BlueprintGeneratedClass BP_ObjectSlot.BP_ObjectSlot_C
// Size: 0x308 (Inherited: 0x2d0)
struct ABP_ObjectSlot_C : AObjectSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UBoxComponent* SplineConnectionPoint; // 0x2d8(0x08)
	struct UStaticMeshComponent* TypeIndicator; // 0x2e0(0x08)
	struct UInventoryComponent* Inventory; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f8(0x08)
	struct ABP_TestSplineConnection_C* ConnectionActor; // 0x300(0x08)

	void GetSplineConnectionPoint(struct FVector Location); // Function BP_ObjectSlot.BP_ObjectSlot_C.GetSplineConnectionPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void PostLinkDestroyed(); // Function BP_ObjectSlot.BP_ObjectSlot_C.PostLinkDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PostLinkEstablished(); // Function BP_ObjectSlot.BP_ObjectSlot_C.PostLinkEstablished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool UpdateVisibility(); // Function BP_ObjectSlot.BP_ObjectSlot_C.UpdateVisibility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool OnServer_Interact(struct AActor* Interactor, struct FHitResult HitResult); // Function BP_ObjectSlot.BP_ObjectSlot_C.OnServer_Interact // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_ObjectSlot.BP_ObjectSlot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ObjectSlot.BP_ObjectSlot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ObjectSlot.BP_ObjectSlot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetSlotType(enum class EObjectSlotType Type); // Function BP_ObjectSlot.BP_ObjectSlot_C.SetSlotType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ObjectSlot(int32_t EntryPoint); // Function BP_ObjectSlot.BP_ObjectSlot_C.ExecuteUbergraph_BP_ObjectSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

