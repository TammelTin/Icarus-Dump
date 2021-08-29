// BlueprintGeneratedClass BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C
// Size: 0x69 (Inherited: 0x50)
struct UBP_AnimNotify_PlaySound_Player_C : UAnimNotify_PlaySoundPlayer {
	bool Follow; // 0x50(0x01)
	bool UseListenerRotation; // 0x51(0x01)
	bool ApplyPlayerTypeParameter; // 0x52(0x01)
	enum class EAudioPlayerPerspective PerspectiveToPlayIn; // 0x53(0x01)
	struct FName AttachPoint; // 0x54(0x08)
	bool ApplyOcclusion; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FName OcclusionTrace; // 0x60(0x08)
	bool ApplyWaterImmersion; // 0x68(0x01)

	struct FString GetNotifyName(); // Function BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
};

