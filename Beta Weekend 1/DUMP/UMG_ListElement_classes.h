// WidgetBlueprintGeneratedClass UMG_ListElement.UMG_ListElement_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_ListElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	bool Selected; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FProcessorRecipesRowHandle ProcessorRecipe; // 0x26c(0x18)
	char pad_284[0x4]; // 0x284(0x04)
	struct UUMG_RecipeToolTip_C* RecipeToolTip; // 0x288(0x08)
	struct AActor* LinkedActor; // 0x290(0x08)
	struct TArray<enum class EPrimaryItemTypes> CachedPrimaryItemType; // 0x298(0x10)
	enum class E_ButtonState ButtonState; // 0x2a8(0x01)
	bool Valid; // 0x2a9(0x01)
	bool AlwaysValid; // 0x2aa(0x01)
	bool MouseInteraction; // 0x2ab(0x01)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate RecipeSelected; // 0x2b0(0x10)
	bool UseInput; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FSessionFlagsRowHandle HighlightFlag; // 0x2c4(0x18)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UUMG_WidgetHighlightBase_C* QuestHelper; // 0x2e0(0x08)

	struct UOverlay* GetOverlay(); // Function UMG_ListElement.UMG_ListElement_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrigger(); // Function UMG_ListElement.UMG_ListElement_C.UpdateTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisibility(enum class EPrimaryItemTypes ItemType); // Function UMG_ListElement.UMG_ListElement_C.UpdateVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetState(bool Valid); // Function UMG_ListElement.UMG_ListElement_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_ListElement.UMG_ListElement_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseIcons(); // Function UMG_ListElement.UMG_ListElement_C.InitialiseIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UUMG_RecipeElementImage_C* CreateResourceWidget(struct FResourceItem ResourceItem); // Function UMG_ListElement.UMG_ListElement_C.CreateResourceWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateOutputItem(struct FItemData CraftingOutput, struct FText Name, struct UTexture2D* Icon); // Function UMG_ListElement.UMG_ListElement_C.CreateOutputItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateInputItem(struct FItemData CraftingInput, struct FText Name, struct UTexture2D* Icon); // Function UMG_ListElement.UMG_ListElement_C.CreateInputItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseToolTip(); // Function UMG_ListElement.UMG_ListElement_C.InitialiseToolTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UOverlay* GetHoverCornerWidget(); // Function UMG_ListElement.UMG_ListElement_C.GetHoverCornerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct UTexture2D* GetResourceImage(enum class EIcarusResourceType Type); // Function UMG_ListElement.UMG_ListElement_C.GetResourceImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct TArray<struct FResourceItem> GetResourceOutputs(); // Function UMG_ListElement.UMG_ListElement_C.GetResourceOutputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct TArray<struct FResourceItem> GetResourceInputs(); // Function UMG_ListElement.UMG_ListElement_C.GetResourceInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct TArray<struct FItemData> GetProcessorOutputs(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorOutputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct TArray<struct FItemData> GetProcessorInputs(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E81946E1BFB(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_ListElement.UMG_ListElement_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E81946E1BFB // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ListElement.UMG_ListElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ListElement(int32_t EntryPoint); // Function UMG_ListElement.UMG_ListElement_C.ExecuteUbergraph_UMG_ListElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void RecipeSelected__DelegateSignature(struct FProcessorRecipesRowHandle Recipe); // Function UMG_ListElement.UMG_ListElement_C.RecipeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

