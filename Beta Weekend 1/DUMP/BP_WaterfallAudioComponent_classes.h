// BlueprintGeneratedClass BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C
// Size: 0x274 (Inherited: 0x200)
struct UBP_WaterfallAudioComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UStaticMeshComponent* WaterfallStaticMesh; // 0x208(0x08)
	struct UFMODAudioComponent* TopAudioComponent; // 0x210(0x08)
	struct UFMODAudioComponent* BottomAudioComponent; // 0x218(0x08)
	struct UFMODEvent* TopEvent; // 0x220(0x08)
	struct UFMODEvent* BottomEvent; // 0x228(0x08)
	struct FVector WaterfallSize; // 0x230(0x0c)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UFMODEvent* TopEvent_Cave; // 0x240(0x08)
	struct UFMODEvent* BottomEvent_Cave; // 0x248(0x08)
	float MaxPlayDistance; // 0x250(0x04)
	struct FVector TopLocation; // 0x254(0x0c)
	struct FVector BottomLocation; // 0x260(0x0c)
	bool InCave; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float UpdateFrequency; // 0x270(0x04)

	void UpdateAudio(); // Function BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C.UpdateAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetSizeParameters(struct UFMODAudioComponent* Component); // Function BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C.SetSizeParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WaterfallAudioComponent(int32_t EntryPoint); // Function BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C.ExecuteUbergraph_BP_WaterfallAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

