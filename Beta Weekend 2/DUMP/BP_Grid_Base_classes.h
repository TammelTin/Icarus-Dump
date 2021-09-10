// BlueprintGeneratedClass BP_Grid_Base.BP_Grid_Base_C
// Size: 0x4f8 (Inherited: 0x2a0)
struct ABP_Grid_Base_C : ABuildingGridBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UBP_BuildingAudioComponent_C* BP_BuildingAudioComponent; // 0x2a8(0x08)
	struct UArrowComponent* Arrow; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct TMap<struct FVector, struct FGridPoint> GridPoints; // 0x2c0(0x50)
	struct FVector GridSize; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct ABP_Building_Base_C*> BuilldingsToAnchorReinit; // 0x320(0x10)
	struct TArray<struct ABP_Building_Base_C*> BuildingsToPushHardStab; // 0x330(0x10)
	int32_t MaxBuildingSearchDistance; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct ABP_Building_Base_C*> BuildingsToStartDestroy; // 0x348(0x10)
	struct FMulticastInlineDelegate QueuesEmptied; // 0x358(0x10)
	bool Queued; // 0x368(0x01)
	bool AutomaticResumingDestructionEnabled; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct TArray<struct ABP_Building_Base_C*> OnFireBuildings; // 0x370(0x10)
	struct TArray<struct ABP_Building_Base_C*> CurrentWindDamagedBuildings; // 0x380(0x10)
	struct TArray<struct ABP_Building_Base_C*> Buildings to Record; // 0x390(0x10)
	float Burn Time Remaining; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct ABP_Building_Base_C*> ActiveOverweightBuilding; // 0x3a8(0x10)
	bool DirtyTerrainChecks; // 0x3b8(0x01)
	bool Sorted; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalDirtiedBuildings; // 0x3c0(0x10)
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalBuffer; // 0x3d0(0x10)
	struct TMap<float, struct FActorArrayStruct> AltitudeMap; // 0x3e0(0x50)
	struct TMap<float, struct FActorArrayStruct> BuildingsByTier; // 0x430(0x50)
	struct TArray<struct ABP_Building_Base_C*> BuildingsSelectedForWindDamage; // 0x480(0x10)
	struct TArray<float> AscendingSortedBuildingTiers; // 0x490(0x10)
	struct TArray<float> DescendingSortedBuildingAltitudes; // 0x4a0(0x10)
	struct TArray<float> DescendingAltitudesQuartiles; // 0x4b0(0x10)
	int32_t MaxBuildingSelection; // 0x4c0(0x04)
	int32_t CurrentAltitudeQuartile; // 0x4c4(0x04)
	int32_t BuildingCount; // 0x4c8(0x04)
	int32_t CurrentSelectionTierMaxIndex; // 0x4cc(0x04)
	float WeatherSortingTierPercentage; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TArray<struct ABP_Building_Base_C*> StrippingBuildings; // 0x4d8(0x10)
	struct TArray<struct ABP_Building_Base_C*> ReloadedBuildings; // 0x4e8(0x10)

	void InitBuilding Weather Selection Size(); // Function BP_Grid_Base.BP_Grid_Base_C.InitBuilding Weather Selection Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WeatherSortingDebug(); // Function BP_Grid_Base.BP_Grid_Base_C.WeatherSortingDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SortAltitudeKeys(); // Function BP_Grid_Base.BP_Grid_Base_C.SortAltitudeKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SortTierKeys(); // Function BP_Grid_Base.BP_Grid_Base_C.SortTierKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UnrecordBuildingsByTier(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.UnrecordBuildingsByTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UnrecordZHeight(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.UnrecordZHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RecordBuildingsByTier(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.RecordBuildingsByTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RecordZHeight(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.RecordZHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsTerrainAnchorValid(bool TerrainLoaded); // Function BP_Grid_Base.BP_Grid_Base_C.IsTerrainAnchorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SelectBuildingForWindDamage(float StormTier, struct ABP_Building_Base_C* SelectedBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.SelectBuildingForWindDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FireSlowAmount(float SlowAmount); // Function BP_Grid_Base.BP_Grid_Base_C.FireSlowAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void RemoveBuildingOnFire(struct ABP_Building_Base_C* OnFireBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.RemoveBuildingOnFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddBuildingOnFire(struct ABP_Building_Base_C* OnFireBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.AddBuildingOnFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DefaultShiftsFromGridSpaceRotations(struct FRotator GridSpaceRotation, struct FVector Shift); // Function BP_Grid_Base.BP_Grid_Base_C.DefaultShiftsFromGridSpaceRotations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Round Grid Space Rot to Valid Grid Space Rot(struct FRotator inGridSpaceRot, struct FRotator RoundedGridSpaceRot); // Function BP_Grid_Base.BP_Grid_Base_C.Round Grid Space Rot to Valid Grid Space Rot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Round World Space Rot to Valid World Space Rot(struct FRotator WorldSpaceRot, struct FRotator RoundedWorldSpaceRot, struct FVector DefaultShiftsFromGridspaceRot); // Function BP_Grid_Base.BP_Grid_Base_C.Round World Space Rot to Valid World Space Rot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SerializeForSaveGame(struct FSerializedGrid SerializedGridReturn); // Function BP_Grid_Base.BP_Grid_Base_C.SerializeForSaveGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FString debugprint(); // Function BP_Grid_Base.BP_Grid_Base_C.debugprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddSortedBuildingToAnchorReinit(struct ABP_Building_Base_C* BuildingToAdd); // Function BP_Grid_Base.BP_Grid_Base_C.AddSortedBuildingToAnchorReinit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllTouchingBuildings(struct ABP_Building_Base_C* Class, struct FTransform InTransform, struct TArray<struct ABP_Building_Base_C*> NeighborBuildings); // Function BP_Grid_Base.BP_Grid_Base_C.GetAllTouchingBuildings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlockGridspaceRotatedToGridSpaceNotRotated(struct FVector Gridspace, struct FRotator WorldRot, struct FVector GridSpaceWithNoRot); // Function BP_Grid_Base.BP_Grid_Base_C.BlockGridspaceRotatedToGridSpaceNotRotated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WorldSpaceToGridSpaceFloored(struct FTransform InWorldTransform, bool AlternateRotation, struct ABP_Building_Base_C* BuildingClass, struct FTransform OutGridTransform); // Function BP_Grid_Base.BP_Grid_Base_C.WorldSpaceToGridSpaceFloored // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetNeighbors(struct ABP_Building_Base_C* Building, struct TArray<struct ABP_Building_Base_C*> TouchedBuildings); // Function BP_Grid_Base.BP_Grid_Base_C.GetNeighbors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RecursiveBuildingSearch(struct ABP_Building_Base_C* StartingBuilding, int32_t StartingDepth, struct ABP_Building_Base_C* CurrentBuilding, struct TArray<struct ABP_Building_Base_C*> BuildingArrayVariable); // Function BP_Grid_Base.BP_Grid_Base_C.RecursiveBuildingSearch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartBuildingSearch(struct ABP_Building_Base_C* StartingBuilding, int32_t StartingDepth, struct TArray<struct ABP_Building_Base_C*> BuildingArray); // Function BP_Grid_Base.BP_Grid_Base_C.StartBuildingSearch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveBuildingFromGrid(struct ABP_Building_Base_C* RemovedBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.RemoveBuildingFromGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DownShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.DownShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.UpShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void BackwardsShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.BackwardsShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ForwardShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.ForwardShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void RightShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.RightShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void LeftShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform ShiftedTrans); // Function BP_Grid_Base.BP_Grid_Base_C.LeftShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void DownAndReverse(struct FTransform InTrans, struct FTransform OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.DownAndReverse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Rotate(struct FTransform InTrans, struct FTransform OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.Rotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Reverse(struct FTransform InTrans, struct FTransform OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.Reverse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BuildingSpecificAlternateRotations(struct FTransform InTrans, struct ABP_Building_Base_C* BuildingClass, struct FTransform OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.BuildingSpecificAlternateRotations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GridSpaceToWorldSpace(struct FTransform InGridSpaceTransform, struct FTransform OutWorldSpaceTransform); // Function BP_Grid_Base.BP_Grid_Base_C.GridSpaceToWorldSpace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WorldSpaceToGridSpaceRounded(struct FTransform InWorldTransform, bool AlternateRotation, struct ABP_Building_Base_C* BuildingClass, struct FTransform OutGridTransform); // Function BP_Grid_Base.BP_Grid_Base_C.WorldSpaceToGridSpaceRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsVectorPairEqual(struct FVectorPair Pair1, struct FVectorPair pair2, bool Equal); // Function BP_Grid_Base.BP_Grid_Base_C.IsVectorPairEqual // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanAddBuilding(struct ABP_Building_Base_C* NewBuilding, struct FTransform GridSpaceTransform, bool bLocked); // Function BP_Grid_Base.BP_Grid_Base_C.CanAddBuilding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckBuildingLocationFromWorldspaceRounded(struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* BuildingType, bool AlternateRotation, struct FTransform OutWorldSpaceTransform, bool bLocked, struct FTransform OutGridSpaceTransform); // Function BP_Grid_Base.BP_Grid_Base_C.CheckBuildingLocationFromWorldspaceRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryAddNewBuildingFromWorldSpace(struct FTransform World Space Transform, struct ABP_Building_Base_C* DesiredClass, bool AlternateRotation, struct FItemData Item, bool Success, struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.TryAddNewBuildingFromWorldSpace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WeatherSortingTick(); // Function BP_Grid_Base.BP_Grid_Base_C.WeatherSortingTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Grid_Base.BP_Grid_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void GetGridBuildingDataForRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // Function BP_Grid_Base.BP_Grid_Base_C.GetGridBuildingDataForRecord // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void LoadGridAndBuildingsFromRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // Function BP_Grid_Base.BP_Grid_Base_C.LoadGridAndBuildingsFromRecord // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnTerrainAnchorStateChanged(); // Function BP_Grid_Base.BP_Grid_Base_C.OnTerrainAnchorStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Grid_Base.BP_Grid_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Grid_Base(int32_t EntryPoint); // Function BP_Grid_Base.BP_Grid_Base_C.ExecuteUbergraph_BP_Grid_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void QueuesEmptied__DelegateSignature(); // Function BP_Grid_Base.BP_Grid_Base_C.QueuesEmptied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

