// WidgetBlueprintGeneratedClass UMG_TalentGraph_Base.UMG_TalentGraph_Base_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_TalentGraph_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct TArray<struct FTalentTreesRowHandle> TalentTrees; // 0x268(0x10)
	struct UTalentViewInterface* TalentView; // 0x278(0x08)
	struct TArray<struct UTalentTreeWidget*> TalentTreeWidgets; // 0x280(0x10)

	void PreConstruct(bool IsDesignTime); // Function UMG_TalentGraph_Base.UMG_TalentGraph_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnTalentTreeAdded(struct UUMG_TalentTree_C* TalentTree); // Function UMG_TalentGraph_Base.UMG_TalentGraph_Base_C.OnTalentTreeAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TalentGraph_Base(int32_t EntryPoint); // Function UMG_TalentGraph_Base.UMG_TalentGraph_Base_C.ExecuteUbergraph_UMG_TalentGraph_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

