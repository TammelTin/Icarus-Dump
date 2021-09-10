// BlueprintGeneratedClass BP_CriticalHitComponent.BP_CriticalHitComponent_C
// Size: 0x269 (Inherited: 0xb0)
struct UBP_CriticalHitComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FTimerHandle ResetTimer; // 0xb8(0x08)
	enum class ECriticalHitStage CurrentStage; // 0xc0(0x01)
	bool HomingMissile; // 0xc1(0x01)
	bool CHRotationLocked; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	struct FVector CachedTargetLocation; // 0xc4(0x0c)
	float CHTargetRotation; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FCriticalHitSetup CurrentCriticalHitConfig; // 0xd8(0x100)
	struct UMatineeCameraShake* ProjectileShake; // 0x1d8(0x08)
	bool ProjStopped; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float DebugLength; // 0x1e4(0x04)
	float LuckyBuffer; // 0x1e8(0x04)
	bool Debug; // 0x1ec(0x01)
	bool IgnoreDamage; // 0x1ed(0x01)
	char pad_1EE[0x2]; // 0x1ee(0x02)
	float TargetTimestamp; // 0x1f0(0x04)
	float TransitionSpeed; // 0x1f4(0x04)
	float ProjectileBaseDamage; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct AActor* Projectile; // 0x200(0x08)
	struct FRotator FacingTargetRotation; // 0x208(0x0c)
	bool ProjMissed; // 0x214(0x01)
	bool CanUseKillCamAudio; // 0x215(0x01)
	bool KillCamAudioApplied; // 0x216(0x01)
	char pad_217[0x1]; // 0x217(0x01)
	struct UFMODEvent* KillCamAudioEvent; // 0x218(0x08)
	struct FFMODEventInstance KillCamAudioEventInstance; // 0x220(0x08)
	struct FVector TrackingTargetLocation; // 0x228(0x0c)
	struct FRotator CachedProjectileRotation; // 0x234(0x0c)
	struct FVector CachedProjectileLocation; // 0x240(0x0c)
	float TargetFOV; // 0x24c(0x04)
	float LastProjectileDistance; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct AActor* CriticalHitData_Projectile; // 0x258(0x08)
	struct AActor* CriticalHitData_Target; // 0x260(0x08)
	bool KillCamRunning; // 0x268(0x01)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCriticalHitData(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateCriticalHitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CriticalHitData_Target(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.OnRep_CriticalHitData_Target // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CriticalHitData_Projectile(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.OnRep_CriticalHitData_Projectile // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ProjectileToTargetCheck(bool Force); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ProjectileToTargetCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTargetFOV(bool Zoom, float ZoomSpeed); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateTargetFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTargetRotation(bool Rotate, float RotateSpeed); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateTargetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTrackingLocation(struct FVector InLocation, float SmoothingSpeed); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateTrackingLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFacingRotation(struct FVector Start, struct FVector End, float SmoothingSpeed); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateFacingRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetCriticalLocationOnTarget(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetCriticalLocationOnTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetTargetCentreLocation(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetTargetCentreLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateAudio(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.UpdateAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetVariables(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ResetVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProjectileStopped(struct AActor* Projectile, struct AActor* HitActor); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ProjectileStopped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CancelCriticalHit(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CancelCriticalHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SwitchToTarget(bool ServerTriggered); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTimeScale(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetTimeScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckCameraShake(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CheckCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CriticalHitSpringArm(float SpringArmYaw, struct FVector TargetLocation, struct FVector PivotOffset, struct FVector CameraOffset, struct FRotator CameraRotationOffset, struct FVector Location, struct FRotator Rotation); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CriticalHitSpringArm // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalculateTargetCamera(struct FCriticalHitSetup Config, struct FVector Location, struct FRotator Rotation, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculateTargetCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalculateProjectileCamera(struct FCriticalHitSetup Config, struct AActor* Projectile, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculateProjectileCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalculatePlayerCamera(struct FCriticalHitSetup Config, struct AActor* Player, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CalculatePlayerCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTimeScale(float TimeScale); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetTimeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void CriticalHitActive(bool Active); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CriticalHitActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetCriticalHitConfig(struct FName Name); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetCriticalHitConfig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProcessCriticalHit(struct FPredictProjectilePathParams ProjectilePrediction, struct AActor* Projectile, bool CriticalHit, struct AActor* Target); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ProcessCriticalHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SwitchToProjectile(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SwitchToPlayer(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SwitchToPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CriticalHitData(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.OnRep_CriticalHitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetProjectile(struct AActor* Projectile); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetTarget(struct AActor* Target); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.GetTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SERVER_CancelCriticalHit(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_CancelCriticalHit // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SERVER_SetLuckyBuffer(float NewLuckyBuffer); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_SetLuckyBuffer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SERVER_SetDebug(bool Debug); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SERVER_SetDebug // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetIgnoreDamage(bool Ignore); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.SetIgnoreDamage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CLIENT_SwitchStage(enum class ECriticalHitStage Stage); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.CLIENT_SwitchStage // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_CriticalHitComponent(int32_t EntryPoint); // Function BP_CriticalHitComponent.BP_CriticalHitComponent_C.ExecuteUbergraph_BP_CriticalHitComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

