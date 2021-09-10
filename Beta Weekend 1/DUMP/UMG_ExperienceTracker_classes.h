// WidgetBlueprintGeneratedClass UMG_ExperienceTracker.UMG_ExperienceTracker_C
// Size: 0x2df (Inherited: 0x260)
struct UUMG_ExperienceTracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FlashExpBar; // 0x268(0x08)
	struct UWidgetAnimation* FadeOutEXPBar; // 0x270(0x08)
	struct UWidgetAnimation* FadeInEXPBar; // 0x278(0x08)
	struct UTextBlock* AttributePoints; // 0x280(0x08)
	struct UTextBlock* BlueprintPoints; // 0x288(0x08)
	struct UProgressBar* DebtBar; // 0x290(0x08)
	struct UProgressBar* ExpBar; // 0x298(0x08)
	struct URetainerBox* ExpBarAndText; // 0x2a0(0x08)
	struct UTextBlock* ExpText; // 0x2a8(0x08)
	struct UTextBlock* LevelText; // 0x2b0(0x08)
	struct UTextBlock* LevelText_2; // 0x2b8(0x08)
	int32_t CachedLevel; // 0x2c0(0x04)
	bool EXPVisible; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float PreviousEXP; // 0x2c8(0x04)
	float Time; // 0x2cc(0x04)
	float TargetEXP; // 0x2d0(0x04)
	float TargetDebtEXP; // 0x2d4(0x04)
	float PreviousDebtEXP; // 0x2d8(0x04)
	bool BlueprintText; // 0x2dc(0x01)
	bool TalentsInitialized; // 0x2dd(0x01)
	bool ExperienceInitialised; // 0x2de(0x01)

	void GARBAGE(float DeltaTime); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.GARBAGE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Point Text(struct UTalentModelInterface_Const* Model, struct UTextBlock* Text Widget); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Update Point Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_0AE4788F4A5B07730F9D15A0EA2C6E85(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Finished_0AE4788F4A5B07730F9D15A0EA2C6E85 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_8874A4634270ECC8886C5F9F22417BDF(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Finished_8874A4634270ECC8886C5F9F22417BDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnExperienceUpdated(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.OnExperienceUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnPlayerModelChanged(struct UTalentModelInterface_Const* Model); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.OnPlayerModelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlueprintModelChanged(struct UTalentModelInterface_Const* Model); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.OnBlueprintModelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Experience and Level Text(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Update Experience and Level Text // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Level Up Glow(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Update Level Up Glow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Experience Bar Visibility(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Update Experience Bar Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Experience Debt Bar(); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.Update Experience Debt Bar // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.BlueprintModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayerModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.PlayerModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ExperienceTracker(int32_t EntryPoint); // Function UMG_ExperienceTracker.UMG_ExperienceTracker_C.ExecuteUbergraph_UMG_ExperienceTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

