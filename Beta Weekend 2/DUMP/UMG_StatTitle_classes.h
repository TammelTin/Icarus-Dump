// WidgetBlueprintGeneratedClass UMG_StatTitle.UMG_StatTitle_C
// Size: 0x291 (Inherited: 0x260)
struct UUMG_StatTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* StatValue; // 0x268(0x08)
	struct UImage* TitleIcon; // 0x270(0x08)
	struct UTextBlock* TitleText; // 0x278(0x08)
	struct FStatsEnum Stat; // 0x280(0x10)
	bool ShouldShowIcon; // 0x290(0x01)

	void OnLoaded_912710A14DB31FBA83B4ABB47E06B80D(struct UObject* Loaded); // Function UMG_StatTitle.UMG_StatTitle_C.OnLoaded_912710A14DB31FBA83B4ABB47E06B80D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_StatTitle.UMG_StatTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_StatTitle.UMG_StatTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdateStatValue(); // Function UMG_StatTitle.UMG_StatTitle_C.UpdateStatValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StatValueOverride(int32_t Value); // Function UMG_StatTitle.UMG_StatTitle_C.StatValueOverride // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_StatTitle(int32_t EntryPoint); // Function UMG_StatTitle.UMG_StatTitle_C.ExecuteUbergraph_UMG_StatTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

