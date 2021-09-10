// BlueprintGeneratedClass BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C
// Size: 0x858 (Inherited: 0x6c0)
struct ABP_IcarusNPCGOAPCharacter_C : AIcarusNPCGOAPCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x6c8(0x08)
	struct UAudioContextCreatureComponent* AudioContext; // 0x6d0(0x08)
	struct UAudioOcclusionCharacterComponent* AudioOcclusionCharacter; // 0x6d8(0x08)
	struct UBP_Flammable_Actor_C* Flammable; // 0x6e0(0x08)
	struct UAIVocalisationComponent* AIVocalisation; // 0x6e8(0x08)
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; // 0x6f0(0x08)
	struct UBP_CreatureAudioComponent_C* CreatureAudio; // 0x6f8(0x08)
	struct UExperienceComponent* Experience; // 0x700(0x08)
	struct UBP_SwimmingComponent_C* BP_SwimmingComponent; // 0x708(0x08)
	struct USplineComponent* PredictionSpline; // 0x710(0x08)
	struct UBoxComponent* PredictionBox; // 0x718(0x08)
	struct USceneComponent* Scene; // 0x720(0x08)
	struct UWidgetComponent* GOAP_Debugger; // 0x728(0x08)
	enum class EMovementState CurrentMovementState; // 0x730(0x01)
	char pad_731[0x7]; // 0x731(0x07)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> DeathAnimations; // 0x738(0x10)
	struct FPoseSnapshot DeathRagdollPose; // 0x748(0x38)
	bool BeginDeathRagdoll; // 0x780(0x01)
	char pad_781[0x7]; // 0x781(0x07)
	struct AController* CachedController; // 0x788(0x08)
	struct AActor* CurrentTarget; // 0x790(0x08)
	struct FTimerHandle ReplicateVarsTimer; // 0x798(0x08)
	bool DebugWidgetSetup; // 0x7a0(0x01)
	char pad_7A1[0x7]; // 0x7a1(0x07)
	struct TArray<struct FVector> CurrentPath; // 0x7a8(0x10)
	struct FVector MeshLocation; // 0x7b8(0x0c)
	struct FRotator MeshRotation; // 0x7c4(0x0c)
	float CurrentRagdollWeight; // 0x7d0(0x04)
	float RagdollBlendSpeed; // 0x7d4(0x04)
	struct FVector DeathVelocity; // 0x7d8(0x0c)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct FMulticastInlineDelegate RagdollSettled; // 0x7e8(0x10)
	struct FMulticastInlineDelegate CheckAIDistance; // 0x7f8(0x10)
	enum class EStealthAttackType WasStealthDamage; // 0x808(0x01)
	char pad_809[0x7]; // 0x809(0x07)
	struct FMulticastInlineDelegate OnActionNotify; // 0x810(0x10)
	struct FVector SpawnLocation; // 0x820(0x0c)
	enum class EAIAudioState CurrentAudioState; // 0x82c(0x01)
	char pad_82D[0x3]; // 0x82d(0x03)
	struct FMulticastInlineDelegate RagdollCollision; // 0x830(0x10)
	struct FTimerHandle TalentHighlightUpdateTick; // 0x840(0x08)
	float LastJumpTime; // 0x848(0x04)
	char pad_84C[0x4]; // 0x84c(0x04)
	struct FTimerHandle RetryJumpTimer; // 0x850(0x08)

	void GatherIntersections(struct AActor* Projectile, bool Debug, bool Return, struct TArray<struct FFCHCollisionStruct> Intersections); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GatherIntersections // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCHBounds(bool Return, struct UBoxComponent* Box); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetCHBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PredictMovement(float Time, bool Return); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.PredictMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetPrediction(bool Return); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ResetPrediction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTargetHealth(bool Return, float Health); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetTargetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCharacterSlidingUpdated(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCharacterSlidingUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool TryJumpOverObstacle(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.TryJumpOverObstacle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideFromShelterSceneCapture(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.HideFromShelterSceneCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTalentHighlight(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateTalentHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_CurrentAudioState(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnRep_CurrentAudioState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudioState(enum class EAIAudioState NewState); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage* OutMontage); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.Get Stance Transition Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnStatContainerUpdated(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnStatContainerUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetAlertWidgetLocation(struct FVector Location); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetAlertWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetTargetAlertness(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void CheckNearbyPlayers(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CheckNearbyPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GatherIntersectionss(struct AActor* Actor, struct TArray<struct FFCHCollisionStruct> HitIntersections); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.GatherIntersectionss // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateRagdollBlend(float DeltaTime, float InterpSpeed); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateRagdollBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetRagdollEnabled(bool Enabled); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.SetRagdollEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnGOAPActionSet(struct UIcarusGOAPAction* Action); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnGOAPActionSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AIPredictionUpdate(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.AIPredictionUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReplicateBlackboardVariables(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReplicateBlackboardVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateMovementState(enum class EMovementState NewState); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UpdateMovementState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581(struct UObject* Loaded); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnInterrupted_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnBlendOut_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_681AD0DA40563215093FAFA52CDA83A4(struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCompleted_681AD0DA40563215093FAFA52CDA83A4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_46D0D8B742825800C0F3B8B239D00770(struct UObject* Loaded); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLoaded_46D0D8B742825800C0F3B8B239D00770 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_PlayMontage(struct TSoftObjectPtr<UAnimMontage> Montage, struct FName Section, bool ClientsOnly); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_PlayMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_MontageJumpToSection(struct FName Section, struct UAnimMontage* Montage); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_MontageJumpToSection // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_StopMontage(struct UAnimMontage* Montage, float InBlendOutTime); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_StopMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCharacterStanceUpdated(enum class EGOAPCharacterStance PreviousStance, enum class EGOAPCharacterStance NewStance); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnCharacterStanceUpdated // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceivePossessed(struct AController* NewController); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnActorDeath(struct UActorState* ActorStateIn); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnActorDeath // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Multicast_ActorDeath(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.Multicast_ActorDeath // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRagdollSettled(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnRagdollSettled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void MULTI_OnHurt(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_OnHurt // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_PlayVocalisation(enum class EAIVocalisationType VocalisationType); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_PlayVocalisation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_SpawnHitFX(struct FTransform SpawnTransform, enum class EPhysicalSurface HitSurface, struct AActor* HitActor); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.MULTI_SpawnHitFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnJumped(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnLanded(struct FHitResult Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void CustomEvent_1(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter(int32_t EntryPoint); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.ExecuteUbergraph_BP_IcarusNPCGOAPCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void RagdollCollision__DelegateSignature(struct FHitResult Hit); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.RagdollCollision__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnActionNotify__DelegateSignature(struct UAnimMontage* Montage, struct FName NotifyName); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.OnActionNotify__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckAIDistance__DelegateSignature(struct ABP_IcarusNPCGOAPCharacter_C* AI); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.CheckAIDistance__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RagdollSettled__DelegateSignature(); // Function BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C.RagdollSettled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

