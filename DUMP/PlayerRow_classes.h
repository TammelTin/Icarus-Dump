// WidgetBlueprintGeneratedClass PlayerRow.PlayerRow_C
// Size: 0x290 (Inherited: 0x260)
struct UPlayerRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText PlayerName; // 0x270(0x18)
	struct APlayerState* Player; // 0x288(0x08)

	void AddPlayer(struct APlayerState* Player); // Function PlayerRow.PlayerRow_C.AddPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_PlayerRow(int32_t EntryPoint); // Function PlayerRow.PlayerRow_C.ExecuteUbergraph_PlayerRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

