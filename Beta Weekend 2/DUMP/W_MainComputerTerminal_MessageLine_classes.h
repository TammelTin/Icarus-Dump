// WidgetBlueprintGeneratedClass W_MainComputerTerminal_MessageLine.W_MainComputerTerminal_MessageLine_C
// Size: 0x2b0 (Inherited: 0x260)
struct UW_MainComputerTerminal_MessageLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* MessageText; // 0x268(0x08)
	struct FText Message; // 0x270(0x18)
	struct FText LinePrefix; // 0x288(0x18)
	struct FLinearColor LineColor; // 0x2a0(0x10)

	void Construct(); // Function W_MainComputerTerminal_MessageLine.W_MainComputerTerminal_MessageLine_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_MainComputerTerminal_MessageLine(int32_t EntryPoint); // Function W_MainComputerTerminal_MessageLine.W_MainComputerTerminal_MessageLine_C.ExecuteUbergraph_W_MainComputerTerminal_MessageLine // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

