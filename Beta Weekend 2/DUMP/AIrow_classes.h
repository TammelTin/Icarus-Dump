// WidgetBlueprintGeneratedClass AIrow.AIRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UAIRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText SetupName; // 0x270(0x18)
	struct FAISetupRowHandle AISetup; // 0x288(0x18)

	void AddAI(struct FText RowName); // Function AIrow.AIRow_C.AddAI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_AIRow(int32_t EntryPoint); // Function AIrow.AIRow_C.ExecuteUbergraph_AIRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

