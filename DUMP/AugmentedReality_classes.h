// Class AugmentedReality.ARActor
// Size: 0x220 (Inherited: 0x220)
struct AARActor : AActor {

	struct UARComponent* AddARComponent(struct UARComponent* InComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARActor.AddARComponent // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259bfe0
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259f240
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType); // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259f170
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259f150
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259f0d0
	void SetEnabledXRCamera(bool bOnOff); // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259f050
	void SetARWorldScale(float InWorldScale); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259ef00
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259ed70
	void SetAlignmentTransform(struct FTransform InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259ef80
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259eca0
	struct FIntPoint ResizeXRCamera(struct FIntPoint InSize); // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259ec00
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259eb80
	void RemoveARPinFromLocalStore(struct FName InSaveName); // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259eae0
	void RemoveAllARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259eb60
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x259e950
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259e880
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259e6d0
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259e6b0
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259e5e0
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259e1d0
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259e400
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259e150
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259e090
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod); // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259dfd0
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259dfa0
	bool IsARPinLocalStoreSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259df70
	bool IsARPinLocalStoreReady(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259df40
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259df10
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259dee0
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259deb0
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259dbe0
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259dbb0
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259db30
	struct UARTexture* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259db00
	struct UARTexture* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259dad0
	bool GetObjectClassificationAtLocation(struct FVector InWorldLocation, enum class EARObjectClassification OutClassification, struct FVector OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259d940
	int32_t GetNumberOfTrackedFacesSupported(); // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d910
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259d480
	bool GetCameraIntrinsics(struct FARCameraIntrinsics OutCameraIntrinsics); // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x259d3c0
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d390
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d360
	float GetARWorldScale(); // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259cd40
	struct UARTexture* GetARTexture(enum class EARTextureType TextureType); // Function AugmentedReality.ARBlueprintLibrary.GetARTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259ccc0
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x259cc30
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d2e0
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d260
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d1e0
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d160
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259d0e0
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259cfa0
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259cf20
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259ce50
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259cdd0
	struct FTransform GetAlignmentTransform(); // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x259cd70
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259cb50
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259c9b0
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259c810
	void CalculateClosestIntersection(struct TArray<struct FVector> StartPoints, struct TArray<struct FVector> EndPoints, struct FVector ClosestIntersection); // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259c6b0
	void CalculateAlignmentTransform(struct FTransform TransformInFirstCoordinateSystem, struct FTransform TransformInSecondCoordinateSystem, struct FTransform AlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259c4c0
	bool AddTrackedPointWithName(struct FTransform WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x259c340
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259c1b0
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259c0d0
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x259ddb0
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x259dcb0
	struct FTransform GetLocalTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x259d7f0
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x259d6d0
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x259d5b0
	float GetDistanceFromCamera(struct FARTraceResult TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x259d4b0
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80 (Inherited: 0x50)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x259bf50
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98 (Inherited: 0x50)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x259be20
};

// Class AugmentedReality.ARComponent
// Size: 0x280 (Inherited: 0x200)
struct UARComponent : USceneComponent {
	struct FGuid NativeID; // 0x1f8(0x10)
	char pad_210[0x28]; // 0x210(0x28)
	bool bUseDefaultReplication; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x240(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248(0x08)
	struct UMRMeshComponent* MRMeshComponent; // 0x250(0x08)
	struct UARTrackedGeometry* MyTrackedGeometry; // 0x258(0x08)
	char pad_260[0x20]; // 0x260(0x20)

	void UpdateVisualization(); // Function AugmentedReality.ARComponent.UpdateVisualization // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x25a6480
	void SetNativeID(struct FGuid NativeID); // Function AugmentedReality.ARComponent.SetNativeID // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x25a6010
	void ReceiveRemove(); // Function AugmentedReality.ARComponent.ReceiveRemove // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Payload(); // Function AugmentedReality.ARComponent.OnRep_Payload // (Native|Protected) // @ game+0x14d9820
	struct UMRMeshComponent* GetMRMesh(); // Function AugmentedReality.ARComponent.GetMRMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x25a5190
};

// Class AugmentedReality.ARPlaneComponent
// Size: 0x300 (Inherited: 0x280)
struct UARPlaneComponent : UARComponent {
	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x280(0x80)

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a61f0
	void SetObjectClassificationDebugColors(struct TMap<enum class EARObjectClassification, struct FLinearColor> InColors); // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x25a60b0
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5a90
	void ReceiveUpdate(struct FARPlaneUpdatePayload Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARPlaneUpdatePayload Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x25a51b0
};

// Class AugmentedReality.ARPointComponent
// Size: 0x280 (Inherited: 0x280)
struct UARPointComponent : UARComponent {
	struct FARPointUpdatePayload ReplicatedPayload; // 0x278(0x01)

	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // Function AugmentedReality.ARPointComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5be0
	void ReceiveUpdate(struct FARPointUpdatePayload Payload); // Function AugmentedReality.ARPointComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARPointUpdatePayload Payload); // Function AugmentedReality.ARPointComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARFaceComponent
// Size: 0x2e0 (Inherited: 0x280)
struct UARFaceComponent : UARComponent {
	enum class EARFaceTransformMixing TransformSetting; // 0x278(0x01)
	bool bUpdateVertexNormal; // 0x279(0x01)
	bool bFaceOutOfScreen; // 0x27a(0x01)
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x280(0x40)
	char pad_2C3[0x1d]; // 0x2c3(0x1d)

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode); // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a5ec0
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // Function AugmentedReality.ARFaceComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5650
	void ReceiveUpdate(struct FARFaceUpdatePayload Payload); // Function AugmentedReality.ARFaceComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARFaceUpdatePayload Payload); // Function AugmentedReality.ARFaceComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARImageComponent
// Size: 0x2e0 (Inherited: 0x280)
struct UARImageComponent : UARComponent {
	struct FARImageUpdatePayload ReplicatedPayload; // 0x280(0x60)

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode); // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a5fa0
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // Function AugmentedReality.ARImageComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5850
	void ReceiveUpdate(struct FARImageUpdatePayload Payload); // Function AugmentedReality.ARImageComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARImageUpdatePayload Payload); // Function AugmentedReality.ARImageComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARQRCodeComponent
// Size: 0x2f0 (Inherited: 0x280)
struct UARQRCodeComponent : UARComponent {
	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x280(0x70)

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode); // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a62d0
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5da0
	void ReceiveUpdate(struct FARQRCodeUpdatePayload Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARQRCodeUpdatePayload Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARPoseComponent
// Size: 0x2c0 (Inherited: 0x280)
struct UARPoseComponent : UARComponent {
	struct FARPoseUpdatePayload ReplicatedPayload; // 0x280(0x40)

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode); // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a6260
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // Function AugmentedReality.ARPoseComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5c90
	void ReceiveUpdate(struct FARPoseUpdatePayload Payload); // Function AugmentedReality.ARPoseComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARPoseUpdatePayload Payload); // Function AugmentedReality.ARPoseComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x2b0 (Inherited: 0x280)
struct UAREnvironmentProbeComponent : UARComponent {
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280(0x30)

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5570
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARObjectComponent
// Size: 0x2b0 (Inherited: 0x280)
struct UARObjectComponent : UARComponent {
	struct FARObjectUpdatePayload ReplicatedPayload; // 0x280(0x30)

	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // Function AugmentedReality.ARObjectComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5570
	void ReceiveUpdate(struct FARObjectUpdatePayload Payload); // Function AugmentedReality.ARObjectComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARObjectUpdatePayload Payload); // Function AugmentedReality.ARObjectComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARMeshComponent
// Size: 0x2e0 (Inherited: 0x280)
struct UARMeshComponent : UARComponent {
	struct FARMeshUpdatePayload ReplicatedPayload; // 0x280(0x60)

	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // Function AugmentedReality.ARMeshComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5980
	void ReceiveUpdate(struct FARMeshUpdatePayload Payload); // Function AugmentedReality.ARMeshComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARMeshUpdatePayload Payload); // Function AugmentedReality.ARMeshComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x2f0 (Inherited: 0x280)
struct UARGeoAnchorComponent : UARComponent {
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280(0x70)

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode); // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a5f30
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x25a5720
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARDependencyHandler
// Size: 0x28 (Inherited: 0x28)
struct UARDependencyHandler : UObject {

	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent // (Native|Public|BlueprintCallable) // @ game+0x25a6340
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, enum class EARServicePermissionRequestResult OutPermissionResult); // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25a53f0
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceInstallRequestResult OutInstallResult); // Function AugmentedReality.ARDependencyHandler.InstallARService // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25a52a0
	struct UARDependencyHandler* GetARDependencyHandler(); // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a5030
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceAvailability OutAvailability); // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25a4d50
};

// Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x28 (Inherited: 0x28)
struct UARGeoTrackingSupport : UObject {

	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a5160
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2586560
	enum class EARGeoTrackingState GetGeoTrackingState(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2586590
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a5130
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude // (Native|Public|BlueprintCallable) // @ game+0x25a4b90
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation // (Native|Public|BlueprintCallable) // @ game+0x25a4a10
};

// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x50)
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x30]; // 0x70(0x30)

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a05090
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a4f30
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25a4ea0
};

// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x50)
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60(0x10)
	char pad_70[0x30]; // 0x70(0x30)

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a05090
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector WorldPosition); // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x25a5060
};

// Class AugmentedReality.ARLifeCycleComponent
// Size: 0x230 (Inherited: 0x200)
struct UARLifeCycleComponent : USceneComponent {
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208(0x10)
	char pad_220[0x10]; // 0x220(0x10)

	void ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x25a9170
	void ServerDestroyARActor(struct AARActor* Actor); // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x25a9060
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a05090
	void InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasDefaults) // @ game+0x1a05090
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28(0x04)
	float AmbientColorTemperatureKelvin; // 0x2c(0x04)
	struct FLinearColor AmbientColor; // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8af0
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8ac0
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8a80
};

// Class AugmentedReality.AROriginActor
// Size: 0x220 (Inherited: 0x220)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x28)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x08)
	struct USceneComponent* PinnedComponent; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x1f]; // 0xa1(0x1f)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8fc0
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8f90
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8ed0
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8e40
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8de0
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8c40
	void DebugDraw(struct UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x25a88f0
};

// Class AugmentedReality.ARSessionConfig
// Size: 0x110 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x01)
	bool bGenerateCollisionForMeshData; // 0x31(0x01)
	bool bGenerateNavMeshForMeshData; // 0x32(0x01)
	bool bUseMeshDataForOcclusion; // 0x33(0x01)
	bool bRenderMeshDataInWireframe; // 0x34(0x01)
	bool bTrackSceneObjects; // 0x35(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x01)
	bool bUseSceneDepthForOcclusion; // 0x37(0x01)
	bool bUseAutomaticImageScaleEstimation; // 0x38(0x01)
	bool bUseStandardOnboardingUX; // 0x39(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x3a(0x01)
	enum class EARSessionType SessionType; // 0x3b(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x3c(0x01)
	bool bHorizontalPlaneDetection; // 0x3d(0x01)
	bool bVerticalPlaneDetection; // 0x3e(0x01)
	bool bEnableAutoFocus; // 0x3f(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x40(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x41(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x42(0x01)
	bool bEnableAutomaticCameraTracking; // 0x43(0x01)
	bool bResetCameraTracking; // 0x44(0x01)
	bool bResetTrackedObjects; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<char> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0x0c)
	bool bUseOptimalVideoFormat; // 0x8c(0x01)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8d(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	int32_t MaxNumberOfTrackedFaces; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x98(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8(0x01)
	enum class EARSceneReconstruction SceneReconstructionMethod; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct UARPlaneComponent* PlaneComponentClass; // 0xb0(0x08)
	struct UARPointComponent* PointComponentClass; // 0xb8(0x08)
	struct UARFaceComponent* FaceComponentClass; // 0xc0(0x08)
	struct UARImageComponent* ImageComponentClass; // 0xc8(0x08)
	struct UARQRCodeComponent* QRCodeComponentClass; // 0xd0(0x08)
	struct UARPoseComponent* PoseComponentClass; // 0xd8(0x08)
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe0(0x08)
	struct UARObjectComponent* ObjectComponentClass; // 0xe8(0x08)
	struct UARMeshComponent* MeshComponentClass; // 0xf0(0x08)
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; // 0xf8(0x08)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x100(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108(0x08)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9bd0
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9ba0
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9b70
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9b40
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9b10
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9a20
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x25a99a0
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod); // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9920
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9890
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9800
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9690
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9610
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x25a94f0
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9450
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*> InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25a93a0
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a9020
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8ff0
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8f60
	enum class EARSceneReconstruction GetSceneReconstructionMethod(); // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8f30
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8f00
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8ea0
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8db0
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8d80
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8d50
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8d20
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8cf0
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8cc0
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8c80
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8bb0
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8b20
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // @ game+0x25a8540
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // @ game+0x25a84b0
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x370 (Inherited: 0x308)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308(0x04)
	char pad_30C[0x64]; // 0x30c(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x25a9710
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x25a9380
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x25a9290
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x25a8a50
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2c8 (Inherited: 0x290)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x290(0x10)
	struct TArray<char> ARWorldData; // 0x2a0(0x10)
	int32_t PreviewImageBytesTotal; // 0x2b0(0x04)
	int32_t ARWorldBytesTotal; // 0x2b4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x2b8(0x04)
	int32_t ARWorldBytesDelivered; // 0x2bc(0x04)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0x1a05090
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x598 (Inherited: 0x590)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_590[0x8]; // 0x590(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x25a9120
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x25a87e0
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x25a86d0
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x25a85d0
};

// Class AugmentedReality.ARSkyLight
// Size: 0x240 (Inherited: 0x230)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0x25a9580
};

