// WidgetBlueprintGeneratedClass UMG_Processor.UMG_Processor_C
// Size: 0x458 (Inherited: 0x2a0)
struct UUMG_Processor_C : UUMG_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x2a8(0x08)
	struct UWidgetAnimation* DeviceWarningPulse; // 0x2b0(0x08)
	struct UWidgetSwitcher* AutoActivationSwitcher; // 0x2b8(0x08)
	struct UOverlay* AutoCraftPrompt; // 0x2c0(0x08)
	struct UOverlay* AutomatedBox-NoActivation; // 0x2c8(0x08)
	struct UHorizontalBox* AvailableFuel; // 0x2d0(0x08)
	struct UTextBlock* BenchName; // 0x2d8(0x08)
	struct UTextBlock* BenchName2; // 0x2e0(0x08)
	struct UTextBlock* BenchName2_2; // 0x2e8(0x08)
	struct UUMG_BasicButton_2_C* ClearQueueButton2; // 0x2f0(0x08)
	struct UUMG_BasicButton_2_C* CloseButton; // 0x2f8(0x08)
	struct UBorder* CountNumber; // 0x300(0x08)
	struct UVerticalBox* CraftAndDeviceVertBox; // 0x308(0x08)
	struct UWidgetSwitcher* CraftAutoSwitcher; // 0x310(0x08)
	struct UUMG_BasicButton_2_C* CraftButton2; // 0x318(0x08)
	struct UEditableText* CraftingAmount; // 0x320(0x08)
	struct UOverlay* CraftingBox; // 0x328(0x08)
	struct UVerticalBox* CraftingQueueBox; // 0x330(0x08)
	struct USizeBox* CraftingSectionBox; // 0x338(0x08)
	struct UUMG_BasicButton_2_C* EnergyActivationButton; // 0x340(0x08)
	struct UUMG_SimpleProgressbar_C* EnergyBar; // 0x348(0x08)
	struct UUMG_Inventory_C* Fuel; // 0x350(0x08)
	struct UVerticalBox* FuelBox; // 0x358(0x08)
	struct UOverlay* HighlightFlagOverlay; // 0x360(0x08)
	struct UUMG_Inventory_C* Input; // 0x368(0x08)
	struct UBorder* InteractionBorder; // 0x370(0x08)
	struct UUMG_ButtonIcon_C* LeftButton; // 0x378(0x08)
	struct UUMG_BasicButton_2_C* MaxButton; // 0x380(0x08)
	struct UUMG_Inventory_C* Player; // 0x388(0x08)
	struct UHorizontalBox* QueueControls; // 0x390(0x08)
	struct UVerticalBox* RecipeAndInventoryVertBox; // 0x398(0x08)
	struct UGridPanel* RequiredElements; // 0x3a0(0x08)
	struct UTextBlock* RequiredMaterialsText; // 0x3a8(0x08)
	struct UUMG_ButtonIcon_C* RightButton; // 0x3b0(0x08)
	struct UOverlay* ShelteredIndicator; // 0x3b8(0x08)
	struct UUMG_BasicButton_2_C* StopButton2; // 0x3c0(0x08)
	struct UUMG_IconTextButton_C* StoreAllButtonInput; // 0x3c8(0x08)
	struct UUMG_IconTextButton_C* TakeAllButtonInput; // 0x3d0(0x08)
	struct UTextBlock* TextBlock_135; // 0x3d8(0x08)
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview; // 0x3e0(0x08)
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview_Auto; // 0x3e8(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; // 0x3f0(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_97; // 0x3f8(0x08)
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; // 0x400(0x08)
	struct UUMG_Queue_C* UMG_Queue; // 0x408(0x08)
	struct UUMG_RecipeList_C* UMG_RecipeList; // 0x410(0x08)
	struct UBorder* WarningBorder; // 0x418(0x08)
	struct UInventory* PlayerInventory; // 0x420(0x08)
	bool AutoSelect; // 0x428(0x01)
	bool CurrentlyOn; // 0x429(0x01)
	bool QueueFull; // 0x42a(0x01)
	bool QueueEmpty; // 0x42b(0x01)
	bool UpdateTrigger; // 0x42c(0x01)
	bool CraftButtonUpdate; // 0x42d(0x01)
	bool GeneratorState; // 0x42e(0x01)
	char pad_42F[0x1]; // 0x42f(0x01)
	int32_t Multiplier; // 0x430(0x04)
	struct FProcessorRecipesRowHandle LastSelected; // 0x434(0x18)
	bool UseInput; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; // 0x450(0x08)

	void UpdateAutoCraftingPreview(); // Function UMG_Processor.UMG_Processor_C.UpdateAutoCraftingPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UUMG_CraftingPreview_C* GetCraftingPreview(); // Function UMG_Processor.UMG_Processor_C.GetCraftingPreview // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void PlayWarningAnimation(); // Function UMG_Processor.UMG_Processor_C.PlayWarningAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	enum class ESlateVisibility ShowShelteredIndicator(); // Function UMG_Processor.UMG_Processor_C.ShowShelteredIndicator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetJoules(); // Function UMG_Processor.UMG_Processor_C.GetJoules // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetWattage(); // Function UMG_Processor.UMG_Processor_C.GetWattage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CanQueueItem(struct FProcessorRecipesRowHandle Recipe, bool Craftable); // Function UMG_Processor.UMG_Processor_C.CanQueueItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAllRecipeStates(); // Function UMG_Processor.UMG_Processor_C.UpdateAllRecipeStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreview(); // Function UMG_Processor.UMG_Processor_C.UpdatePreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RecipeValid(struct FProcessorRecipesRowHandle ProcessorRecipe, bool Valid); // Function UMG_Processor.UMG_Processor_C.RecipeValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetTransmutationRemaining(); // Function UMG_Processor.UMG_Processor_C.GetTransmutationRemaining // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ProcessingItemChanged(); // Function UMG_Processor.UMG_Processor_C.ProcessingItemChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessorRecipeSelected(struct FProcessorRecipesRowHandle ProcessorRecipe); // Function UMG_Processor.UMG_Processor_C.ProcessorRecipeSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UInventory* Processor, struct UInventory* Fuel, struct UInventory* Player); // Function UMG_Processor.UMG_Processor_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E81C0FA10BE(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_Processor.UMG_Processor_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E81C0FA10BE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Processor.UMG_Processor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Processor.UMG_Processor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Destruct(); // Function UMG_Processor.UMG_Processor_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void QueueElementClickedHandler(int32_t Location); // Function UMG_Processor.UMG_Processor_C.QueueElementClickedHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_Processor.UMG_Processor_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void InputInventoryUpdated(); // Function UMG_Processor.UMG_Processor_C.InputInventoryUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InputInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // Function UMG_Processor.UMG_Processor_C.InputInventoryItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProcessingStopped(enum class EProcessorStoppedReason Reason); // Function UMG_Processor.UMG_Processor_C.OnProcessingStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartAutoCraft(int32_t Slot); // Function UMG_Processor.UMG_Processor_C.StartAutoCraft // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__StopButton2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__StopButton2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ClearQueueButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__ClearQueueButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CraftButton2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__CraftButton2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__StoreAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_Processor.UMG_Processor_C.BndEvt__StoreAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_Processor.UMG_Processor_C.BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void UpdateEnergyButton(); // Function UMG_Processor.UMG_Processor_C.UpdateEnergyButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateCount(int32_t Count); // Function UMG_Processor.UMG_Processor_C.UpdateCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__UMG_BasicButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function UMG_Processor.UMG_Processor_C.BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_11_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_Processor.UMG_Processor_C.BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_11_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // Function UMG_Processor.UMG_Processor_C.BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(); // Function UMG_Processor.UMG_Processor_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Processor.UMG_Processor_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Processor(int32_t EntryPoint); // Function UMG_Processor.UMG_Processor_C.ExecuteUbergraph_UMG_Processor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

