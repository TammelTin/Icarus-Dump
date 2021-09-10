// WidgetBlueprintGeneratedClass UMG_RadarInterface.UMG_RadarInterface_C
// Size: 0x278 (Inherited: 0x260)
struct UUMG_RadarInterface_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar_Scan; // 0x268(0x08)
	struct UTextBlock* TextBlock_Radar; // 0x270(0x08)

	void UpdateRadarInterfaceText(enum class ERadarInterfaceText Selection); // Function UMG_RadarInterface.UMG_RadarInterface_C.UpdateRadarInterfaceText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateScanProgressBar(float Percent); // Function UMG_RadarInterface.UMG_RadarInterface_C.UpdateScanProgressBar // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RadarInterface(int32_t EntryPoint); // Function UMG_RadarInterface.UMG_RadarInterface_C.ExecuteUbergraph_UMG_RadarInterface // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

