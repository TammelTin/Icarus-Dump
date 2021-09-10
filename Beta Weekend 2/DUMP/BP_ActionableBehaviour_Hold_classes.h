// BlueprintGeneratedClass BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C
// Size: 0x330 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Hold_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x2e0(0x08)
	float HoldTimeStamp; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FMulticastInlineDelegate HoldCompleted; // 0x2f0(0x10)
	float HoldLength; // 0x300(0x04)
	bool AutoEnd; // 0x304(0x01)
	bool NewVar_1; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	int32_t ModifierUID; // 0x308(0x04)
	struct FModifierStatesRowHandle HoldModifier; // 0x30c(0x18)
	char pad_324[0x4]; // 0x324(0x04)
	struct AActor* HoldingOnActor; // 0x328(0x08)

	void RemovePlayerModifier(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.RemovePlayerModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddPlayerModifier(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.AddPlayerModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetHoldProgress(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.GetHoldProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool IsHoldFinished(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.IsHoldFinished // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetPlayer(struct AIcarusPlayerCharacter* OwningPlayer); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.GetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void LocalOrServer(bool Local, bool Server); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.LocalOrServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsHolding(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.IsHolding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EndHold(bool Success); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.EndHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartHold(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.StartHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetHeldData(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.GetHeldData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetRemainingTime(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.GetRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	float GetHeldTime(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.GetHeldTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool CanHold(); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.CanHold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Server_StartHold(struct AActor* ActorStatedHoldOn); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.Server_StartHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_EndHold(bool Success, struct AActor* ActorEndedHoldOn); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.Server_EndHold // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CompleteHold(bool Success); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.CompleteHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnActionAborted(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.OnActionAborted // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PerformActionFromMenu(struct AActor* InvokingActor); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.PerformActionFromMenu // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold(int32_t EntryPoint); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.ExecuteUbergraph_BP_ActionableBehaviour_Hold // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void HoldCompleted__DelegateSignature(bool Success); // Function BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C.HoldCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

