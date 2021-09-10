// BlueprintGeneratedClass BP_IcarusGameState.BP_IcarusGameState_C
// Size: 0x6a0 (Inherited: 0x4b0)
struct ABP_IcarusGameState_C : AIcarusGameStateSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UBP_VoxelResourceDistribution_C* BP_VoxelResourceDistribution; // 0x4b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4c0(0x08)
	struct FProspectInfo Prospect Information; // 0x4c8(0x80)
	struct FOnlineProspectInfo Online Prospect Info; // 0x548(0x150)
	struct AIcarusPlayerCharacter* Host; // 0x698(0x08)

	bool IsInLastMomentsOfSession(); // Function BP_IcarusGameState.BP_IcarusGameState_C.IsInLastMomentsOfSession // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Prospect Information(); // Function BP_IcarusGameState.BP_IcarusGameState_C.OnRep_Prospect Information // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DetectProspect(); // Function BP_IcarusGameState.BP_IcarusGameState_C.DetectProspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasValidProspectInfo(bool Valid); // Function BP_IcarusGameState.BP_IcarusGameState_C.HasValidProspectInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetProspectInfo(struct FProspectListRowHandle Prospect, bool Initialised); // Function BP_IcarusGameState.BP_IcarusGameState_C.GetProspectInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSessionSpawnGroup(int32_t PlayerSpawnGroup, bool Initialised); // Function BP_IcarusGameState.BP_IcarusGameState_C.GetSessionSpawnGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Log(struct FString Description); // Function BP_IcarusGameState.BP_IcarusGameState_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSessionEndTime(int64_t UTC Time, bool Initialised); // Function BP_IcarusGameState.BP_IcarusGameState_C.GetSessionEndTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseProspect(); // Function BP_IcarusGameState.BP_IcarusGameState_C.InitialiseProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AutoDetectProspect(); // Function BP_IcarusGameState.BP_IcarusGameState_C.AutoDetectProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AutoDetectTimer(); // Function BP_IcarusGameState.BP_IcarusGameState_C.AutoDetectTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_IcarusGameState.BP_IcarusGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void Multi_SpawnFloatingDamageNumbers(struct FVector Location, enum class EIcarusDamageType DamageType, int32_t Value, bool CriticalHit); // Function BP_IcarusGameState.BP_IcarusGameState_C.Multi_SpawnFloatingDamageNumbers // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusGameState.BP_IcarusGameState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void IcarusBeginPlay(); // Function BP_IcarusGameState.BP_IcarusGameState_C.IcarusBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SpawnFloatingDamageNumbers(struct AActor* Actor, struct FIcarusDamagePacket DamagePacket); // Function BP_IcarusGameState.BP_IcarusGameState_C.SpawnFloatingDamageNumbers // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusGameState(int32_t EntryPoint); // Function BP_IcarusGameState.BP_IcarusGameState_C.ExecuteUbergraph_BP_IcarusGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

