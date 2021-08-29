// WidgetBlueprintGeneratedClass FlammableComponentClassRow.FlammableComponentClassRow_C
// Size: 0x290 (Inherited: 0x260)
struct UFlammableComponentClassRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText ClassName; // 0x270(0x18)
	struct UFlammableComponent* Class; // 0x288(0x08)

	void SetClass(struct UFlammableComponent* FlammableClass); // Function FlammableComponentClassRow.FlammableComponentClassRow_C.SetClass // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_FlammableComponentClassRow(int32_t EntryPoint); // Function FlammableComponentClassRow.FlammableComponentClassRow_C.ExecuteUbergraph_FlammableComponentClassRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

