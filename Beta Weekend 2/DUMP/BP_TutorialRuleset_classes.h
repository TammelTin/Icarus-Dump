// BlueprintGeneratedClass BP_TutorialRuleset.BP_TutorialRuleset_C
// Size: 0xa0 (Inherited: 0x48)
struct UBP_TutorialRuleset_C : UTutorialRuleset {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x48(0x08)
	struct TMap<struct FSessionFlagsRowHandle, struct FIcarusStat> FlagStats; // 0x50(0x50)

	struct TMap<struct FStatsEnum, int32_t> GetStatListForMission(struct AMissionManager* MissionManager); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.GetStatListForMission // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePlayerStats(struct AIcarusPlayerCharacter* Player, struct AMissionManager* MissionManager, struct TMap<struct FStatsEnum, int32_t> StatMap); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.UpdatePlayerStats // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveOnRulesetCreated(); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.ReceiveOnRulesetCreated // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SessionFlagsUpdated(struct AActor* FlagActor); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.SessionFlagsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_TutorialRuleset(int32_t EntryPoint); // Function BP_TutorialRuleset.BP_TutorialRuleset_C.ExecuteUbergraph_BP_TutorialRuleset // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

