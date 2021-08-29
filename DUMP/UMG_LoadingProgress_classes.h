// WidgetBlueprintGeneratedClass UMG_LoadingProgress.UMG_LoadingProgress_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_LoadingProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_LoadingIcon_C* LoadingIcon; // 0x268(0x08)
	struct UTextBlock* Text; // 0x270(0x08)
	struct FText LoadingText; // 0x278(0x18)

	void LoadingStateChanged(bool HideLoadingIcon, struct FText StateText); // Function UMG_LoadingProgress.UMG_LoadingProgress_C.LoadingStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_LoadingProgress.UMG_LoadingProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_LoadingProgress(int32_t EntryPoint); // Function UMG_LoadingProgress.UMG_LoadingProgress_C.ExecuteUbergraph_UMG_LoadingProgress // (Final|UbergraphFunction) // @ game+0x1a05090
};

