// WidgetBlueprintGeneratedClass UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C
// Size: 0x2e9 (Inherited: 0x260)
struct UUMG_EncumbranceBarLight_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Divider; // 0x268(0x08)
	struct UImage* Divider_2; // 0x270(0x08)
	struct UProgressBar* EncumbranceBar; // 0x278(0x08)
	struct UTextBlock* Title; // 0x280(0x08)
	struct UImage* WeightIcon; // 0x288(0x08)
	struct UTextBlock* WeightText; // 0x290(0x08)
	struct FSlateColor Green; // 0x298(0x28)
	struct FSlateColor Red; // 0x2c0(0x28)
	bool Initialised; // 0x2e8(0x01)

	void SetWeightBar(); // Function UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C.SetWeightBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetWeightText(); // Function UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C.SetWeightText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnPlayerWeightUpdated(int32_t NewWeight); // Function UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C.OnPlayerWeightUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_EncumbranceBarLight(int32_t EntryPoint); // Function UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C.ExecuteUbergraph_UMG_EncumbranceBarLight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

