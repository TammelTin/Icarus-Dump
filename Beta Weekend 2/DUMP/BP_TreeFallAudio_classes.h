// BlueprintGeneratedClass BP_TreeFallAudio.BP_TreeFallAudio_C
// Size: 0x324 (Inherited: 0x220)
struct ABP_TreeFallAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion; // 0x228(0x08)
	struct UAudioContextComponent* AudioContext; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FTreeAudioDataRowHandle AudioDataRow; // 0x240(0x18)
	struct TArray<struct ABP_TreeBase_C*> TreeBases; // 0x258(0x10)
	struct ABP_TreeBase_C* InitialTreeBase; // 0x268(0x08)
	float TargetVerticalOffset; // 0x270(0x04)
	float CurrentVerticalOffset; // 0x274(0x04)
	struct UFMODAudioComponent* FallAudioComponent; // 0x278(0x08)
	float positionLerpSpeed; // 0x280(0x04)
	float VelocityUpdateFrequency; // 0x284(0x04)
	float AbsoluteTimeoutLength; // 0x288(0x04)
	float NotMovingTimeoutLength; // 0x28c(0x04)
	float BranchBreakTimeWindow; // 0x290(0x04)
	float StopFallingDelayOnTrunkHit; // 0x294(0x04)
	float LastDotProduct; // 0x298(0x04)
	float LastVelocityFromPositionHistory; // 0x29c(0x04)
	struct TArray<float> BranchBreakTimes; // 0x2a0(0x10)
	struct FVector AudioDebugLocation; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FTimerHandle> TimerHandles; // 0x2c0(0x10)
	struct FPositionHistory VelocityPositionHistory; // 0x2d0(0x30)
	bool IsFalling; // 0x300(0x01)
	bool TrunkHasHitGround; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	float LastMoveTime; // 0x304(0x04)
	float HitImpulseMin; // 0x308(0x04)
	float HitCooldownExpiry; // 0x30c(0x04)
	float HitImpulseMax; // 0x310(0x04)
	float HitCooldownLength; // 0x314(0x04)
	float HitCooldownLengthAfterLanding; // 0x318(0x04)
	int32_t NumTrunkPrimitives; // 0x31c(0x04)
	float HitCooldownVarianceMultiplier; // 0x320(0x04)

	void RollNewCooldownTime(float BaseCooldownLength, float NewTime); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.RollNewCooldownTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetTrunkPrimitivesCount(struct ABP_TreeBase_C* TreeBase, int32_t NumTrunks); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.GetTrunkPrimitivesCount // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_TrunkHit(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, enum class EPhysicalSurface HitSurface, struct FVector HitLocation, float ImpulseValue, float Damage); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.Server_TrunkHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsReadyToLand(bool ReadyToLand); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.IsReadyToLand // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnRep_TrunkHasHitGround(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.OnRep_TrunkHasHitGround // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_TreeBases(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.OnRep_TreeBases // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CurrentTreeBase(struct ABP_TreeBase_C* TreeBase); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.CurrentTreeBase // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void CurrentRootTreePrimitive(struct UBP_TreePrimitive_C* RootTreePrimitive); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.CurrentRootTreePrimitive // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void StopFalling(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.StopFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFallParameters(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.UpdateFallParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateAudioPosition(float DeltaSeconds, bool Instant); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.UpdateAudioPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateAngularVelocityParameters(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.UpdateAngularVelocityParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_AddTreeBase(struct ABP_TreeBase_C* TreeBase); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.Server_AddTreeBase // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void TrunkLanded(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.TrunkLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BranchDetached(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.BranchDetached // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartFalling(); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.StartFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_PlayHitSound(struct FVector Location, float HitIntensity, enum class EPhysicalSurface Surface); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.MULTI_PlayHitSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_PlayHitBuildingSound(struct FVector Location, float Damage, enum class EPhysicalSurface Surface); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.MULTI_PlayHitBuildingSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_TreeFallAudio(int32_t EntryPoint); // Function BP_TreeFallAudio.BP_TreeFallAudio_C.ExecuteUbergraph_BP_TreeFallAudio // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

