// BlueprintGeneratedClass BP_BiomeTrigger.BP_BiomeTrigger_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_BiomeTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* B_Deactivate; // 0x228(0x08)
	struct UBoxComponent* A_Deactivate; // 0x230(0x08)
	struct UBoxComponent* B_Activation; // 0x238(0x08)
	struct UBoxComponent* A_Activation; // 0x240(0x08)
	struct USplineComponent* Spline; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool IsInUse; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float TriggerWidth; // 0x25c(0x04)
	float TriggerHeight; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct AActor* CollisionObject; // 0x268(0x08)
	struct FBiomesEnum Biome_A; // 0x270(0x10)
	struct FBiomesEnum Biome_B; // 0x280(0x10)

	void GetAtmosphereController(struct ABP_AtmosphereController_C* AtmosphereController); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.GetAtmosphereController // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__A_Deactivate_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.BndEvt__A_Deactivate_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__B_Deactivate_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.BndEvt__B_Deactivate_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__A_Activation_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.BndEvt__A_Activation_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__B_Activation_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.BndEvt__B_Activation_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BiomeTrigger(int32_t EntryPoint); // Function BP_BiomeTrigger.BP_BiomeTrigger_C.ExecuteUbergraph_BP_BiomeTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

