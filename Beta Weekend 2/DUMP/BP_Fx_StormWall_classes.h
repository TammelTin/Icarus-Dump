// BlueprintGeneratedClass BP_Fx_StormWall.BP_Fx_StormWall_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_Fx_StormWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ActivateWall(); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.ActivateWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DeactivateWall(); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.DeactivateWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Fx_StormWall(int32_t EntryPoint); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.ExecuteUbergraph_BP_Fx_StormWall // (Final|UbergraphFunction) // @ game+0x1a38c80
};

