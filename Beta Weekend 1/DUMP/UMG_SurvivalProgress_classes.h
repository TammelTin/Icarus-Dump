// WidgetBlueprintGeneratedClass UMG_SurvivalProgress.UMG_SurvivalProgress_C
// Size: 0x794 (Inherited: 0x260)
struct UUMG_SurvivalProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LowPulse; // 0x268(0x08)
	struct UImage* Divider; // 0x270(0x08)
	struct UImage* glowimage; // 0x278(0x08)
	struct UProgressBar* Level; // 0x280(0x08)
	struct UTextBlock* ProgressText; // 0x288(0x08)
	struct UBorder* StatGlowBorder; // 0x290(0x08)
	struct UImage* SurvivalIcon; // 0x298(0x08)
	float CurrentProgress; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FProgressBarStyle NormalStyle; // 0x2a8(0x1a0)
	struct FProgressBarStyle OrangeStyle; // 0x448(0x1a0)
	struct FProgressBarStyle WarningStyle; // 0x5e8(0x1a0)
	bool Green; // 0x788(0x01)
	bool Orange; // 0x789(0x01)
	bool Red; // 0x78a(0x01)
	char pad_78B[0x1]; // 0x78b(0x01)
	float GoodThreshold; // 0x78c(0x04)
	float BadThreshold; // 0x790(0x04)

	void SetType(enum class ESecondaryItemTypes SurvivalType); // Function UMG_SurvivalProgress.UMG_SurvivalProgress_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetProgress(float Percent, int32_t Current, int32_t Max); // Function UMG_SurvivalProgress.UMG_SurvivalProgress_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SurvivalProgress(int32_t EntryPoint); // Function UMG_SurvivalProgress.UMG_SurvivalProgress_C.ExecuteUbergraph_UMG_SurvivalProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

