// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8 {
	ExternalComposition = 0,
	DirectComposition = 1,
	EOculusMR_MAX = 2
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8 {
	PPE_Off = 0,
	PPE_On = 1,
	PPE_MAX = 2
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8 {
	CR_TrackingReference = 0,
	CR_Head = 1,
	CR_MAX = 2
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8 {
	CD_None = 0,
	CD_WebCamera0 = 1,
	CD_WebCamera1 = 2,
	CD_MAX = 3
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// Size: 0x3c (Inherited: 0x00)
struct FOculusMR_PlaneMeshTriangle {
	struct FVector Vertex0; // 0x00(0x0c)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector Vertex1; // 0x14(0x0c)
	struct FVector2D UV1; // 0x20(0x08)
	struct FVector Vertex2; // 0x28(0x0c)
	struct FVector2D UV2; // 0x34(0x08)
};

// ScriptStruct OculusMR.TrackedCamera
// Size: 0x78 (Inherited: 0x00)
struct FTrackedCamera {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	double UpdateTime; // 0x18(0x08)
	float FieldOfView; // 0x20(0x04)
	int32_t SizeX; // 0x24(0x04)
	int32_t SizeY; // 0x28(0x04)
	enum class ETrackedDeviceType AttachedTrackedDevice; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FRotator CalibratedRotation; // 0x30(0x0c)
	struct FVector CalibratedOffset; // 0x3c(0x0c)
	struct FRotator UserRotation; // 0x48(0x0c)
	struct FVector UserOffset; // 0x54(0x0c)
	struct FRotator RawRotation; // 0x60(0x0c)
	struct FVector RawOffset; // 0x6c(0x0c)
};

