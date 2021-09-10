// WidgetBlueprintGeneratedClass UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C
// Size: 0x2a8 (Inherited: 0x260)
struct UUMG_MissionCompleteFaction_C : UUserWidget {
	struct UTextBlock* MissionName; // 0x260(0x08)
	struct UTextBlock* Status; // 0x268(0x08)
	struct UImage* SuccessImage; // 0x270(0x08)
	bool Achieved; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FSlateColor Color; // 0x280(0x28)

	void Update(bool Success, struct FFactionMissionsRowHandle FactionMission); // Function UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

