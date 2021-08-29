// WidgetBlueprintGeneratedClass UMG_Party.UMG_Party_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_Party_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* PartyList; // 0x268(0x08)
	bool Found; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct APlayerState* CurrentState; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_Party.UMG_Party_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Party.UMG_Party_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Party(int32_t EntryPoint); // Function UMG_Party.UMG_Party_C.ExecuteUbergraph_UMG_Party // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

