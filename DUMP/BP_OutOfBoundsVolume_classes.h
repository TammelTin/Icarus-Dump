// BlueprintGeneratedClass BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_OutOfBoundsVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct TArray<struct FTransform> CachedLocations; // 0x238(0x10)
	bool ShowMaterial; // 0x248(0x01)

	void ToggleMaterial(); // Function BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C.ToggleMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_OutOfBoundsVolume(int32_t EntryPoint); // Function BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C.ExecuteUbergraph_BP_OutOfBoundsVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

