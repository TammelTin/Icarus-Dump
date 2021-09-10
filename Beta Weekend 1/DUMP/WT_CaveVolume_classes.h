// BlueprintGeneratedClass WT_CaveVolume.WT_CaveVolume_C
// Size: 0x23c (Inherited: 0x220)
struct AWT_CaveVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Skin; // 0x238(0x04)

	void GetReportedScore(float Score); // Function WT_CaveVolume.WT_CaveVolume_C.GetReportedScore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function WT_CaveVolume.WT_CaveVolume_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function WT_CaveVolume.WT_CaveVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function WT_CaveVolume.WT_CaveVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_WT_CaveVolume(int32_t EntryPoint); // Function WT_CaveVolume.WT_CaveVolume_C.ExecuteUbergraph_WT_CaveVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

