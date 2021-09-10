// WidgetBlueprintGeneratedClass UMG_GameMessage.UMG_GameMessage_C
// Size: 0x2b4 (Inherited: 0x260)
struct UUMG_GameMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Blink; // 0x268(0x08)
	struct UBorder* BGFill; // 0x270(0x08)
	struct UImage* Border; // 0x278(0x08)
	struct UTextBlock* MessageText; // 0x280(0x08)
	struct UOverlay* WarningBorder; // 0x288(0x08)
	bool IsError; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FText Message; // 0x298(0x18)
	float MessageLifespan; // 0x2b0(0x04)

	void Construct(); // Function UMG_GameMessage.UMG_GameMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void RemoveMessage(); // Function UMG_GameMessage.UMG_GameMessage_C.RemoveMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_GameMessage(int32_t EntryPoint); // Function UMG_GameMessage.UMG_GameMessage_C.ExecuteUbergraph_UMG_GameMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

