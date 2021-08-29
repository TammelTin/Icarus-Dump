// BlueprintGeneratedClass BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C
// Size: 0x284 (Inherited: 0xb8)
struct UBP_PlayerMovementAudioComponent_C : UPlayerMovementAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xc0(0x08)
	struct FRuntimeFloatCurve DummyCustomCurve; // 0xc8(0x88)
	struct TArray<struct FFBoneAudioSetting> BoneSettings; // 0x150(0x10)
	struct FName BackpackAttachPoint; // 0x160(0x08)
	bool Debug; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct FDebugFloatHistory> DebugFloatHistory; // 0x170(0x10)
	struct FVector2D DebugWindowSize; // 0x180(0x08)
	struct TArray<struct FVector> DebugOffsetsFromPlayer; // 0x188(0x10)
	struct TArray<struct FFBoneAudio> BoneAudio; // 0x198(0x10)
	bool BoneAudioEnabled; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x1b0(0x08)
	struct FName WorldMovementAttachPoint; // 0x1b8(0x08)
	struct UFMODEvent* WorldMovementEvent; // 0x1c0(0x08)
	struct UFMODEvent* EnterWaterEvent; // 0x1c8(0x08)
	struct UFMODEvent* ExitWaterEvent; // 0x1d0(0x08)
	struct UFMODEvent* StartSwimmingEvent; // 0x1d8(0x08)
	struct UFMODEvent* StopSwimmingEvent; // 0x1e0(0x08)
	int32_t ChestSlotIndex; // 0x1e8(0x04)
	int32_t PantsSlotIndex; // 0x1ec(0x04)
	struct USkeletalMeshComponent* FPMesh; // 0x1f0(0x08)
	struct UFMODAudioComponent* WorldMovementComponent; // 0x1f8(0x08)
	int32_t BackpackBoneIndex; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct UFMODEvent* BackpackFootstepEvent; // 0x208(0x08)
	struct FItemAudioDataRowHandle BackpackRowHandle; // 0x210(0x18)
	bool PlayerOnGround; // 0x228(0x01)
	bool PlayerSwimming; // 0x229(0x01)
	bool PlayerInWater; // 0x22a(0x01)
	bool InUpdateRange; // 0x22b(0x01)
	float UpdateDistanceThresholdSquared; // 0x22c(0x04)
	bool IsLocalPlayer; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float MaxWaterDepth; // 0x234(0x04)
	enum class EPlayerFoliageFMODParam CurrentFoliageType; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float LastEnteredWaterTime; // 0x23c(0x04)
	float MinTimeInWaterToPlaySwimSound; // 0x240(0x04)
	float SwimmingChangedCooldownLength; // 0x244(0x04)
	float SwimmingChangedCooldownEndTime; // 0x248(0x04)
	struct FVector WaterImmersionTraceStartOffset; // 0x24c(0x0c)
	struct FArmourSetsEnum ChestArmourType; // 0x258(0x10)
	struct FArmourSetsEnum LegsArmourType; // 0x268(0x10)
	float FoliageTraceRadiusBuffer; // 0x278(0x04)
	float FoliageCheckFrequencyLocalPlayer; // 0x27c(0x04)
	float FoliageCheckFrequencyOtherPlayer; // 0x280(0x04)

	void SetUnderwater(bool Underwater); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.SetUnderwater // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFoliageEnumFromTagContainer(struct FGameplayTagContainer TagContainer, enum class EPlayerFoliageFMODParam FoliageType); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.GetFoliageEnumFromTagContainer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateGroundState(bool GroundStateChanged); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UpdateGroundState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SwimmingChanged(bool Swimming); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.SwimmingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TraceForWaterImmersion(bool InWater, float Immersion); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TraceForWaterImmersion // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TraceForFoliage(enum class EPlayerFoliageFMODParam FoliageType); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.TraceForFoliage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_BackpackRowHandle(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_BackpackRowHandle // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_LegsArmourType(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_LegsArmourType // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ChestArmourType(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnRep_ChestArmourType // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BackpackBoneIndexIsValid(bool Valid); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.BackpackBoneIndexIsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BackpackChanged(struct FItemData Item); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.BackpackChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFootstep(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnFootstep // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ArmourUpdated(struct UInventory* Inventory, int32_t Location); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ArmourUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DistanceCheck(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.DistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FoliageCheck(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.FoliageCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UnderwaterChanged(bool Underwater); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.UnderwaterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerspectiveChanged(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.PerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnPlayerDeath(struct UActorState* ActorState); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_PlayerMovementAudioComponent(int32_t EntryPoint); // Function BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C.ExecuteUbergraph_BP_PlayerMovementAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

