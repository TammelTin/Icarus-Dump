// WidgetBlueprintGeneratedClass UMG_CharacterInfo.UMG_CharacterInfo_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_CharacterInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterName; // 0x268(0x08)
	struct UTextBlock* ExpAmountText; // 0x270(0x08)
	struct UProgressBar* ExperienceBar; // 0x278(0x08)
	struct UTextBlock* LevelText_4; // 0x280(0x08)
	float NewVar_1; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UUMG_SettingTooltipText_C* CustomTooltipWidget; // 0x290(0x08)

	void GetExpAmount(); // Function UMG_CharacterInfo.UMG_CharacterInfo_C.GetExpAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_CharacterInfo.UMG_CharacterInfo_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnExperienceUpdated(); // Function UMG_CharacterInfo.UMG_CharacterInfo_C.OnExperienceUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CharacterInfo(int32_t EntryPoint); // Function UMG_CharacterInfo.UMG_CharacterInfo_C.ExecuteUbergraph_UMG_CharacterInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

