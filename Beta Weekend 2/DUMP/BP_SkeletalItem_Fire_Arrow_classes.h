// BlueprintGeneratedClass BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C
// Size: 0x41c (Inherited: 0x3d0)
struct ABP_SkeletalItem_Fire_Arrow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UFMODAudioComponent* FMODFireLoop; // 0x3d8(0x08)
	struct UPointLightComponent* PointLight; // 0x3e0(0x08)
	struct UNiagaraComponent* Niagara; // 0x3e8(0x08)
	float LightFade_Float_FB55DCB2435BEBA8D3B4CE898BF4891D; // 0x3f0(0x04)
	enum class ETimelineDirection LightFade__Direction_FB55DCB2435BEBA8D3B4CE898BF4891D; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct UTimelineComponent* LightFade; // 0x3f8(0x08)
	bool IsPreviewActor; // 0x400(0x01)
	enum class PreviewActorType PreviewType; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	float Intensity; // 0x404(0x04)
	struct FTimerHandle SFX_TimerHandle; // 0x408(0x08)
	struct FVector LocLast; // 0x410(0x0c)

	void SFX_KnockedFireMovement(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.SFX_KnockedFireMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_PreviewType(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.OnRep_PreviewType // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LightFade__FinishedFunc(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.LightFade__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void LightFade__UpdateFunc(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.LightFade__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void InitArrow(); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.InitArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(struct UActorComponent* Component); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow(int32_t EntryPoint); // Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

