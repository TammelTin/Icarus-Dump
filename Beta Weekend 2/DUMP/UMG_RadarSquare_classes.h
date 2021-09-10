// WidgetBlueprintGeneratedClass UMG_RadarSquare.UMG_RadarSquare_C
// Size: 0x2b1 (Inherited: 0x280)
struct UUMG_RadarSquare_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UScaleBox* IconScaleBox; // 0x290(0x08)
	struct FVector WorldSpaceCenter; // 0x298(0x0c)
	struct FVector WorldSpaceSize; // 0x2a4(0x0c)
	enum class MapTileRadarFlag RadarTileFlag; // 0x2b0(0x01)

	void Construct(); // Function UMG_RadarSquare.UMG_RadarSquare_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_RadarSquare(int32_t EntryPoint); // Function UMG_RadarSquare.UMG_RadarSquare_C.ExecuteUbergraph_UMG_RadarSquare // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

