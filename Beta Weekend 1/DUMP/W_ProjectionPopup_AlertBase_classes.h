// WidgetBlueprintGeneratedClass W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C
// Size: 0x2e4 (Inherited: 0x2b5)
struct UW_ProjectionPopup_AlertBase_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	float AlertValue; // 0x2c0(0x04)
	bool Cautious; // 0x2c4(0x01)
	bool Alert; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	float AlertValueSmoothed; // 0x2c8(0x04)
	float AlertInterpSpeed; // 0x2cc(0x04)
	struct UCurveLinearColor* ColourCurve; // 0x2d0(0x08)
	float HealthValue; // 0x2d8(0x04)
	float HealthValueSmoothed; // 0x2dc(0x04)
	float HealthInterpSpeed; // 0x2e0(0x04)

	void TickHealthVisuals(); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.TickHealthVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickAlertVisuals(); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.TickAlertVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void TickWidget(); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionPopup_AlertBase(int32_t EntryPoint); // Function W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C.ExecuteUbergraph_W_ProjectionPopup_AlertBase // (Final|UbergraphFunction) // @ game+0x1a05090
};

