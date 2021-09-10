// BlueprintGeneratedClass BP_MissionManager.BP_MissionManager_C
// Size: 0x431 (Inherited: 0x2d0)
struct ABP_MissionManager_C : AMissionManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UFMODAudioComponent* VocalisationAudio; // 0x2d8(0x08)
	struct FFactionMission Faction Missions; // 0x2e0(0xa8)
	struct FProspectInfo Prospect Info; // 0x388(0x80)
	struct TArray<struct FText> ObjectiveTextArray; // 0x408(0x10)
	struct ABP_QuestMarker_C* CurrentLocationMarker; // 0x418(0x08)
	struct TArray<struct AIcarusActor*> RelevantActors; // 0x420(0x10)
	bool ReloadedFromDatabase; // 0x430(0x01)

	void SpawnPlayerSpecificManager(struct FPlayerCharacterID PlayerCharacterID); // Function BP_MissionManager.BP_MissionManager_C.SpawnPlayerSpecificManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetSubObjectiveCount(int32_t Index); // Function BP_MissionManager.BP_MissionManager_C.GetSubObjectiveCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSubObjectiveState(int32_t Index, int32_t SubIndex, struct FText Description, bool Completed, bool Hidden); // Function BP_MissionManager.BP_MissionManager_C.GetSubObjectiveState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct TArray<struct FText> FillObjectiveTextArray(); // Function BP_MissionManager.BP_MissionManager_C.FillObjectiveTextArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetObjectiveState(int32_t Index, struct FText Description, bool Completed, bool Active, bool Failed, bool Hidden); // Function BP_MissionManager.BP_MissionManager_C.GetObjectiveState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAvailableMarkerArray(struct TArray<struct AActor*> MarkerArray); // Function BP_MissionManager.BP_MissionManager_C.GetAvailableMarkerArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AQuestMarker* RequestLocationMarker(struct FQuestRequirements Requirements); // Function BP_MissionManager.BP_MissionManager_C.RequestLocationMarker // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct ABP_QuestBase_C* SpawnQuestActor(struct ABP_QuestBase_C* QuestClass, struct AActor* Owner, struct AQuestMarker* LocationMarker, struct FQuestsMultiRowHandle QuestRow, struct TArray<struct AIcarusActor*> InRelevantActors, struct FDelegate Event); // Function BP_MissionManager.BP_MissionManager_C.SpawnQuestActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_AA71506342BC6D625E9C3DB5C9669E75(struct FResUpdateFactionMissionProgress Response); // Function BP_MissionManager.BP_MissionManager_C.OnFail_AA71506342BC6D625E9C3DB5C9669E75 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_AA71506342BC6D625E9C3DB5C9669E75(struct FResUpdateFactionMissionProgress Response); // Function BP_MissionManager.BP_MissionManager_C.OnSuccess_AA71506342BC6D625E9C3DB5C9669E75 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_D84BAB114C94F833BB9FD696E7AF2F0E(struct UObject* Loaded); // Function BP_MissionManager.BP_MissionManager_C.OnLoaded_D84BAB114C94F833BB9FD696E7AF2F0E // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Debug_SetFactionMission(struct FFactionMissionsRowHandle Mission); // Function BP_MissionManager.BP_MissionManager_C.Debug_SetFactionMission // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProspectInfoUpdated(); // Function BP_MissionManager.BP_MissionManager_C.ProspectInfoUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuestEnded(struct ABP_QuestBase_C* CompletedQuest, enum class EQuestFinishState State); // Function BP_MissionManager.BP_MissionManager_C.QuestEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnRep_FactionMissionRow(); // Function BP_MissionManager.BP_MissionManager_C.BP_OnRep_FactionMissionRow // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnRestoreFromDatabase(struct FName FactionMissionRowName); // Function BP_MissionManager.BP_MissionManager_C.OnRestoreFromDatabase // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void IcarusBeginPlay(); // Function BP_MissionManager.BP_MissionManager_C.IcarusBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_MissionManager.BP_MissionManager_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitPlayerSpecificMission(); // Function BP_MissionManager.BP_MissionManager_C.InitPlayerSpecificMission // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_MissionManager(int32_t EntryPoint); // Function BP_MissionManager.BP_MissionManager_C.ExecuteUbergraph_BP_MissionManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

