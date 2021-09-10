// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C
// Size: 0x684 (Inherited: 0x2c0)
struct USK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x2f8(0x368)
	float __CustomProperty_DoorSpeed_7967AE9249945CF5A2907BA25311E72E; // 0x660(0x04)
	bool __CustomProperty_DoorOpen?_7967AE9249945CF5A2907BA25311E72E; // 0x664(0x01)
	bool IsOpen; // 0x665(0x01)
	char pad_666[0x2]; // 0x666(0x02)
	float Door Speed; // 0x668(0x04)
	struct FName DoorAudioAttachPoint; // 0x66c(0x08)
	char pad_674[0x4]; // 0x674(0x04)
	struct UFMODAudioComponent* SFXDoorEvent; // 0x678(0x08)
	float DoorPitchCached; // 0x680(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void DoorSwingAngle(); // Function SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C.DoorSwingAngle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CustomEvent_2(); // Function SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP(int32_t EntryPoint); // Function SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C.ExecuteUbergraph_SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

