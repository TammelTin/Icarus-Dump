// Enum Strider.ESlopeWarpQuality
enum class ESlopeWarpQuality : uint8 {
	Capsule = 0,
	PerFootRay = 1,
	PerFootShape = 2,
	LODBased = 3,
	ESlopeWarpQuality_MAX = 4
};

// Enum Strider.ESlopeRollCompensation
enum class ESlopeRollCompensation : uint8 {
	None = 0,
	AdjustHips = 1,
	AdjustFeet = 2,
	ESlopeRollCompensation_MAX = 3
};

// Enum Strider.ESlopeDetectionMode
enum class ESlopeDetectionMode : uint8 {
	ManualSlope = 0,
	AutomaticSlope = 1,
	ESlopeDetectionMode_MAX = 2
};

// Enum Strider.EStrideVectorMethod
enum class EStrideVectorMethod : uint8 {
	ManualVelocity = 0,
	ActorVelocity = 1,
	EStrideVectorMethod_MAX = 2
};

// ScriptStruct Strider.AnimNode_AccelerationWarp
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_AccelerationWarp : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float Acceleration; // 0x20(0x04)
	float Direction; // 0x24(0x04)
	float Alpha; // 0x28(0x04)
	struct FVector UpAxis; // 0x2c(0x0c)
	float TorsoBendRatio; // 0x38(0x04)
	float MaxTorsoBend; // 0x3c(0x04)
	float Smoothing; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FBoneChain SpineChain; // 0x48(0x20)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Strider.BoneChain
// Size: 0x20 (Inherited: 0x00)
struct FBoneChain {
	struct TArray<struct FBoneChainLink> BoneChain; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Strider.BoneChainLink
// Size: 0x18 (Inherited: 0x00)
struct FBoneChainLink {
	struct FBoneReference Bone; // 0x00(0x10)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Strider.AnimNode_BankWarp
// Size: 0xa0 (Inherited: 0x10)
struct FAnimNode_BankWarp : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float BankValue; // 0x20(0x04)
	float Alpha; // 0x24(0x04)
	struct FVector UpAxis; // 0x28(0x0c)
	struct FVector ForwardAxis; // 0x34(0x0c)
	float TwistRate; // 0x40(0x04)
	float MaxTwist; // 0x44(0x04)
	float LeanRate; // 0x48(0x04)
	float MaxLean; // 0x4c(0x04)
	float Smoothing; // 0x50(0x04)
	struct FBoneReference RootBone; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)
	struct FBoneChain SpineChain; // 0x68(0x20)
	struct TArray<struct FBoneReference> RootBonesToAdjust; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Strider.AnimNode_OrientationWarp
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_OrientationWarp : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float Direction; // 0x20(0x04)
	float Offset; // 0x24(0x04)
	float UpperBodyAlpha; // 0x28(0x04)
	struct FVector UpAxis; // 0x2c(0x0c)
	float Alpha; // 0x38(0x04)
	float MaxWarpDelta; // 0x3c(0x04)
	float Smoothing; // 0x40(0x04)
	struct FBoneReference RootBone; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
	struct FBoneChain SpineChain; // 0x58(0x20)
	struct TArray<struct FBoneReference> RootBonesToCounterAdjust; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Strider.AnimNode_SlopeWarp
// Size: 0x1b0 (Inherited: 0xc8)
struct FAnimNode_SlopeWarp : FAnimNode_SkeletalControlBase {
	struct FVector SlopeNormal; // 0xc8(0x0c)
	struct FVector SlopePoint; // 0xd4(0x0c)
	enum class ESlopeDetectionMode SlopeDetectionMode; // 0xe0(0x01)
	enum class ESlopeRollCompensation SlopeRollCompensation; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	struct FVector IKRootLeftVector; // 0xe4(0x0c)
	float MaxSlopeAngle; // 0xf0(0x04)
	float HeightOffset; // 0xf4(0x04)
	float SlopeSmoothingRate; // 0xf8(0x04)
	float AllowExtensionPercent; // 0xfc(0x04)
	float DownSlopeShiftRate; // 0x100(0x04)
	struct FBoneReference IkRoot; // 0x104(0x10)
	struct FHipAdjustment HipAdjustment; // 0x114(0x18)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct FLimbDefinition> Limbs; // 0x130(0x10)
	struct TArray<struct FBoneReference> AdditionalBonesToAdjustWithHips; // 0x140(0x10)
	char pad_150[0x60]; // 0x150(0x60)
};

// ScriptStruct Strider.LimbDefinition
// Size: 0x80 (Inherited: 0x00)
struct FLimbDefinition {
	struct FBoneReference Tip; // 0x00(0x10)
	struct FBoneReference IkTarget; // 0x10(0x10)
	int32_t BoneCount; // 0x20(0x04)
	char pad_24[0x5c]; // 0x24(0x5c)
};

// ScriptStruct Strider.HipAdjustment
// Size: 0x18 (Inherited: 0x00)
struct FHipAdjustment {
	struct FBoneReference Hips; // 0x00(0x10)
	float AdjustmentRatio; // 0x10(0x04)
	float MaxRecoveryRate; // 0x14(0x04)
};

// ScriptStruct Strider.AnimNode_StrideWarp
// Size: 0x190 (Inherited: 0xc8)
struct FAnimNode_StrideWarp : FAnimNode_SkeletalControlBase {
	float StrideScale; // 0xc8(0x04)
	float Direction; // 0xcc(0x04)
	float Twist; // 0xd0(0x04)
	float AllowExtensionPercent; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FStridePivot StridePivot; // 0xe0(0x60)
	struct FHipAdjustment HipAdjustment; // 0x140(0x18)
	struct TArray<struct FLimbDefinition> Limbs; // 0x158(0x10)
	struct TArray<struct FBoneReference> AdditionalBonesToAdjustWithHips; // 0x168(0x10)
	char pad_178[0x18]; // 0x178(0x18)
};

// ScriptStruct Strider.StridePivot
// Size: 0x60 (Inherited: 0x00)
struct FStridePivot {
	struct FBoneReference Root; // 0x00(0x10)
	bool bProjectToGround; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Offset; // 0x14(0x04)
	enum class EStrideVectorMethod StrideVectorMethod; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Smoothing; // 0x1c(0x04)
	bool bChooseNearestAxis; // 0x20(0x01)
	char pad_21[0x3f]; // 0x21(0x3f)
};

