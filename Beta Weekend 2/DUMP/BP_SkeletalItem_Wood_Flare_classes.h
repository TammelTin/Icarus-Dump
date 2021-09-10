// BlueprintGeneratedClass BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C
// Size: 0x464 (Inherited: 0x408)
struct ABP_SkeletalItem_Wood_Flare_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x410(0x08)
	struct UStaticMeshComponent* SM_TorchFire; // 0x418(0x08)
	struct UPointLightComponent* PointLight_Fill; // 0x420(0x08)
	struct UPointLightComponent* PointLight_Fire; // 0x428(0x08)
	struct UFMODAudioComponent* FMOD Fire Loop; // 0x430(0x08)
	struct UCapsuleComponent* Hit; // 0x438(0x08)
	struct FTimerHandle TimerHandle; // 0x440(0x08)
	struct FVector LocLast; // 0x448(0x0c)
	struct FRotator FxFireLastCamRot; // 0x454(0x0c)
	float DurabilityDelay; // 0x460(0x04)

	void AudioUpdateIntensity(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.AudioUpdateIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LightUpdated(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetLightActive(bool Active); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.SetLightActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void SetItemVisible(bool bVisible); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.SetItemVisible // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DurabilityDamage(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.DurabilityDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Flare(int32_t EntryPoint); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ExecuteUbergraph_BP_SkeletalItem_Wood_Flare // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

