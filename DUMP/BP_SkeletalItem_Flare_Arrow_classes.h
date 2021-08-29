// BlueprintGeneratedClass BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C
// Size: 0x3f2 (Inherited: 0x3d0)
struct ABP_SkeletalItem_Flare_Arrow_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UPointLightComponent* PointLight_Small; // 0x3d8(0x08)
	struct UPointLightComponent* PointLight_Large; // 0x3e0(0x08)
	struct UStaticMeshComponent* Sphere; // 0x3e8(0x08)
	bool IsPreviewActor; // 0x3f0(0x01)
	enum class PreviewActorType PreviewType; // 0x3f1(0x01)

	void OnRep_PreviewType(); // Function BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C.OnRep_PreviewType // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void InitArrow(); // Function BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C.InitArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // Function BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C.OnProjectileFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_Flare_Arrow(int32_t EntryPoint); // Function BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C.ExecuteUbergraph_BP_SkeletalItem_Flare_Arrow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

