// BlueprintGeneratedClass Deployed_Drone_Base.Deployed_Drone_Base_C
// Size: 0x6b8 (Inherited: 0x620)
struct ADeployed_Drone_Base_C : AIcarusNPCCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UItemableComponent* Itemable; // 0x628(0x08)
	struct UHighlightableComponent* Highlightable; // 0x630(0x08)
	struct UInteractableComponent* Interactable; // 0x638(0x08)
	struct USphereComponent* InteractSphere; // 0x640(0x08)
	struct UInventoryComponent* Inventory; // 0x648(0x08)
	struct USphereComponent* PickupSphere; // 0x650(0x08)
	float DroneLandTimeline_NewTrack_0_6447203940D0E30BA6459C8A8E247DC3; // 0x658(0x04)
	enum class ETimelineDirection DroneLandTimeline__Direction_6447203940D0E30BA6459C8A8E247DC3; // 0x65c(0x01)
	char pad_65D[0x3]; // 0x65d(0x03)
	struct UTimelineComponent* DroneLandTimeline; // 0x660(0x08)
	struct FTimerHandle DroneHeightTimer; // 0x668(0x08)
	float DesiredWorldHeight; // 0x670(0x04)
	float FloorCheckLength; // 0x674(0x04)
	float CeilingCheckLength; // 0x678(0x04)
	float LastWorldFloorZ; // 0x67c(0x04)
	bool ScoopingUpItem; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	struct FMulticastInlineDelegate PickedUpItem; // 0x688(0x10)
	bool FollowCharacter; // 0x698(0x01)
	bool State; // 0x699(0x01)
	enum class EDroneStates CurrentState; // 0x69a(0x01)
	char pad_69B[0x5]; // 0x69b(0x05)
	struct ADeployed_DroneLandingStation_Base_C* DroneLandingStation; // 0x6a0(0x08)
	bool DockingMode; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	struct FVector LastDroneDockStartPosition; // 0x6ac(0x0c)

	void OnRep_DockingMode(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.OnRep_DockingMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CurrentState(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.OnRep_CurrentState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TestForDesiredItemPickup(struct UObject* PotentialItem, bool Success, bool InventoryFull); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.TestForDesiredItemPickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlaceItemInDroneInventory(struct AIcarusItem* Item, bool Succeeded, bool InventoryFull); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.PlaceItemInDroneInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ScoopingUpItem(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.OnRep_ScoopingUpItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Timer_FindDroneDesiredHeight(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.Timer_FindDroneDesiredHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DroneLandTimeline__FinishedFunc(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.DroneLandTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void DroneLandTimeline__UpdateFunc(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.DroneLandTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.BndEvt__PickupSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void PerformDroneLandSequence(struct ADeployed_DroneLandingStation_Base_C* DLS); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.PerformDroneLandSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OpenDroneInventory(struct UObject* PlayerCharacter); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.OpenDroneInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_Deployed_Drone_Base(int32_t EntryPoint); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.ExecuteUbergraph_Deployed_Drone_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void PickedUpItem__DelegateSignature(); // Function Deployed_Drone_Base.Deployed_Drone_Base_C.PickedUpItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

