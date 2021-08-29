// WidgetBlueprintGeneratedClass UMG_Titlebar.UMG_Titlebar_C
// Size: 0x289 (Inherited: 0x260)
struct UUMG_Titlebar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TitleText; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)
	bool DisplayWeight; // 0x288(0x01)

	void PreConstruct(bool IsDesignTime); // Function UMG_Titlebar.UMG_Titlebar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Titlebar.UMG_Titlebar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Titlebar(int32_t EntryPoint); // Function UMG_Titlebar.UMG_Titlebar_C.ExecuteUbergraph_UMG_Titlebar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

