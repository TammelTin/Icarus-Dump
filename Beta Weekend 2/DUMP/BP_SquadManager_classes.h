// BlueprintGeneratedClass BP_SquadManager.BP_SquadManager_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_SquadManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct AActor* SquadLeader; // 0x230(0x08)
	struct TArray<struct AActor*> SquadFollowers; // 0x238(0x10)
	struct TArray<struct AAITargetNode_C*> TargetNodes; // 0x248(0x10)
	int32_t FollowDistance; // 0x258(0x04)
	int32_t FlankingAngle; // 0x25c(0x04)
	struct AActor* SquadTargetActor; // 0x260(0x08)

	void OnFollowerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_SquadManager.BP_SquadManager_C.OnFollowerEndPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTargetLocationForFollower(int32_t FollowerIndex, struct FVector TargetLocation); // Function BP_SquadManager.BP_SquadManager_C.GetTargetLocationForFollower // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RequestFollowTarget(struct AActor* Follower, struct AActor* TargetNode); // Function BP_SquadManager.BP_SquadManager_C.RequestFollowTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_SquadManager.BP_SquadManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_SquadManager.BP_SquadManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SquadManager(int32_t EntryPoint); // Function BP_SquadManager.BP_SquadManager_C.ExecuteUbergraph_BP_SquadManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

