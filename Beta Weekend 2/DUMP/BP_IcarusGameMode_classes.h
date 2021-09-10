// BlueprintGeneratedClass BP_IcarusGameMode.BP_IcarusGameMode_C
// Size: 0x5e4 (Inherited: 0x518)
struct ABP_IcarusGameMode_C : AIcarusGameModeSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UBallisticPoolManager* BallisticPoolManager; // 0x520(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x528(0x08)
	struct AMapManager_C* MapManager; // 0x530(0x08)
	struct TArray<struct ABP_IcarusPlayerSpawn_C*> Player Start Locations; // 0x538(0x10)
	int32_t DropSpawn; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FMulticastInlineDelegate PostLoginDispatcher; // 0x550(0x10)
	struct TArray<struct FColor> ColorChoices; // 0x560(0x10)
	int32_t ColorIndex; // 0x570(0x04)
	bool CurtainRaised; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	struct TArray<struct AController*> JoinedPlayers; // 0x578(0x10)
	struct TArray<struct AController*> ToRemove; // 0x588(0x10)
	struct TArray<struct FDatabaseBuildingGrid> PendingBuildingsFromDatabase; // 0x598(0x10)
	float TimeToRestorePendingBuildings; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FString LogName; // 0x5b0(0x10)
	struct FReqCheckProspectExpired Request; // 0x5c0(0x10)
	bool Spawned Resources; // 0x5d0(0x01)
	bool Time Initialised; // 0x5d1(0x01)
	char pad_5D2[0x2]; // 0x5d2(0x02)
	struct FVector AveragePlayerStartLocation; // 0x5d4(0x0c)
	int32_t DebugTestProspectTimeMinutes; // 0x5e0(0x04)

	bool SetupTestProspectInfo(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.SetupTestProspectInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AreAllGridsDoneAsyncProcessing(bool NoQueuedGrids); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.AreAllGridsDoneAsyncProcessing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayerDisconnected(struct FConnectedPlayer ConnectedPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PlayerDisconnected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayerConnected(struct FConnectedPlayer ConnectedPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PlayerConnected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PickProspectMetaSpawns(struct FIcarusProspect Prospect, struct TMap<int32_t, struct ABP_IcarusMetaSpawn_C*> MetaSpawns); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PickProspectMetaSpawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GeneratePendingBuildings(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GeneratePendingBuildings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadBuildingsFromStateRecorder(struct TArray<struct FDatabaseBuildingGrid> Array, bool bShouldDeleteOldBuildings); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.LoadBuildingsFromStateRecorder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SaveBuildingsToStateRecorder(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.SaveBuildingsToStateRecorder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifySessionEndTime(int32_t SecondsToAdd); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ModifySessionEndTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetNewPlayerColor(int32_t ColorIndex); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GetNewPlayerColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_C2E7050543DA157486EDB8A866DCAEA7(struct FErrorCodesEnum Result); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnFailure_C2E7050543DA157486EDB8A866DCAEA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_C2E7050543DA157486EDB8A866DCAEA7(struct FErrorCodesEnum Result); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnSuccess_C2E7050543DA157486EDB8A866DCAEA7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_53E66F1B4E19BD7A8EA8FF86788971C8(struct FErrorCodesEnum Result); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnFailure_53E66F1B4E19BD7A8EA8FF86788971C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_53E66F1B4E19BD7A8EA8FF86788971C8(struct FErrorCodesEnum Result); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnSuccess_53E66F1B4E19BD7A8EA8FF86788971C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnServer_SendChatMessage(struct ABP_IcarusPlayerControllerSurvival_C* PlayerController, struct FString Message); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnServer_SendChatMessage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnServer_SendServerMessage(struct FString Message); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnServer_SendServerMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnSaveBuildingsToDatabase(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.OnSaveBuildingsToDatabase // (BlueprintEvent) // @ game+0x1a38c80
	void RestoreBuildingGridsFromDatabase(struct TArray<struct FDatabaseBuildingGrid> BuildingGrids); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.RestoreBuildingGridsFromDatabase // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void TryBuildingRestoreFromDatabase(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.TryBuildingRestoreFromDatabase // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GameModeLog(struct FString Log, struct AController* Controller); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.GameModeLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RaiseTheCurtain(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.RaiseTheCurtain // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ResolveMetaDeposits(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ResolveMetaDeposits // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HostUnrealSession(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.HostUnrealSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConnectedPlayersInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ConnectedPlayersInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Poll_FindBestBackupHostForMigration(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.Poll_FindBestBackupHostForMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BuildingsWaitingForReload(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.BuildingsWaitingForReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateUnrealSession(); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.UpdateUnrealSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusGameMode(int32_t EntryPoint); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.ExecuteUbergraph_BP_IcarusGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void PostLoginDispatcher__DelegateSignature(struct APlayerController* NewPlayer); // Function BP_IcarusGameMode.BP_IcarusGameMode_C.PostLoginDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

