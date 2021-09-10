// AnimBlueprintGeneratedClass SK_CRE_Roat_AnimBP.SK_CRE_Roat_AnimBP_C
// Size: 0x3e4 (Inherited: 0x2c0)
struct USK_CRE_Roat_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2f8(0xe8)
	float RoatSpeed; // 0x3e0(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_Roat_AnimBP.SK_CRE_Roat_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Roat_AnimBP_AnimGraphNode_BlendSpacePlayer_36B14B284D7178BE89E5E4B482808988(); // Function SK_CRE_Roat_AnimBP.SK_CRE_Roat_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Roat_AnimBP_AnimGraphNode_BlendSpacePlayer_36B14B284D7178BE89E5E4B482808988 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CRE_Roat_AnimBP.SK_CRE_Roat_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CRE_Roat_AnimBP(int32_t EntryPoint); // Function SK_CRE_Roat_AnimBP.SK_CRE_Roat_AnimBP_C.ExecuteUbergraph_SK_CRE_Roat_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

