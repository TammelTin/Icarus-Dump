// WidgetBlueprintGeneratedClass UMG_MissionTimer.UMG_MissionTimer_C
// Size: 0x300 (Inherited: 0x260)
struct UUMG_MissionTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* WarningCriticalTime; // 0x268(0x08)
	struct UWidgetAnimation* WarningLowTime; // 0x270(0x08)
	struct UTextBlock* Days; // 0x278(0x08)
	struct UTextBlock* Hours; // 0x280(0x08)
	struct UBorder* MainBorder; // 0x288(0x08)
	struct UBorder* MediumLowTime; // 0x290(0x08)
	struct UTextBlock* Mins; // 0x298(0x08)
	struct UTextBlock* Return; // 0x2a0(0x08)
	struct UTextBlock* Seconds; // 0x2a8(0x08)
	struct UTextBlock* TimeCritical; // 0x2b0(0x08)
	struct UTextBlock* TimeRunningLow; // 0x2b8(0x08)
	struct UImage* WarningSymbols; // 0x2c0(0x08)
	struct UImage* WarningSymbols2; // 0x2c8(0x08)
	struct UTextBlock* WarningText; // 0x2d0(0x08)
	struct FLinearColor Green; // 0x2d8(0x10)
	struct FLinearColor Orange; // 0x2e8(0x10)
	struct UCurveLinearColor* ColorCurve; // 0x2f8(0x08)

	void SetTime(struct TArray<struct FString> Time); // Function UMG_MissionTimer.UMG_MissionTimer_C.SetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_MissionTimer.UMG_MissionTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_MissionTimer(int32_t EntryPoint); // Function UMG_MissionTimer.UMG_MissionTimer_C.ExecuteUbergraph_UMG_MissionTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

