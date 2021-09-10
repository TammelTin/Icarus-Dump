// WidgetBlueprintGeneratedClass UMG_QuestWidget.UMG_QuestWidget_C
// Size: 0x2b8 (Inherited: 0x280)
struct UUMG_QuestWidget_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UScaleBox* IconScaleBox; // 0x290(0x08)
	struct FVector WorldSpaceCenter; // 0x298(0x0c)
	struct FVector WorldSpaceSize; // 0x2a4(0x0c)
	struct AQuestBase* QuestRef; // 0x2b0(0x08)

	void Construct(); // Function UMG_QuestWidget.UMG_QuestWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_QuestWidget(int32_t EntryPoint); // Function UMG_QuestWidget.UMG_QuestWidget_C.ExecuteUbergraph_UMG_QuestWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

