// Class OculusHMD.OculusFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusFunctionLibrary : UBlueprintFunctionLibrary {

	void SetReorientHMDOnControllerRecenter(bool recenterMode); // Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142c70
	void SetPositionScale3D(struct FVector PosScale3D); // Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142c10
	void SetGuardianVisibility(bool GuardianVisible); // Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142b90
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level, bool isDynamic); // Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142ad0
	void SetDisplayFrequency(float RequestedFrequency); // Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142a50
	void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel); // Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142810
	void SetColorScaleAndOffset(struct FLinearColor ColorScale, struct FLinearColor ColorOffset, bool bApplyToAllLayers); // Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142940
	void SetClientColorDesc(enum class EColorSpace ColorSpace); // Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11428d0
	void SetBaseRotationAndPositionOffset(struct FRotator BaseRot, struct FVector PosOffset, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x11426f0
	void SetBaseRotationAndBaseOffsetInMeters(struct FRotator Rotation, struct FVector BaseOffsetInMeters, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x11425d0
	bool IsGuardianDisplayed(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11425a0
	bool IsGuardianConfigured(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1142570
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11424f0
	bool HasSystemOverlayPresent(); // Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11424c0
	bool HasInputFocus(); // Function OculusHMD.OculusFunctionLibrary.HasInputFocus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1142490
	bool GetUserProfile(struct FHmdUserProfile Profile); // Function OculusHMD.OculusFunctionLibrary.GetUserProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1142360
	bool GetSystemHmd3DofModeEnabled(); // Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1142330
	void GetRawSensorData(struct FVector AngularAcceleration, struct FVector LinearAcceleration, struct FVector AngularVelocity, struct FVector LinearVelocity, float TimeInSeconds, enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.GetRawSensorData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x11420f0
	void GetPose(struct FRotator DeviceRotation, struct FVector DevicePosition, struct FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, struct FVector PositionScale); // Function OculusHMD.OculusFunctionLibrary.GetPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141ee0
	struct FGuardianTestResult GetPointGuardianIntersection(struct FVector Point, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1141e00
	struct FTransform GetPlayAreaTransform(); // Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141da0
	struct FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1141cc0
	enum class EColorSpace GetHmdColorDesc(); // Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141c90
	struct TArray<struct FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace); // Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141b80
	struct FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141af0
	void GetGPUUtilization(bool IsGPUAvailable, float GPUUtilization); // Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1141a10
	float GetGPUFrameTime(); // Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11419e0
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel(); // Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11419b0
	enum class EOculusDeviceType GetDeviceType(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141980
	struct FString GetDeviceName(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141900
	float GetCurrentDisplayFrequency(); // Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11418d0
	void GetBaseRotationAndPositionOffset(struct FRotator OutRot, struct FVector OutPosOffset); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1141800
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator OutRotation, struct FVector OutBaseOffsetInMeters); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141730
	struct TArray<float> GetAvailableDisplayFrequencies(); // Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11416b0
	void EnablePositionTracking(bool bPositionTracking); // Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1141630
	void EnableOrientationTracking(bool bOrientationTracking); // Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11415b0
	void ClearLoadingSplashScreens(); // Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1141590
	void AddLoadingSplashScreen(struct UTexture2D* Texture, struct FVector TranslationInMeters, struct FRotator Rotation, struct FVector2D SizeInMeters, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1141390
};

// Class OculusHMD.OculusHMDRuntimeSettings
// Size: 0x60 (Inherited: 0x28)
struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FOculusSplashDesc> SplashDescs; // 0x30(0x10)
	bool bEnableSpecificColorGamut; // 0x40(0x01)
	enum class EColorSpace ColorSpace; // 0x41(0x01)
	bool bSupportsDash; // 0x42(0x01)
	bool bCompositesDepth; // 0x43(0x01)
	bool bHQDistortion; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float PixelDensityMin; // 0x48(0x04)
	float PixelDensityMax; // 0x4c(0x04)
	int32_t CPULevel; // 0x50(0x04)
	int32_t GPULevel; // 0x54(0x04)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x58(0x01)
	bool FFRDynamic; // 0x59(0x01)
	bool bChromaCorrection; // 0x5a(0x01)
	bool bRecenterHMDWithController; // 0x5b(0x01)
	bool bFocusAware; // 0x5c(0x01)
	bool bRequiresSystemKeyboard; // 0x5d(0x01)
	enum class EHandTrackingSupport HandTrackingSupport; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// Class OculusHMD.OculusResourceHolder
// Size: 0x30 (Inherited: 0x28)
struct UOculusResourceHolder : UObject {
	struct UMaterial* PokeAHoleMaterial; // 0x28(0x08)
};

// Class OculusHMD.OculusSceneCaptureCubemap
// Size: 0x90 (Inherited: 0x28)
struct UOculusSceneCaptureCubemap : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct USceneCaptureComponent2D*> CaptureComponents; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)
};

