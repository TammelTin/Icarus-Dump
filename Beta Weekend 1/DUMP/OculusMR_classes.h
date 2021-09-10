// Class OculusMR.OculusMR_CastingCameraActor
// Size: 0x320 (Inherited: 0x238)
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	struct UVRNotificationsComponent* VRNotificationComponent; // 0x238(0x08)
	struct UTexture2D* CameraColorTexture; // 0x240(0x08)
	struct UTexture2D* CameraDepthTexture; // 0x248(0x08)
	struct UOculusMR_PlaneMeshComponent* PlaneMeshComponent; // 0x250(0x08)
	struct UMaterial* ChromaKeyMaterial; // 0x258(0x08)
	struct UMaterial* OpaqueColoredMaterial; // 0x260(0x08)
	struct UMaterialInstanceDynamic* ChromaKeyMaterialInstance; // 0x268(0x08)
	struct UMaterialInstanceDynamic* CameraFrameMaterialInstance; // 0x270(0x08)
	struct UMaterialInstanceDynamic* BackdropMaterialInstance; // 0x278(0x08)
	struct UTexture2D* DefaultTexture_White; // 0x280(0x08)
	char pad_288[0x50]; // 0x288(0x50)
	struct TArray<struct UTextureRenderTarget2D*> BackgroundRenderTargets; // 0x2d8(0x10)
	struct ASceneCapture2D* ForegroundCaptureActor; // 0x2e8(0x08)
	struct TArray<struct UTextureRenderTarget2D*> ForegroundRenderTargets; // 0x2f0(0x10)
	struct TArray<double> PoseTimes; // 0x300(0x10)
	struct UOculusMR_Settings* MRSettings; // 0x310(0x08)
	struct UOculusMR_State* MRState; // 0x318(0x08)
};

// Class OculusMR.OculusMR_PlaneMeshComponent
// Size: 0x480 (Inherited: 0x470)
struct UOculusMR_PlaneMeshComponent : UMeshComponent {
	char pad_470[0x10]; // 0x470(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11598f0
	void ClearCustomMeshTriangles(); // Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x1159620
	void AddCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11594e0
};

// Class OculusMR.OculusMR_Settings
// Size: 0x98 (Inherited: 0x28)
struct UOculusMR_Settings : UObject {
	enum class EOculusMR_ClippingReference ClippingReference; // 0x28(0x01)
	bool bUseTrackedCameraResolution; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t WidthPerView; // 0x2c(0x04)
	int32_t HeightPerView; // 0x30(0x04)
	float CastingLatency; // 0x34(0x04)
	struct FColor BackdropColor; // 0x38(0x04)
	float HandPoseStateLatency; // 0x3c(0x04)
	struct FColor ChromaKeyColor; // 0x40(0x04)
	float ChromaKeySimilarity; // 0x44(0x04)
	float ChromaKeySmoothRange; // 0x48(0x04)
	float ChromaKeySpillRange; // 0x4c(0x04)
	enum class EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x50(0x01)
	bool bIsCasting; // 0x51(0x01)
	enum class EOculusMR_CompositionMethod CompositionMethod; // 0x52(0x01)
	enum class EOculusMR_CameraDeviceEnum CapturingCamera; // 0x53(0x01)
	char pad_54[0x44]; // 0x54(0x44)

	void SetIsCasting(bool Val); // Function OculusMR.OculusMR_Settings.SetIsCasting // (Final|Native|Public|BlueprintCallable) // @ game+0x11599b0
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x1159870
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x11597f0
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x11597d0
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni // (Final|Native|Public|BlueprintCallable) // @ game+0x11597b0
	bool GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting // (Final|Native|Public|BlueprintCallable) // @ game+0x11596a0
	enum class EOculusMR_CompositionMethod GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x1159680
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x1159660
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1159640
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable // (Final|Native|Public|BlueprintCallable) // @ game+0x1159590
};

// Class OculusMR.OculusMR_State
// Size: 0xb8 (Inherited: 0x28)
struct UOculusMR_State : UObject {
	struct FTrackedCamera TrackedCamera; // 0x28(0x78)
	struct USceneComponent* TrackingReferenceComponent; // 0xa0(0x08)
	double ScalingFactor; // 0xa8(0x08)
	char pad_B0[0x4]; // 0xb0(0x04)
	bool ChangeCameraStateRequested; // 0xb4(0x01)
	bool BindToTrackedCameraIndexRequested; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// Class OculusMR.OculusMRFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusMRFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetTrackingReferenceComponent(struct USceneComponent* Component); // Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1159ac0
	bool SetMrcScalingFactor(float ScalingFactor); // Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1159a40
	bool IsMrcEnabled(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1159780
	bool IsMrcActive(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1159750
	struct USceneComponent* GetTrackingReferenceComponent(); // Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1159720
	struct UOculusMR_Settings* GetOculusMRSettings(); // Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11596f0
	float GetMrcScalingFactor(); // Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11596c0
};

