// WidgetBlueprintGeneratedClass UMG_FillableProgressBar.UMG_FillableProgressBar_C
// Size: 0x27d (Inherited: 0x260)
struct UUMG_FillableProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Base; // 0x268(0x08)
	struct UImage* Progress; // 0x270(0x08)
	float CurrentProgress; // 0x278(0x04)
	enum class EIcarusResourceType Type; // 0x27c(0x01)

	void SetContainerType(enum class EIcarusResourceType ResourceType); // Function UMG_FillableProgressBar.UMG_FillableProgressBar_C.SetContainerType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_FillableProgressBar.UMG_FillableProgressBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetProgress(float Percent); // Function UMG_FillableProgressBar.UMG_FillableProgressBar_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_FillableProgressBar(int32_t EntryPoint); // Function UMG_FillableProgressBar.UMG_FillableProgressBar_C.ExecuteUbergraph_UMG_FillableProgressBar // (Final|UbergraphFunction) // @ game+0x1a05090
};

