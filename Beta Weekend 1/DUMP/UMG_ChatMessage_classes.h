// WidgetBlueprintGeneratedClass UMG_ChatMessage.UMG_ChatMessage_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_ChatMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Avatar; // 0x268(0x08)
	struct UTextBlock* Message; // 0x270(0x08)
	struct UTextBlock* PlayerName; // 0x278(0x08)
	struct FTChatMessage ChatMessage; // 0x280(0x40)

	void Initialise(); // Function UMG_ChatMessage.UMG_ChatMessage_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ChatMessage.UMG_ChatMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ChatMessage(int32_t EntryPoint); // Function UMG_ChatMessage.UMG_ChatMessage_C.ExecuteUbergraph_UMG_ChatMessage // (Final|UbergraphFunction) // @ game+0x1a05090
};

