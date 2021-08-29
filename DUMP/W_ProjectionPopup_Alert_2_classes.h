// WidgetBlueprintGeneratedClass W_ProjectionPopup_Alert_2.W_ProjectionPopup_Alert_1_C
// Size: 0x328 (Inherited: 0x2e4)
struct UW_ProjectionPopup_Alert_1_C : UW_ProjectionPopup_AlertBase_C {
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UImage* AlertFrame; // 0x2e8(0x08)
	struct UImage* AlertLines; // 0x2f0(0x08)
	struct UImage* EyeImage; // 0x2f8(0x08)
	struct UProgressBar* HealthBar_Left; // 0x300(0x08)
	struct UProgressBar* HealthBar_Right; // 0x308(0x08)
	struct UProgressBar* ProgressBar_Right; // 0x310(0x08)
	struct UProgressBar* ProgressBar_Vertical; // 0x318(0x08)
	struct URetainerBox* RetainerBox_1; // 0x320(0x08)

	void UpdateAlertVisibility(); // Function W_ProjectionPopup_Alert_2.W_ProjectionPopup_Alert_1_C.UpdateAlertVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickHealthVisuals(); // Function W_ProjectionPopup_Alert_2.W_ProjectionPopup_Alert_1_C.TickHealthVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickAlertVisuals(); // Function W_ProjectionPopup_Alert_2.W_ProjectionPopup_Alert_1_C.TickAlertVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

