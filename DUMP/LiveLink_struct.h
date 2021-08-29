// Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	XNeg = 3,
	YNeg = 4,
	ZNeg = 5,
	ELiveLinkAxis_MAX = 6
};

// Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8 {
	Lerp = 0,
	Nearest = 1,
	Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	struct FLiveLinkSubjectName LiveLinkSubjectName; // 0x20(0x08)
	struct ULiveLinkRetargetAsset* RetargetAsset; // 0x28(0x08)
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// Size: 0x7b0 (Inherited: 0x760)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	struct FAnimNode_LiveLinkPose PoseNode; // 0x760(0x50)
};

// ScriptStruct LiveLink.ProviderPollResult
// Size: 0x38 (Inherited: 0x00)
struct FProviderPollResult {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString MachineName; // 0x20(0x10)
	double MachineTimeOffset; // 0x30(0x08)
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// Size: 0x01 (Inherited: 0x00)
struct FLiveLinkRetargetAssetReference {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// Size: 0x28 (Inherited: 0x00)
struct FLiveLinkRoleProjectSetting {
	struct ULiveLinkRole* Role; // 0x00(0x08)
	struct ULiveLinkSubjectSettings* SettingClass; // 0x08(0x08)
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10(0x08)
	struct TArray<struct ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18(0x10)
};

