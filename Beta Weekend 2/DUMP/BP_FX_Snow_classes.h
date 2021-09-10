// BlueprintGeneratedClass BP_FX_Snow.BP_FX_Snow_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_FX_Snow_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void DeactivateCard(); // Function BP_FX_Snow.BP_FX_Snow_C.DeactivateCard // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActivateCard(); // Function BP_FX_Snow.BP_FX_Snow_C.ActivateCard // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FX_Snow(int32_t EntryPoint); // Function BP_FX_Snow.BP_FX_Snow_C.ExecuteUbergraph_BP_FX_Snow // (Final|UbergraphFunction) // @ game+0x1a38c80
};

