// BlueprintGeneratedClass BP_Building_Wall.BP_Building_Wall_C
// Size: 0x9e0 (Inherited: 0x9c8)
struct ABP_Building_Wall_C : ABP_Building_Base_C {
	struct UNiagaraComponent* Niagara; // 0x9c8(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0x9d0(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0x9d8(0x08)

	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct FTransform GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections RelativeRotationEnum, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtraDelta); // Function BP_Building_Wall.BP_Building_Wall_C.DecideShifting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsBuildingOutside(bool Outside); // Function BP_Building_Wall.BP_Building_Wall_C.IsBuildingOutside // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform Shifted, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtra); // Function BP_Building_Wall.BP_Building_Wall_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

