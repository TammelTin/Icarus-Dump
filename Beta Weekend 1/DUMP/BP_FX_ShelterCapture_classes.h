// BlueprintGeneratedClass BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_FX_ShelterCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct TArray<struct AActor*> Show Only Actors; // 0x238(0x10)
	struct AActor* NewVar_1; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FX_ShelterCapture(int32_t EntryPoint); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ExecuteUbergraph_BP_FX_ShelterCapture // (Final|UbergraphFunction) // @ game+0x1a05090
};

