// WidgetBlueprintGeneratedClass UMG_Stamina.UMG_Stamina_C
// Size: 0x640 (Inherited: 0x260)
struct UUMG_Stamina_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PopinStamina; // 0x268(0x08)
	struct UWidgetAnimation* StaminaDepleted; // 0x270(0x08)
	struct UWidgetAnimation* FadeOutStamina; // 0x278(0x08)
	struct UUMG_ProgressBar_C* AnimatedStaminaBar; // 0x280(0x08)
	struct UImage* Border; // 0x288(0x08)
	struct UOverlay* StaminaBarOverlay; // 0x290(0x08)
	struct URetainerBox* StaminaBox; // 0x298(0x08)
	struct UImage* StaminaBoxBorder; // 0x2a0(0x08)
	struct UOverlay* StaminaDepletedBorder; // 0x2a8(0x08)
	struct UTextBlock* StaminaDepletedText; // 0x2b0(0x08)
	struct UCanvasPanel* StaminaFoodLineCanvas; // 0x2b8(0x08)
	struct UImage* StaminaIcon; // 0x2c0(0x08)
	struct USizeBox* StaminaSizeBox; // 0x2c8(0x08)
	struct USpacer* StaminaSpacerAnchor; // 0x2d0(0x08)
	struct TArray<int32_t> StaminaLinePositions; // 0x2d8(0x10)
	bool StaminaFull; // 0x2e8(0x01)
	bool LowStamina; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct FProgressBarStyle NormalStaminaBarStyle; // 0x2f0(0x1a0)
	struct FProgressBarStyle WarningStaminaBarStyle; // 0x490(0x1a0)
	bool NoStamina; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct UCurveLinearColor* StaminaColourCurve; // 0x638(0x08)

	void NoStaminaWarning(); // Function UMG_Stamina.UMG_Stamina_C.NoStaminaWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LowStaminaWarning(); // Function UMG_Stamina.UMG_Stamina_C.LowStaminaWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideStaminaBar(); // Function UMG_Stamina.UMG_Stamina_C.HideStaminaBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnPaint(struct FPaintContext Context); // Function UMG_Stamina.UMG_Stamina_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	float GetStamina(); // Function UMG_Stamina.UMG_Stamina_C.GetStamina // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Stamina.UMG_Stamina_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateStaminaBar(); // Function UMG_Stamina.UMG_Stamina_C.UpdateStaminaBar // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Stamina(int32_t EntryPoint); // Function UMG_Stamina.UMG_Stamina_C.ExecuteUbergraph_UMG_Stamina // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