// Class AugmentedReality.ARTexture
// Size: 0xf8 (Inherited: 0xd8)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float Timestamp; // 0xdc(0x04)
	struct FGuid ExternalTextureGuid; // 0xe0(0x10)
	struct FVector2D Size; // 0xf0(0x08)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0xf8 (Inherited: 0xf8)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x100 (Inherited: 0xf8)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xf8(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0xf9(0x01)
	bool bIsTemporallySmoothed; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x150 (Inherited: 0x130)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float Timestamp; // 0x134(0x04)
	struct FGuid ExternalTextureGuid; // 0x138(0x10)
	struct FVector2D Size; // 0x148(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0x100 (Inherited: 0x28)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x08)
	char pad_E8[0x18]; // 0xe8(0x18)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae4d0
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x25ae3e0
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8fc0
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae140
	struct FString GetName(); // Function AugmentedReality.ARTrackedGeometry.GetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae100
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae080
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25a8de0
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adf90
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adf60
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25addc0
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x130 (Inherited: 0x100)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xf8(0x01)
	struct FVector Center; // 0xfc(0x0c)
	struct FVector Extent; // 0x108(0x0c)
	struct TArray<struct FVector> BoundaryPolygon; // 0x118(0x10)
	struct UARPlaneGeometry* SubsumedBy; // 0x128(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae390
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae330
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25aded0
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25add90
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adc50
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xf8(0x08)
	struct FVector2D EstimatedSize; // 0x100(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25ade50
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ade00
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x120 (Inherited: 0x110)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0x108(0x10)
	int32_t Version; // 0x118(0x04)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1f0 (Inherited: 0x100)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xf8(0x0c)
	bool bIsTracked; // 0x104(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0x108(0x50)
	char pad_15D[0x33]; // 0x15d(0x33)
	struct FTransform LeftEyeTransform; // 0x190(0x30)
	struct FTransform RightEyeTransform; // 0x1c0(0x30)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae410
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adfe0
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ada70
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adb00
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x110 (Inherited: 0x100)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct FVector Extent; // 0xf8(0x0c)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ade90
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x25ade20
};

