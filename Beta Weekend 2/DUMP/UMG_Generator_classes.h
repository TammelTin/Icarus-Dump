// WidgetBlueprintGeneratedClass UMG_Generator.UMG_Generator_C
// Size: 0x2f2 (Inherited: 0x280)
struct UUMG_Generator_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ShelterWarning; // 0x288(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x290(0x08)
	struct UWidgetAnimation* DeviceWarningPulse; // 0x298(0x08)
	struct UBorder* ActivateFrame; // 0x2a0(0x08)
	struct UOverlay* ActivatePrompt; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* CloseButton; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* EnergyActivationButton; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* RequiresShelterButton; // 0x2c0(0x08)
	struct UBorder* RequiresShelterPrompt; // 0x2c8(0x08)
	struct UUMG_DeviceInfo_C* UMG_DeviceInfo; // 0x2d0(0x08)
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; // 0x2d8(0x08)
	struct UUMG_FuelInventory_C* UMG_FuelInventory; // 0x2e0(0x08)
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; // 0x2e8(0x08)
	bool GeneratorState; // 0x2f0(0x01)
	bool IsSheltered; // 0x2f1(0x01)

	void UpdateLocalState(bool State); // Function UMG_Generator.UMG_Generator_C.UpdateLocalState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckShelteredIndicator(); // Function UMG_Generator.UMG_Generator_C.CheckShelteredIndicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowShelterWarningStyle(bool Sheltered); // Function UMG_Generator.UMG_Generator_C.ShowShelterWarningStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	enum class ESlateVisibility ShowShelteredIndicator(); // Function UMG_Generator.UMG_Generator_C.ShowShelteredIndicator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Generator.UMG_Generator_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Generator.UMG_Generator_C.BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Generator.UMG_Generator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Generator.UMG_Generator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Generator(int32_t EntryPoint); // Function UMG_Generator.UMG_Generator_C.ExecuteUbergraph_UMG_Generator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

