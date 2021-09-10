// WidgetBlueprintGeneratedClass UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C
// Size: 0x2a0 (Inherited: 0x260)
struct UUMG_PartyMemberEndMission_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_89; // 0x268(0x08)
	struct UBorder* ColourBorder_2; // 0x270(0x08)
	struct UBorder* PlayerBorder; // 0x278(0x08)
	struct UBorder* PlayerIcon_2; // 0x280(0x08)
	struct UTextBlock* PlayerLevel; // 0x288(0x08)
	struct UTextBlock* PlayerNameText; // 0x290(0x08)
	struct APlayerState* PlayerState; // 0x298(0x08)

	struct FText GetPlayerLevel(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetPlayerLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FSlateBrush GetBackground_1(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetBackground_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetPlayerHealth(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetPlayerHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FSlateColor GetColorAndOpacity(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetPing(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetPlayerName(); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PartyMemberEndMission(int32_t EntryPoint); // Function UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C.ExecuteUbergraph_UMG_PartyMemberEndMission // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

