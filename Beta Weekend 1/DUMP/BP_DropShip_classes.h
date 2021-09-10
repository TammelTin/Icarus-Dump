// BlueprintGeneratedClass BP_DropShip.BP_DropShip_C
// Size: 0x42d (Inherited: 0x2f8)
struct ABP_DropShip_C : AIcarusRocket {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UNavModifierComponent* NavModifier; // 0x300(0x08)
	struct USphereComponent* Sphere; // 0x308(0x08)
	struct UInventoryComponent* Inventory; // 0x310(0x08)
	struct UHighlightableComponent* Highlightable; // 0x318(0x08)
	struct UCameraComponent* Camera; // 0x320(0x08)
	struct UIcarusCameraSpringArm* IcarusCameraSpringArm; // 0x328(0x08)
	struct UTextRenderComponent* PlayerName; // 0x330(0x08)
	struct UInteractableComponent* Interactable; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct TArray<struct ABP_PartBase_C*> HighlightComponents; // 0x348(0x10)
	float DescentTime; // 0x358(0x04)
	float CurrentTime; // 0x35c(0x04)
	float AscentTime; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct FDropShipEvent> DecentActions; // 0x368(0x10)
	struct TArray<struct FDropShipEvent> AscentActions; // 0x378(0x10)
	struct FDropShipSequencesRowHandle DecentSequence; // 0x388(0x18)
	struct FDropShipSequencesRowHandle AscentSequence; // 0x3a0(0x18)
	bool ShipInteractionEnabled; // 0x3b8(0x01)
	bool ClientReady; // 0x3b9(0x01)
	bool ServerReady; // 0x3ba(0x01)
	char pad_3BB[0x5]; // 0x3bb(0x05)
	struct FText Name; // 0x3c0(0x18)
	struct ABP_DropshipSeat_C* Seat; // 0x3d8(0x08)
	bool CollisionEnabled; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32_t PlayerIndex; // 0x3e4(0x04)
	bool PartsAttached; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct ABP_PartBase_C* TopPart; // 0x3f0(0x08)
	struct ABP_PartBase_C* MidPart; // 0x3f8(0x08)
	struct ABP_PartBase_C* BtmPart; // 0x400(0x08)
	struct FVector ReplicatedLocation; // 0x408(0x0c)
	bool DebugDropshipSequence; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct FString LogName; // 0x418(0x10)
	bool Dropship Initialised; // 0x428(0x01)
	bool DebugWithoutBackend; // 0x429(0x01)
	enum class EDropshipDescentStateFMODParam FMODAudioDescentState; // 0x42a(0x01)
	enum class EDropshipAssignedPlayerType AssignedPlayerType; // 0x42b(0x01)
	bool bAssembledByDatabase; // 0x42c(0x01)

