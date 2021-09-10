// WidgetBlueprintGeneratedClass UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C
// Size: 0x278 (Inherited: 0x260)
struct UUMG_ProgressBarAnimatedLayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar; // 0x268(0x08)
	float Target; // 0x270(0x04)
	float Interp Speed; // 0x274(0x04)

	void GetCurrent(float Current); // Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.GetCurrent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IsAnimating(bool Animating); // Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.IsAnimating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetTarget(float Target, float Speed); // Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.SetTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ProgressBarAnimatedLayer(int32_t EntryPoint); // Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.ExecuteUbergraph_UMG_ProgressBarAnimatedLayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

