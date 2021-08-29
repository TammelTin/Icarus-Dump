// BlueprintGeneratedClass BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C
// Size: 0xa78 (Inherited: 0xa70)
struct ABP_Building_Beam_Diagnal_C : ABP_Building_Beam_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)

	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct FTransform Shifted, bool WantsBlockLikePlacement, struct FTransform BlockLikePlacementExtra); // Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ShouldRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Building_Beam_Diagnal(int32_t EntryPoint); // Function BP_Building_Beam_Diagnal.BP_Building_Beam_Diagnal_C.ExecuteUbergraph_BP_Building_Beam_Diagnal // (Final|UbergraphFunction) // @ game+0x1a05090
};

