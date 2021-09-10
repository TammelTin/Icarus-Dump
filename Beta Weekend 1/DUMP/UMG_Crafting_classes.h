// WidgetBlueprintGeneratedClass UMG_Crafting.UMG_Crafting_C
// Size: 0x318 (Inherited: 0x260)
struct UUMG_Crafting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* ClearQueueButton; // 0x268(0x08)
	struct UBorder* CraftAmountBorder; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* CraftButton; // 0x278(0x08)
	struct UEditableText* CraftingAmount; // 0x280(0x08)
	struct UHorizontalBox* Keyprompts; // 0x288(0x08)
	struct UUMG_ButtonIcon_C* LeftButton; // 0x290(0x08)
	struct UUMG_BasicButton_2_C* MaxButton; // 0x298(0x08)
	struct UTextBlock* RecipeName; // 0x2a0(0x08)
	struct UGridPanel* RequiredElementGrid; // 0x2a8(0x08)
	struct UUMG_ButtonIcon_C* RightButton_2; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* StopButton; // 0x2b8(0x08)
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview; // 0x2c0(0x08)
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; // 0x2c8(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x2d0(0x08)
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; // 0x2d8(0x08)
	struct UUMG_Queue_C* UMG_Queue; // 0x2e0(0x08)
	struct UUMG_RecipeList_C* UMG_RecipeList; // 0x2e8(0x08)
	struct FProcessorRecipesRowHandle Recipe; // 0x2f0(0x18)
	struct UProcessingComponent* ProcessingComponent; // 0x308(0x08)
	bool UpdateTrigger; // 0x310(0x01)
	bool QueueFull; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	int32_t Multiplier; // 0x314(0x04)

	void CanQueueItem(struct FProcessorRecipesRowHandle ProcessorRecipe, bool Craftable); // Function UMG_Crafting.UMG_Crafting_C.CanQueueItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update All Recipes(); // Function UMG_Crafting.UMG_Crafting_C.Update All Recipes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Selected Recipe Updated(struct FProcessorRecipesRowHandle NewRecipe); // Function UMG_Crafting.UMG_Crafting_C.Selected Recipe Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PanelClosed(); // Function UMG_Crafting.UMG_Crafting_C.PanelClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateCrafting(bool IsCrafting); // Function UMG_Crafting.UMG_Crafting_C.UpdateCrafting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshRecipes(); // Function UMG_Crafting.UMG_Crafting_C.RefreshRecipes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UInventory* Inventory, struct UProcessingComponent* Processor); // Function UMG_Crafting.UMG_Crafting_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ElementClicked(struct FProcessorRecipesRowHandle Element); // Function UMG_Crafting.UMG_Crafting_C.ElementClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Crafting.UMG_Crafting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_Crafting.UMG_Crafting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BindProcessingEvent(); // Function UMG_Crafting.UMG_Crafting_C.BindProcessingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessingUpdated(); // Function UMG_Crafting.UMG_Crafting_C.ProcessingUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Crafting.UMG_Crafting_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BindInventoryEvent(); // Function UMG_Crafting.UMG_Crafting_C.BindInventoryEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateRecipes(); // Function UMG_Crafting.UMG_Crafting_C.UpdateRecipes // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnItemUpdated(struct UInventory* Inventory, int32_t Location); // Function UMG_Crafting.UMG_Crafting_C.OnItemUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void QueueElementClickedHandler(int32_t Location); // Function UMG_Crafting.UMG_Crafting_C.QueueElementClickedHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void UpdateCount(int32_t Count); // Function UMG_Crafting.UMG_Crafting_C.UpdateCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__UMG_BasicButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ClearQueueButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__ClearQueueButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__RightButton_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__RightButton_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // Function UMG_Crafting.UMG_Crafting_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Crafting(int32_t EntryPoint); // Function UMG_Crafting.UMG_Crafting_C.ExecuteUbergraph_UMG_Crafting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

