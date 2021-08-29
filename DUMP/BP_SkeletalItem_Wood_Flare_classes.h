// BlueprintGeneratedClass BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C
// Size: 0x448 (Inherited: 0x3f8)
struct ABP_SkeletalItem_Wood_Flare_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UStaticMeshComponent* SM_TorchFire; // 0x400(0x08)
	struct UPointLightComponent* PointLight_Fill; // 0x408(0x08)
	struct UPointLightComponent* PointLight_Fire; // 0x410(0x08)
	struct UFMODAudioComponent* FMOD Fire Loop; // 0x418(0x08)
	struct UCapsuleComponent* Hit; // 0x420(0x08)
	struct FTimerHandle TimerHandle; // 0x428(0x08)
	struct FVector LocLast; // 0x430(0x0c)
	struct FRotator FxFireLastCamRot; // 0x43c(0x0c)

	void AudioUpdateIntensity(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.AudioUpdateIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LightUpdated(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.LightUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void SetLightActive(bool Active); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.SetLightActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Flare(int32_t EntryPoint); // Function BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C.ExecuteUbergraph_BP_SkeletalItem_Wood_Flare // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

