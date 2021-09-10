// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_LiveLinkBase : FRigUnit {
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigUnit_LiveLinkEvaluteFrameTransform : FRigUnit_LiveLinkBase {
	struct FName SubjectName; // 0x08(0x08)
	bool bDrawDebug; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FLinearColor DebugColor; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform DebugDrawOffset; // 0x30(0x30)
	struct FTransform Transform; // 0x60(0x30)
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
// Size: 0x30 (Inherited: 0x08)
struct FRigUnit_LiveLinkGetParameterValueByName : FRigUnit_LiveLinkBase {
	struct FSubjectFrameHandle SubjectFrame; // 0x08(0x18)
	struct FName ParameterName; // 0x20(0x08)
	float Value; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
// Size: 0x60 (Inherited: 0x08)
struct FRigUnit_LiveLinkGetTransformByName : FRigUnit_LiveLinkBase {
	struct FSubjectFrameHandle SubjectFrame; // 0x08(0x18)
	struct FName TransformName; // 0x20(0x08)
	enum class EBoneGetterSetterMode Space; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
// Size: 0x80 (Inherited: 0x08)
struct FRigUnit_LiveLinkEvaluteFrameAnimation : FRigUnit_LiveLinkBase {
	struct FName SubjectName; // 0x08(0x08)
	bool bDrawDebug; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FLinearColor DebugColor; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FTransform DebugDrawOffset; // 0x30(0x30)
	struct FSubjectFrameHandle SubjectFrame; // 0x60(0x18)
	char pad_78[0x8]; // 0x78(0x08)
};