	void ResetDropshipActions(); // Function BP_DropShip.BP_DropShip_C.ResetDropshipActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckClientPartsReady(bool PartsReady); // Function BP_DropShip.BP_DropShip_C.CheckClientPartsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetAssignedPlayerType(enum class EDropshipAssignedPlayerType PlayerType); // Function BP_DropShip.BP_DropShip_C.SetAssignedPlayerType // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateGlobalAudioParameters(); // Function BP_DropShip.BP_DropShip_C.UpdateGlobalAudioParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_DropShip.BP_DropShip_C.OnConnectedPlayerInitialised // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HasProspectExpired(bool IsExpired); // Function BP_DropShip.BP_DropShip_C.HasProspectExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateFMODState(struct FDropShipActionsEnum Action); // Function BP_DropShip.BP_DropShip_C.UpdateFMODState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_FMODAudioDescentState(); // Function BP_DropShip.BP_DropShip_C.OnRep_FMODAudioDescentState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GrantLoadoutItems(); // Function BP_DropShip.BP_DropShip_C.GrantLoadoutItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DebugSequence(float SequenceTime); // Function BP_DropShip.BP_DropShip_C.DebugSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateFmodPlayerPerspective(bool bIsThirdPerson); // Function BP_DropShip.BP_DropShip_C.UpdateFmodPlayerPerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StateUpdated(); // Function BP_DropShip.BP_DropShip_C.StateUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitLandedState(); // Function BP_DropShip.BP_DropShip_C.InitLandedState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FixDropshipLayout(); // Function BP_DropShip.BP_DropShip_C.FixDropshipLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FixSeat(struct ABP_PartBase_C* Parent); // Function BP_DropShip.BP_DropShip_C.FixSeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FixPartsLocation(struct ABP_PartBase_C* Parent, struct ABP_PartBase_C* NewPart, struct FName ParentSocket, struct FName NewPartSocket); // Function BP_DropShip.BP_DropShip_C.FixPartsLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildShip(struct FItemData TOP_Item, struct FItemData MID_Item, struct FItemData BTM_Item); // Function BP_DropShip.BP_DropShip_C.BuildShip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudioState(); // Function BP_DropShip.BP_DropShip_C.UpdateAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCommandPart(struct ABP_RP_Command_Base_C* Command); // Function BP_DropShip.BP_DropShip_C.GetCommandPart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Name(); // Function BP_DropShip.BP_DropShip_C.OnRep_Name // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ShipInteractionEnabled(); // Function BP_DropShip.BP_DropShip_C.OnRep_ShipInteractionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetInteraction(bool Active); // Function BP_DropShip.BP_DropShip_C.SetInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReadyCheck(bool Ready); // Function BP_DropShip.BP_DropShip_C.ReadyCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseActions(); // Function BP_DropShip.BP_DropShip_C.InitialiseActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerPartEvent(struct FDropShipActionsEnum Action); // Function BP_DropShip.BP_DropShip_C.TriggerPartEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerShipEvent(struct FDropShipActionsEnum Action, bool Success); // Function BP_DropShip.BP_DropShip_C.TriggerShipEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerActions(struct TArray<struct FDropShipEvent> Actions, float Time); // Function BP_DropShip.BP_DropShip_C.TriggerActions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildDefaultShip(); // Function BP_DropShip.BP_DropShip_C.BuildDefaultShip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateHighlight(struct ABP_PartBase_C* Part, bool State); // Function BP_DropShip.BP_DropShip_C.UpdateHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRocketAssembled(); // Function BP_DropShip.BP_DropShip_C.OnRocketAssembled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnWorldInteraction(struct UInteractableComponent* Interactable, struct AActor* Instigator, struct FHitResult HitResult); // Function BP_DropShip.BP_DropShip_C.OnWorldInteraction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_DropShip.BP_DropShip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void InitialisePosition(); // Function BP_DropShip.BP_DropShip_C.InitialisePosition // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerLaunch(); // Function BP_DropShip.BP_DropShip_C.TriggerLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnServer_ClientReady(); // Function BP_DropShip.BP_DropShip_C.OnServer_ClientReady // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropShip.BP_DropShip_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ShipReadyToBuild(); // Function BP_DropShip.BP_DropShip_C.ShipReadyToBuild // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DefaultShipBuilt(); // Function BP_DropShip.BP_DropShip_C.DefaultShipBuilt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipLog(struct FString Log); // Function BP_DropShip.BP_DropShip_C.DropshipLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_DropShip.BP_DropShip_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ResetTickDoOnce(); // Function BP_DropShip.BP_DropShip_C.ResetTickDoOnce // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProspectSessionEnded(enum class EEndProspectSessionContext Context); // Function BP_DropShip.BP_DropShip_C.OnProspectSessionEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_AssignedPlayerCharacterID(); // Function BP_DropShip.BP_DropShip_C.OnRep_AssignedPlayerCharacterID // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void IcarusBeginPlay(); // Function BP_DropShip.BP_DropShip_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RocketState(); // Function BP_DropShip.BP_DropShip_C.OnRep_RocketState // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnDatabaseReload(); // Function BP_DropShip.BP_DropShip_C.OnDatabaseReload // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnDropshipSpawnPlayerInit(); // Function BP_DropShip.BP_DropShip_C.OnDropshipSpawnPlayerInit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DropShip(int32_t EntryPoint); // Function BP_DropShip.BP_DropShip_C.ExecuteUbergraph_BP_DropShip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

