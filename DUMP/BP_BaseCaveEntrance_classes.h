// BlueprintGeneratedClass BP_BaseCaveEntrance.BP_BaseCaveEntrance_C
// Size: 0x300 (Inherited: 0x2a0)
struct ABP_BaseCaveEntrance_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct USceneComponent* VoxelBlockerMarker; // 0x2a8(0x08)
	struct USceneComponent* BlockerMeshes; // 0x2b0(0x08)
	struct UStaticMeshComponent* Mesh; // 0x2b8(0x08)
	struct UStaticMesh* EntranceMesh; // 0x2c0(0x08)
	struct AVoxelResource* VoxelRef; // 0x2c8(0x08)
	bool VisuliseMeshBlocker; // 0x2d0(0x01)
	bool VisuliseVoxelBlocker; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct AVoxelResource* VoxelBlocker; // 0x2d8(0x08)
	struct FRandomStream Stream; // 0x2e0(0x08)
	int32_t UniqueEntranceID; // 0x2e8(0x04)
	enum class ECaveBlockerState BlockerState; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct TArray<struct FVoxelMinedSphere> VoxelSaveData; // 0x2f0(0x10)

	struct AVoxelResource* GetVoxelActor(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.GetVoxelActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void OnRep_BlockerState(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.OnRep_BlockerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVoxelBlocker(bool bLocked); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.UpdateVoxelBlocker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateMeshBlocker(bool bLock); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.UpdateMeshBlocker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitBlockedState(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.InitBlockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateDebug(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.UpdateDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetVoxelBlocker(struct AVoxelResource* VoxelBlocker); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.SetVoxelBlocker // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void IcarusBeginPlay(); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnSeedInitialised(int32_t Seed); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.OnSeedInitialised // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetVoxelBlockerSaveData(struct TArray<struct FVoxelMinedSphere> VoxelBlockerSaveData); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.SetVoxelBlockerSaveData // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BaseCaveEntrance(int32_t EntryPoint); // Function BP_BaseCaveEntrance.BP_BaseCaveEntrance_C.ExecuteUbergraph_BP_BaseCaveEntrance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

