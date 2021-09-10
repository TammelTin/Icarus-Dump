// WidgetBlueprintGeneratedClass UMG_ProgressBar.UMG_ProgressBar_C
// Size: 0x2d4 (Inherited: 0x260)
struct UUMG_ProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_ProgressBarAnimatedLayer_C* Actual; // 0x268(0x08)
	struct UOverlay* BarOverlay; // 0x270(0x08)
	struct UUMG_ProgressBarAnimatedLayer_C* Damage; // 0x278(0x08)
	struct UUMG_ProgressBarAnimatedLayer_C* Heal; // 0x280(0x08)
	struct USizeBox* SizeBar; // 0x288(0x08)
	float In Height Override; // 0x290(0x04)
	float In Width Override; // 0x294(0x04)
	struct UCurveLinearColor* ColorCurve; // 0x298(0x08)
	struct FLinearColor ProgressUpColour; // 0x2a0(0x10)
	struct FLinearColor ProgressDownColour; // 0x2b0(0x10)
	struct FLinearColor DamageColour; // 0x2c0(0x10)
	float InitialPercentage; // 0x2d0(0x04)

	void SetStyle(); // Function UMG_ProgressBar.UMG_ProgressBar_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTarget(float NewTarget, float Speed); // Function UMG_ProgressBar.UMG_ProgressBar_C.SetTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_ProgressBar.UMG_ProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ProgressBar.UMG_ProgressBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ProgressBar(int32_t EntryPoint); // Function UMG_ProgressBar.UMG_ProgressBar_C.ExecuteUbergraph_UMG_ProgressBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

