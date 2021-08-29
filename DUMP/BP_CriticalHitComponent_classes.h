// BlueprintGeneratedClass BP_CriticalHitComponent.BP_CriticalHitComponent_C
// Size: 0x240 (Inherited: 0xb0)
struct UBP_CriticalHitComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FTimerHandle ResetTimer; // 0xb8(0x08)
	enum class ECriticalHitStage CurrentStage; // 0xc0(0x01)
	bool HomingMissile; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FFCriticalHitData CriticalHitData; // 0xc8(0x10)
	bool CHRotationLocked; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FVector CHTargetLocation; // 0xdc(0x0c)
	float CHTargetRotation; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FCriticalHitSetup CurrentCriticalHitConfig; // 0xf0(0x100)
	struct UMatineeCameraShake* ProjectileShake; // 0x1f0(0x08)
	bool ProjStopped; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float DebugLength; // 0x1fc(0x04)
	float LuckyBuffer; // 0x200(0x04)
	bool Debug; // 0x204(0x01)
	bool IgnoreDamage; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	float TargetTimestamp; // 0x208(0x04)
	float TransitionSpeed; // 0x20c(0x04)
	float ProjectileBaseDamage; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct AActor* Projectile; // 0x218(0x08)
	struct FRotator FacingTargetRotation; // 0x220(0x0c)
	bool ProjMissed; // 0x22c(0x01)
	bool CanUseKillCamAudio; // 0x22d(0x01)
	bool KillCamAudioApplied; // 0x22e(0x01)
	char pad_22F[0x1]; // 0x22f(0x01)
	struct UFMODEvent* KillCamAudioEvent; // 0x230(0x08)
	struct FFMODEventInstance KillCamAudioEventInstance; // 0x238(0x08)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudio(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetVariables(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ResetVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProjectileStopped(struct AActor* Projectile, struct AActor* HitActor); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ProjectileStopped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CancelCriticalHit(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CancelCriticalHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SwitchToTarget(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTimeScale(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetTimeScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckCameraShake(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CheckCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CriticalHitSpringArm(float SpringArmYaw, struct FVector TargetLocation, struct FVector PivotOffset, struct FVector CameraOffset, struct FRotator CameraRotationOffset, struct FVector Location, struct FRotator Rotation); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CriticalHitSpringArm // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateTargetCamera(struct FCriticalHitSetup Config, struct FVector Location, struct FRotator Rotation, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculateTargetCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateProjectileCamera(struct FCriticalHitSetup Config, struct AActor* Projectile, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculateProjectileCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculatePlayerCamera(struct FCriticalHitSetup Config, struct AActor* Player, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculatePlayerCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTimeScale(float TimeScale); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetTimeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CriticalHitActive(bool Active); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CriticalHitActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetCriticalHitConfig(struct FName Name); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetCriticalHitConfig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessCriticalHit(struct FPredictProjectilePathParams ProjectilePrediction, struct AActor* Projectile, bool CriticalHit, struct AActor* Target); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ProcessCriticalHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SwitchToProjectile(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SwitchToPlayer(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_CriticalHitData(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.OnRep_CriticalHitData // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetProjectile(struct AActor* Projectile); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetTarget(struct AActor* Target); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SERVER_CancelCriticalHit(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_CancelCriticalHit // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SERVER_SetLuckyBuffer(float NewLuckyBuffer); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_SetLuckyBuffer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SERVER_SetDebug(bool Debug); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_SetDebug // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetIgnoreDamage(bool Ignore); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetIgnoreDamage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CLIENT_SwitchStage(enum class ECriticalHitStage Stage); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CLIENT_SwitchStage // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_CriticalHitComponent(int32_t EntryPoint); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ExecuteUbergraph_BP_CriticalHitComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

