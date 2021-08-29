// BlueprintGeneratedClass BP_OutOfBoundsTeleporter.BP_OutOfBoundsTeleporter_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_OutOfBoundsTeleporter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* TriggerVolume; // 0x228(0x08)
	struct UBillboardComponent* SafePlaceArctc; // 0x230(0x08)
	struct UBillboardComponent* SafePlaceDesert; // 0x238(0x08)
	struct UBillboardComponent* SafePlaceForest; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_OutOfBoundsTeleporter.BP_OutOfBoundsTeleporter_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_OutOfBoundsTeleporter(int32_t EntryPoint); // Function BP_OutOfBoundsTeleporter.BP_OutOfBoundsTeleporter_C.ExecuteUbergraph_BP_OutOfBoundsTeleporter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

