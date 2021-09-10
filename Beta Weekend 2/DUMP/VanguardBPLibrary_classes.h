// Class VanguardBPLibrary.VanguardBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVanguardBPFunctionLibrary : UBlueprintFunctionLibrary {

	void SpawnActorOfClass(struct AActor* WorldContext, struct AActor* Class, struct FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, struct AActor* OutActor); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SpawnActorOfClass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93d750
	struct TArray<struct FString> SortStringArrayAlphabetically(struct TArray<struct FString> InStringArray); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortStringArrayAlphabetically // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93d5c0
	struct TArray<struct USceneComponent*> SortComponentsByDistanceFromOrigin(struct TArray<struct USceneComponent*> SceneComponents, struct FVector Origin); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortComponentsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93d480
	struct TArray<struct AActor*> SortActorsByPathCostFromOrigin(struct UObject* WorldContextObject, struct TArray<struct AActor*> Actors, struct FVector Origin); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByPathCostFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93d300
	struct TArray<struct AActor*> SortActorsByDistanceFromOrigin(struct TArray<struct AActor*> Actors, struct FVector Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93d050
	struct TArray<struct UActorComponent*> SortActorComponentsByDistanceFromOrigin(struct TArray<struct UActorComponent*> ActorComponents, struct FVector Origin, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorComponentsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93ce40
	void SetRenderInDepthPass(struct UPrimitiveComponent* Component, bool Value); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderInDepthPass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93cd80
	void SetRenderFocusOutline(bool bEnable); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderFocusOutline // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93cd00
	void SetLandscapeRVTSettings(struct ALandscapeProxy* LandscapeProxy, struct TArray<struct URuntimeVirtualTexture*> VirtualTextures, int32_t NumLOD, int32_t LODBias); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetLandscapeRVTSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93cb90
	void SetCanEverAffectNavigation(struct UActorComponent* InActorComponent, bool bCanEverAffect); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetCanEverAffectNavigation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93cad0
	void SetAllowAnyoneToDestroyComponent(struct UActorComponent* InComponent, bool AllowAnyone); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetAllowAnyoneToDestroyComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93ca10
	void ReconstructActor(struct AActor* Target); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ReconstructActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93c990
	void QuickLog(struct FName LogCategory, struct FString Message); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.QuickLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93c870
	bool ProjectWorldToScreenOrEdge(struct APlayerController* Player, struct FVector WorldPosition, struct FVector2D ScreenOrEdgePosition, struct FVector2D DirFromCentre, bool IsOffScreen, bool IsBehindCamera); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectWorldToScreenOrEdge // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93c630
	bool ProjectReachablePointAtLocation(struct AActor* WorldContext, struct FVector StartPoint, struct FVector EndPoint, struct FVector OutProjectedPoint, struct FVector ProjectionExtent, struct ANavigationData* NavData); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectReachablePointAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93c420
	bool ProjectOrTraceToNavigablePoint(struct AActor* WorldContextObject, struct FVector InLocation, struct FVector OutProjectedPoint, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FVector ProjectionExtent, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectOrTraceToNavigablePoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93c0e0
	struct TArray<struct TSoftObjectPtr<UWorld>> ObjectsToWorlds(struct TArray<struct UObject*> Objects); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ObjectsToWorlds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93bf90
	float MaxInt(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x93bf60
	float MaxFloat(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x93bf30
	void MarkObjectDirty(struct UObject* Object); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MarkObjectDirty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93beb0
	struct TArray<struct ULevelStreaming*> LoadAllStreamingLevels(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.LoadAllStreamingLevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93bad0
	bool IsWithEditor(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsWithEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x93be80
	struct TSoftObjectPtr<UWorld> GetWorldFromStreamingAsset(struct ULevelStreaming* StreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetWorldFromStreamingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93bdc0
	void GetTileInfoFromStreamingLevel(struct UObject* WorldContextObject, struct ULevelStreaming* StreamingLevel, struct FVector OutLocation); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetTileInfoFromStreamingLevel // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93bcb0
	void GetStreamingLevelFromActor(struct UObject* WorldContextObject, struct AActor* Actor, struct ULevelStreaming* OutStreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamingLevelFromActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93bba0
	struct TArray<struct FName> GetStreamedLevelPackageNames(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelPackageNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93bad0
	struct TArray<struct FName> GetStreamedLevelNames(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93bad0
	struct TArray<struct UObject*> GetLoadedChildClasses(struct UObject* ParentClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLoadedChildClasses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93ba00
	struct FName GetLevelNameFromStreamingAsset(struct ULevelStreaming* StreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLevelNameFromStreamingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93b970
	int32_t GetHashFromString(struct FString String); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetHashFromString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x93b8c0
	struct FString GetGameVersion(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetGameVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x93b840
	float GetClosestPlayerDistanceFromLocation(struct UObject* WorldContextObject, struct FVector Location, enum class EFunctionResult Result); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClosestPlayerDistanceFromLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93b710
	struct UObject* GetClassDefaultObject(struct UObject* ObjectClass, bool IsValid); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClassDefaultObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93b630
	void GetChildWidgetsOfClass(struct UWidget* WidgetClass, struct UPanelWidget* InParent, struct TArray<struct UWidget*> ChildWidgets, bool SearchRecursively); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildWidgetsOfClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93b4c0
	struct TArray<struct UObject*> GetChildClassesInPath(struct FName FolderPath, struct UObject* ParentClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildClassesInPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93b3a0
	struct TArray<struct FString> GetAllMapNames(struct FString OverrideSearchPath); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetAllMapNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93b250
	void GetActorsOfClassInWorld(struct AActor* WorldContext, struct AActor* ActorClass, struct TArray<struct AActor*> OutActors); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsOfClassInWorld // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93b130
	struct TArray<struct AActor*> GetActorsInWorld(struct UWorld* World); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsInWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93b060
	bool FindSocketOrTagOnActor(struct AActor* InActor, struct FName SocketOrTagName, struct UActorComponent* FoundComponent, struct FTransform FoundWorldTransform); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.FindSocketOrTagOnActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93ae90
	void FilterActorsByTags(struct TArray<struct AActor*> InActorArray, struct TArray<struct FName> Tags); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.FilterActorsByTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93ad80
	struct AActor* DuplicateActor(struct AActor* InputActor, bool bDetachOriginal); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93acb0
	void DebugLog(enum class EBPLogVerbosity Verbosity, struct FName LogCategory, struct FString Message, bool bOutputToMessageLog); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.DebugLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x93ab10
	bool ComponentOverlapComponentsAgainstObjectType(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform, struct TArray<enum class EObjectTypeQuery> ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ComponentOverlapComponentsAgainstObjectType // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93a880
	void AddActorComponent(struct AActor* Owner, struct UActorComponent* ActorComponentClass, struct UActorComponent* OutComponent); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x93a770
	bool ActorLineTraceSingle(struct UObject* WorldContextObject, struct AActor* TargetActor, struct FVector Start, struct FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, struct FHitResult OutHit, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ActorLineTraceSingle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x93a390
};

