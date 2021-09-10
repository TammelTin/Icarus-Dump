// WidgetBlueprintGeneratedClass UMG_PartyMember.UMG_PartyMember_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_PartyMember_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterName; // 0x268(0x08)
	struct UOverlay* HealthBar; // 0x270(0x08)
	struct UBorder* HostIcon; // 0x278(0x08)
	struct UTextBlock* HostText; // 0x280(0x08)
	struct UImage* Image_223; // 0x288(0x08)
	struct UTextBlock* Ping; // 0x290(0x08)
	struct UTextBlock* PingText; // 0x298(0x08)
	struct UProgressBar* PlayerHealth; // 0x2a0(0x08)
	struct UBorder* PlayerIcon; // 0x2a8(0x08)
	struct UTextBlock* PlayerName; // 0x2b0(0x08)
	struct APlayerState* PlayerState; // 0x2b8(0x08)

	struct FSlateBrush GetBackground_1(); // Function UMG_PartyMember.UMG_PartyMember_C.GetBackground_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	float GetPlayerHealth(); // Function UMG_PartyMember.UMG_PartyMember_C.GetPlayerHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FSlateColor GetColorAndOpacity(); // Function UMG_PartyMember.UMG_PartyMember_C.GetColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetPing(); // Function UMG_PartyMember.UMG_PartyMember_C.GetPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetHost(); // Function UMG_PartyMember.UMG_PartyMember_C.GetHost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetPlayerName(); // Function UMG_PartyMember.UMG_PartyMember_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetCharacterName(); // Function UMG_PartyMember.UMG_PartyMember_C.GetCharacterName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Construct(); // Function UMG_PartyMember.UMG_PartyMember_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_PartyMember.UMG_PartyMember_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StatsUpdated(); // Function UMG_PartyMember.UMG_PartyMember_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_PartyMember(int32_t EntryPoint); // Function UMG_PartyMember.UMG_PartyMember_C.ExecuteUbergraph_UMG_PartyMember // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

