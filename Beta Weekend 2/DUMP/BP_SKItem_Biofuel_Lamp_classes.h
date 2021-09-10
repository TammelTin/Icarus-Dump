// BlueprintGeneratedClass BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C
// Size: 0x428 (Inherited: 0x408)
struct ABP_SKItem_Biofuel_Lamp_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UPointLightComponent* PointLight; // 0x410(0x08)
	struct UFMODAudioComponent* FMOD_Flashlight; // 0x418(0x08)
	struct USpotLightComponent* SpotLight; // 0x420(0x08)

	void LightUpdated(); // Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EventAudioLightActivate(); // Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.EventAudioLightActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SKItem_Biofuel_Lamp(int32_t EntryPoint); // Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.ExecuteUbergraph_BP_SKItem_Biofuel_Lamp // (Final|UbergraphFunction) // @ game+0x1a38c80
};

