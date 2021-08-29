// WidgetBlueprintGeneratedClass CF_ViewStats.CF_ViewStats_C
// Size: 0x310 (Inherited: 0x2f0)
struct UCF_ViewStats_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	bool Virtual; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FString StatString; // 0x300(0x10)

	void Execute(); // Function CF_ViewStats.CF_ViewStats_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_ViewStats(int32_t EntryPoint); // Function CF_ViewStats.CF_ViewStats_C.ExecuteUbergraph_CF_ViewStats // (Final|UbergraphFunction) // @ game+0x1a05090
};

