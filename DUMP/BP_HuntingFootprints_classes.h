// BlueprintGeneratedClass BP_HuntingFootprints.BP_HuntingFootprints_C
// Size: 0x35c (Inherited: 0x326)
struct ABP_HuntingFootprints_C : ABP_HuntingClue_C {
	char pad_326[0x2]; // 0x326(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UBP_UIProjectionComponent_Hunting_C* BP_UIProjectionComponent_Hunting; // 0x330(0x08)
	struct USceneComponent* UITarget; // 0x338(0x08)
	float ClueDistance; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct USplineMeshComponent*> SplineMeshes; // 0x348(0x10)
	float TimeCreated; // 0x358(0x04)

	void UpdatePerceptionState(); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.UpdatePerceptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetHuntingWidgetLocation(struct FVector Location); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.GetHuntingWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RegisterHuntingWidget(); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.RegisterHuntingWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrail(); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.UpdateTrail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetNextClueDistance(float Distance); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.GetNextClueDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetNextClueDistance(float Distance); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.SetNextClueDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HuntingFootprints(int32_t EntryPoint); // Function BP_HuntingFootprints.BP_HuntingFootprints_C.ExecuteUbergraph_BP_HuntingFootprints // (Final|UbergraphFunction) // @ game+0x1a05090
};

