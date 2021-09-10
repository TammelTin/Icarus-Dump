// BlueprintGeneratedClass BP_HuntingClue.BP_HuntingClue_C
// Size: 0x330 (Inherited: 0x2a0)
struct ABP_HuntingClue_C : AHuntingClue {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UBoxComponent* InteractionBox; // 0x2a8(0x08)
	struct UInteractableComponent* Interactable; // 0x2b0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2b8(0x08)
	struct USplineComponent* Spline; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct FMulticastInlineDelegate ClueUpdated; // 0x2d0(0x10)
	float LifeTime; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct ABP_HuntingClue_C* NextHuntingClue; // 0x2e8(0x08)
	struct TArray<struct FVector> SplineLocations; // 0x2f0(0x10)
	struct ACharacter* AIReference; // 0x300(0x08)
	bool Focused; // 0x308(0x01)
	enum class EHuntingClueState CurrentState; // 0x309(0x01)
	bool Highlighted; // 0x30a(0x01)
	char pad_30B[0x1]; // 0x30b(0x01)
	struct FHuntingSetupRowHandle HuntingRow; // 0x30c(0x18)
	bool CanTrackFootprints; // 0x324(0x01)
	bool CanTrackFootprintTooltips; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct UBP_HuntingManager_C* HuntingManagerRef; // 0x328(0x08)

	void GetHuntingWidgetLocation(struct FVector Location); // Function BP_HuntingClue.BP_HuntingClue_C.GetHuntingWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GatherSplineLocations(bool Return, struct TArray<struct FVector> Locations); // Function BP_HuntingClue.BP_HuntingClue_C.GatherSplineLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePerceptionState(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdatePerceptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateStateVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateStateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.InitVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState(bool Highlight); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusUpdated(struct AActor* Actor); // Function BP_HuntingClue.BP_HuntingClue_C.FocusUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_SplineLocations(); // Function BP_HuntingClue.BP_HuntingClue_C.OnRep_SplineLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RequestSplineLocations(); // Function BP_HuntingClue.BP_HuntingClue_C.RequestSplineLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTrail(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateTrail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_NextHuntingClue(); // Function BP_HuntingClue.BP_HuntingClue_C.OnRep_NextHuntingClue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetNextClue(struct ABP_HuntingClue_C* Clue); // Function BP_HuntingClue.BP_HuntingClue_C.SetNextClue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RegisterHuntingWidget(); // Function BP_HuntingClue.BP_HuntingClue_C.RegisterHuntingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetNextClueDistance(float Distance); // Function BP_HuntingClue.BP_HuntingClue_C.GetNextClueDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SendSplineLocations(struct TArray<struct FVector> Locations); // Function BP_HuntingClue.BP_HuntingClue_C.SendSplineLocations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_HuntingClue.BP_HuntingClue_C.BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_HuntingClue.BP_HuntingClue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_HuntingClue(int32_t EntryPoint); // Function BP_HuntingClue.BP_HuntingClue_C.ExecuteUbergraph_BP_HuntingClue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void ClueUpdated__DelegateSignature(); // Function BP_HuntingClue.BP_HuntingClue_C.ClueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

