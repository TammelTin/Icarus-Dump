// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C
// Size: 0x954 (Inherited: 0x898)
struct UBP_ActionableBehaviour_FireArm_FireController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	bool WantsFire; // 0x8a0(0x01)
	bool IsFiring; // 0x8a1(0x01)
	char pad_8A2[0x6]; // 0x8a2(0x06)
	struct FMulticastInlineDelegate OnWeaponFired; // 0x8a8(0x10)
	float LastFireTime; // 0x8b8(0x04)
	char pad_8BC[0x4]; // 0x8bc(0x04)
	struct FTimerHandle RefireTimer; // 0x8c0(0x08)
	struct TArray<struct UObject*> LoadedAssets; // 0x8c8(0x10)
	bool AssetsLoaded; // 0x8d8(0x01)
	char pad_8D9[0x7]; // 0x8d9(0x07)
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; // 0x8e0(0x50)
	struct UParticleSystemComponent* MuzzleFlashComp; // 0x930(0x08)
	bool LoadingMuzzleFlash; // 0x938(0x01)
	char pad_939[0x3]; // 0x939(0x03)
	int32_t ChanceToNotConsumeAmmoSeed; // 0x93c(0x04)
	struct FRandomStream ChanceToNotConsumeAmmoStream; // 0x940(0x08)
	bool FireAnimPlaying; // 0x948(0x01)
	bool FirePressed; // 0x949(0x01)
	char pad_94A[0x2]; // 0x94a(0x02)
	struct FName FireAnimationCallbackId; // 0x94c(0x08)

	void HandleRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.HandleRep_WantsFire // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ChanceToNotConsumeAmmoSeed(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnRep_ChanceToNotConsumeAmmoSeed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFPWeaponAnimInstanceFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFPWeaponAnimInstanceFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AIStimulus(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.AIStimulus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetLaunchForce(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FTransform ApplyProjectileSpread(struct FTransform InTransform, struct FVector2D InVec); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ApplyProjectileSpread // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalcAmmoToConsume(int32_t AmmoToConsume); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CalcAmmoToConsume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsReloading(bool IsReloading); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.IsReloading // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetCurrentAmmo(int32_t CurrentAmmoCount); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetCurrentAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void IsAiming(bool IsAiming); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.IsAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PlayFiringCameraShake(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFiringCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetProjectileSpawnTransform(float CameraShakeScale, struct FTransform NewProjectileTransform); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetProjectileSpawnTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFirePositionAndRotation(struct FRotator FireRotation, struct FVector FirePosition); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetFirePositionAndRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayNoFireAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayNoFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFireAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateAudioPerspective(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.UpdateAudioPerspective // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopPersistentAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.StopPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartPersistentAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.StartPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SpawnProjectile(struct FProjectileFireParams ProjectileParams); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.SpawnProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DoFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.DoFire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnRep_WantsFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConvertRoundsPerMinuteToFireRate(int32_t RoundsPerMinute, float FireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ConvertRoundsPerMinuteToFireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetRefireRate(float RefireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetRefireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetFireRate(float FireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetFireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	enum class CanFireReturnType CanFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CanFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void FinishFiring(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.FinishFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckRefire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CheckRefire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.EndFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.BeginFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8(struct UObject* Loaded); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A(struct UObject* Loaded); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void MC_PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.MC_PlayFireEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Local_PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Local_PlayFireEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFireFailed(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreloadAssets(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PreloadAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayMuzzleFlash(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayMuzzleFlash // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFireAnims(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Server_BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Server_BeginFire // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Server_EndFire // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LateSetup(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NotifyReloadEnd(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.NotifyReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFirstPersonAnimationStart(struct FName AnimationId); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnFirstPersonAnimationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFirstPersonAnimationEnd(struct FName AnimationId); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnFirstPersonAnimationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnWeaponFired__DelegateSignature(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnWeaponFired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

