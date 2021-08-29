// Enum DragonIKPlugin.EIK_Type_Plugin
enum class EIK_Type_Plugin : uint8 {
	ENUM_Two_Bone_Ik = 0,
	ENUM_Single_Bone_Ik = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.ERefPosePluginEnum
enum class ERefPosePluginEnum : uint8 {
	VE_Animated = 0,
	VE_Rest = 1,
	VE_MAX = 2
};

// Enum DragonIKPlugin.EInterpoRotation_Type_Plugin
enum class EInterpoRotation_Type_Plugin : uint8 {
	ENUM_DivisiveRot_Interp = 0,
	ENUM_LegacyRot_Interp = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EInterpoLocation_Type_Plugin
enum class EInterpoLocation_Type_Plugin : uint8 {
	ENUM_DivisiveLoc_Interp = 0,
	ENUM_LegacyLoc_Interp = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EIKTrace_Type_Plugin
enum class EIKTrace_Type_Plugin : uint8 {
	ENUM_LineTrace_Type = 0,
	ENUM_SphereTrace_Type = 1,
	ENUM_BoxTrace_Type = 2,
	ENUM_MAX = 3
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_DragonControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float ActualAlpha; // 0x24(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Alpha; // 0x2c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
// Size: 0x900 (Inherited: 0xc8)
struct FAnimNode_DragonAimSolver : FAnimNode_DragonControlBase {
	struct FBoneReference EndSplineBone; // 0xc8(0x10)
	struct FBoneReference StartSplineBone; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FTransform LookAtLocation; // 0xf0(0x30)
	struct FDragonData_MultiInput dragon_input_data; // 0x120(0x20)
	char pad_140[0x88]; // 0x140(0x88)
	struct TArray<struct FDragonData_ArmsData> Aiming_Hand_Limbs; // 0x1c8(0x10)
	struct FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides; // 0x1d8(0x10)
	bool Use_Separate_Targets; // 0x1e8(0x01)
	bool Override_Hand_Rotation; // 0x1e9(0x01)
	bool reach_instead; // 0x1ea(0x01)
	bool Aggregate_Hand_Body; // 0x1eb(0x01)
	int32_t Main_Arm_Index; // 0x1ec(0x04)
	char pad_1F0[0x90]; // 0x1f0(0x90)
	float Lookat_Radius; // 0x280(0x04)
	float Lookat_Clamp; // 0x284(0x04)
	float Limbs_Clamp; // 0x288(0x04)
	float Downward_Dip_Multiplier; // 0x28c(0x04)
	float Side_Move_Multiplier; // 0x290(0x04)
	float Side_Down_Multiplier; // 0x294(0x04)
	float Up_Rot_Clamp; // 0x298(0x04)
	struct FVector2D Verticle_Range_Angles; // 0x29c(0x08)
	struct FVector2D Horizontal_Range_Angles; // 0x2a4(0x08)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FRuntimeFloatCurve Look_Bending_Curve; // 0x2b0(0x88)
	struct FRuntimeFloatCurve Look_Multiplier_Curve; // 0x338(0x88)
	bool Lock_Legs; // 0x3c0(0x01)
	bool ignore_elbow_modification; // 0x3c1(0x01)
	bool ignore_separate_hand_solving; // 0x3c2(0x01)
	bool Use_Natural_Method; // 0x3c3(0x01)
	bool Head_Use_Separate_Clamp; // 0x3c4(0x01)
	bool automatic_leg_make; // 0x3c5(0x01)
	char pad_3C6[0x1]; // 0x3c6(0x01)
	bool enable_solver; // 0x3c7(0x01)
	bool Work_Outside_PIE; // 0x3c8(0x01)
	bool Adaptive_Terrain_Tail; // 0x3c9(0x01)
	enum class ETraceTypeQuery Trace_Channel; // 0x3ca(0x01)
	char pad_3CB[0x1]; // 0x3cb(0x01)
	float Trace_Up_Height; // 0x3cc(0x04)
	float Trace_Down_Height; // 0x3d0(0x04)
	char pad_3D4[0x90]; // 0x3d4(0x90)
	enum class EInterpoLocation_Type_Plugin loc_interp_type; // 0x464(0x01)
	char pad_465[0x1]; // 0x465(0x01)
	bool Enable_Interpolation; // 0x466(0x01)
	char pad_467[0x1]; // 0x467(0x01)
	float Interpolation_Speed; // 0x468(0x04)
	float Toggle_Interpolation_Speed; // 0x46c(0x04)
	char pad_470[0x58]; // 0x470(0x58)
	struct FVector LookAt_Axis; // 0x4c8(0x0c)
	char pad_4D4[0x3c]; // 0x4d4(0x3c)
	struct FVector TargetOffset; // 0x510(0x0c)
	char pad_51C[0x84]; // 0x51c(0x84)
	struct FTransform Debug_LookAtLocation; // 0x5a0(0x30)
	char pad_5D0[0x330]; // 0x5d0(0x330)
};

// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
// Size: 0x10 (Inherited: 0x00)
struct FDragonData_Overrided_Location_Data {
	struct TArray<struct FDragonData_SingleArmElement> Arm_TargetLocation_Overrides; // 0x00(0x10)
};

// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
// Size: 0x40 (Inherited: 0x00)
struct FDragonData_SingleArmElement {
	struct FTransform Overrided_Arm_Transform; // 0x00(0x30)
	float Arm_Alpha; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct DragonIKPlugin.DragonData_ArmsData
// Size: 0x74 (Inherited: 0x00)
struct FDragonData_ArmsData {
	struct FBoneReference Shoulder_Bone_Name; // 0x00(0x10)
	struct FBoneReference Elbow_Bone_Name; // 0x10(0x10)
	struct FBoneReference Hand_Bone_Name; // 0x20(0x10)
	struct FVector Local_Direction_Axis; // 0x30(0x0c)
	struct FVector Arm_Aiming_Offset; // 0x3c(0x0c)
	bool accurate_hand_rotation; // 0x48(0x01)
	bool relative_axis; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float Maximum_Extension; // 0x4c(0x04)
	float Minimum_Extension; // 0x50(0x04)
	struct FVector Elbow_Pole_Offset; // 0x54(0x0c)
	bool override_limits; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector2D Max_Arm_H_Angle; // 0x64(0x08)
	struct FVector2D Max_Arm_V_Angle; // 0x6c(0x08)
};

// ScriptStruct DragonIKPlugin.DragonData_MultiInput
// Size: 0x20 (Inherited: 0x00)
struct FDragonData_MultiInput {
	struct FName Start_Spine; // 0x00(0x08)
	struct FName Pelvis; // 0x08(0x08)
	struct TArray<struct FDragonData_FootData> FeetBones; // 0x10(0x10)
};

// ScriptStruct DragonIKPlugin.DragonData_FootData
// Size: 0x78 (Inherited: 0x00)
struct FDragonData_FootData {
	struct FName Feet_Bone_Name; // 0x00(0x08)
	struct FName Knee_Bone_Name; // 0x08(0x08)
	struct FName Thigh_Bone_Name; // 0x10(0x08)
	struct FRotator Feet_Rotation_Offset; // 0x18(0x0c)
	bool Fixed_Pole; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Knee_Direction_Offset; // 0x28(0x0c)
	struct FVector Feet_Trace_Offset; // 0x34(0x0c)
	float Front_Trace_Point_Spacing; // 0x40(0x04)
	float Side_Traces_Spacing; // 0x44(0x04)
	float Feet_Rotation_Limit; // 0x48(0x04)
	bool Fixed_Foot_Height; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float Feet_Heights; // 0x50(0x04)
	float Feet_Alpha; // 0x54(0x04)
	float Min_Feet_Extension; // 0x58(0x04)
	float Max_Feet_Extension; // 0x5c(0x04)
	char pad_60[0x8]; // 0x60(0x08)
	struct TArray<struct FDragonData_FingerData> Finger_Array; // 0x68(0x10)
};

// ScriptStruct DragonIKPlugin.DragonData_FingerData
// Size: 0x20 (Inherited: 0x00)
struct FDragonData_FingerData {
	struct FName Finger_Bone_Name; // 0x00(0x08)
	float Trace_Scale; // 0x08(0x04)
	struct FVector Trace_Offset; // 0x0c(0x0c)
	bool Is_Finger_Backward; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
// Size: 0x60 (Inherited: 0x00)
struct FBoneDragonSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x10)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FSocketDragonReference SocketReference; // 0x20(0x40)
};

// ScriptStruct DragonIKPlugin.SocketDragonReference
// Size: 0x40 (Inherited: 0x00)
struct FSocketDragonReference {
	char pad_0[0x30]; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
// Size: 0x160 (Inherited: 0xc8)
struct FAnimNode_DragonFabrikSolver : FAnimNode_DragonControlBase {
	struct FBoneReference StartSplineBone; // 0xc8(0x10)
	struct FBoneReference EndSplineBone; // 0xd8(0x10)
	float Precision; // 0xe8(0x04)
	float MaxIterations; // 0xec(0x04)
	struct FTransform Target_Transform; // 0xf0(0x30)
	char pad_120[0x40]; // 0x120(0x40)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
// Size: 0x6d0 (Inherited: 0xc8)
struct FAnimNode_DragonFeetSolver : FAnimNode_DragonControlBase {
	struct FDragonData_MultiInput dragon_input_data; // 0xc8(0x20)
	char pad_E8[0x78]; // 0xe8(0x78)
	enum class EIK_Type_Plugin ik_type; // 0x160(0x01)
	enum class EIKTrace_Type_Plugin trace_type; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float Trace_Radius; // 0x164(0x04)
	enum class EInterpoLocation_Type_Plugin loc_interp_type; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	enum class EInterpoRotation_Type_Plugin rot_interp_type; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float virtual_scale; // 0x174(0x04)
	bool automatic_leg_make; // 0x178(0x01)
	bool Use_OptionalRef_Feet_As_Ref; // 0x179(0x01)
	bool enable_solver; // 0x17a(0x01)
	bool Work_Outside_PIE; // 0x17b(0x01)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FComponentSpacePoseLink OptionalRefPose; // 0x180(0x10)
	float shift_speed; // 0x190(0x04)
	bool ignore_shift_speed; // 0x194(0x01)
	bool interpolate_only_z; // 0x195(0x01)
	char pad_196[0x2]; // 0x196(0x02)
	float Location_Lerp_Speed; // 0x198(0x04)
	float feet_rotation_speed; // 0x19c(0x04)
	struct FRuntimeFloatCurve Interpolation_Velocity_Curve; // 0x1a0(0x88)
	bool Enable_Complex_Rotation_Method; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve; // 0x230(0x88)
	char pad_2B8[0x30]; // 0x2b8(0x30)
	enum class ETraceTypeQuery Trace_Channel; // 0x2e8(0x01)
	enum class ETraceTypeQuery Anti_Trace_Channel; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	float FPS_Lerp_Treshold; // 0x2ec(0x04)
	char pad_2F0[0x164]; // 0x2f0(0x164)
	float line_trace_upper_height; // 0x454(0x04)
	float line_trace_down_height; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FRuntimeFloatCurve Trace_Down_Multiplier_Curve; // 0x460(0x88)
	bool Use_Anti_Channel; // 0x4e8(0x01)
	bool Ignore_Lerping; // 0x4e9(0x01)
	bool Ignore_Location_Lerping; // 0x4ea(0x01)
	bool Should_Rotate_Feet; // 0x4eb(0x01)
	char pad_4EC[0x1]; // 0x4ec(0x01)
	bool show_trace_in_game; // 0x4ed(0x01)
	char pad_4EE[0x1a]; // 0x4ee(0x1a)
	bool Enable_Pitch; // 0x508(0x01)
	bool Enable_Roll; // 0x509(0x01)
	char pad_50A[0x2]; // 0x50a(0x02)
	struct FVector character_direction_vector_CS; // 0x50c(0x0c)
	struct FVector character_forward_direction_vector_CS; // 0x518(0x0c)
	bool Use_Four_Point_Feets; // 0x524(0x01)
	bool Enable_Foot_Lift_Limit; // 0x525(0x01)
	bool Affect_Toes_Always; // 0x526(0x01)
	char pad_527[0x1]; // 0x527(0x01)
	struct FRuntimeFloatCurve Finger_Alpha_Velocity_Curve; // 0x528(0x88)
	float Max_Limb_Radius; // 0x5b0(0x04)
	char pad_5B4[0x10c]; // 0x5b4(0x10c)
	float Foot_01_Height_Offset; // 0x6c0(0x04)
	float Foot_02_Height_Offset; // 0x6c4(0x04)
	float Foot_03_Height_Offset; // 0x6c8(0x04)
	float Foot_04_Height_Offset; // 0x6cc(0x04)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
// Size: 0x7e0 (Inherited: 0x10)
struct FAnimNode_DragonSpineSolver : FAnimNode_Base {
	struct FDragonData_MultiInput dragon_input_data; // 0x10(0x20)
	char pad_30[0x70]; // 0x30(0x70)
	float Precision; // 0xa0(0x04)
	float MaximumPitch; // 0xa4(0x04)
	float MinimumPitch; // 0xa8(0x04)
	float MaximumRoll; // 0xac(0x04)
	float MinimumRoll; // 0xb0(0x04)
	int32_t MaxIterations; // 0xb4(0x04)
	struct FComponentSpacePoseLink ComponentPose; // 0xb8(0x10)
	float Alpha; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	float shift_speed; // 0xd0(0x04)
	char pad_D4[0x8]; // 0xd4(0x08)
	enum class ETraceTypeQuery Trace_Channel; // 0xdc(0x01)
	enum class ETraceTypeQuery Anti_Trace_Channel; // 0xdd(0x01)
	enum class EIKTrace_Type_Plugin trace_type; // 0xde(0x01)
	char pad_DF[0x1]; // 0xdf(0x01)
	float Trace_Radius; // 0xe0(0x04)
	int32_t LODThreshold; // 0xe4(0x04)
	bool Rotate_Around_Translate; // 0xe8(0x01)
	bool Ignore_Lerping; // 0xe9(0x01)
	char pad_EA[0xa]; // 0xea(0x0a)
	float ActualAlpha; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
	float virtual_scale; // 0x100(0x04)
	float line_trace_downward_height; // 0x104(0x04)
	float line_trace_upper_height; // 0x108(0x04)
	bool Use_Anti_Channel; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float Slanted_Height_Up_Offset; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	float Slanted_Height_Down_Offset; // 0x118(0x04)
	float dip_multiplier; // 0x11c(0x04)
	float pelvis_adaptive_gravity; // 0x120(0x04)
	bool reverse_fabrik; // 0x124(0x01)
	char pad_125[0x7]; // 0x125(0x07)
	bool Calculation_To_RefPose; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float Chest_Slanted_Height_Up_Offset; // 0x130(0x04)
	float Chest_Slanted_Height_Down_Offset; // 0x134(0x04)
	float chest_side_dip_multiplier; // 0x138(0x04)
	float chest_adaptive_gravity; // 0x13c(0x04)
	float Chest_Base_Offset; // 0x140(0x04)
	float Pelvis_Base_Offset; // 0x144(0x04)
	float virtual_leg_width; // 0x148(0x04)
	float Maximum_Dip_Height; // 0x14c(0x04)
	char pad_150[0x8]; // 0x150(0x08)
	struct FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve; // 0x158(0x88)
	float Maximum_Dip_Height_Chest; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FRuntimeFloatCurve Chest_Height_Multiplier_Curve; // 0x1e8(0x88)
	bool Pelvis_Flat_Slope_Detection; // 0x270(0x01)
	bool Chest_Flat_Slope_Detection; // 0x271(0x01)
	char pad_272[0xe]; // 0x272(0x0e)
	float rotation_power_between; // 0x280(0x04)
	bool Use_Automatic_Fabrik_Selection; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	float Location_Lerp_Speed; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	float Rotation_Lerp_Speed; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FRuntimeFloatCurve Interpolation_Multiplier_Curve; // 0x298(0x88)
	float Chest_Influence_Alpha; // 0x320(0x04)
	float Pelvis_ForwardRotation_Intensity; // 0x324(0x04)
	float Pelvis_UpwardForwardRotation_Intensity; // 0x328(0x04)
	float Body_Rotation_Intensity; // 0x32c(0x04)
	float Pelvis_Rotation_Offset; // 0x330(0x04)
	float Chest_ForwardRotation_Intensity; // 0x334(0x04)
	float Chest_UpwardForwardRotation_Intensity; // 0x338(0x04)
	float Chest_SidewardRotation_Intensity; // 0x33c(0x04)
	float Chest_Rotation_Offset; // 0x340(0x04)
	char pad_344[0x3c]; // 0x344(0x3c)
	bool Full_Extended_Spine; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float max_extension_ratio; // 0x384(0x04)
	float min_extension_ratio; // 0x388(0x04)
	float extension_switch_speed; // 0x38c(0x04)
	char pad_390[0x4]; // 0x390(0x04)
	bool enable_solver; // 0x394(0x01)
	bool Work_Outside_PIE; // 0x395(0x01)
	bool Use_Fake_Chest_Rotations; // 0x396(0x01)
	bool Use_Fake_Pelvis_Rotations; // 0x397(0x01)
	char pad_398[0x4]; // 0x398(0x04)
	bool Force_Activation; // 0x39c(0x01)
	bool accurate_feet_placement; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)
	struct FRuntimeFloatCurve Accurate_Foot_Curve; // 0x3a0(0x88)
	bool use_crosshair_trace_also_for_fail_distance; // 0x428(0x01)
	bool Only_Root_Solve; // 0x429(0x01)
	char pad_42A[0xa]; // 0x42a(0x0a)
	struct FVector Overall_PostSolved_Offset; // 0x434(0x0c)
	struct FVector character_direction_vector_CS; // 0x440(0x0c)
	struct FVector Forward_Direction_Vector; // 0x44c(0x0c)
	bool flip_forward_and_right; // 0x458(0x01)
	char pad_459[0xf]; // 0x459(0x0f)
	enum class ERefPosePluginEnum SolverReferencePose; // 0x468(0x01)
	bool Spine_Feet_Connect; // 0x469(0x01)
	char pad_46A[0x2fa]; // 0x46a(0x2fa)
	float Snake_Joint_Speed; // 0x764(0x04)
	bool Enable_Snake_Interpolation; // 0x768(0x01)
	bool is_snake; // 0x769(0x01)
	char pad_76A[0x2]; // 0x76a(0x02)
	float Maximum_Feet_Distance; // 0x76c(0x04)
	float Minimum_Feet_Distance; // 0x770(0x04)
	bool DisplayLineTrace; // 0x774(0x01)
	char pad_775[0x6b]; // 0x775(0x6b)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
// Size: 0x560 (Inherited: 0xc8)
struct FAnimNode_DragonWarpSolver : FAnimNode_DragonControlBase {
	struct TArray<struct FDragonData_WarpLimbsData> dragon_limb_input; // 0xc8(0x10)
	struct FName Hip_Bone_Name; // 0xd8(0x08)
	char pad_E0[0x44]; // 0xe0(0x44)
	bool enable_solver; // 0x124(0x01)
	char pad_125[0x11f]; // 0x125(0x11f)
	struct FVector character_direction_vector_CS; // 0x244(0x0c)
	struct FVector forward_vector_CS; // 0x250(0x0c)
	float speed_warping_const; // 0x25c(0x04)
	bool enable_slope_warp; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float automatic_speed_warping_const; // 0x264(0x04)
	float slope_detection_tolerance; // 0x268(0x04)
	float Warp_Slope_Interpolation; // 0x26c(0x04)
	char pad_270[0x30]; // 0x270(0x30)
	enum class ETraceTypeQuery Trace_Channel; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float line_trace_downward_height; // 0x2a4(0x04)
	float line_trace_upper_height; // 0x2a8(0x04)
	float virtual_leg_width; // 0x2ac(0x04)
	float virtual_scale; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	bool DisplayLineTrace; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float Limb_Compression_Intensity; // 0x2bc(0x04)
	struct FRuntimeFloatCurve Limb_Lifting_Curve; // 0x2c0(0x88)
	float Hip_Change_Intensity; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FRuntimeFloatCurve Hip_Lifting_Curve; // 0x350(0x88)
	char pad_3D8[0x188]; // 0x3d8(0x188)
};

// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
// Size: 0x2c (Inherited: 0x00)
struct FDragonData_WarpLimbsData {
	struct FName Foot_Bone_Name; // 0x00(0x08)
	struct FName Knee_Bone_Name; // 0x08(0x08)
	struct FName Thigh_Bone_Name; // 0x10(0x08)
	float Warp_Lift_Reference_Location; // 0x18(0x04)
	float Warp_Param_Adder; // 0x1c(0x04)
	struct FVector2D Min_Max_Warp; // 0x20(0x08)
	float max_extra_compression_height; // 0x28(0x04)
};

// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
// Size: 0x70 (Inherited: 0x00)
struct FCCDIK_Modified_ChainLink {
	char pad_0[0x70]; // 0x00(0x70)
};

