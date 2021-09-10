// AnimBlueprintGeneratedClass SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C
// Size: 0x782 (Inherited: 0x2c0)
struct USK_SteeringWheel_Rig_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x398(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x418(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x448(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4c8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x4f8(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x548(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x578(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x628(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6f0(0x80)
	struct AVehicleBase* VehicleRef; // 0x770(0x08)
	float Speed; // 0x778(0x04)
	float SteeringValue; // 0x77c(0x04)
	bool IsTurningLeft; // 0x780(0x01)
	bool IsTurningRight; // 0x781(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP_AnimGraphNode_ApplyAdditive_D9130F8341BF48771A465289AB75AEE3(); // Function SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP_AnimGraphNode_ApplyAdditive_D9130F8341BF48771A465289AB75AEE3 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP_AnimGraphNode_SequenceEvaluator_0FC7171447442BB5048F688325AAE10C(); // Function SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP_AnimGraphNode_SequenceEvaluator_0FC7171447442BB5048F688325AAE10C // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP(int32_t EntryPoint); // Function SK_SteeringWheel_Rig_AnimBP.SK_SteeringWheel_Rig_AnimBP_C.ExecuteUbergraph_SK_SteeringWheel_Rig_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

