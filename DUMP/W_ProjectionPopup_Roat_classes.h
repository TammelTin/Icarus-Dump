// WidgetBlueprintGeneratedClass W_ProjectionPopup_Roat.W_ProjectionPopup_Roat_C
// Size: 0x2fc (Inherited: 0x2e0)
struct UW_ProjectionPopup_Roat_C : UW_ProjectionWidget_Hunting_C {
	struct UTextBlock* AgeText; // 0x2e0(0x08)
	struct UTextBlock* DistanceText; // 0x2e8(0x08)
	struct UImage* ProjectionImage; // 0x2f0(0x08)
	float Distance; // 0x2f8(0x04)

	void UpdateVisuals(); // Function W_ProjectionPopup_Roat.W_ProjectionPopup_Roat_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetDistance(float Distance); // Function W_ProjectionPopup_Roat.W_ProjectionPopup_Roat_C.SetDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

