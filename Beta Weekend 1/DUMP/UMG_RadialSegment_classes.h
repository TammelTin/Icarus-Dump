// WidgetBlueprintGeneratedClass UMG_RadialSegment.UMG_RadialSegment_C
// Size: 0x2f9 (Inherited: 0x260)
struct UUMG_RadialSegment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* ContentBox; // 0x268(0x08)
	struct UImage* ContentImage; // 0x270(0x08)
	struct UTextBlock* CountText; // 0x278(0x08)
	struct UImage* LockImage; // 0x280(0x08)
	struct UImage* RadialSegmentImage; // 0x288(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x290(0x08)
	float LocalAngle; // 0x298(0x04)
	float StartPoint; // 0x29c(0x04)
	float DegreeValue; // 0x2a0(0x04)
	float MouseMin; // 0x2a4(0x04)
	float MouseMax; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate Highlighted; // 0x2b0(0x10)
	int32_t Number; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FMulticastInlineDelegate SegmentSelected; // 0x2c8(0x10)
	struct FText Selected Text; // 0x2d8(0x18)
	struct FVector2D PointToRotate; // 0x2f0(0x08)
	bool Disabled; // 0x2f8(0x01)

	void Setup(struct TSoftObjectPtr<UTexture2D> Icon, int32_t Count, struct FText SelectedText, bool Disabled); // Function UMG_RadialSegment.UMG_RadialSegment_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SegmentClicked(); // Function UMG_RadialSegment.UMG_RadialSegment_C.SegmentClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetScreenPosition(float InteractionLength); // Function UMG_RadialSegment.UMG_RadialSegment_C.GetScreenPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLocalAngle(); // Function UMG_RadialSegment.UMG_RadialSegment_C.SetLocalAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_4FFC1E7F44CB8EFE1078FFAC83DF2D57(struct UObject* Loaded); // Function UMG_RadialSegment.UMG_RadialSegment_C.OnLoaded_4FFC1E7F44CB8EFE1078FFAC83DF2D57 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_RadialSegment.UMG_RadialSegment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void CreateStyle(); // Function UMG_RadialSegment.UMG_RadialSegment_C.CreateStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RadialSegment.UMG_RadialSegment_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AsyncLoadImage(struct TSoftObjectPtr<UTexture2D> Texture); // Function UMG_RadialSegment.UMG_RadialSegment_C.AsyncLoadImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RadialSegment(int32_t EntryPoint); // Function UMG_RadialSegment.UMG_RadialSegment_C.ExecuteUbergraph_UMG_RadialSegment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SegmentSelected__DelegateSignature(struct UUMG_RadialSegment_C* Selected); // Function UMG_RadialSegment.UMG_RadialSegment_C.SegmentSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Highlighted__DelegateSignature(struct UUMG_RadialSegment_C* HighlightedSegment); // Function UMG_RadialSegment.UMG_RadialSegment_C.Highlighted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

