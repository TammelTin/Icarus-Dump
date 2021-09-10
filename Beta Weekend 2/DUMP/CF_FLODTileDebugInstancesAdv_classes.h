// WidgetBlueprintGeneratedClass CF_FLODTileDebugInstancesAdv.CF_FLODTileDebugInstancesAdv_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_FLODTileDebugInstancesAdv_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_FLODTileDebugInstancesAdv.CF_FLODTileDebugInstancesAdv_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnCheckboxStateChanged(bool NewState); // Function CF_FLODTileDebugInstancesAdv.CF_FLODTileDebugInstancesAdv_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_FLODTileDebugInstancesAdv(int32_t EntryPoint); // Function CF_FLODTileDebugInstancesAdv.CF_FLODTileDebugInstancesAdv_C.ExecuteUbergraph_CF_FLODTileDebugInstancesAdv // (Final|UbergraphFunction) // @ game+0x1a38c80
};

