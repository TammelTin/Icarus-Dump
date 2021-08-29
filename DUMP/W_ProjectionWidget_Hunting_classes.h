// WidgetBlueprintGeneratedClass W_ProjectionWidget_Hunting.W_ProjectionWidget_Hunting_C
// Size: 0x2e0 (Inherited: 0x2b5)
struct UW_ProjectionWidget_Hunting_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	enum class ESlateVisibility AgeVisibility; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FText AgeTextVar; // 0x2c8(0x18)

	void TickWidget(); // Function W_ProjectionWidget_Hunting.W_ProjectionWidget_Hunting_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionWidget_Hunting(int32_t EntryPoint); // Function W_ProjectionWidget_Hunting.W_ProjectionWidget_Hunting_C.ExecuteUbergraph_W_ProjectionWidget_Hunting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

