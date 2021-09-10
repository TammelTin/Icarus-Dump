// WidgetBlueprintGeneratedClass UMG_CraftingProgressbar.UMG_CraftingProgressbar_C
// Size: 0x27c (Inherited: 0x260)
struct UUMG_CraftingProgressbar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_179; // 0x268(0x08)
	struct UImage* Progress; // 0x270(0x08)
	float CurrentProgress; // 0x278(0x04)

	void Construct(); // Function UMG_CraftingProgressbar.UMG_CraftingProgressbar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetProgress(float Percent); // Function UMG_CraftingProgressbar.UMG_CraftingProgressbar_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CraftingProgressbar(int32_t EntryPoint); // Function UMG_CraftingProgressbar.UMG_CraftingProgressbar_C.ExecuteUbergraph_UMG_CraftingProgressbar // (Final|UbergraphFunction) // @ game+0x1a05090
};

