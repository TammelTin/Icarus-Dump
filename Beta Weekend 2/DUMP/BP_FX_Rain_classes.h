// BlueprintGeneratedClass BP_FX_Rain.BP_FX_Rain_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_FX_Rain_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ActivateCard(); // Function BP_FX_Rain.BP_FX_Rain_C.ActivateCard // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DeactivateCard(); // Function BP_FX_Rain.BP_FX_Rain_C.DeactivateCard // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FX_Rain(int32_t EntryPoint); // Function BP_FX_Rain.BP_FX_Rain_C.ExecuteUbergraph_BP_FX_Rain // (Final|UbergraphFunction) // @ game+0x1a38c80
};

