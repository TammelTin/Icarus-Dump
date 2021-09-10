// WidgetBlueprintGeneratedClass UMG_RecipeList.UMG_RecipeList_C
// Size: 0x3e8 (Inherited: 0x260)
struct UUMG_RecipeList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* CheckboxBorder; // 0x268(0x08)
	struct UImage* ContainerIcon; // 0x270(0x08)
	struct UHorizontalBox* ContainerTipBox; // 0x278(0x08)
	struct UVerticalBox* FilterList; // 0x280(0x08)
	struct UUniformGridPanel* Grid; // 0x288(0x08)
	struct UBorder* MainBorder; // 0x290(0x08)
	struct UScrollBox* ScrollBox_1; // 0x298(0x08)
	struct UEditableTextBox* SearchBox; // 0x2a0(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; // 0x2a8(0x08)
	struct UCheckBox* ValidOnly; // 0x2b0(0x08)
	struct FMulticastInlineDelegate RecipeSelected; // 0x2b8(0x10)
	int32_t Count; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<enum class EPrimaryItemTypes> PrimaryItemTypes; // 0x2d0(0x10)
	bool RecipeAutoSelect; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	int32_t Visible Recipes X; // 0x2e4(0x04)
	bool ValidOnlyValue; // 0x2e8(0x01)
	enum class EPrimaryItemTypes SelectedType; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	int32_t Visible Recipes Y; // 0x2ec(0x04)
	struct AActor* LinkedActor; // 0x2f0(0x08)
	struct TArray<struct UUMG_ListElement_C*> RecipeElements; // 0x2f8(0x10)
	struct TArray<struct UUMG_RecipeElementNonInteractive_C*> RecipeElementNonInteractives; // 0x308(0x10)
	int32_t Visible Recipes Auto X; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct UUMG_RecipeElementMulti_C*> RecipeElementsMulti; // 0x320(0x10)
	int32_t Visible Recipes Multi X; // 0x330(0x04)
	bool RecipeMultiOutput; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FRecipeSet CachedRecipeSet; // 0x338(0x60)
	struct TMap<struct FProcessorRecipesRowHandle, struct FSessionFlagsRowHandle> RecipeHighlightMap; // 0x398(0x50)

	struct FSessionFlagsRowHandle GetHighlightFlag(struct FProcessorRecipesRowHandle Recipe); // Function UMG_RecipeList.UMG_RecipeList_C.GetHighlightFlag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrigger(); // Function UMG_RecipeList.UMG_RecipeList_C.UpdateTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Filter(); // Function UMG_RecipeList.UMG_RecipeList_C.Filter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FilterAvaliable(); // Function UMG_RecipeList.UMG_RecipeList_C.FilterAvaliable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FilterTypes(); // Function UMG_RecipeList.UMG_RecipeList_C.FilterTypes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FilterText(); // Function UMG_RecipeList.UMG_RecipeList_C.FilterText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FilterValid(); // Function UMG_RecipeList.UMG_RecipeList_C.FilterValid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CanCraftItem(struct UObject* Widget, struct TArray<struct UInventory*> Inventories, struct UProcessingComponent* Processing, bool Valid); // Function UMG_RecipeList.UMG_RecipeList_C.CanCraftItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateStates(struct UProcessingComponent* Processing, struct TArray<struct UInventory*> Additional Inventories); // Function UMG_RecipeList.UMG_RecipeList_C.UpdateStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FixLayout(); // Function UMG_RecipeList.UMG_RecipeList_C.FixLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ItemClickedHandler(enum class EPrimaryItemTypes ItemType); // Function UMG_RecipeList.UMG_RecipeList_C.ItemClickedHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Recipe Selected(struct FProcessorRecipesRowHandle Recipe); // Function UMG_RecipeList.UMG_RecipeList_C.On Recipe Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct FRecipeSet RecipeSet, bool AutoSelect, bool UseInput); // Function UMG_RecipeList.UMG_RecipeList_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeList.UMG_RecipeList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ValidOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UMG_RecipeList.UMG_RecipeList_C.BndEvt__ValidOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function UMG_RecipeList.UMG_RecipeList_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RecipeList(int32_t EntryPoint); // Function UMG_RecipeList.UMG_RecipeList_C.ExecuteUbergraph_UMG_RecipeList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void RecipeSelected__DelegateSignature(struct FProcessorRecipesRowHandle ProcessorRecipe); // Function UMG_RecipeList.UMG_RecipeList_C.RecipeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

