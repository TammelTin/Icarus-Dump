// WidgetBlueprintGeneratedClass UMG_Levelup.UMG_Levelup_C
// Size: 0x30c (Inherited: 0x260)
struct UUMG_Levelup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LevelUp_TierUnlock; // 0x268(0x08)
	struct UWidgetAnimation* LevelUp_Default; // 0x270(0x08)
	struct UImage* Arrow; // 0x278(0x08)
	struct UImage* Arrow_2; // 0x280(0x08)
	struct UProgressBar* BarBase; // 0x288(0x08)
	struct UImage* Base; // 0x290(0x08)
	struct UImage* Corner; // 0x298(0x08)
	struct UImage* Corner_2; // 0x2a0(0x08)
	struct UImage* Corner_3; // 0x2a8(0x08)
	struct UImage* Corner_4; // 0x2b0(0x08)
	struct UImage* Corner_5; // 0x2b8(0x08)
	struct UImage* Corner_6; // 0x2c0(0x08)
	struct UImage* Corner_7; // 0x2c8(0x08)
	struct UImage* Corner_8; // 0x2d0(0x08)
	struct UImage* Glow; // 0x2d8(0x08)
	struct UImage* Image_276; // 0x2e0(0x08)
	struct UTextBlock* LevelText; // 0x2e8(0x08)
	struct UImage* Star; // 0x2f0(0x08)
	struct UImage* TierUnlockImage; // 0x2f8(0x08)
	struct UTextBlock* TierUnlockName; // 0x300(0x08)
	int32_t CurrentLevel; // 0x308(0x04)

	bool UnlockCheck(int32_t Level, struct FItemableRowHandle Itemable); // Function UMG_Levelup.UMG_Levelup_C.UnlockCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Levelup.UMG_Levelup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnExperienceUpdated(); // Function UMG_Levelup.UMG_Levelup_C.OnExperienceUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Levelup(int32_t EntryPoint); // Function UMG_Levelup.UMG_Levelup_C.ExecuteUbergraph_UMG_Levelup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

