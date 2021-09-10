// WidgetBlueprintGeneratedClass UMG_InteractionPrompt.UMG_InteractionPrompt_C
// Size: 0x35f (Inherited: 0x260)
struct UUMG_InteractionPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* AltHoldContainer; // 0x268(0x08)
	struct UTextBlock* AltHoldText; // 0x270(0x08)
	struct UBorder* HoldContainer; // 0x278(0x08)
	struct UTextBlock* HoldText; // 0x280(0x08)
	struct UHorizontalBox* HorizontalBox_4; // 0x288(0x08)
	struct UBorder* InteractContainer; // 0x290(0x08)
	struct UTextBlock* InteractText; // 0x298(0x08)
	struct UBorder* MainFrame; // 0x2a0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2a8(0x08)
	struct UUMG_Keybind_C* UMG_Keybind; // 0x2b0(0x08)
	struct UUMG_Keybind_C* UMG_Keybind_66; // 0x2b8(0x08)
	struct UUMG_Keybind_C* UMG_Keybind_153; // 0x2c0(0x08)
	struct AActor* LastObject; // 0x2c8(0x08)
	struct FHitResult HitObject; // 0x2d0(0x8c)
	bool AlwaysVisible; // 0x35c(0x01)
	bool IsHeld; // 0x35d(0x01)
	bool IsHeld_Alt; // 0x35e(0x01)

	void Set Held(bool Held, struct UImage* Image, float Alpha, struct UWidgetAnimation* Animation, bool Cache); // Function UMG_InteractionPrompt.UMG_InteractionPrompt_C.Set Held // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InteractionPrompt.UMG_InteractionPrompt_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetState(bool Visible); // Function UMG_InteractionPrompt.UMG_InteractionPrompt_C.SetState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_InteractionPrompt(int32_t EntryPoint); // Function UMG_InteractionPrompt.UMG_InteractionPrompt_C.ExecuteUbergraph_UMG_InteractionPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

