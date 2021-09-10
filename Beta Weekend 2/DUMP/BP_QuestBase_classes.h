// BlueprintGeneratedClass BP_QuestBase.BP_QuestBase_C
// Size: 0x348 (Inherited: 0x2d8)
struct ABP_QuestBase_C : AQuestBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	struct FMulticastInlineDelegate QuestFinished; // 0x2f8(0x10)
	bool QuestInitialised; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct UObject*> LoadedQuestModifierClasses; // 0x310(0x10)
	struct TArray<struct UBP_QuestModifierBase_C*> QuestModifiers; // 0x320(0x10)
	struct UUMG_QuestWidget_C* QuestWidgetClass; // 0x330(0x08)
	struct FMulticastInlineDelegate QuestStateUpdated; // 0x338(0x10)

	float GetQuestFinishDelay(); // Function BP_QuestBase.BP_QuestBase_C.GetQuestFinishDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetNewQuestState(enum class EQuestFinishState NewState); // Function BP_QuestBase.BP_QuestBase_C.SetNewQuestState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateDebugVisuals(); // Function BP_QuestBase.BP_QuestBase_C.UpdateDebugVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetMapLocation(); // Function BP_QuestBase.BP_QuestBase_C.GetMapLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetRelevantLocation(bool Implemented); // Function BP_QuestBase.BP_QuestBase_C.GetRelevantLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AIcarusActor* GetRelevantIcarusActor(bool Implemented); // Function BP_QuestBase.BP_QuestBase_C.GetRelevantIcarusActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AActor* GetRelevantActor(bool Implemented); // Function BP_QuestBase.BP_QuestBase_C.GetRelevantActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct TArray<struct TSoftClassPtr<UObject>> GatherQuestModifierClasses(); // Function BP_QuestBase.BP_QuestBase_C.GatherQuestModifierClasses // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetSubObjectiveCount(int32_t Index); // Function BP_QuestBase.BP_QuestBase_C.GetSubObjectiveCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct ABP_QuestBase_C* GetActiveQuest(); // Function BP_QuestBase.BP_QuestBase_C.GetActiveQuest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText GetSubObjectiveState(int32_t Index, int32_t SubIndex, bool Completed, bool Hidden); // Function BP_QuestBase.BP_QuestBase_C.GetSubObjectiveState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText GetQuestDescription(); // Function BP_QuestBase.BP_QuestBase_C.GetQuestDescription // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_E27239C84FEE2ECDA1A4DC9F9BACC956(struct UObject* Loaded); // Function BP_QuestBase.BP_QuestBase_C.OnLoaded_E27239C84FEE2ECDA1A4DC9F9BACC956 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EndQuest(bool Failed); // Function BP_QuestBase.BP_QuestBase_C.EndQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnQuestStarted(); // Function BP_QuestBase.BP_QuestBase_C.OnQuestStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BP_OnRep_QuestState(); // Function BP_QuestBase.BP_QuestBase_C.BP_OnRep_QuestState // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void InitQuestListening(); // Function BP_QuestBase.BP_QuestBase_C.InitQuestListening // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitQuestSetup(); // Function BP_QuestBase.BP_QuestBase_C.InitQuestSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FakeIcarusBeginPlay(); // Function BP_QuestBase.BP_QuestBase_C.FakeIcarusBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRestoreFromDatabase(); // Function BP_QuestBase.BP_QuestBase_C.OnRestoreFromDatabase // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void InitQuestModifiers(); // Function BP_QuestBase.BP_QuestBase_C.InitQuestModifiers // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PrepareQuestListening(); // Function BP_QuestBase.BP_QuestBase_C.PrepareQuestListening // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IcarusBeginPlay(); // Function BP_QuestBase.BP_QuestBase_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseQuest(); // Function BP_QuestBase.BP_QuestBase_C.InitialiseQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CompleteQuest(); // Function BP_QuestBase.BP_QuestBase_C.CompleteQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_QuestBase(int32_t EntryPoint); // Function BP_QuestBase.BP_QuestBase_C.ExecuteUbergraph_BP_QuestBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void QuestStateUpdated__DelegateSignature(enum class EQuestFinishState QuestState); // Function BP_QuestBase.BP_QuestBase_C.QuestStateUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuestFinished__DelegateSignature(struct ABP_QuestBase_C* CompletedQuest, enum class EQuestFinishState State); // Function BP_QuestBase.BP_QuestBase_C.QuestFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

