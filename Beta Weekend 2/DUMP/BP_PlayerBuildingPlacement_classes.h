// BlueprintGeneratedClass BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C
// Size: 0x538 (Inherited: 0xb0)
struct UBP_PlayerBuildingPlacement_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t BuildingVariation; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct ABP_Building_Base_C* ClassToBuild; // 0xc0(0x08)
	struct AActor* GhostBuildingActor; // 0xc8(0x08)
	bool FreespaceMode; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct ABP_Grid_Base_C* AutoFocusedGrid; // 0xd8(0x08)
	struct ABP_Grid_Base_C* RemoteFocusedGrid; // 0xe0(0x08)
	bool BuildingAlternateRotation; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	int32_t BuildingRotationalOffsetState; // 0xec(0x04)
	struct FTransform BuildingGridSnappedCache; // 0xf0(0x30)
	struct FTransform LockedInGridCache; // 0x120(0x30)
	bool BuildingBlocked; // 0x150(0x01)
	char pad_151[0xf]; // 0x151(0x0f)
	struct FTransform BuildingNewGridCache; // 0x160(0x30)
	bool BuildingWasCapsuleHit; // 0x190(0x01)
	bool LandscapeWasTraceHit; // 0x191(0x01)
	bool LongTraceDownWasHit; // 0x192(0x01)
	char pad_193[0x1]; // 0x193(0x01)
	struct FHitResult BuildingCapsuleHitCache; // 0x194(0x8c)
	struct FHitResult LandscapeTraceHit; // 0x220(0x8c)
	struct FHitResult LongTraceDownHitCache; // 0x2ac(0x8c)
	float BuildingLockedStartTime; // 0x338(0x04)
	enum class RotationalDirections LockedInComparison; // 0x33c(0x01)
	enum class RotationalDirections CondensedFrameTest; // 0x33d(0x01)
	char pad_33E[0x2]; // 0x33e(0x02)
	float BuildingLockRequiredTime; // 0x340(0x04)
	enum class RotationalDirections LastFullyLockedInValue; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	int32_t TempVariation; // 0x348(0x04)
	int32_t BuildingRotationalOffsetStateMax; // 0x34c(0x04)
	struct ABP_Building_Base_C* OldBuilding; // 0x350(0x08)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> WallVariations; // 0x358(0x50)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> FrameVariations; // 0x3a8(0x50)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> AngledWallVariations; // 0x3f8(0x50)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> FloorVariations; // 0x448(0x50)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> RampVariations; // 0x498(0x50)
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> StairsVariations; // 0x4e8(0x50)

	void SetupBuilding(struct ABP_Building_Base_C* Building, struct ABP_Building_Base_C* OldBuilding); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.SetupBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttemptToSwapBuilding(struct ABP_Building_Base_C* BuildingToSwap, enum class EBuildingResourceType ResourceType); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.AttemptToSwapBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	enum class EBuildingType GetBuildingType(struct ABP_Building_Base_C* Building, bool Success); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.GetBuildingType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveItemFromInventory(struct FItemsStaticRowHandle Item); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.RemoveItemFromInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindItemInInventory(struct FItemsStaticRowHandle Item, bool Found); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.FindItemInInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShapeTraceSurfaceNormalFix(struct FHitResult Hit, struct FHitResult FixedNormalHit, bool Success); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ShapeTraceSurfaceNormalFix // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetLocalPlayerView(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.GetLocalPlayerView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ServerSpawnNewGhostBuilding(struct ABP_Building_Base_C* New Building Class); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerSpawnNewGhostBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BuildCheck(struct ABP_Building_Base_C* ToBuild, bool Success); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.BuildCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RelativeAxisLock(enum class RotationalDirections RelativeRotationalDirection, bool Locked); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.RelativeAxisLock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InjectPlayerDesiredRotations(struct FTransform NewParam1, struct FTransform NewParam); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.InjectPlayerDesiredRotations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsHitNearBuilding(struct FHitResult Hit, bool NewParam1); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.IsHitNearBuilding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConfigureGhostActor(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ConfigureGhostActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_4D0287A642DEED0DCA1218A46059E2A2(struct UObject* Loaded); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.OnLoaded_4D0287A642DEED0DCA1218A46059E2A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_9489F6834FA9BA550AC52889E53D7474(struct UObject* Loaded); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.OnLoaded_9489F6834FA9BA550AC52889E53D7474 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Walltick helper(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.Walltick helper // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerBuildingHitProcess(struct FHitResult HitStruct, struct ABP_Building_Base_C* HitBuilding, struct ABP_Building_Base_C* ClassToBuild); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerBuildingHitProcess // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerGroundHitProcess(struct FHitResult Hit, struct ABP_Building_Base_C* ClassToBuild, bool FreespaceBuilding); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerGroundHitProcess // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerClearCaches(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerClearCaches // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttemptToPlaceBuilding(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.AttemptToPlaceBuilding // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerAddNewBuilding(struct ABP_Grid_Base_C* FocusedGrid, struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* DesiredClass); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerAddNewBuilding // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerSpawnNewGridWithBuilding(struct FTransform NewGridTrans, struct ABP_Building_Base_C* DesiredClass); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerSpawnNewGridWithBuilding // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerSetGhostClass(struct ABP_Building_Base_C* NewClass); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerSetGhostClass // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerToggleRotationMode(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ServerToggleRotationMode // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetBuildingVariation(int32_t Variation); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.SetBuildingVariation // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClientBuildingFocusChange(struct AIcarusActor* FocuedItem); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ClientBuildingFocusChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoteFocusDelayedClear(struct UObject* Class); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.RemoteFocusDelayedClear // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CustomEvent_1(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddReplacementBuilding(struct ABP_Grid_Base_C* FocusedGrid, struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* DesiredClass, struct ABP_Building_Base_C* OldBuilding, struct FItemsStaticRowHandle ItemData); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.AddReplacementBuilding // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void debug spawn rows of frames, then walls(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.debug spawn rows of frames, then walls // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void debug add wind damage to all buildings(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.debug add wind damage to all buildings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DebugWindDamageCycle(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.DebugWindDamageCycle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DebugWindDamgeSingle(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.DebugWindDamgeSingle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void debug spawn frame cube(); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.debug spawn frame cube // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_PlayerBuildingPlacement(int32_t EntryPoint); // Function BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C.ExecuteUbergraph_BP_PlayerBuildingPlacement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

