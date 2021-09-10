// BlueprintGeneratedClass BP_Building_Ramp.BP_Building_Ramp_C
// Size: 0x9e8 (Inherited: 0x9c8)
struct ABP_Building_Ramp_C : ABP_Building_Base_C {
	struct UNiagaraComponent* Niagara; // 0x9c8(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0x9d0(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0x9d8(0x08)
	struct URoofSnow_C* RoofSnow; // 0x9e0(0x08)

	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform Shifted, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtra); // Function BP_Building_Ramp.BP_Building_Ramp_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

