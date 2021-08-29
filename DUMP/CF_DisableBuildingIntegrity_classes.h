// WidgetBlueprintGeneratedClass CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_DisableBuildingIntegrity_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnCheckboxStateChanged(bool NewState); // Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_DisableBuildingIntegrity(int32_t EntryPoint); // Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.ExecuteUbergraph_CF_DisableBuildingIntegrity // (Final|UbergraphFunction) // @ game+0x1a05090
};

