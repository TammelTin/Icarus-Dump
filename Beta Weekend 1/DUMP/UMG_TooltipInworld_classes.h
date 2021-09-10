// WidgetBlueprintGeneratedClass UMG_TooltipInworld.UMG_TooltipInworld_C
// Size: 0x399 (Inherited: 0x2b5)
struct UUMG_TooltipInworld_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2c0(0x08)
	struct UOverlay* DecayOverlay; // 0x2c8(0x08)
	struct UTextBlock* DecayPercent; // 0x2d0(0x08)
	struct UProgressBar* DecayProgress; // 0x2d8(0x08)
	struct UTextBlock* Description; // 0x2e0(0x08)
	struct UProgressBar* Durability; // 0x2e8(0x08)
	struct UOverlay* DurabilityOverlay; // 0x2f0(0x08)
	struct UTextBlock* DurabilityPercent; // 0x2f8(0x08)
	struct UUMG_FillableProgressBar_C* Fillable; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image_2; // 0x310(0x08)
	struct UImage* Image_3; // 0x318(0x08)
	struct UImage* Image_130; // 0x320(0x08)
	struct UImage* Image_193; // 0x328(0x08)
	struct UOverlay* MainOverlay; // 0x330(0x08)
	struct UTextBlock* Name; // 0x338(0x08)
	struct UImage* Pointer; // 0x340(0x08)
	struct URetainerBox* RetainerBox_1; // 0x348(0x08)
	struct UBorder* ShelterBorder; // 0x350(0x08)
	struct UImage* ShelterImage; // 0x358(0x08)
	struct UOverlay* ShelterOverlay; // 0x360(0x08)
	struct UTextBlock* Stack; // 0x368(0x08)
	struct UBorder* StackBorder; // 0x370(0x08)
	struct UTextBlock* TextBlock_Capacity; // 0x378(0x08)
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; // 0x380(0x08)
	struct TArray<struct FInteractableRowHandle> InteractablesToShowStatic; // 0x388(0x10)
	bool ShowShelteredIcon; // 0x398(0x01)

	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.SetProjectionActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ShouldUseOverride(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.ShouldUseOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetOverridePlacement(struct FVector2D Location, float ScaleAlpha); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.GetOverridePlacement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FLinearColor Get_Durability_FillColor(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.Get_Durability_FillColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateTooltip(struct AIcarusActor* InputItem); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.UpdateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWidget(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TooltipInworld(int32_t EntryPoint); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.ExecuteUbergraph_UMG_TooltipInworld // (Final|UbergraphFunction) // @ game+0x1a05090
};

