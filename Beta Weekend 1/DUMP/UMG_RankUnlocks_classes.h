// WidgetBlueprintGeneratedClass UMG_RankUnlocks.UMG_RankUnlocks_C
// Size: 0x330 (Inherited: 0x260)
struct UUMG_RankUnlocks_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Corner; // 0x268(0x08)
	struct UButton* FrameButton; // 0x270(0x08)
	struct UImage* Gradient; // 0x278(0x08)
	struct UImage* MainImage; // 0x280(0x08)
	struct FSlateBrush IconBrush; // 0x288(0x88)
	struct UUMG_UnlockTooltip_C* UnlockTooltipWidget; // 0x310(0x08)
	struct FText In Tool Tip Text; // 0x318(0x18)

	void UpdateTooltipText(struct FText Text); // Function UMG_RankUnlocks.UMG_RankUnlocks_C.UpdateTooltipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Image(struct FSlateBrush Icon); // Function UMG_RankUnlocks.UMG_RankUnlocks_C.Update Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_RankUnlocks.UMG_RankUnlocks_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_RankUnlocks.UMG_RankUnlocks_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RankUnlocks(int32_t EntryPoint); // Function UMG_RankUnlocks.UMG_RankUnlocks_C.ExecuteUbergraph_UMG_RankUnlocks // (Final|UbergraphFunction) // @ game+0x1a05090
};

