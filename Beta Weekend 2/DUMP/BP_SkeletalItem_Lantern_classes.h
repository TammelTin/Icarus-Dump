// BlueprintGeneratedClass BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C
// Size: 0x448 (Inherited: 0x408)
struct ABP_SkeletalItem_Lantern_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UFMODAudioComponent* FMOD_Lantern_Loop; // 0x410(0x08)
	struct USpotLightComponent* SpotLight3; // 0x418(0x08)
	struct USpotLightComponent* SpotLight2; // 0x420(0x08)
	struct USpotLightComponent* SpotLight1; // 0x428(0x08)
	struct USpotLightComponent* SpotLight0; // 0x430(0x08)
	struct UParticleSystemComponent* ParticleSystem_Fire; // 0x438(0x08)
	struct UCapsuleComponent* Hit; // 0x440(0x08)

	void LightUpdated(); // Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void Start_Lantern_Loop(); // Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.Start_Lantern_Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SkeletalItem_Lantern(int32_t EntryPoint); // Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.ExecuteUbergraph_BP_SkeletalItem_Lantern // (Final|UbergraphFunction) // @ game+0x1a38c80
};

