// BlueprintGeneratedClass FlyingDrone_BaseAI.FlyingDrone_BaseAI_C
// Size: 0x3b4 (Inherited: 0x368)
struct AFlyingDrone_BaseAI_C : AIcarusNPCController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct AIcarusCharacter* FollowCharacter; // 0x370(0x08)
	struct FTimerHandle DecisionTimer; // 0x378(0x08)
	struct ADeployed_Drone_Base_C* MyDrone; // 0x380(0x08)
	float DroneDecisionInterval; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct AActor*> PotentialPickupItems; // 0x390(0x10)
	struct AIcarusActor* DesiredPickupObject; // 0x3a0(0x08)
	float DronePickupRadius; // 0x3a8(0x04)
	float TimeLastEnteredReturnState; // 0x3ac(0x04)
	float TimeToReturn; // 0x3b0(0x04)

	void UpdateState_Docking(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.UpdateState_Docking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState_Obstructed(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.UpdateState_Obstructed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasReturnTimerExpired(bool TRUE); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.HasReturnTimerExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void FallAsleepIfBatteryRanOut(bool FellAsleep); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.FallAsleepIfBatteryRanOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckBatteryState(float RequiredBatteryForAction, bool SufficientBattery); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.CheckBatteryState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState_Boundary(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.UpdateState_Boundary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState_Return(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.UpdateState_Return // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCurrentDroneLandingStation(bool Found, struct ADeployed_DroneLandingStation_Base_C* DLS); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.GetCurrentDroneLandingStation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetDroneCurrentState(enum class EDroneStates CurrentState, bool ForceState); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.SetDroneCurrentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetDroneCurrentState(enum class EDroneStates CurrentState); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.GetDroneCurrentState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void DroneStuckCheck(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.DroneStuckCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void RunDroneAI(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.RunDroneAI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LookForMoreItems(); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.LookForMoreItems // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_FlyingDrone_BaseAI(int32_t EntryPoint); // Function FlyingDrone_BaseAI.FlyingDrone_BaseAI_C.ExecuteUbergraph_FlyingDrone_BaseAI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

