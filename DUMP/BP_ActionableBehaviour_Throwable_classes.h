// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C
// Size: 0x410 (Inherited: 0x2c0)
struct UBP_ActionableBehaviour_Throwable_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	bool IsFiring; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float LastFireDrawPower; // 0x2cc(0x04)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x2d0(0x08)
	struct FRangedWeaponData RangedWeaponData; // 0x2d8(0xd0)
	float DrawPower; // 0x3a8(0x04)
	float ThrowOffset; // 0x3ac(0x04)
	struct AIcarusItem* IcarusItemRef; // 0x3b0(0x08)
	bool IsDrawing; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct AIcarusItem* ThrownItem; // 0x3c0(0x08)
	struct TArray<struct UObject*> StoredAnimMontages; // 0x3c8(0x10)
	float CachedDrawPower; // 0x3d8(0x04)
	bool ReadyToThrow; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct FName ThrowAnimSection; // 0x3e0(0x08)
	struct FName IdleAnimSection; // 0x3e8(0x08)
	struct UPostProcessComponent* ActionablePostProcess; // 0x3f0(0x08)
	float FullDrawPowerTimeStamp; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UCameraComponent* FPCamera; // 0x400(0x08)
	bool Thrown; // 0x408(0x01)
	enum class EActionableEventType ThrowEventType; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	int32_t HoldModifierUID; // 0x40c(0x04)

	int32_t GetStat(struct FStatsEnum Stat); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.GetStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void RemoveHoldModifier(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.RemoveHoldModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddHoldModifier(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.AddHoldModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool BP_ShouldApplyEndStaminaCost(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.BP_ShouldApplyEndStaminaCost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopAimAnim(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.StopAimAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool HasIdleAnim(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.HasIdleAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void HasThrowAnim(bool HasThrowAnim); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.HasThrowAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdatePostProcessAndShake(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.UpdatePostProcessAndShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsCharging(bool Charging); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void RequestThrow(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.RequestThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetFiring(bool IsFiring); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.SetFiring // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCurrentDrawPercentage(float Percentage); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.GetCurrentDrawPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CanThrow(bool CanThrow); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void DoThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.DoThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11(struct UObject* Loaded); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnActionAborted(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnActionAborted // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Server_RequestThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Server_RequestThrow // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multicast_PostThrow(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Multicast_PostThrow // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable(int32_t EntryPoint); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

