// WidgetBlueprintGeneratedClass UMG_Challenges.UMG_Challenges_C
// Size: 0x2bc (Inherited: 0x260)
struct UUMG_Challenges_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ChallengeProgress; // 0x268(0x08)
	struct UVerticalBox* Challenges; // 0x270(0x08)
	struct UWrapBox* ChallengesWrap; // 0x278(0x08)
	struct UTextBlock* Count; // 0x280(0x08)
	struct UImage* NoiseTexture; // 0x288(0x08)
	struct UUMG_ToggleButton_SettingControl_C* UMG_ToggleButton_SettingControl; // 0x290(0x08)
	struct UUMG_ToggleButton_SettingControl_C* UMG_ToggleButton_SettingControl_2; // 0x298(0x08)
	struct UUMG_ToggleButton_SettingControl_C* UMG_ToggleButton_SettingControl_3; // 0x2a0(0x08)
	struct UUMG_ToggleButton_SettingControl_C* UMG_ToggleButton_SettingControl_4; // 0x2a8(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x2b0(0x08)
	int32_t CompleteCount; // 0x2b8(0x04)

	void Construct(); // Function UMG_Challenges.UMG_Challenges_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ChallengesUpdated(); // Function UMG_Challenges.UMG_Challenges_C.ChallengesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Challenges(int32_t EntryPoint); // Function UMG_Challenges.UMG_Challenges_C.ExecuteUbergraph_UMG_Challenges // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

