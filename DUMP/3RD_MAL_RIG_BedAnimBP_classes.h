// AnimBlueprintGeneratedClass 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C
// Size: 0xc94 (Inherited: 0x2c0)
struct U3RD_MAL_RIG_BedAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x2f8(0x118)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x410(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x438(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x4e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x568(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x598(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x648(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x750(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x770(0x20)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0x790(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x7c0(0x118)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x8d8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x900(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x980(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa30(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa60(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xb10(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc18(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc38(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xc58(0x30)
	struct FVector Offset; // 0xc88(0x0c)

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink VehicleLowerBody); // Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleLowerBody // (HasOutParms|BlueprintCallable) // @ game+0x1a05090
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink VehicleUpperBody); // Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.VehicleUpperBody // (HasOutParms|BlueprintCallable) // @ game+0x1a05090
	void AnimGraph(struct FPoseLink AnimGraph); // Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP(int32_t EntryPoint); // Function 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

