// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
// Size: 0x948 (Inherited: 0x940)
struct UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C : UBP_ActionableBehaviour_Firearm_AmmoController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x940(0x08)

	void CanAbortReload(bool CanAbort); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.CanAbortReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ServerFinishReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ServerFinishReload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAbortReloadRequested(); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.OnAbortReloadRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReloadSingleRound(); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ReloadSingleRound // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetReloadMontageNextSections(struct FName SectionNameToChange, struct FName NextSection); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.SetReloadMontageNextSections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.GetReloadAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CalculateNumberOfRoundsToLoad(int32_t NumRounds); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.CalculateNumberOfRoundsToLoad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HandleReloadAnimNotify(struct FString NotifyName); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.HandleReloadAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload // (Final|UbergraphFunction) // @ game+0x1a05090
};

