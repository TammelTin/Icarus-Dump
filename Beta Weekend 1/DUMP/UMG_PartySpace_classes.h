// WidgetBlueprintGeneratedClass UMG_PartySpace.UMG_PartySpace_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_PartySpace_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* PartyList; // 0x268(0x08)
	struct FMulticastInlineDelegate PartyReadyStateChanged; // 0x270(0x10)

	void PlayerPartyChanged(); // Function UMG_PartySpace.UMG_PartySpace_C.PlayerPartyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_PartySpace.UMG_PartySpace_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_PartySpace.UMG_PartySpace_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PartySpace(int32_t EntryPoint); // Function UMG_PartySpace.UMG_PartySpace_C.ExecuteUbergraph_UMG_PartySpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void PartyReadyStateChanged__DelegateSignature(bool AllPlayersReady); // Function UMG_PartySpace.UMG_PartySpace_C.PartyReadyStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

