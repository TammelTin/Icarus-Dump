// BlueprintGeneratedClass BP_Building_Frame.BP_Building_Frame_C
// Size: 0xa68 (Inherited: 0x9c8)
struct ABP_Building_Frame_C : ABP_Building_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c8(0x08)
	struct UNiagaraComponent* Niagara; // 0x9d0(0x08)
	struct UStaticMeshComponent* SM_XPlane5; // 0x9d8(0x08)
	struct UStaticMeshComponent* SM_XPlane4; // 0x9e0(0x08)
	struct UStaticMeshComponent* SM_XPlane3; // 0x9e8(0x08)
	struct UStaticMeshComponent* SM_XPlane2; // 0x9f0(0x08)
	struct UStaticMeshComponent* SM_XPlane1; // 0x9f8(0x08)
	struct UStaticMeshComponent* SM_XPlane; // 0xa00(0x08)
	struct URoofSnow_C* RoofSnow; // 0xa08(0x08)
	bool TopOrBottomHit; // 0xa10(0x01)
	bool TopHit; // 0xa11(0x01)
	bool Bottomhit; // 0xa12(0x01)
	char pad_A13[0x5]; // 0xa13(0x05)
	struct TMap<struct ABP_Building_Base_C*, int32_t> RemoteAnchorBuildingDistanceMap; // 0xa18(0x50)

	int32_t ExtraSoftHeightCalc(); // Function BP_Building_Frame.BP_Building_Frame_C.ExtraSoftHeightCalc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ApplySoftHeightLimits(); // Function BP_Building_Frame.BP_Building_Frame_C.ApplySoftHeightLimits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalculateDistanceToRealAnchor(); // Function BP_Building_Frame.BP_Building_Frame_C.CalculateDistanceToRealAnchor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CombineRemoteAnchorDistanceMaps(struct ABP_Building_Base_C* OtherBuilding); // Function BP_Building_Frame.BP_Building_Frame_C.CombineRemoteAnchorDistanceMaps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReinitAllAbove(); // Function BP_Building_Frame.BP_Building_Frame_C.ReinitAllAbove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform Shifted, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtra); // Function BP_Building_Frame.BP_Building_Frame_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator CenterWorldRotation, struct FRotator ZRotatedDifference, bool ImpactWasAlreadyRotated); // Function BP_Building_Frame.BP_Building_Frame_C.OptionallyRotateCenterUpToInpactNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GrabLowerAnchorBaseReferences(); // Function BP_Building_Frame.BP_Building_Frame_C.GrabLowerAnchorBaseReferences // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SpreadAnchorBaseReferencesUp(); // Function BP_Building_Frame.BP_Building_Frame_C.SpreadAnchorBaseReferencesUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // Function BP_Building_Frame.BP_Building_Frame_C.StartDestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitAnchorStability(); // Function BP_Building_Frame.BP_Building_Frame_C.InitAnchorStability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Building_Frame(int32_t EntryPoint); // Function BP_Building_Frame.BP_Building_Frame_C.ExecuteUbergraph_BP_Building_Frame // (Final|UbergraphFunction) // @ game+0x1a38c80
};

