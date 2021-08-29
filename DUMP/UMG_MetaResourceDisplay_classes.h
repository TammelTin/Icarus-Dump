// WidgetBlueprintGeneratedClass UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C
// Size: 0x380 (Inherited: 0x280)
struct UUMG_MetaResourceDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* CostText; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct USizeBox* IconSizeBox; // 0x298(0x08)
	struct USizeBox* MetaPlaceholder; // 0x2a0(0x08)
	struct UHorizontalBox* Resources; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_120; // 0x2b0(0x08)
	struct FSlateColor ExoticColour; // 0x2b8(0x28)
	struct FText ExoticName; // 0x2e0(0x18)
	struct FSlateBrush ExoticIcon; // 0x2f8(0x88)

	void Update(); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MetaResourceDisplay(int32_t EntryPoint); // Function UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C.ExecuteUbergraph_UMG_MetaResourceDisplay // (Final|UbergraphFunction) // @ game+0x1a05090
};

