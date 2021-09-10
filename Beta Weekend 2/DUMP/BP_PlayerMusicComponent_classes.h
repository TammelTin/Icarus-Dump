// BlueprintGeneratedClass BP_PlayerMusicComponent.BP_PlayerMusicComponent_C
// Size: 0x125 (Inherited: 0xb0)
struct UBP_PlayerMusicComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0xb8(0x08)
	struct ABP_WeatherController_C* WeatherController; // 0xc0(0x08)
	struct FMusicSubsystemConfig Config; // 0xc8(0x08)
	float TimeCondition_UpdateFrequency; // 0xd0(0x04)
	float TimeCondition_DayBreaksTime; // 0xd4(0x04)
	float TimeCondition_NightFallsTime; // 0xd8(0x04)
	float DropTimeCondition_UpdateFrequency; // 0xdc(0x04)
	float DropTimeCondition_TimeRunningOutTime; // 0xe0(0x04)
	float DisasterCondition_UpdateFrequency; // 0xe4(0x04)
	struct FName FMODParam_FireIntensity; // 0xe8(0x08)
	float DisasterCondition_FireIntensityThreshold; // 0xf0(0x04)
	float PlayerStateCondition_LowHealthThreshold; // 0xf4(0x04)
	struct ACave* CaveOverride; // 0xf8(0x08)
	struct FTimerHandle WeatherMusicUpdateTimerHandle; // 0x100(0x08)
	enum class EMusicConditionCombatState CombatMusicState; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float CombatStateCondition_UpdateFrequency; // 0x10c(0x04)
	int32_t CombatStateCondition_CombatStartThreshold; // 0x110(0x04)
	int32_t CombatStateCondition_CombatStopThreshold; // 0x114(0x04)
	int32_t ReplicatedThreatLevel; // 0x118(0x04)
	float SmoothedThreatLevel; // 0x11c(0x04)
	float ThreatLevelUpdateFrequency; // 0x120(0x04)
	bool PlayerIsOutOfBounds; // 0x124(0x01)

	void UpdateOutOfBounds(struct AIcarusPlayerCharacter* Player, bool OutOfBounds); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateOutOfBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Combat Music State(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Combat Music State // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ApplySmoothing(float Value, int32_t Target, float SmoothedValue); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ApplySmoothing // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnRep_ReplicatedThreatLevel(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnRep_ReplicatedThreatLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetCombatMusicState(enum class EMusicConditionCombatState State); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.SetCombatMusicState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateThreatLevel(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateThreatLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayRevivedEvent(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.PlayRevivedEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateDisasterCondition(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.UpdateDisasterCondition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Drop Time Condition(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Drop Time Condition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Location Condition(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Location Condition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Weather Condition(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Weather Condition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Time Condition(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Time Condition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Player State Condition(struct UActorState* ActorState, float NewHealth); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Update Player State Condition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnEnteredCave(struct ACave* Cave); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnEnteredCave // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnExitedCave(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.OnExitedCave // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_ReadyForReplication(); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.Server_ReadyForReplication // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_PlayerMusicComponent(int32_t EntryPoint); // Function BP_PlayerMusicComponent.BP_PlayerMusicComponent_C.ExecuteUbergraph_BP_PlayerMusicComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

