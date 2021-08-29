// WidgetBlueprintGeneratedClass StringRow.StringRow_C
// Size: 0x298 (Inherited: 0x260)
struct UStringRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)
	struct FString String; // 0x288(0x10)

	void Set String(struct FString inString); // Function StringRow.StringRow_C.Set String // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_StringRow(int32_t EntryPoint); // Function StringRow.StringRow_C.ExecuteUbergraph_StringRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

