// WidgetBlueprintGeneratedClass UMG_RadarIcon.UMG_RadarIcon_C
// Size: 0x2e8 (Inherited: 0x280)
struct UUMG_RadarIcon_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UScaleBox* IconScaleBox; // 0x290(0x08)
	struct UCanvasPanel* LabelCanvas; // 0x298(0x08)
	struct UImage* LabelLineImage; // 0x2a0(0x08)
	struct UScaleBox* LabelScaleBox_1; // 0x2a8(0x08)
	struct UTextBlock* LabelText; // 0x2b0(0x08)
	struct USizeBox* SizeBox_1; // 0x2b8(0x08)
	bool DrawLabel; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FVector2D DirectionalOffset; // 0x2c4(0x08)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UUMG_RadarIcon_C* MasterIcon; // 0x2d0(0x08)
	struct FString LabelString; // 0x2d8(0x10)

	void SetShouldDrawLabel(bool DrawLabel); // Function UMG_RadarIcon.UMG_RadarIcon_C.SetShouldDrawLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ApplyLabelPosition(enum class RotationalDirections RelativePosition); // Function UMG_RadarIcon.UMG_RadarIcon_C.ApplyLabelPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_RadarIcon.UMG_RadarIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RadarIcon.UMG_RadarIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_RadarIcon(int32_t EntryPoint); // Function UMG_RadarIcon.UMG_RadarIcon_C.ExecuteUbergraph_UMG_RadarIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

