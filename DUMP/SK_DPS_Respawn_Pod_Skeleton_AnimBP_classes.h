// AnimBlueprintGeneratedClass SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
// Size: 0x690 (Inherited: 0x2c0)
struct USK_DPS_Respawn_Pod_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x2f8(0x368)
	float __CustomProperty_DoorOpenPosition_4E7C5A6944FCDF17C664BBB7240CF69E; // 0x660(0x04)
	struct FVector External Force; // 0x664(0x0c)
	float DoorOpenValue; // 0x670(0x04)
	bool Landed; // 0x674(0x01)
	bool IsOpen; // 0x675(0x01)
	char pad_676[0x2]; // 0x676(0x02)
	float DoorPitchCached; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct UFMODAudioComponent* SFXDoorEvent; // 0x680(0x08)
	struct FName DoorAudioAttachPoint; // 0x688(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnDoorOpenComplete(); // Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.OnDoorOpenComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP(int32_t EntryPoint); // Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

