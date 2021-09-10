// WidgetBlueprintGeneratedClass CF_DebugLogging.CF_DebugLogging_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_DebugLogging_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_DebugLogging.CF_DebugLogging_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CF_DebugLogging.CF_DebugLogging_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnCheckboxStateChanged(bool NewState); // Function CF_DebugLogging.CF_DebugLogging_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_DebugLogging(int32_t EntryPoint); // Function CF_DebugLogging.CF_DebugLogging_C.ExecuteUbergraph_CF_DebugLogging // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

