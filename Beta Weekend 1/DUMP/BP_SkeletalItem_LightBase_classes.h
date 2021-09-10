// BlueprintGeneratedClass BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C
// Size: 0x3f8 (Inherited: 0x3d0)
struct ABP_SkeletalItem_LightBase_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* ActiveComponents; // 0x3d8(0x08)
	bool LightActive; // 0x3e0(0x01)
	bool Underwater; // 0x3e1(0x01)
	char pad_3E2[0x2]; // 0x3e2(0x02)
	float UnderwaterDepth; // 0x3e4(0x04)
	struct FMulticastInlineDelegate AudioLightActivate; // 0x3e8(0x10)

	void OnRep_LightActive(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.OnRep_LightActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Underwater(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.OnRep_Underwater // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetLightActive(bool LightActive); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.GetLightActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IsLit(bool Lit); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.IsLit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void LightUpdated(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.LightUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateWaterState(bool Floating); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.UpdateWaterState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLightActive(bool Active); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.SetLightActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PrimaryFireToggle(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.PrimaryFireToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnFloatableUpdated(bool Floating); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.OnFloatableUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_LightBase(int32_t EntryPoint); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.ExecuteUbergraph_BP_SkeletalItem_LightBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void AudioLightActivate__DelegateSignature(); // Function BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C.AudioLightActivate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

