// BlueprintGeneratedClass BP_IcarusPlayerState.BP_IcarusPlayerState_C
// Size: 0x4bd (Inherited: 0x498)
struct ABP_IcarusPlayerState_C : AIcarusPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4a0(0x08)
	int32_t PlayerIdentityVisual; // 0x4a8(0x04)
	int32_t PlayerMapColorIndex; // 0x4ac(0x04)
	struct ABP_IcarusWaypointActor_C* PersonalWaypoint; // 0x4b0(0x08)
	float PlayerHealth; // 0x4b8(0x04)
	bool DebugDeployablePlacement; // 0x4bc(0x01)

	void SetDeployableDebugEnabled(bool Enabled); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.SetDeployableDebugEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ServerMovePersonalWaypoint(struct FVector Location, struct AController* OwningController); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerMovePersonalWaypoint // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerDestroyWaypoint(); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerDestroyWaypoint // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_UpdateHealthValue(float NewHealth); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.Server_UpdateHealthValue // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusPlayerState(int32_t EntryPoint); // Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ExecuteUbergraph_BP_IcarusPlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

