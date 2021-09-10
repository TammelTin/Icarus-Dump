// AnimBlueprintGeneratedClass 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C
// Size: 0x469 (Inherited: 0x2c0)
struct U1ST_CHA_RIG_Dropship_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x378(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x418(0x50)
	bool Shake; // 0x468(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP(int32_t EntryPoint); // Function 1ST_CHA_RIG_Dropship_AnimBP.1ST_CHA_RIG_Dropship_AnimBP_C.ExecuteUbergraph_1ST_CHA_RIG_Dropship_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

