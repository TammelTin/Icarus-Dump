// BlueprintGeneratedClass BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C
// Size: 0x4d1 (Inherited: 0x418)
struct UBP_ActionableBehaviour_CurvedSplinePlace_C : UBP_ActionableBehaviour_SimplePlace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct ABP_IcarusSplineActor_C* WorkingSpline; // 0x420(0x08)
	struct TMap<int32_t, enum class SplineTypes> ToolTypeMap; // 0x428(0x50)
	int32_t ToolInt; // 0x478(0x04)
	enum class SplineTypes SplineType; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct TMap<enum class SplineTypes, float> SplineTypeMaxDistance; // 0x480(0x50)
	bool Snapping; // 0x4d0(0x01)

	void SplineAnchorableHitCheck(struct AActor* HitActor, bool CanPlacePoint); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.SplineAnchorableHitCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Snapping(); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.OnRep_Snapping // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindSegmentFromComponent(struct ABP_IcarusSplineActor_C* SplineActor, struct UPrimitiveComponent* HitComponent, struct UBP_IcarusSplineSegment_C* SplineSegment, int32_t SegmentIndex, bool Success); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.FindSegmentFromComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool ShouldTrace); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.ShouldActionCameraTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ValidPlacementCheck(struct FHitResult Hit, bool Valid); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.ValidPlacementCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult SweepResult); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.OnActionHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.TickCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActionCameraTraceHit(struct FHitResult Hit); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.OnActionCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace(int32_t EntryPoint); // Function BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C.ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

