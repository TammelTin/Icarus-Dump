// BlueprintGeneratedClass BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C
// Size: 0x3e0 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Fishing_Rod_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	bool IsFiring; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float LastFireDrawPower; // 0x2e4(0x04)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x2e8(0x08)
	struct FRangedWeaponData RangedWeaponData; // 0x2f0(0xd0)
	float DrawPower; // 0x3c0(0x04)
	float ThrowOffset; // 0x3c4(0x04)
	struct AIcarusItem* IcarusItemRef; // 0x3c8(0x08)
	bool IsDrawing; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct AIcarusItem* ThrownItem; // 0x3d8(0x08)

	void LocalOrServer(bool Local, bool Server); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.LocalOrServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCurrentDrawPercentage(float Percentage); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.GetCurrentDrawPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void CanThrow(bool CanThrow); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void DoThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.DoThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_RequestThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Server_RequestThrow // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Multicast_PostThrow(); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Multicast_PostThrow // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionAborted(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.OnActionAborted // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Server_Reel(bool Reel); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Server_Reel // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_QuickReel(); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Server_QuickReel // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Reel(bool Reel); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.Reel // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Rod(int32_t EntryPoint); // Function BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C.ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Rod // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

