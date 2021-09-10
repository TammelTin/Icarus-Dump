// AnimBlueprintGeneratedClass SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C
// Size: 0x5f1 (Inherited: 0x2c0)
struct USK_Dev_Hammer_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2f8(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x398(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4a0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4c0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x560(0x80)
	struct UBP_ActionableBehaviour_Flying_Hammer_C* Hammer; // 0x5e0(0x08)
	bool FlyingForward; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float Speed; // 0x5ec(0x04)
	bool Swinging; // 0x5f0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetHammerActionable(struct UBP_ActionableBehaviour_Flying_Hammer_C* Hammer); // Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.GetHammerActionable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AnimNotify_FmodEvent(); // Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.AnimNotify_FmodEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_Dev_Hammer_AnimBP(int32_t EntryPoint); // Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.ExecuteUbergraph_SK_Dev_Hammer_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

