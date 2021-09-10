// BlueprintGeneratedClass BP_LakeAudioComponent.BP_LakeAudioComponent_C
// Size: 0x240 (Inherited: 0x200)
struct UBP_LakeAudioComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct AIcarusPlayerController* PlayerController; // 0x208(0x08)
	struct UFMODAudioComponent* FMODAudioComponent; // 0x210(0x08)
	struct ABP_InteractableLake_C* Lake; // 0x218(0x08)
	float InterpSpeed; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct USplineComponent* EdgeSpline; // 0x228(0x08)
	struct UFMODEvent* FMODEvent; // 0x230(0x08)
	struct UCurveFloat* UpdateDistanceCurve; // 0x238(0x08)

	void GetTimeToNextUpdate(float Time); // Function BP_LakeAudioComponent.BP_LakeAudioComponent_C.GetTimeToNextUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateAudio(bool Smooth); // Function BP_LakeAudioComponent.BP_LakeAudioComponent_C.UpdateAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_LakeAudioComponent.BP_LakeAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AudioTick(); // Function BP_LakeAudioComponent.BP_LakeAudioComponent_C.AudioTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_LakeAudioComponent(int32_t EntryPoint); // Function BP_LakeAudioComponent.BP_LakeAudioComponent_C.ExecuteUbergraph_BP_LakeAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

