// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C
// Size: 0x31c (Inherited: 0x260)
struct UUMG_ContextMenu_Radial_Item_C : UUserWidget {
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
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FMulticastInlineDelegate ContextItemSelected; // 0x300(0x10)
	struct FName ContextMenuItemIdentifier; // 0x310(0x08)
	int32_t ContextMenuItemPayload; // 0x318(0x04)

	void SetContextMenuItemData(struct FContextMenuItemData ContextMenuItemData); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.SetContextMenuItemData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SegmentClicked(); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.SegmentClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetScreenPosition(float InteractionLength); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.GetScreenPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLocalAngle(); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.SetLocalAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_F90C4F064D1EE4ED4FA90A802A59BE4C(struct UObject* Loaded); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.OnLoaded_F90C4F064D1EE4ED4FA90A802A59BE4C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void CreateStyle(); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.CreateStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AsyncLoadImage(struct TSoftObjectPtr<UTexture2D> Texture); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.AsyncLoadImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ContextMenu_Radial_Item(int32_t EntryPoint); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.ExecuteUbergraph_UMG_ContextMenu_Radial_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ContextItemSelected__DelegateSignature(struct FName ItemId, int32_t ItemPayload); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.ContextItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SegmentSelected__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* Selected); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.SegmentSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Highlighted__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* HighlightedSegment); // Function UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C.Highlighted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

