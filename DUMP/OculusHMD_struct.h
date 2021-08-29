// Enum OculusHMD.EOculusDeviceType
enum class EOculusDeviceType : uint8 {
	OculusMobile_Deprecated0 = 0,
	OculusQuest = 1,
	OculusQuest2 = 2,
	Rift = 100,
	Rift_S = 101,
	Quest_Link = 102,
	OculusUnknown = 200,
	EOculusDeviceType_MAX = 201
};

// Enum OculusHMD.EHandTrackingSupport
enum class EHandTrackingSupport : uint8 {
	ControllersOnly = 0,
	ControllersAndHands = 1,
	HandsOnly = 2,
	EHandTrackingSupport_MAX = 3
};

// Enum OculusHMD.EColorSpace
enum class EColorSpace : uint8 {
	Unknown = 0,
	Unmanaged = 1,
	Rec_2021 = 2,
	Rec_710 = 3,
	Rift_CV1 = 4,
	Rift_S = 5,
	Quest = 6,
	P3 = 7,
	Adobe_RGB = 8,
	EColorSpace_MAX = 9
};

// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8 {
	Boundary_Outer = 0,
	Boundary_PlayArea = 1,
	Boundary_MAX = 2
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8 {
	FFR_Off = 0,
	FFR_Low = 1,
	FFR_Medium = 2,
	FFR_High = 3,
	FFR_HighTop = 4,
	FFR_MAX = 5
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8 {
	None = 0,
	HMD = 1,
	LTouch = 2,
	RTouch = 3,
	Touch = 4,
	DeviceObjectZero = 5,
	All = 6,
	ETrackedDeviceType_MAX = 7
};

// ScriptStruct OculusHMD.GuardianTestResult
// Size: 0x20 (Inherited: 0x00)
struct FGuardianTestResult {
	bool IsTriggering; // 0x00(0x01)
	enum class ETrackedDeviceType DeviceType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ClosestDistance; // 0x04(0x04)
	struct FVector ClosestPoint; // 0x08(0x0c)
	struct FVector ClosestPointNormal; // 0x14(0x0c)
};

// ScriptStruct OculusHMD.HmdUserProfile
// Size: 0x48 (Inherited: 0x00)
struct FHmdUserProfile {
	struct FString Name; // 0x00(0x10)
	struct FString Gender; // 0x10(0x10)
	float PlayerHeight; // 0x20(0x04)
	float EyeHeight; // 0x24(0x04)
	float IPD; // 0x28(0x04)
	struct FVector2D NeckToEyeDistance; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FHmdUserProfileField> ExtraFields; // 0x38(0x10)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// Size: 0x20 (Inherited: 0x00)
struct FHmdUserProfileField {
	struct FString FieldName; // 0x00(0x10)
	struct FString FieldValue; // 0x10(0x10)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// Size: 0xa0 (Inherited: 0x00)
struct FOculusSplashDesc {
	struct FSoftObjectPath TexturePath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform TransformInMeters; // 0x20(0x30)
	struct FVector2D QuadSizeInMeters; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FQuat DeltaRotation; // 0x60(0x10)
	struct FVector2D TextureOffset; // 0x70(0x08)
	struct FVector2D TextureScale; // 0x78(0x08)
	bool bNoAlphaChannel; // 0x80(0x01)
	char pad_81[0x1f]; // 0x81(0x1f)
};

