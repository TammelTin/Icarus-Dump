// WidgetBlueprintGeneratedClass UMG_TreePoints.UMG_TreePoints_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_TreePoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* GlowAnimation; // 0x268(0x08)
	struct UImage* Arrow; // 0x270(0x08)
	struct UImage* Arrow1; // 0x278(0x08)
	struct UImage* Arrow3; // 0x280(0x08)
	struct UImage* Arrow4; // 0x288(0x08)
	struct UTextBlock* PointsText; // 0x290(0x08)
	struct UBorder* TextBorder; // 0x298(0x08)
	struct FLinearColor PointsColour; // 0x2a0(0x10)
	struct FLinearColor TalentsColour; // 0x2b0(0x10)
	struct FLinearColor OrbitalColour; // 0x2c0(0x10)
	struct FLinearColor BlueprintColour; // 0x2d0(0x10)
	struct UTalentViewInterface* View; // 0x2e0(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_TreePoints.UMG_TreePoints_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetView(struct UTalentViewInterface* InView); // Function UMG_TreePoints.UMG_TreePoints_C.SetView // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnModelStateChanged(struct UTalentModelInterface_Const* Model); // Function UMG_TreePoints.UMG_TreePoints_C.OnModelStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePoints(struct UTalentModelInterface_Const* Model); // Function UMG_TreePoints.UMG_TreePoints_C.UpdatePoints // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TreePoints(int32_t EntryPoint); // Function UMG_TreePoints.UMG_TreePoints_C.ExecuteUbergraph_UMG_TreePoints // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

