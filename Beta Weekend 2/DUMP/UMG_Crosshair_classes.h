// WidgetBlueprintGeneratedClass UMG_Crosshair.UMG_Crosshair_C
// Size: 0x2f8 (Inherited: 0x260)
struct UUMG_Crosshair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bottom_2; // 0x268(0x08)
	struct UImage* Centre_2; // 0x270(0x08)
	struct UImage* Left_2; // 0x278(0x08)
	struct UOverlay* Overlay_45; // 0x280(0x08)
	struct UImage* Right_2; // 0x288(0x08)
	struct UImage* Top_2; // 0x290(0x08)
	float MinSize; // 0x298(0x04)
	float MaxSize; // 0x29c(0x04)
	float Scale; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UTexture2D* CentreTexture; // 0x2a8(0x08)
	struct UTexture2D* CentreTextureFocused; // 0x2b0(0x08)
	struct UTexture2D* OutsideTexture; // 0x2b8(0x08)
	struct UTexture2D* OutsideTextureFocused; // 0x2c0(0x08)
	bool Focused; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UBP_ActionableBehaviour_Firearm_C* FirearmRef; // 0x2d0(0x08)
	float CurrentAlpha; // 0x2d8(0x04)
	bool BowMode; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UBP_ActionableBehaviour_Firearm_Base_C* FirearmBase; // 0x2e0(0x08)
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* AimController; // 0x2e8(0x08)
	struct UBP_ActionableBehaviour_FireArm_FireController_Charge_C* ChargeFireController; // 0x2f0(0x08)

	bool GetCrosshairVisibility(); // Function UMG_Crosshair.UMG_Crosshair_C.GetCrosshairVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ToggleBowMode(bool On); // Function UMG_Crosshair.UMG_Crosshair_C.ToggleBowMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateBowMode(); // Function UMG_Crosshair.UMG_Crosshair_C.UpdateBowMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTextures(); // Function UMG_Crosshair.UMG_Crosshair_C.UpdateTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetInteractionFocus(bool Focusing); // Function UMG_Crosshair.UMG_Crosshair_C.SetInteractionFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCrosshair(float Alpha); // Function UMG_Crosshair.UMG_Crosshair_C.UpdateCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Crosshair.UMG_Crosshair_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Crosshair(int32_t EntryPoint); // Function UMG_Crosshair.UMG_Crosshair_C.ExecuteUbergraph_UMG_Crosshair // (Final|UbergraphFunction) // @ game+0x1a38c80
};

