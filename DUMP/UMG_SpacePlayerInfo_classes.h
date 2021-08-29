// WidgetBlueprintGeneratedClass UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
// Size: 0x299 (Inherited: 0x260)
struct UUMG_SpacePlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Credits; // 0x268(0x08)
	struct UImage* Icons; // 0x270(0x08)
	struct UTextBlock* PlayerLevel; // 0x278(0x08)
	struct UTextBlock* PlayerLevel_2; // 0x280(0x08)
	struct UTextBlock* PlayerName; // 0x288(0x08)
	struct UImage* RankBadgeImage; // 0x290(0x08)
	bool Initialised; // 0x298(0x01)

	void CreditsUpdated(); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.CreditsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SpacePlayerInfo(int32_t EntryPoint); // Function UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C.ExecuteUbergraph_UMG_SpacePlayerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

