// BlueprintGeneratedClass BP_IcarusSplineActor.BP_IcarusSplineActor_C
// Size: 0x340 (Inherited: 0x220)
struct ABP_IcarusSplineActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* SplineNodeMeshs; // 0x228(0x08)
	struct UTextRenderComponent* TextRender; // 0x230(0x08)
	struct USceneComponent* SplineSegmentContainer; // 0x238(0x08)
	struct USplineComponent* Spline; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TMap<int32_t, struct FSplineIndexStructArray> ConnectionMap; // 0x250(0x50)
	struct TArray<struct ABP_DeployableBase_C*> StartAtActors; // 0x2a0(0x10)
	struct TArray<struct ABP_DeployableBase_C*> EndAtActors; // 0x2b0(0x10)
	struct ABP_IcarusSplineNet_C* Network; // 0x2c0(0x08)
	enum class SplineTypes SplineType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TArray<struct UBP_IcarusSplineSegment_C*> SplineSegmentArray; // 0x2d0(0x10)
	struct TArray<struct USceneComponent*> SplineSegmentRepresentations; // 0x2e0(0x10)
	struct TArray<struct USceneComponent*> SplineNodeRepresentations; // 0x2f0(0x10)
	struct FLinearColor Debug; // 0x300(0x10)
	struct FTransform FirstPointHitNormalTransform; // 0x310(0x30)

	void ChangeLastSegmentsGhostColor(struct UMaterialInterface* RepGhostMaterial); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.ChangeLastSegmentsGhostColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BufferSplineConnectionStructs(struct TArray<struct FSplineIndexStruct> SplineIndexs, struct TArray<struct FSplineIndexStruct> Buffered); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.BufferSplineConnectionStructs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FVector GetSecondLastPointWorldLocation(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.GetSecondLastPointWorldLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetNetworkType(enum class EIcarusResourceType NetworkType); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.GetNetworkType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSplineSegmentFromRepresentation(struct USceneComponent* SplineSegmentRepresentation, struct UBP_IcarusSplineSegment_C* SplineSegment, bool Success); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.GetSplineSegmentFromRepresentation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConfigureSegmentFromType(struct UPrimitiveComponent* RepresentitiveClass, struct UStaticMesh* RepSegmentMesh, struct UMaterialInterface* RepSegmentFinalMaterial, int32_t Materialndex, bool UseNodeMeshes, struct FVector SegmentOffset, struct UStaticMesh* NodeMesh, struct UMaterialInterface* NodeMaterial); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.ConfigureSegmentFromType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveLinkedActorAtEnd(struct ABP_DeployableBase_C* Actor To Unlink); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.RemoveLinkedActorAtEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddLinkedActorAtEnd(struct ABP_DeployableBase_C* Actor To Link); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.AddLinkedActorAtEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DoTwoSplineConnectAtThisSplineIndex(struct ABP_IcarusSplineActor_C* Spline1, struct ABP_IcarusSplineActor_C* Spline2, int32_t TestIndex); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.DoTwoSplineConnectAtThisSplineIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Grab Back Pointers To Index(int32_t IndexOnThisSpline); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Grab Back Pointers To Index // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Replace Spline Pointers(int32_t NewSplineIndex, struct FSplineIndexStruct SplineIndexStruct, struct ABP_IcarusSplineActor_C* New Spline); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Replace Spline Pointers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateNewNet(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.CreateNewNet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveConnectionTwoWay(int32_t LocalIndex, struct ABP_IcarusSplineActor_C* OtherSpline, int32_t OtherSplineIndex); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.RemoveConnectionTwoWay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddConnection(int32_t LocalIndex, struct ABP_IcarusSplineActor_C* OtherSpline, int32_t OtherSplineIndex, bool AddBackwardsConnection, bool Success); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.AddConnection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Spline Start to Spline Segment end(struct UBP_IcarusSplineSegment_C* SplineSegment, int32_t SplinePointIndex, bool Success); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Update Spline Start to Spline Segment end // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Create New Spline Point and Segment(struct FVector InputPin); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Create New Spline Point and Segment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsPointCloserToEnd(struct FVector Point, bool PointCloserToEnd); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.IsPointCloserToEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Spline To Another Spline Segment(bool FinalUpdate, struct UBP_IcarusSplineSegment_C* SplineSegment, bool Success); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Update Spline To Another Spline Segment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SplitSplineAtSegment(struct UBP_IcarusSplineSegment_C* SplineSegment, bool RecalcNets, struct ABP_IcarusSplineActor_C* NewSplitSpline); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.SplitSplineAtSegment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Remove Last Point and Segment(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Remove Last Point and Segment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Create Spline representations Starting at Point(int32_t StartSplinePointIndex); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Create Spline representations Starting at Point // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FinalizeCurrentPointAndAddNew(struct FVector World Space Point Posititon, struct FTransform ImpactNormalTrans); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.FinalizeCurrentPointAndAddNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finalize Current Spline Segment(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Finalize Current Spline Segment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Last Spline Point And Segment(struct FVector Updated Point Posititon, struct FTransform UpdatedHitNormalTransform); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Update Last Spline Point And Segment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Cleanup(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DelayCleanupCheck(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.DelayCleanupCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusSplineActor(int32_t EntryPoint); // Function BP_IcarusSplineActor.BP_IcarusSplineActor_C.ExecuteUbergraph_BP_IcarusSplineActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

