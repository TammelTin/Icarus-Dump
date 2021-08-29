// AnimBlueprintGeneratedClass Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C
// Size: 0x29fc (Inherited: 0xa50)
struct UVehicle_Rover_AnimBP_C : UVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa58(0x30)
	char pad_A88[0x8]; // 0xa88(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_8; // 0xa90(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_7; // 0xc40(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_6; // 0xdf0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_5; // 0xfa0(0x1b0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1150(0x20)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0x1170(0x1b0)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_4; // 0x1320(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_3; // 0x1428(0x108)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0x1530(0x1b0)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_2; // 0x16e0(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint; // 0x17e8(0x108)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0x18f0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1aa0(0x1b0)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0x1c50(0xe0)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x1d30(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1d40(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1e48(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1f50(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2058(0x108)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2160(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x25a0(0x440)
	float SteeringAngle; // 0x29e0(0x04)
	float DriveTrain_Spin; // 0x29e4(0x04)
	float RearDriveAngle; // 0x29e8(0x04)
	float FrontDriveAngle; // 0x29ec(0x04)
	float DriveAngleScalar; // 0x29f0(0x04)
	float PreviousDriveSpintRate; // 0x29f4(0x04)
	float DriveAngularVelocityRoll; // 0x29f8(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculeDriveAngles(struct AWheeledVehicle* Vehicle); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.CalculeDriveAngles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Calculate Drive Spin(struct UWheeledVehicleMovementComponent* VehicleMovement, float DeltaTime); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.Calculate Drive Spin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_B488B3894E819C86EDE4388B438062A5(); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_B488B3894E819C86EDE4388B438062A5 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_58EFC46A47778BAB75D8799B3E7DAB81(); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_58EFC46A47778BAB75D8799B3E7DAB81 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_4C175A13431BFFC5020CE89D4A8D9EB1(); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_4C175A13431BFFC5020CE89D4A8D9EB1 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_D470D83349941E4707A60AB292821699(); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vehicle_Rover_AnimBP_AnimGraphNode_ModifyBone_D470D83349941E4707A60AB292821699 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_Vehicle_Rover_AnimBP(int32_t EntryPoint); // Function Vehicle_Rover_AnimBP.Vehicle_Rover_AnimBP_C.ExecuteUbergraph_Vehicle_Rover_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

