// BlueprintGeneratedClass BP_NavigationCheckpoint.BP_NavigationCheckpoint_C
// Size: 0x242 (Inherited: 0x220)
struct ABP_NavigationCheckpoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBillboardComponent* Billboard; // 0x228(0x08)
	struct UTextRenderComponent* TextRender; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsValid; // 0x240(0x01)
	bool PrintFailures; // 0x241(0x01)

	void ValidateCheckpoint(); // Function BP_NavigationCheckpoint.BP_NavigationCheckpoint_C.ValidateCheckpoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsCheckpointValid(); // Function BP_NavigationCheckpoint.BP_NavigationCheckpoint_C.IsCheckpointValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_NavigationCheckpoint.BP_NavigationCheckpoint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_NavigationCheckpoint.BP_NavigationCheckpoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_NavigationCheckpoint(int32_t EntryPoint); // Function BP_NavigationCheckpoint.BP_NavigationCheckpoint_C.ExecuteUbergraph_BP_NavigationCheckpoint // (Final|UbergraphFunction) // @ game+0x1a05090
};

