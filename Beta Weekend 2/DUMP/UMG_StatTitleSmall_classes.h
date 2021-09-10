// WidgetBlueprintGeneratedClass UMG_StatTitleSmall.UMG_StatTitleSmall_C
// Size: 0x28c (Inherited: 0x260)
struct UUMG_StatTitleSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* StatValue; // 0x268(0x08)
	struct UImage* TitleIcon; // 0x270(0x08)
	struct FStatsEnum Stat; // 0x278(0x10)
	int32_t CurrentValue; // 0x288(0x04)

	void OnLoaded_46C6B22141961101A41777A9059B59B1(struct UObject* Loaded); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.OnLoaded_46C6B22141961101A41777A9059B59B1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateStatValue(); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.UpdateStatValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StatValueOverride(int32_t Value); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.StatValueOverride // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_StatTitleSmall(int32_t EntryPoint); // Function UMG_StatTitleSmall.UMG_StatTitleSmall_C.ExecuteUbergraph_UMG_StatTitleSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

