// BlueprintGeneratedClass BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C
// Size: 0x120 (Inherited: 0xe9)
struct UBP_QuestVocalisationModifier_C : UBP_QuestModifierBase_C {
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	float InitialVocalisationDelay; // 0xf8(0x04)
	int32_t ReminderIndex; // 0xfc(0x04)
	struct UFMODEvent* InterruptSFX; // 0x100(0x08)
	float InterruptPlayDelayLength; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FTimerHandle PlayDelayTimer; // 0x110(0x08)
	struct UFMODAudioComponent* AudioComponent; // 0x118(0x08)

	void GetVocalisationForState(struct FQuestVocalisationModifier Data, enum class EQuestVocalisationType State, int32_t Index, struct UFMODEvent* FMODEvent); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.GetVocalisationForState // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetQuestState(enum class EQuestFinishState QuestState); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.GetQuestState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetFinishDelay(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.GetFinishDelay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetVocalisationData(struct FQuestVocalisationModifier Return Value); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.GetVocalisationData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OwningQuestStateUpdated(enum class EQuestFinishState QuestState); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.OwningQuestStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool PlayerCheck(struct TArray<struct AIcarusPlayerCharacter*> RelevantPlayers); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.PlayerCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitQuestListening(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.InitQuestListening // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTICAST_PlayAudioForState(struct TArray<struct AIcarusPlayerCharacter*> RelevantPlayers, enum class EQuestVocalisationType State, int32_t Index); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.MULTICAST_PlayAudioForState // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void QuestActiveUpdate(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.QuestActiveUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayInitialVocalisation(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.PlayInitialVocalisation // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayAudioForState(enum class EQuestVocalisationType State, int32_t Index); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.PlayAudioForState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayDelayed(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.PlayDelayed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_QuestVocalisationModifier(int32_t EntryPoint); // Function BP_QuestVocalisationModifier.BP_QuestVocalisationModifier_C.ExecuteUbergraph_BP_QuestVocalisationModifier // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

