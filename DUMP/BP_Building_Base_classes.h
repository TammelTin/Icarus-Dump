// BlueprintGeneratedClass BP_Building_Base.BP_Building_Base_C
// Size: 0x9c8 (Inherited: 0x3c0)
struct ABP_Building_Base_C : ABuildingBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UAudioContextComponent* AudioContext; // 0x3c8(0x08)
	struct USceneComponent* SecondOutsideTestLocation; // 0x3d0(0x08)
	struct UDestructibleComponent* Stripped_DestructibleMesh; // 0x3d8(0x08)
	struct UDestructibleComponent* Main_DestructibleMesh; // 0x3e0(0x08)
	struct UStaticMeshComponent* Stripped_BuildingMesh; // 0x3e8(0x08)
	struct UNavModifierComponent* NavModifier; // 0x3f0(0x08)
	struct UStaticMeshComponent* Main_BuildingShadowMesh; // 0x3f8(0x08)
	struct URadialForceComponent* RadialForce; // 0x400(0x08)
	struct USceneComponent* FireEffects; // 0x408(0x08)
	struct UArrowComponent* PlacementArrow; // 0x410(0x08)
	struct USceneComponent* PlacementHelpers; // 0x418(0x08)
	struct UStaticMeshComponent* FoilageCuller; // 0x420(0x08)
	struct UArrowComponent* Arrow3; // 0x428(0x08)
	struct UArrowComponent* Arrow2; // 0x430(0x08)
	struct UArrowComponent* Arrow1; // 0x438(0x08)
	struct UTextRenderComponent* rotdebug; // 0x440(0x08)
	struct UArrowComponent* DebugArrows; // 0x448(0x08)
	struct UTextRenderComponent* Debug; // 0x450(0x08)
	struct UStaticMeshComponent* Main_BuildingMesh; // 0x458(0x08)
	struct UBoxComponent* Box11; // 0x460(0x08)
	struct UBoxComponent* Box01; // 0x468(0x08)
	struct UBoxComponent* Box10; // 0x470(0x08)
	struct UBoxComponent* Box00; // 0x478(0x08)
	struct USceneComponent* CollisionTesting; // 0x480(0x08)
	struct USceneComponent* Center; // 0x488(0x08)
	struct TArray<struct FVectorPair> BlockingLinesArray; // 0x490(0x10)
	float GridSize; // 0x4a0(0x04)
	struct FVector GridLocation; // 0x4a4(0x0c)
	struct ABP_Grid_Base_C* ParentGrid; // 0x4b0(0x08)
	float Health; // 0x4b8(0x04)
	float MaxAnchoredStability; // 0x4bc(0x04)
	float AnchoredStability; // 0x4c0(0x04)
	float StabilityPassMultiplier; // 0x4c4(0x04)
	bool Dirtied; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct TArray<struct ABP_Building_Base_C*> CheckedBuildingsCache; // 0x4d0(0x10)
	struct UMaterialInterface* debugMatCache; // 0x4e0(0x08)
	struct UStaticMeshComponent* MeshCache; // 0x4e8(0x08)
	bool Debugging; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	int32_t HardStabilityMaxRange; // 0x4f4(0x04)
	struct TMap<struct ABP_Building_Base_C*, float> HardStabilityMap; // 0x4f8(0x50)
	float SoftStability; // 0x548(0x04)
	float MaxHardStability; // 0x54c(0x04)
	struct FTimerHandle CrackTimer; // 0x550(0x08)
	float CrackUpdateTime; // 0x558(0x04)
	struct FVectorSpringState ShakeSpring; // 0x55c(0x18)
	struct FVector ShakeTarget; // 0x574(0x0c)
	float LastHardStabilityCheck; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TArray<struct ABP_Building_Base_C*> CachedAffectedBuildings; // 0x588(0x10)
	bool MagicAnchor; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FTimerHandle CollapseTimer; // 0x5a0(0x08)
	struct FRotator GridSpaceRotation; // 0x5a8(0x0c)
	struct FVector GridSpaceCenterLocation; // 0x5b4(0x0c)
	bool CachedRotateCentersUpToHitNormal; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct TArray<struct ABP_Building_Base_C*> RemoteAnchorStabilityBuilding; // 0x5c8(0x10)
	struct FVector MeshStartingRelitiveLocation; // 0x5d8(0x0c)
	bool BlockLikePlacement; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	float StraightTracePlacementRange; // 0x5e8(0x04)
	float ForwardThenDownTraceRange; // 0x5ec(0x04)
	struct UMaterialInstanceDynamic* DynamicCrackMatInst; // 0x5f0(0x08)
	struct UCurveFloat* CrackAmountCurve; // 0x5f8(0x08)
	struct FTimerHandle VeryUnstableEffectsTime; // 0x600(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x608(0x08)
	struct FString debugAnchorStabs; // 0x610(0x10)
	float LastPushAnchorStability; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct FTimerHandle DirtyTickTimer; // 0x628(0x08)
	struct UCurveFloat* DestructibleOcclusionCurve; // 0x630(0x08)
	bool TempStability; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct FMulticastInlineDelegate BuildingDestroyed; // 0x640(0x10)
	float DebugUnclampedHardStability; // 0x650(0x04)
	bool Destroyed; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct TArray<struct UBP_Weight_C*> Weights; // 0x658(0x10)
	float DesiredCrackLevel; // 0x668(0x04)
	float CurrentCrackLevel; // 0x66c(0x04)
	struct UMaterialInterface* DefaultSlot0Material; // 0x670(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMainMeshMaterials; // 0x678(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> InstancedMainMeshMaterials; // 0x688(0x10)
	struct FBuildableRowHandle BuildableRow; // 0x698(0x18)
	float HitProcessingRadiusThreshold; // 0x6b0(0x04)
	bool ClientsideGhost; // 0x6b4(0x01)
	bool ShowPlacementHelpers; // 0x6b5(0x01)
	char pad_6B6[0x2]; // 0x6b6(0x02)
	struct FFMODEventInstance StressDamageAudioEventInstance; // 0x6b8(0x08)
	bool StabilityAudioEnabled; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	struct FVector BuildingGridFootprint; // 0x6c4(0x0c)
	bool ClampHitNormalToUpOrDown; // 0x6d0(0x01)
	char pad_6D1[0x3]; // 0x6d1(0x03)
	struct FRotator CachedCenterWorldRotation; // 0x6d4(0x0c)
	bool OnFire; // 0x6e0(0x01)
	bool GhostBlockedPlacement; // 0x6e1(0x01)
	char pad_6E2[0x2]; // 0x6e2(0x02)
	float GhostActorViewDistance; // 0x6e4(0x04)
	struct FMulticastInlineDelegate BuildingReplaced; // 0x6e8(0x10)
	struct FVector OutsideTestPushoutAmount; // 0x6f8(0x0c)
	bool ReceivingWindDamage; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct FTimerHandle WindDamageTimer; // 0x708(0x08)
	struct FTimerHandle WindParticleSystemSlowTimer; // 0x710(0x08)
	float BaseDamageFromWind; // 0x718(0x04)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct TArray<struct FDestructionPoints> DestructibleDamagedPoints; // 0x720(0x10)
	int32_t WindDamageProcessedIndex; // 0x730(0x04)
	bool FullyStripped; // 0x734(0x01)
	char pad_735[0x3]; // 0x735(0x03)
	struct UDestructibleMesh* StrippedDestructibleMesh; // 0x738(0x08)
	struct UStaticMesh* StrippedStaticMesh; // 0x740(0x08)
	float CollisionDamageImpulseScalar; // 0x748(0x04)
	bool Stripping; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	struct FBuildableAudioData AudioData; // 0x750(0x160)
	struct FFMODEventInstance WindDamageAudioEventInstance; // 0x8b0(0x08)
	struct FVector2D DamageSoundCooldownRange; // 0x8b8(0x08)
	struct FVector2D DestructibleDamageSoundCooldownRange; // 0x8c0(0x08)
	float DamageSoundCooldownEndTime; // 0x8c8(0x04)
	float DestructibleDamageSoundCooldownEndTime; // 0x8cc(0x04)
	struct UStaticMesh* Main_BuildingStaticMesh; // 0x8d0(0x08)
	bool ShouldOptionallyRotateCenterUptoInpactNormal; // 0x8d8(0x01)
	char pad_8D9[0x3]; // 0x8d9(0x03)
	struct FVector NewGridPlacementOffset; // 0x8dc(0x0c)
	struct UStaticMesh* Main_BuildingShadowGeoMesh; // 0x8e8(0x08)
	struct UBP_WeatherAudioComponent_BuildingWindDamage_C* WindDamageWeatherAudio; // 0x8f0(0x08)
	struct UNavArea* BuildingNavAreaClass; // 0x8f8(0x08)
	bool SupportedByGround; // 0x900(0x01)
	char pad_901[0x3]; // 0x901(0x03)
	float LowestGreenStability; // 0x904(0x04)
	float YellowStability; // 0x908(0x04)
	float HighestRedStability; // 0x90c(0x04)
	bool FirstStabilityCalced; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	float MinimumUnstableStability; // 0x914(0x04)
	int32_t SoftHeightLimit; // 0x918(0x04)
	int32_t DistanceToGround; // 0x91c(0x04)
	struct TArray<struct FWeightTransferRelationship> DirectWeightRelationships; // 0x920(0x10)
	struct TArray<struct FWeightTransferRelationship> IndirectWeightDistributed; // 0x930(0x10)
	struct TArray<struct FWeightTransferRelationship> IndirectWeightReceived; // 0x940(0x10)
	struct FTimerHandle WeightUnstableTimer; // 0x950(0x08)
	struct FTimerHandle WeightUnstableActiveDestruction; // 0x958(0x08)
	float CrackSizeDivisor; // 0x960(0x04)
	enum class EBuildingOpenableState OpenableState; // 0x964(0x01)
	char pad_965[0x3]; // 0x965(0x03)
	struct FMulticastInlineDelegate OpenableStateChanged; // 0x968(0x10)
	float BuildingTier; // 0x978(0x04)
	bool ManualWindDamagePeriod; // 0x97c(0x01)
	char pad_97D[0x3]; // 0x97d(0x03)
	float CurrentWindDamageTimerTime; // 0x980(0x04)
	char pad_984[0x4]; // 0x984(0x04)
	struct UCurveFloat* StormToBuildingInteractionCurve; // 0x988(0x08)
	float BaseWindDamagePointRadius; // 0x990(0x04)
	float BaseWindDamagePointImpusle; // 0x994(0x04)
	bool RecentlyRepaired; // 0x998(0x01)
	bool IsAsyncResettingDM; // 0x999(0x01)
	char pad_99A[0x6]; // 0x99a(0x06)
	struct UCurveFloat* HealthToDestructionPointCount; // 0x9a0(0x08)
	struct UCurveFloat* HealthToDestructionImpulseStrength; // 0x9a8(0x08)
	int32_t EffectiveDestructionPointCount; // 0x9b0(0x04)
	bool UseDMmaterialMap; // 0x9b4(0x01)
	char pad_9B5[0x3]; // 0x9b5(0x03)
	struct TArray<int32_t> DestructibleMaterialSlotsMappedToMainMesh; // 0x9b8(0x10)

	float GetOcclusionValue(); // Function BP_Building_Base.BP_Building_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void AttemptToResetMaterialsOnDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.AttemptToResetMaterialsOnDestructibleMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AttemptToApplyDynamicMaterialsOnDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.AttemptToApplyDynamicMaterialsOnDestructibleMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HealthToDestruction(); // Function BP_Building_Base.BP_Building_Base_C.HealthToDestruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ApplyShadowSettings(); // Function BP_Building_Base.BP_Building_Base_C.ApplyShadowSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionToMainDestructibleMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToMainDestructibleMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionToStrippedMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToStrippedMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionToMainMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionToMainMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateBaseWindDamagePeriod(float DamagePeriod); // Function BP_Building_Base.BP_Building_Base_C.CalculateBaseWindDamagePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float CalculateEffectiveWindDamagePeriod(); // Function BP_Building_Base.BP_Building_Base_C.CalculateEffectiveWindDamagePeriod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CheckWindDamagePacing(bool NewPacing); // Function BP_Building_Base.BP_Building_Base_C.CheckWindDamagePacing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCurrentWeatherAction(struct UBP_WeatherAction_Base_C* CurrentWeatherAction2); // Function BP_Building_Base.BP_Building_Base_C.GetCurrentWeatherAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WindDamageGeneration(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageGeneration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsLandscapeLoaded(); // Function BP_Building_Base.BP_Building_Base_C.IsLandscapeLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetOpenableState(enum class EBuildingOpenableState NewState); // Function BP_Building_Base.BP_Building_Base_C.SetOpenableState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CleanupWeightTimers(); // Function BP_Building_Base.BP_Building_Base_C.CleanupWeightTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CleanupIndirectWeight(); // Function BP_Building_Base.BP_Building_Base_C.CleanupIndirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float DirtyTickBackOffTime(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickBackOffTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void RedistributeDirectWeight(); // Function BP_Building_Base.BP_Building_Base_C.RedistributeDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveDirectWeight(struct UShapeComponent* Shape, struct UBP_Weight_C* Weight); // Function BP_Building_Base.BP_Building_Base_C.RemoveDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveDirectWeight(struct UShapeComponent* Shape, struct UBP_Weight_C* Weight, bool SpreadToNeighbors); // Function BP_Building_Base.BP_Building_Base_C.ReceiveDirectWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildingStabilityColorCalc(struct FLinearColor StabilityColor); // Function BP_Building_Base.BP_Building_Base_C.BuildingStabilityColorCalc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void RemoveWindDamageWeatherAudioComponent(); // Function BP_Building_Base.BP_Building_Base_C.RemoveWindDamageWeatherAudioComponent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddWindDamageWeatherAudioComponent(); // Function BP_Building_Base.BP_Building_Base_C.AddWindDamageWeatherAudioComponent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayRepairedSound(); // Function BP_Building_Base.BP_Building_Base_C.PlayRepairedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayFullyStrippedSound(); // Function BP_Building_Base.BP_Building_Base_C.PlayFullyStrippedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryPlayDamageSound(int32_t DamageAmount, struct FDamageEvent DamageEvent, struct AActor* DamageCauser); // Function BP_Building_Base.BP_Building_Base_C.TryPlayDamageSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryPlayDestructibleDamageSound(struct FVector Location, float Impulse); // Function BP_Building_Base.BP_Building_Base_C.TryPlayDestructibleDamageSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayBuildingPlacedSound(struct AIcarusPlayerCharacter* Instigator); // Function BP_Building_Base.BP_Building_Base_C.PlayBuildingPlacedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopAllAudio(); // Function BP_Building_Base.BP_Building_Base_C.StopAllAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopWindDamageAudio(); // Function BP_Building_Base.BP_Building_Base_C.StopWindDamageAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartWindDamageAudio(); // Function BP_Building_Base.BP_Building_Base_C.StartWindDamageAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateStabilityAudioVeryUnstable(float TimerLength); // Function BP_Building_Base.BP_Building_Base_C.UpdateStabilityAudioVeryUnstable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayDestructionAudio(float SnowAmount); // Function BP_Building_Base.BP_Building_Base_C.PlayDestructionAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateStabilityAudio(bool IsVeryUnstable); // Function BP_Building_Base.BP_Building_Base_C.UpdateStabilityAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetStabilityAudio(); // Function BP_Building_Base.BP_Building_Base_C.ResetStabilityAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Stripping(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_Stripping // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_FullyStripped(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_FullyStripped // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerRepair(); // Function BP_Building_Base.BP_Building_Base_C.ServerRepair // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryEnterStrippableState(); // Function BP_Building_Base.BP_Building_Base_C.TryEnterStrippableState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerFullyStripBuilding(); // Function BP_Building_Base.BP_Building_Base_C.ServerFullyStripBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_DestructibleDamagedPoints(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_DestructibleDamagedPoints // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessWindDamageArray(); // Function BP_Building_Base.BP_Building_Base_C.ProcessWindDamageArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ReceivingWindDamage(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ReceivingWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsBuildingOutside(bool Outside); // Function BP_Building_Base.BP_Building_Base_C.IsBuildingOutside // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConsiderHidingGhostActor(); // Function BP_Building_Base.BP_Building_Base_C.ConsiderHidingGhostActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_GhostBlockedPlacement(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_GhostBlockedPlacement // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Clamp Hit Normal To Centers Main Directions(struct FVector WorldSpaceVector, struct FVector RoundedWorldSpaceVector); // Function BP_Building_Base.BP_Building_Base_C.Clamp Hit Normal To Centers Main Directions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Clamp Hit Normal to Center Up or Down(struct FVector Normal, struct FVector Clamped Normal); // Function BP_Building_Base.BP_Building_Base_C.Clamp Hit Normal to Center Up or Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ApplyDotsToFootprint(struct FVector Dots, struct FVector SelectedRelativeFootprint); // Function BP_Building_Base.BP_Building_Base_C.ApplyDotsToFootprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ClientsideGhost(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ClientsideGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ShowPlacementHelpers(); // Function BP_Building_Base.BP_Building_Base_C.OnRep_ShowPlacementHelpers // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClientAndServer Outline(); // Function BP_Building_Base.BP_Building_Base_C.ClientAndServer Outline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlockLikePlacementTranslation(struct FTransform GridSpaceLocWithoutRot, struct FRotator GridSpaceRot, struct FTransform ShiftedTransformwithRot); // Function BP_Building_Base.BP_Building_Base_C.BlockLikePlacementTranslation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveInvalidHardStabilityRefs(); // Function BP_Building_Base.BP_Building_Base_C.RemoveInvalidHardStabilityRefs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	enum class RotationalDirections CompareRotations(struct FRotator Compare, struct FRotator CompareAgainst, struct FVector Dots); // Function BP_Building_Base.BP_Building_Base_C.CompareRotations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RepushAllInRangeAnchors(bool FoundAnAnchor); // Function BP_Building_Base.BP_Building_Base_C.RepushAllInRangeAnchors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator CenterWorldRotation, struct FRotator ZRotatedDifference, bool ImpactWasAlreadyRotated); // Function BP_Building_Base.BP_Building_Base_C.OptionallyRotateCenterUpToInpactNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void DoesBuildingArrayContainBuildingArray(struct TArray<struct ABP_Building_Base_C*> ContainingArray, struct TArray<struct ABP_Building_Base_C*> InnerArray, bool ContainedInnerArray); // Function BP_Building_Base.BP_Building_Base_C.DoesBuildingArrayContainBuildingArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void AppendUniqueBuildingArray(struct TArray<struct ABP_Building_Base_C*> Array 1, struct TArray<struct ABP_Building_Base_C*> Array 2, struct TArray<struct ABP_Building_Base_C*> Array1UniquelyAddedTo2); // Function BP_Building_Base.BP_Building_Base_C.AppendUniqueBuildingArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CollapseTimerBasedOffLastHardStability(float NewParam); // Function BP_Building_Base.BP_Building_Base_C.CollapseTimerBasedOffLastHardStability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform Shifted, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtra); // Function BP_Building_Base.BP_Building_Base_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldDownShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldDownShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldUpShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldUpShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldLeftShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldLeftShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldRightShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldRightShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldBackwardShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldBackwardShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldForwardShift(enum class RotationalDirections Direction, bool Shift); // Function BP_Building_Base.BP_Building_Base_C.ShouldForwardShift // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct FTransform GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections RelativeRotationEnum, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtraDelta); // Function BP_Building_Base.BP_Building_Base_C.DecideShifting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitAnchorStability(); // Function BP_Building_Base.BP_Building_Base_C.InitAnchorStability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveHardStability(struct ABP_Building_Base_C* RemovedBuilding); // Function BP_Building_Base.BP_Building_Base_C.RemoveHardStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PickNewShakeTarget(); // Function BP_Building_Base.BP_Building_Base_C.PickNewShakeTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateStabilityState(); // Function BP_Building_Base.BP_Building_Base_C.CalculateStabilityState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetHardStability(float HardStability, float HardStabilityBeforeWeight); // Function BP_Building_Base.BP_Building_Base_C.GetHardStability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveHardStability(struct ABP_Building_Base_C* FromBuilding, float Stability); // Function BP_Building_Base.BP_Building_Base_C.ReceiveHardStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PushAnchorIntoHardStability(); // Function BP_Building_Base.BP_Building_Base_C.PushAnchorIntoHardStability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MarkDirty(); // Function BP_Building_Base.BP_Building_Base_C.MarkDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t ManhattanDistanceToBuilding(struct ABP_Building_Base_C* OtherBuilding); // Function BP_Building_Base.BP_Building_Base_C.ManhattanDistanceToBuilding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildingHitToGridRounded(struct FHitResult InHit, struct ABP_Building_Base_C* ClassToBuild, int32_t RotationalOffsetState, struct FTransform OutWorldSpaceOnGrid, enum class RotationalDirections BuildingHitRelativeRotation, enum class RotationalDirections HitGridRelativeRotation); // Function BP_Building_Base.BP_Building_Base_C.BuildingHitToGridRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetBlockingLines(struct TArray<struct FVectorPair> BlockingLinesArray); // Function BP_Building_Base.BP_Building_Base_C.GetBlockingLines // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_Building_Base.BP_Building_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Building_Base.BP_Building_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Base.BP_Building_Base_C.StartDestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Destruction effects(); // Function BP_Building_Base.BP_Building_Base_C.Destruction effects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Building_Base.BP_Building_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void debug color(); // Function BP_Building_Base.BP_Building_Base_C.debug color // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Stable(); // Function BP_Building_Base.BP_Building_Base_C.Stable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Unstable(); // Function BP_Building_Base.BP_Building_Base_C.Unstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void VeryUnstable(); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Collapse(); // Function BP_Building_Base.BP_Building_Base_C.Collapse // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void cracks(); // Function BP_Building_Base.BP_Building_Base_C.cracks // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PushHardStabilityAsync(); // Function BP_Building_Base.BP_Building_Base_C.PushHardStabilityAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReinitAnchorStability(); // Function BP_Building_Base.BP_Building_Base_C.ReinitAnchorStability // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DebugStabilityMulti(float hardstabilityCount, float HardStabValue, int32_t RemoteAnchorBuildings, float AnchorStab, struct FString Debug, float UnclampedHardStability); // Function BP_Building_Base.BP_Building_Base_C.DebugStabilityMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DirtyTickEvent(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DirtyTickCooldown(); // Function BP_Building_Base.BP_Building_Base_C.DirtyTickCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StableEffects(); // Function BP_Building_Base.BP_Building_Base_C.StableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UnstableEffects(bool VeryUnstable); // Function BP_Building_Base.BP_Building_Base_C.UnstableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void VeryUnstableEffects(float TimerLength); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstableEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void VeryUnstableEffectsFinished(); // Function BP_Building_Base.BP_Building_Base_C.VeryUnstableEffectsFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TempStabilityExpired(); // Function BP_Building_Base.BP_Building_Base_C.TempStabilityExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MultiOnPlaced(struct AIcarusPlayerCharacter* Instigator); // Function BP_Building_Base.BP_Building_Base_C.MultiOnPlaced // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveDestroyed(); // Function BP_Building_Base.BP_Building_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ServerShowDebugHelpersWithReset(); // Function BP_Building_Base.BP_Building_Base_C.ServerShowDebugHelpersWithReset // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlacementHelperVisualMulticast(struct TArray<struct UPrimitiveComponent*> Component, struct UMaterialInterface* NewMaterial); // Function BP_Building_Base.BP_Building_Base_C.PlacementHelperVisualMulticast // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GhostActorSlowTick(); // Function BP_Building_Base.BP_Building_Base_C.GhostActorSlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Manual_Construction(struct ABP_Grid_Base_C* ParentGrid, struct FVector GridLocation); // Function BP_Building_Base.BP_Building_Base_C.Manual_Construction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Manual_BeginPlay(); // Function BP_Building_Base.BP_Building_Base_C.Manual_BeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerStartWindDamage(float ManualPeriodOverride); // Function BP_Building_Base.BP_Building_Base_C.ServerStartWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WindDamageTick(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WindDamageCosmetics(); // Function BP_Building_Base.BP_Building_Base_C.WindDamageCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopWindDamageTimers(); // Function BP_Building_Base.BP_Building_Base_C.StopWindDamageTimers // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerStopWindDamage(); // Function BP_Building_Base.BP_Building_Base_C.ServerStopWindDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DelayedAsyncProccessDestructibleDamage(); // Function BP_Building_Base.BP_Building_Base_C.DelayedAsyncProccessDestructibleDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AsyncStrippedMeshSwap(); // Function BP_Building_Base.BP_Building_Base_C.AsyncStrippedMeshSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void debugdestruction(); // Function BP_Building_Base.BP_Building_Base_C.debugdestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_Building_Base.BP_Building_Base_C.BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void MultiOnRepaired(bool RemoveScorch); // Function BP_Building_Base.BP_Building_Base_C.MultiOnRepaired // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RegisterWithWeatherController(); // Function BP_Building_Base.BP_Building_Base_C.RegisterWithWeatherController // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConsumeHit_Collision(struct FIcarusDamagePacket DamagePacket); // Function BP_Building_Base.BP_Building_Base_C.ConsumeHit_Collision // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConsumeHit_Physical(struct FIcarusDamagePacket DamagePacket); // Function BP_Building_Base.BP_Building_Base_C.ConsumeHit_Physical // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IndirectWeightChildDestroyed(struct ABP_Building_Base_C* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Base.BP_Building_Base_C.IndirectWeightChildDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WeightUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OverWeightCheck(); // Function BP_Building_Base.BP_Building_Base_C.OverWeightCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OverweightDestructionTick(); // Function BP_Building_Base.BP_Building_Base_C.OverweightDestructionTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WeightInjectedVeryUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightInjectedVeryUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WeightInjectedUnstable(); // Function BP_Building_Base.BP_Building_Base_C.WeightInjectedUnstable // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // Function BP_Building_Base.BP_Building_Base_C.OnModifiersUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RepairObject(); // Function BP_Building_Base.BP_Building_Base_C.RepairObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateWindDamageTimer(float NewTime); // Function BP_Building_Base.BP_Building_Base_C.UpdateWindDamageTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InstantAsyncProcessDestructibleDamage(); // Function BP_Building_Base.BP_Building_Base_C.InstantAsyncProcessDestructibleDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AsyncMainDMReset(); // Function BP_Building_Base.BP_Building_Base_C.AsyncMainDMReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionedToStrippedCheck(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToStrippedCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionedToMainMesh(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToMainMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionedToDM(); // Function BP_Building_Base.BP_Building_Base_C.TransitionedToDM // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShadowSettings changed(bool Value); // Function BP_Building_Base.BP_Building_Base_C.ShadowSettings changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Async mat change(); // Function BP_Building_Base.BP_Building_Base_C.Async mat change // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Building_Base(int32_t EntryPoint); // Function BP_Building_Base.BP_Building_Base_C.ExecuteUbergraph_BP_Building_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OpenableStateChanged__DelegateSignature(enum class EBuildingOpenableState NewState); // Function BP_Building_Base.BP_Building_Base_C.OpenableStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildingReplaced__DelegateSignature(struct ABP_Building_Base_C* NewBuilding); // Function BP_Building_Base.BP_Building_Base_C.BuildingReplaced__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildingDestroyed__DelegateSignature(struct ABP_Building_Base_C* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Base.BP_Building_Base_C.BuildingDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

