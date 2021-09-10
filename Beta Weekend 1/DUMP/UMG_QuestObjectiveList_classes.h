// WidgetBlueprintGeneratedClass UMG_QuestObjectiveList.UMG_QuestObjectiveList_C
// Size: 0x331 (Inherited: 0x260)
struct UUMG_QuestObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* QuestCompleteSwap; // 0x268(0x08)
	struct UImage* Divider; // 0x270(0x08)
	struct UImage* Divider_2; // 0x278(0x08)
	struct UProgressBar* FactionOverallProgress; // 0x280(0x08)
	struct UTextBlock* MissionTitle; // 0x288(0x08)
	struct UVerticalBox* QuestList; // 0x290(0x08)
	struct UTextBlock* QuestName; // 0x298(0x08)
	struct URetainerBox* QuestNameRetainer; // 0x2a0(0x08)
	struct UBorder* Questsborder; // 0x2a8(0x08)
	struct UVerticalBox* QuestVertbox; // 0x2b0(0x08)
	struct URetainerBox* RetainerBox_2; // 0x2b8(0x08)
	struct UUMG_AudioWaveform_C* UMG_AudioWaveform; // 0x2c0(0x08)
	struct TArray<struct UUMG_QuestObjectiveEntry_C*> SubQuestWidgets; // 0x2c8(0x10)
	int32_t ObjectiveNum; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FText MissionName; // 0x2e0(0x18)
	struct TArray<struct FText> ObjectiveTextArray; // 0x2f8(0x10)
	int32_t CachedQuestIndex; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct AQuestBase* CachedActiveQuest; // 0x310(0x08)
	struct FText QuestText; // 0x318(0x18)
	bool UpdateAnimationPlaying; // 0x330(0x01)

	void SequenceEvent__ENTRYPOINTUMG_QuestObjectiveList_1(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.SequenceEvent__ENTRYPOINTUMG_QuestObjectiveList_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CheckQuestIndex(int32_t Index, struct AQuestBase* ActiveQuest); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.CheckQuestIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitQuestIndex(int32_t Index); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.InitQuestIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float Get_FactionOverallProgress(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.Get_FactionOverallProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Finished_A4CA36AB41613D84592D5CB8A1DC4C1B(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.Finished_A4CA36AB41613D84592D5CB8A1DC4C1B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SequenceEvent_1(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateQuestList(); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.UpdateQuestList // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_QuestObjectiveList(int32_t EntryPoint); // Function UMG_QuestObjectiveList.UMG_QuestObjectiveList_C.ExecuteUbergraph_UMG_QuestObjectiveList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

