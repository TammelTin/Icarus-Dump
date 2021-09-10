// WidgetBlueprintGeneratedClass W_MainComputerTerminal.W_MainComputerTerminal_C
// Size: 0x34c (Inherited: 0x260)
struct UW_MainComputerTerminal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* MessagesVBox; // 0x268(0x08)
	struct UTextBlock* SystemStateText; // 0x270(0x08)
	struct TMap<enum class ESystemsStatuses, struct FText> SystemsStatusText; // 0x278(0x50)
	struct TMap<enum class ESystemsStatuses, struct FLinearColor> SystemsStatusColors; // 0x2c8(0x50)
	struct ABP_MainComputerTerminal_C* MainComputerTerminal; // 0x318(0x08)
	enum class ESystemsStatuses SystemStatus; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TArray<struct FText> StupidDebugMessages; // 0x328(0x10)
	struct ABP_HabManager_C* HabManager; // 0x338(0x08)
	struct FTimerHandle BlinkSystemStateTimer; // 0x340(0x08)
	int32_t Warnings; // 0x348(0x04)

	void Server_RefreshAll(); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.Server_RefreshAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_PropogateToAlarms(); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.Server_PropogateToAlarms // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ComponentUpdated(struct UBP_HabComponent_C* ComponentUpdated, enum class EHabObjectStatus Status); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.ComponentUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RefreshTerminal(); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.RefreshTerminal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlinkSystemStateText(); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.BlinkSystemStateText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_MainComputerTerminal(int32_t EntryPoint); // Function W_MainComputerTerminal.W_MainComputerTerminal_C.ExecuteUbergraph_W_MainComputerTerminal // (Final|UbergraphFunction) // @ game+0x1a38c80
};

