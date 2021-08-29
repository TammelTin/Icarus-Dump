// BlueprintGeneratedClass BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C
// Size: 0x410 (Inherited: 0x3f8)
struct ABP_SkeletalItem_Flashlight_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UFMODAudioComponent* FMODLightActivate; // 0x400(0x08)
	struct USpotLightComponent* SpotLight; // 0x408(0x08)

	void LightUpdated(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EventAudioLightActivate(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.EventAudioLightActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_Flashlight(int32_t EntryPoint); // Function BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C.ExecuteUbergraph_BP_SkeletalItem_Flashlight // (Final|UbergraphFunction) // @ game+0x1a05090
};

