// BlueprintGeneratedClass BP_QuestModifierBase.BP_QuestModifierBase_C
// Size: 0xe9 (Inherited: 0xc0)
struct UBP_QuestModifierBase_C : UQuestModifierBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct FQuestModifiersMultiRowHandle QuestModifierRow; // 0xc8(0x18)
	struct ABP_QuestBase_C* OwningQuest; // 0xe0(0x08)
	enum class EQuestsTableType QuestType; // 0xe8(0x01)

	void OwningQuestStateUpdated(enum class EQuestFinishState QuestState); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.OwningQuestStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetRelevantLocation(); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.GetRelevantLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AIcarusActor* GetRelevantIcarusActor(); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.GetRelevantIcarusActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AActor* GetRelevantActor(); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.GetRelevantActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitQuestListening(); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.InitQuestListening // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_QuestModifierBase(int32_t EntryPoint); // Function BP_QuestModifierBase.BP_QuestModifierBase_C.ExecuteUbergraph_BP_QuestModifierBase // (Final|UbergraphFunction) // @ game+0x1a38c80
};

