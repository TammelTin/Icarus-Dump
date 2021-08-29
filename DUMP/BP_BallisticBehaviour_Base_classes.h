// BlueprintGeneratedClass BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C
// Size: 0x638 (Inherited: 0x360)
struct UBP_BallisticBehaviour_Base_C : UBallisticComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UBallisticComponent* BallisticComponent; // 0x368(0x08)
	struct FBallisticData BallisticData; // 0x370(0x148)
	bool KillCam; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UObject* PayloadClass; // 0x4c0(0x08)
	bool OnBreak; // 0x4c8(0x01)
	bool DeployPayloadOnLoad; // 0x4c9(0x01)
	char pad_4CA[0x2]; // 0x4ca(0x02)
	struct FHitResult PreviousHitResult; // 0x4cc(0x8c)
	struct UFMODAudioComponent* FlightSound; // 0x558(0x08)
	struct UParticleSystemComponent* TrailParticle; // 0x560(0x08)
	bool DebugBallistic; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UPhysicsAsset* InitialPhysicsAsset; // 0x570(0x08)
	bool HasProjectileSettled; // 0x578(0x01)
	bool HasValidHit; // 0x579(0x01)
	char pad_57A[0x6]; // 0x57a(0x06)
	struct USkeletalMesh* InitialSkeletalMesh; // 0x580(0x08)
	struct FProjectileFireParams AdvancedParams; // 0x588(0x08)
	struct FVector Bounds; // 0x590(0x0c)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FBallisticAudioData AudioData; // 0x5a0(0x50)
	struct AActor* TargetActor; // 0x5f0(0x08)
	struct FMulticastInlineDelegate PayloadClassLoaded; // 0x5f8(0x10)
	bool ProjectileFrozen; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct FTimerHandle PostPayloadDestroyTimer; // 0x610(0x08)
	struct FVector LaunchImpulse; // 0x618(0x0c)
	char pad_624[0x4]; // 0x624(0x04)
	struct UBP_CriticalHitComponent_C* CriticalHitComponentRef; // 0x628(0x08)
	struct FTimerHandle TryStopFlightSoundTimerHandle; // 0x630(0x08)

	void StopFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.StopFlightSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PlayFlightSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrailLocation(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.UpdateTrailLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UBP_CriticalHitComponent_C* GetCriticalHitComponent(bool Success); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetCriticalHitComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	enum class ECollisionChannel GetTraceChannel(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetTraceChannel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetHomingMagnitude(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetHomingMagnitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool CanKillCam(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CanKillCam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool CanAimAssist(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CanAimAssist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ApplyKillCam(struct AActor* InActor); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ApplyKillCam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ApplyAimAssist(struct AActor* InActor, struct FName TargetBone, struct USceneComponent* TargetComponent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ApplyAimAssist // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CheckKillCamOnTarget(struct AActor* HitActor, struct FName CriticalHitBone, struct FPredictProjectilePathResult InPredictedHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckKillCamOnTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CheckKillCam(struct AActor* Target, struct FName HitBone, struct UPrimitiveComponent* HitComponent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckKillCam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CheckAimAssist(struct AActor* HitActor, struct FName HitBone, struct USceneComponent* HitComponent, struct FPredictProjectilePathResult PredictResults); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckAimAssist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckSpecialMovement(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckSpecialMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LogCurrentHomingTarget(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.LogCurrentHomingTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAttachParentUpdated(struct AActor* NewParent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnAttachParentUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DamageBlackListTagsCheck(struct AActor* Actor, bool Blacklisted); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DamageBlackListTagsCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CleanupBallistic(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CleanupBallistic // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DestroyBallisticItem(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DestroyBallisticItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ProjectileFrozen(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnRep_ProjectileFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProjectileFrozen(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileFrozen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetProjectileDamage(struct FHitResult HitInfo); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetProjectileDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckStealthAttack(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckStealthAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayHitEffects(struct FHitResult Hit, bool ValidHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PlayHitEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnPayloadDeploy(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnPayloadDeploy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnHitActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnHitActorEndPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SpawnPayload(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.SpawnPayload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_OnBreak(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnRep_OnBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DoProjectileHit(struct FHitResult HitResult); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DoProjectileHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_65DBCD26461857A86035D28F5CD97DF7(struct UObject* Loaded); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnLoaded_65DBCD26461857A86035D28F5CD97DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_BC74464F40A013B4C602FDBDB44FD47D(struct UObject* Loaded); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnLoaded_BC74464F40A013B4C602FDBDB44FD47D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnProjectileActivated(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileActivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProjectileDeactivated(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileDeactivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multi_PlayHitFX(struct FHitResult Hit, bool ValidHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.Multi_PlayHitFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void TryStopFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.TryStopFlightSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckStopFlightSoundValid(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckStopFlightSoundValid // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BallisticBehaviour_Base(int32_t EntryPoint); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ExecuteUbergraph_BP_BallisticBehaviour_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void PayloadClassLoaded__DelegateSignature(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PayloadClassLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