// Class AugmentedReality.ARTrackedObject
// Size: 0x100 (Inherited: 0x100)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xf8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ade00
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x150 (Inherited: 0x100)
struct UARTrackedPose : UARTrackedGeometry {
	struct FARPose3D TrackedPose; // 0xf8(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae3b0
};

// Class AugmentedReality.ARMeshGeometry
// Size: 0x100 (Inherited: 0x100)
struct UARMeshGeometry : UARTrackedGeometry {

	bool GetObjectClassificationAtLocation(struct FVector InWorldLocation, enum class EARObjectClassification OutClassification, struct FVector OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x25ae160
};

// Class AugmentedReality.ARGeoAnchor
// Size: 0x110 (Inherited: 0x100)
struct UARGeoAnchor : UARTrackedGeometry {
	char pad_100[0x10]; // 0x100(0x10)

	float GetLongitude(); // Function AugmentedReality.ARGeoAnchor.GetLongitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae0e0
	float GetLatitude(); // Function AugmentedReality.ARGeoAnchor.GetLatitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adfc0
	enum class EARAltitudeSource GetAltitudeSource(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ada50
	float GetAltitudeMeters(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ada30
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x200 (Inherited: 0xb0)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x110(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x140(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x170(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f0(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x30(0x08)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae370
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae350
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25ae310
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adf00
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25add70
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0x25ae650
	void SetCandidateObjectData(struct TArray<char> InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25ae5a0
	void SetBoundingBox(struct FBox InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x25ae500
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25adf30
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25add40
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x25add10
};

