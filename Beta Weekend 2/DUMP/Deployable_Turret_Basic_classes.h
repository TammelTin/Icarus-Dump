// BlueprintGeneratedClass Deployable_Turret_Basic.Deployable_Turret_Basic_C
// Size: 0x5bc (Inherited: 0x550)
struct ADeployable_Turret_Basic_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct USceneComponent* MuzzleLocation; // 0x558(0x08)
	struct USphereComponent* RangeOverlap; // 0x560(0x08)
	struct UStaticMeshComponent* TurretHead; // 0x568(0x08)
	struct USceneComponent* TurretRotationRoot; // 0x570(0x08)
	struct UStaticMeshComponent* Base; // 0x578(0x08)
	struct TArray<struct AActor*> HostileTargetsInRadius; // 0x580(0x10)
	float RangeRadius; // 0x590(0x04)
	bool IsFiring; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)
	struct FTimerHandle FiringTimer; // 0x598(0x08)
	struct FTimerHandle TurretTargetTimer; // 0x5a0(0x08)
	struct AActor* CurrentTarget; // 0x5a8(0x08)
	bool Broken; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	float FireRate; // 0x5b4(0x04)
	float TimeLastFired; // 0x5b8(0x04)

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.GetCriticalHitBones // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FAIRelationshipsRowHandle GetRelationshipData(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.GetRelationshipData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	int32_t GetTargetAlertness(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FVector GetTargetLocation(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.GetTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsActorAlive(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.IsActorAlive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsHidden(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.IsHidden // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void Can See Actor(struct AActor* Actor, bool CanSee); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.Can See Actor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FireBulletTowardsTarget(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.FireBulletTowardsTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CurrentTarget(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.OnRep_CurrentTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Broken(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.OnRep_Broken // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryFindNewTarget(bool FoundNewTarget); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.TryFindNewTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_ClearTargetStopFiring(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.Server_ClearTargetStopFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlaySoundFromTurretHead(struct USoundBase* Sound); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.PlaySoundFromTurretHead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_IsFiring(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.OnRep_IsFiring // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RangeRadius(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.OnRep_RangeRadius // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__RangeOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.BndEvt__RangeOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__RangeOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.BndEvt__RangeOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Multi_TargetAcquired(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.Multi_TargetAcquired // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleFiringState(bool Firing); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.ToggleFiringState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DoShootFX(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.DoShootFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void CheckForAndTrackTarget(); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.CheckForAndTrackTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_Deployable_Turret_Basic(int32_t EntryPoint); // Function Deployable_Turret_Basic.Deployable_Turret_Basic_C.ExecuteUbergraph_Deployable_Turret_Basic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

