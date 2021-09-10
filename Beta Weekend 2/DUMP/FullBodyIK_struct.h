// Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8 {
	Direction = 0,
	Location = 1,
	EPoleVectorOption_MAX = 2
};

// Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8 {
	Free = 0,
	Limit = 1,
	Locked = 2,
	EFBIKBoneLimitType_MAX = 3
};

// ScriptStruct FullBodyIK.MotionProcessInput
// Size: 0x02 (Inherited: 0x00)
struct FMotionProcessInput {
	bool bForceEffectorRotationTarget; // 0x00(0x01)
	bool bOnlyApplyWhenReachedToTarget; // 0x01(0x01)
};

// ScriptStruct FullBodyIK.FBIKConstraintOption
// Size: 0x58 (Inherited: 0x00)
struct FFBIKConstraintOption {
	struct FRigElementKey Item; // 0x00(0x0c)
	bool bEnabled; // 0x0c(0x01)
	bool bUseStiffness; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FVector LinearStiffness; // 0x10(0x0c)
	struct FVector AngularStiffness; // 0x1c(0x0c)
	bool bUseAngularLimit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FFBIKBoneLimit AngularLimit; // 0x2c(0x10)
	bool bUsePoleVector; // 0x3c(0x01)
	enum class EPoleVectorOption PoleVectorOption; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FVector PoleVector; // 0x40(0x0c)
	struct FRotator OffsetRotation; // 0x4c(0x0c)
};

// ScriptStruct FullBodyIK.FBIKBoneLimit
// Size: 0x10 (Inherited: 0x00)
struct FFBIKBoneLimit {
	enum class EFBIKBoneLimitType LimitType_X; // 0x00(0x01)
	enum class EFBIKBoneLimitType LimitType_Y; // 0x01(0x01)
	enum class EFBIKBoneLimitType LimitType_Z; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector Limit; // 0x04(0x0c)
};

// ScriptStruct FullBodyIK.FBIKDebugOption
// Size: 0x50 (Inherited: 0x00)
struct FFBIKDebugOption {
	bool bDrawDebugHierarchy; // 0x00(0x01)
	bool bColorAngularMotionStrength; // 0x01(0x01)
	bool bColorLinearMotionStrength; // 0x02(0x01)
	bool bDrawDebugAxes; // 0x03(0x01)
	bool bDrawDebugEffector; // 0x04(0x01)
	bool bDrawDebugConstraints; // 0x05(0x01)
	char pad_6[0xa]; // 0x06(0x0a)
	struct FTransform DrawWorldOffset; // 0x10(0x30)
	float DrawSize; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// Size: 0x2b0 (Inherited: 0x68)
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Root; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FFBIKEndEffector> Effectors; // 0x78(0x10)
	struct TArray<struct FFBIKConstraintOption> Constraints; // 0x88(0x10)
	struct FSolverInput SolverProperty; // 0x98(0x24)
	struct FMotionProcessInput MotionProperty; // 0xbc(0x02)
	bool bPropagateToChildren; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
	struct FFBIKDebugOption DebugOption; // 0xc0(0x50)
	struct FRigUnit_FullbodyIK_WorkData WorkData; // 0x110(0x198)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
// Size: 0x198 (Inherited: 0x00)
struct FRigUnit_FullbodyIK_WorkData {
	char pad_0[0x198]; // 0x00(0x198)
};

// ScriptStruct FullBodyIK.SolverInput
// Size: 0x24 (Inherited: 0x00)
struct FSolverInput {
	float LinearMotionStrength; // 0x00(0x04)
	float MinLinearMotionStrength; // 0x04(0x04)
	float AngularMotionStrength; // 0x08(0x04)
	float MinAngularMotionStrength; // 0x0c(0x04)
	float DefaultTargetClamp; // 0x10(0x04)
	float Precision; // 0x14(0x04)
	float Damping; // 0x18(0x04)
	int32_t MaxIterations; // 0x1c(0x04)
	bool bUseJacobianTranspose; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct FullBodyIK.FBIKEndEffector
// Size: 0x40 (Inherited: 0x00)
struct FFBIKEndEffector {
	struct FRigElementKey Item; // 0x00(0x0c)
	struct FVector position; // 0x0c(0x0c)
	float PositionAlpha; // 0x18(0x04)
	int32_t PositionDepth; // 0x1c(0x04)
	struct FQuat Rotation; // 0x20(0x10)
	float RotationAlpha; // 0x30(0x04)
	int32_t RotationDepth; // 0x34(0x04)
	float Pull; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

