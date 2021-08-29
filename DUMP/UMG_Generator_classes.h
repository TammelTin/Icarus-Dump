// WidgetBlueprintGeneratedClass UMG_Generator.UMG_Generator_C
// Size: 0x2e8 (Inherited: 0x280)
struct UUMG_Generator_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UHorizontalBox* AvailableFuel; // 0x288(0x08)
	struct UUMG_SimpleProgressbar_C* EnergyBar; // 0x290(0x08)
	struct UUMG_Inventory_C* Fuel; // 0x298(0x08)
	struct UCanvasPanel* FuelFrame; // 0x2a0(0x08)
	struct UUMG_Inventory_C* Player; // 0x2a8(0x08)
	struct UHorizontalBox* QueueControls; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* StartButton; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* StopButton; // 0x2c0(0x08)
	struct UUMG_Inventory_C* Storage; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_135; // 0x2d0(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_2; // 0x2d8(0x08)
	struct UUMG_DarkTitlebarShort_C* UMG_DarkTitlebarShort_126; // 0x2e0(0x08)

	float GetFuel(); // Function UMG_Generator.UMG_Generator_C.GetFuel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Initialise(struct UInventory* Fuel, struct UInventory* Player, struct UInventory* Storage); // Function UMG_Generator.UMG_Generator_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FText Get Watts(); // Function UMG_Generator.UMG_Generator_C.Get Watts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Generator.UMG_Generator_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Generator.UMG_Generator_C.BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Generator.UMG_Generator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Generator.UMG_Generator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Generator(int32_t EntryPoint); // Function UMG_Generator.UMG_Generator_C.ExecuteUbergraph_UMG_Generator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

