// BlueprintGeneratedClass BP_IcarusSplineNet.BP_IcarusSplineNet_C
// Size: 0x341 (Inherited: 0x310)
struct ABP_IcarusSplineNet_C : AResourceNetwork {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct TArray<struct ABP_IcarusSplineActor_C*> LinkedSplines; // 0x320(0x10)
	struct FLinearColor DebugLineColour; // 0x330(0x10)
	bool TempActive; // 0x340(0x01)

	void CheckOverdraw(int32_t AdditionalConsumer, int32_t AdditionalProvider, bool Overdraw); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.CheckOverdraw // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool DeactivateDevice(struct ADeployable* Device); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.DeactivateDevice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ActivateDevice(struct ADeployable* Device, int32_t Rate); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ActivateDevice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Overdraw(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.Overdraw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PowerTick(float DeltaTime); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.PowerTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddLinkedDevice(struct ABP_DeployableBase_C* LinkedActor); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AddLinkedDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateNewNetworkAtSpline(struct ABP_IcarusSplineActor_C* Spline); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.CreateNewNetworkAtSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MergeNetwork(struct ABP_IcarusSplineNet_C* NetworkToMerge); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.MergeNetwork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AreTwoSplinesConnected(struct ABP_IcarusSplineActor_C* SplineA, struct ABP_IcarusSplineActor_C* Spline B, bool Connected); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AreTwoSplinesConnected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveSpline(struct ABP_IcarusSplineActor_C* SplineToRemove); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.RemoveSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddSpline(struct ABP_IcarusSplineActor_C* Added Spline); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AddSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Cleanup(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DelayedCleanupCheck(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.DelayedCleanupCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusSplineNet(int32_t EntryPoint); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ExecuteUbergraph_BP_IcarusSplineNet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

