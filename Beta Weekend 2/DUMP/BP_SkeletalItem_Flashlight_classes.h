// BlueprintGeneratedClass BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C
// Size: 0x430 (Inherited: 0x408)
struct ABP_SkeletalItem_Flashlight_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UFMODAudioComponent* FMODLightActivate; // 0x410(0x08)
	struct USpotLightComponent* SpotLight; // 0x418(0x08)
	struct UMaterialInstanceDynamic* FlashlightMat_Off; // 0x420(0x08)
	struct UMaterialInstanceDynamic* FlashlightMat_On; // 0x428(0x08)

	void LightUpdated(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EventAudioLightActivate(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.EventAudioLightActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SkeletalItem_Flashlight(int32_t EntryPoint); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.ExecuteUbergraph_BP_SkeletalItem_Flashlight // (Final|UbergraphFunction) // @ game+0x1a38c80
};

