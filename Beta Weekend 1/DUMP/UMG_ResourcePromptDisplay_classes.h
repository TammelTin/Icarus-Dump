// WidgetBlueprintGeneratedClass UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C
// Size: 0x2f0 (Inherited: 0x260)
struct UUMG_ResourcePromptDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UWidgetAnimation* UpandFade; // 0x270(0x08)
	struct UVerticalBox* ResourceList; // 0x278(0x08)
	struct TArray<struct FFResourcePromptInfo> Queue; // 0x280(0x10)
	struct TArray<struct FFResourcePromptInfo> TempQueue; // 0x290(0x10)
	struct TMap<struct FName, struct UUMG_ResourcePrompt_C*> WidgetMap; // 0x2a0(0x50)

	void AddResource(struct FItemData Item, int32_t Count); // Function UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C.AddResource // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ResourceRemoved(struct FName Item); // Function UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C.ResourceRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ResourcePromptDisplay(int32_t EntryPoint); // Function UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C.ExecuteUbergraph_UMG_ResourcePromptDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

