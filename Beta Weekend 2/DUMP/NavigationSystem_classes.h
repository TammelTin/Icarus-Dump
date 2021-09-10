// Class NavigationSystem.NavigationSystemV1
// Size: 0x15e0 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	struct FName DefaultAgentName; // 0x38(0x08)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char pad_68_7 : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69(0x01)
	char pad_69_2 : 6; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float ActiveTilesUpdateInterval; // 0x6c(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x74(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0(0x10)
	char pad_E0[0xdc]; // 0xe0(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1bc(0x01)
	char pad_1BD[0x13ff]; // 0x1bd(0x13ff)
	float DirtyAreasUpdateFreq; // 0x15bc(0x04)
	char pad_15C0[0x20]; // 0x15c0(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x35bce10
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35bcd50
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34d5d60
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x35bccc0
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x35bcc40
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x35bcc20
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x35bcb10
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bc920
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x35bc890
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector RayStart, struct FVector RayEnd, struct FVector HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35bc660
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x35bc550
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct FVector ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bc350
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bc130
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bbf10
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35bbf10
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35bbe20
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35bbd90
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bbbb0
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bb9d0
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bb7a0
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x35bb540
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35bb480
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35bb230
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35bb020
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class NavigationSystem.NavigationData
// Size: 0x428 (Inherited: 0x220)
struct ANavigationData : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x228(0x08)
	struct FNavDataConfig NavDataConfig; // 0x230(0x78)
	char bEnableDrawing : 1; // 0x2a8(0x01)
	char bForceRebuildOnLoad : 1; // 0x2a8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2a8(0x01)
	char bCanBeMainNavData : 1; // 0x2a8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2a8(0x01)
	char bRebuildAtRuntime : 1; // 0x2a8(0x01)
	char pad_2A8_6 : 2; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float ObservedPathsTickInterval; // 0x2b0(0x04)
	uint32_t DataVersion; // 0x2b4(0x04)
	char pad_2B8[0x108]; // 0x2b8(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x3c0(0x10)
	char pad_3D0[0x58]; // 0x3d0(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x428 (Inherited: 0x428)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x48(0x08)
	struct UNavArea* Agent1Area; // 0x50(0x08)
	struct UNavArea* Agent2Area; // 0x58(0x08)
	struct UNavArea* Agent3Area; // 0x60(0x08)
	struct UNavArea* Agent4Area; // 0x68(0x08)
	struct UNavArea* Agent5Area; // 0x70(0x08)
	struct UNavArea* Agent6Area; // 0x78(0x08)
	struct UNavArea* Agent7Area; // 0x80(0x08)
	struct UNavArea* Agent8Area; // 0x88(0x08)
	struct UNavArea* Agent9Area; // 0x90(0x08)
	struct UNavArea* Agent10Area; // 0x98(0x08)
	struct UNavArea* Agent11Area; // 0xa0(0x08)
	struct UNavArea* Agent12Area; // 0xa8(0x08)
	struct UNavArea* Agent13Area; // 0xb0(0x08)
	struct UNavArea* Agent14Area; // 0xb8(0x08)
	struct UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	char pad_70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x2f]; // 0xa9(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x428 (Inherited: 0x428)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x220 (Inherited: 0x220)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x220 (Inherited: 0x200)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x1f8(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x210(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0(0x04)
	float TileRemovalRadius; // 0xb4(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35bbee0
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1523ba0
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35bbeb0
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35bb770
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35bb510
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35bb400
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x35bafa0
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x35baec0
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x310 (Inherited: 0x220)
struct ANavigationTestingActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x230(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x238(0x08)
	char bActAsNavigationInvoker : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x248(0x30)
	struct FVector QueryingExtent; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
	struct ANavigationData* MyNavData; // 0x288(0x08)
	struct FVector ProjectedLocation; // 0x290(0x0c)
	char bProjectedLocationValid : 1; // 0x29c(0x01)
	char bSearchStart : 1; // 0x29c(0x01)
	char pad_29C_2 : 6; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float CostLimitFactor; // 0x2a0(0x04)
	float MinimumCostLimit; // 0x2a4(0x04)
	char bBacktracking : 1; // 0x2a8(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2a8(0x01)
	char bGatherDetailedInfo : 1; // 0x2a8(0x01)
	char bDrawDistanceToWall : 1; // 0x2a8(0x01)
	char bShowNodePool : 1; // 0x2a8(0x01)
	char bShowBestPath : 1; // 0x2a8(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2a8(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct FVector2D TextCanvasOffset; // 0x2b0(0x08)
	char bPathExist : 1; // 0x2b8(0x01)
	char bPathIsPartial : 1; // 0x2b8(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2b8(0x01)
	char pad_2B8_3 : 5; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float PathfindingTime; // 0x2bc(0x04)
	float PathCost; // 0x2c0(0x04)
	int32_t PathfindingSteps; // 0x2c4(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x2c8(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x2d0(0x08)
	int32_t ShowStepIndex; // 0x2d8(0x04)
	float OffsetFromCornersDistance; // 0x2dc(0x04)
	char pad_2E0[0x30]; // 0x2e0(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x460 (Inherited: 0x440)
struct UNavLinkComponent : UPrimitiveComponent {
	char pad_440[0x8]; // 0x440(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x448(0x10)
	char pad_458[0x8]; // 0x458(0x08)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UNavRelevantComponent : UActorComponent {
	char pad_B0[0x24]; // 0xb0(0x24)
	char bAttachToOwnersRoot : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UObject* CachedNavParent; // 0xd8(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x35bede0
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x190 (Inherited: 0xe0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_E0[0x8]; // 0xe0(0x08)
	uint32_t NavLinkUserId; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UNavArea* EnabledAreaClass; // 0xf0(0x08)
	struct UNavArea* DisabledAreaClass; // 0xf8(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x100(0x04)
	struct FVector LinkRelativeStart; // 0x104(0x0c)
	struct FVector LinkRelativeEnd; // 0x110(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	char bLinkEnabled : 1; // 0x120(0x01)
	char bNotifyWhenEnabled : 1; // 0x120(0x01)
	char bNotifyWhenDisabled : 1; // 0x120(0x01)
	char bCreateBoxObstacle : 1; // 0x120(0x01)
	char pad_120_4 : 4; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	struct FVector ObstacleOffset; // 0x124(0x0c)
	struct FVector ObstacleExtent; // 0x130(0x0c)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x140(0x08)
	float BroadcastRadius; // 0x148(0x04)
	float BroadcastInterval; // 0x14c(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x150(0x01)
	char pad_151[0x3f]; // 0x151(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x440 (Inherited: 0x440)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x260 (Inherited: 0x258)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x450 (Inherited: 0x440)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_440[0x10]; // 0x440(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x140 (Inherited: 0xe0)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xe0(0x08)
	struct FVector FailsafeExtent; // 0xe8(0x0c)
	char bIncludeAgentHeight : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x4b]; // 0xf5(0x4b)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x35bed50
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x270 (Inherited: 0x258)
struct ANavModifierVolume : AVolume {
	char pad_258[0x8]; // 0x258(0x08)
	struct UNavArea* AreaClass; // 0x260(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x35becc0
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x230 (Inherited: 0x220)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x220(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x228(0x01)
	char bLoadOnClient : 1; // 0x229(0x01)
	char pad_229_1 : 7; // 0x229(0x01)
	char pad_22A[0x6]; // 0x22a(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x440 (Inherited: 0x440)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x4d8 (Inherited: 0x428)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x428(0x01)
	char bDrawPolyEdges : 1; // 0x428(0x01)
	char bDrawFilledPolys : 1; // 0x428(0x01)
	char bDrawNavMeshEdges : 1; // 0x428(0x01)
	char bDrawTileBounds : 1; // 0x428(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x428(0x01)
	char bDrawTileLabels : 1; // 0x428(0x01)
	char bDrawPolygonLabels : 1; // 0x428(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x429(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x429(0x01)
	char bDrawNavLinks : 1; // 0x429(0x01)
	char bDrawFailedNavLinks : 1; // 0x429(0x01)
	char bDrawClusters : 1; // 0x429(0x01)
	char bDrawOctree : 1; // 0x429(0x01)
	char bDrawOctreeDetails : 1; // 0x429(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x429(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x42a(0x01)
	char pad_42A_1 : 7; // 0x42a(0x01)
	char pad_42B[0x1]; // 0x42b(0x01)
	float DrawOffset; // 0x42c(0x04)
	char bFixedTilePoolSize : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	int32_t TilePoolSize; // 0x434(0x04)
	float TileSizeUU; // 0x438(0x04)
	float CellSize; // 0x43c(0x04)
	float CellHeight; // 0x440(0x04)
	float AgentRadius; // 0x444(0x04)
	float AgentHeight; // 0x448(0x04)
	float AgentMaxSlope; // 0x44c(0x04)
	float AgentMaxStepHeight; // 0x450(0x04)
	float MinRegionArea; // 0x454(0x04)
	float MergeRegionSize; // 0x458(0x04)
	float MaxSimplificationError; // 0x45c(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x460(0x04)
	int32_t TileNumberHardLimit; // 0x464(0x04)
	int32_t PolyRefTileBits; // 0x468(0x04)
	int32_t PolyRefNavPolyBits; // 0x46c(0x04)
	int32_t PolyRefSaltBits; // 0x470(0x04)
	struct FVector NavMeshOriginOffset; // 0x474(0x0c)
	float DefaultDrawDistance; // 0x480(0x04)
	float DefaultMaxSearchNodes; // 0x484(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x488(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x48c(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x48d(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	int32_t RegionChunkSplits; // 0x490(0x04)
	int32_t LayerChunkSplits; // 0x494(0x04)
	char bSortNavigationAreasByCost : 1; // 0x498(0x01)
	char bPerformVoxelFiltering : 1; // 0x498(0x01)
	char bMarkLowHeightAreas : 1; // 0x498(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x498(0x01)
	char bFilterLowSpanSequences : 1; // 0x498(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x498(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x498(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x498(0x01)
	char bStoreEmptyTileLayers : 1; // 0x499(0x01)
	char bUseVirtualFilters : 1; // 0x499(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x499(0x01)
	char bUseVoxelCache : 1; // 0x499(0x01)
	char pad_499_4 : 4; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	float TileSetUpdateInterval; // 0x49c(0x04)
	float HeuristicScale; // 0x4a0(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x4a4(0x04)
	char pad_4A8[0x30]; // 0x4a8(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x35beb20
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_30[0x10]; // 0x30(0x10)
};

