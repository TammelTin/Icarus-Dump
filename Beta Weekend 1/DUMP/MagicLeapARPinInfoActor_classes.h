// BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
// Size: 0x2c4 (Inherited: 0x238)
struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* Right; // 0x240(0x08)
	struct UStaticMeshComponent* Forward; // 0x248(0x08)
	struct UStaticMeshComponent* Up; // 0x250(0x08)
	struct USphereComponent* ValidRadiusVisualizer; // 0x258(0x08)
	struct USceneComponent* AxisRoot; // 0x260(0x08)
	struct USceneComponent* VisualizerRoot; // 0x268(0x08)
	struct UTextRenderComponent* TypeValue; // 0x270(0x08)
	struct UTextRenderComponent* TransErrValue; // 0x278(0x08)
	struct UTextRenderComponent* RotErrValue; // 0x280(0x08)
	struct UTextRenderComponent* ConfidenceValue; // 0x288(0x08)
	struct UTextRenderComponent* TransErrLabel; // 0x290(0x08)
	struct UTextRenderComponent* RotErrLabel; // 0x298(0x08)
	struct UTextRenderComponent* ConfidenceLabel; // 0x2a0(0x08)
	struct UTextRenderComponent* PinIDValue; // 0x2a8(0x08)
	struct USceneComponent* InfoRoot; // 0x2b0(0x08)
	struct USceneComponent* Root; // 0x2b8(0x08)
	float RotationSmoothSpeed; // 0x2c0(0x04)

	void UpdatePinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnUpdateARPinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

