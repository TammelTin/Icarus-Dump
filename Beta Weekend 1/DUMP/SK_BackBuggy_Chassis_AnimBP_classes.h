// AnimBlueprintGeneratedClass SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C
// Size: 0x1954 (Inherited: 0xa50)
struct USK_BackBuggy_Chassis_AnimBP_C : UVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa58(0x30)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xa88(0xe0)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xb68(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb78(0x20)
	char pad_B98[0x8]; // 0xb98(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_5; // 0xba0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0xd50(0x1b0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xf00(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_2; // 0x1008(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint; // 0x1110(0x108)
	char pad_1218[0x8]; // 0x1218(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0x1220(0x1b0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x13d0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x14d8(0x108)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0x15e0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1790(0x1b0)
	float RearAxleAngle; // 0x1940(0x04)
	float RearAxleOffset; // 0x1944(0x04)
	float SteeringAngle; // 0x1948(0x04)
	float PreviousDriveSpintRate; // 0x194c(0x04)
	float DriveTrain_Spin; // 0x1950(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateSuspensionSpring(struct AVehicleBase* Vehicle, struct FName AttachSocketName, struct FName EndSocketName); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.UpdateSuspensionSpring // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateDriveSpin(struct UWheeledVehicleMovementComponent* VehicleMovement, float DeltaTime); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.CalculateDriveSpin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculateAxleAngles(struct AVehicleBase* Vehicle); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.CalculateAxleAngles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_CC10C788456A7B67489164A4A1E96567(); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_CC10C788456A7B67489164A4A1E96567 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_AE602E4F4C0FCFE07FB2E2813799F0A6(); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_AE602E4F4C0FCFE07FB2E2813799F0A6 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_710399884E1D6E92F7A662A9C298D627(); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP_AnimGraphNode_ModifyBone_710399884E1D6E92F7A662A9C298D627 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP(int32_t EntryPoint); // Function SK_BackBuggy_Chassis_AnimBP.SK_BackBuggy_Chassis_AnimBP_C.ExecuteUbergraph_SK_BackBuggy_Chassis_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

