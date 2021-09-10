// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C
// Size: 0x438 (Inherited: 0x2c0)
struct USK_DPS_SML_DropShip_02_INT_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x398(0x80)
	bool Shake; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UFMODAudioComponent* SFX_MediumShake; // 0x420(0x08)
	struct UFMODAudioComponent* SFX_RattleSmall; // 0x428(0x08)
	struct UFMODAudioComponent* SFX_RattleC; // 0x430(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_INT_AnimBP(int32_t EntryPoint); // Function SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C.ExecuteUbergraph_SK_DPS_SML_DropShip_02_INT_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

