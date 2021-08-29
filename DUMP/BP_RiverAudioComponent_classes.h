// BlueprintGeneratedClass BP_RiverAudioComponent.BP_RiverAudioComponent_C
// Size: 0x289 (Inherited: 0x200)
struct UBP_RiverAudioComponent_C : URiverAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UFMODAudioComponent* FMODAudioComponent; // 0x208(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x210(0x08)
	struct ABP_InteractableRiver_C* River; // 0x218(0x08)
	float ProximityInfluenceRadius; // 0x220(0x04)
	float InterpSpeed; // 0x224(0x04)
	struct AIcarusPlayerController* PlayerController; // 0x228(0x08)
	float InfrequentCheckDistanceThreshold; // 0x230(0x04)
	float InfrequentCheckFrequency; // 0x234(0x04)
	float FrequentCheckDistanceThreshold; // 0x238(0x04)
	float FrequentCheckFrequency; // 0x23c(0x04)
	float ActivelyUpdatingCheckFrequency; // 0x240(0x04)
	float EstimatedVisibleProportion; // 0x244(0x04)
	struct FVector LeftSplineStart; // 0x248(0x0c)
	struct FVector LeftSplineEnd; // 0x254(0x0c)
	struct FVector RightSplineStart; // 0x260(0x0c)
	struct FVector RightSplineEnd; // 0x26c(0x0c)
	float SplineEndDistanceThreshold; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UFMODEvent* FMODEvent; // 0x280(0x08)
	bool PlayerInRiver; // 0x288(0x01)

	void SetAudioActive(bool Active); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.SetAudioActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetState(float DistToListener); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudio(); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.UpdateAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetUpdateTime(float Time); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.GetUpdateTime // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateLocation(float DistToListener); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.UpdateLocation // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void RiverAudioTick(); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.RiverAudioTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_RiverAudioComponent(int32_t EntryPoint); // Function BP_RiverAudioComponent.BP_RiverAudioComponent_C.ExecuteUbergraph_BP_RiverAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

