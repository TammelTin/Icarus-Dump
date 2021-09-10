// WidgetBlueprintGeneratedClass UMG_SimpleProgressbar.UMG_SimpleProgressbar_C
// Size: 0x2ac (Inherited: 0x260)
struct UUMG_SimpleProgressbar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* Bar; // 0x268(0x08)
	struct UImage* Image_199; // 0x270(0x08)
	struct UTextBlock* ProgressTitle; // 0x278(0x08)
	struct FLinearColor FillColour; // 0x280(0x10)
	struct FText ProgressBarName; // 0x290(0x18)
	float Progress; // 0x2a8(0x04)

	float Get_Bar_Percent_1(); // Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.Get_Bar_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FLinearColor GetBarColours(); // Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.GetBarColours // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SimpleProgressbar(int32_t EntryPoint); // Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.ExecuteUbergraph_UMG_SimpleProgressbar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

