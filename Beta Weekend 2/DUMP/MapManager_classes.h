// BlueprintGeneratedClass MapManager.MapManager_C
// Size: 0x37c (Inherited: 0x220)
struct AMapManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* OrthoCapture; // 0x228(0x08)
	struct UCameraComponent* OrthoCamera; // 0x230(0x08)
	struct USceneComponent* ClientsideGridTiles; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct AActor* MapCameraLocationActor; // 0x248(0x08)
	struct FTransform MapCorner; // 0x250(0x30)
	int32_t TileSize; // 0x280(0x04)
	int32_t XTileCount; // 0x284(0x04)
	int32_t YTileCount; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct FMapRow> TileRadarStates; // 0x290(0x10)
	struct TArray<struct FIntVector> AdjacencyMatrix; // 0x2a0(0x10)
	struct TArray<struct ABP_OreDeposit_C*> RadarDetectedDeposits; // 0x2b0(0x10)
	struct TMap<struct FIntVector, struct UStaticMeshComponent*> 3dTiles; // 0x2c0(0x50)
	struct TArray<struct FIntVector> LocalDirtyTileBuffer; // 0x310(0x10)
	struct TArray<struct FIntVector> PlacedRadarLocations; // 0x320(0x10)
	struct TArray<int32_t> PlacedRadarRadius; // 0x330(0x10)
	struct TArray<struct FGlobalEquippableStats> GlobalStats; // 0x340(0x10)
	struct TArray<struct FRadarV2ScanData> RadarV2Scans; // 0x350(0x10)
	int32_t RadarV2ScanCount; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct FRadarV3ScanData> RadarV3Scans; // 0x368(0x10)
	int32_t RadarV3ScanCount; // 0x378(0x04)

	void OnRep_RadarV3ScanCount(); // Function MapManager.MapManager_C.OnRep_RadarV3ScanCount // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RadarV2ScanCount(); // Function MapManager.MapManager_C.OnRep_RadarV2ScanCount // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RadarV3Scans(); // Function MapManager.MapManager_C.OnRep_RadarV3Scans // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarV3ScanFinished(struct FRadarV3ScanData Scan); // Function MapManager.MapManager_C.RadarV3ScanFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RadarV2Scans(); // Function MapManager.MapManager_C.OnRep_RadarV2Scans // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarV2ScanFinished(struct FVector WorldLocation, float DistanceInKM, float Intensity); // Function MapManager.MapManager_C.RadarV2ScanFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveSingleGlobalStatFromActors(int32_t StatIndex); // Function MapManager.MapManager_C.RemoveSingleGlobalStatFromActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RecheckActorsForSingleGlobalStat(int32_t StatIndex); // Function MapManager.MapManager_C.RecheckActorsForSingleGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EquipableRemoveGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // Function MapManager.MapManager_C.EquipableRemoveGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EquipableApplyGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // Function MapManager.MapManager_C.EquipableApplyGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Radar Radius Update(struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.Radar Radius Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarTileToWorld(int32_t X, int32_t Y, struct FVector TileCenterWorldSpace); // Function MapManager.MapManager_C.RadarTileToWorld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LineSubsectionCheck(struct FVectorPair TestLine, struct FVectorPair CheckAgainstLine, enum class LineSegmentRelationship NewParam); // Function MapManager.MapManager_C.LineSubsectionCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTileAtGridspaceVector(struct FVector TileCoords, enum class MapTileRadarFlag Radar Flag, bool Failed); // Function MapManager.MapManager_C.GetTileAtGridspaceVector // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryToGetUnscannedTileAtCoords(int32_t X, int32_t Y, bool FoundUnscanned, int32_t Unscanned X, int32_t Unscanned Y); // Function MapManager.MapManager_C.TryToGetUnscannedTileAtCoords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConfigureCamera(); // Function MapManager.MapManager_C.ConfigureCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WorldSpaceToTile(struct FVector WorldSpaceLocation, int32_t X, int32_t Y); // Function MapManager.MapManager_C.WorldSpaceToTile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CompleteTileScan(int32_t X, int32_t Y, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.CompleteTileScan // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsValidTileCoord(int32_t X, int32_t Y, bool Valid); // Function MapManager.MapManager_C.IsValidTileCoord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetNearestUnscannedTileInRangeOf1(int32_t X, int32_t Y, int32_t Unscanned X, int32_t Unscanned Y); // Function MapManager.MapManager_C.GetNearestUnscannedTileInRangeOf1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddTilesHelper(); // Function MapManager.MapManager_C.AddTilesHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTileRadarFlag(int32_t X, int32_t Y, enum class MapTileRadarFlag Flag); // Function MapManager.MapManager_C.SetTileRadarFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveTilesHelper(); // Function MapManager.MapManager_C.RemoveTilesHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MapFlagToMaterial(enum class MapTileRadarFlag MapTileFlag, struct UMaterial* Material); // Function MapManager.MapManager_C.MapFlagToMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetTileMaterial(struct UStaticMeshComponent* StaticMesh, int32_t X, int32_t Y); // Function MapManager.MapManager_C.SetTileMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitMapTiles(); // Function MapManager.MapManager_C.InitMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function MapManager.MapManager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function MapManager.MapManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ClientSpawnTiles(); // Function MapManager.MapManager_C.ClientSpawnTiles // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClientRemoveTiles(); // Function MapManager.MapManager_C.ClientRemoveTiles // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClientUpdateTileMaterials(int32_t X, int32_t Y); // Function MapManager.MapManager_C.ClientUpdateTileMaterials // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClientUpdateRadarMapTile(int32_t X, int32_t Y, enum class MapTileRadarFlag Flag, struct FVector WorldPosition, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.ClientUpdateRadarMapTile // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClientUpdateRadarRadius(int32_t X, int32_t Y, int32_t Radius, struct FVector TileWorldSpace, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.ClientUpdateRadarRadius // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function MapManager.MapManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ServerOnlyUpdate(); // Function MapManager.MapManager_C.ServerOnlyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_MapManager(int32_t EntryPoint); // Function MapManager.MapManager_C.ExecuteUbergraph_MapManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

