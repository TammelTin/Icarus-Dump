// WidgetBlueprintGeneratedClass UMG_CraftingQueueElement.UMG_CraftingQueueElement_C
// Size: 0x304 (Inherited: 0x260)
struct UUMG_CraftingQueueElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_131; // 0x268(0x08)
	struct UBorder* Count; // 0x270(0x08)
	struct UTextBlock* CountText; // 0x278(0x08)
	struct UImage* IconImage; // 0x280(0x08)
	struct UBorder* NumberBorder; // 0x288(0x08)
	struct UTextBlock* TextBlock_35; // 0x290(0x08)
	struct UBorder* TimeBorder; // 0x298(0x08)
	struct UTextBlock* TimeText; // 0x2a0(0x08)
	struct FMulticastInlineDelegate Selected; // 0x2a8(0x10)
	struct FProcessingItem CachedRecipe; // 0x2b8(0x28)
	struct UUMG_RecipeToolTip_C* RecipeToolTip; // 0x2e0(0x08)
	struct AActor* LinkedActor; // 0x2e8(0x08)
	int32_t CurrentTotalCount; // 0x2f0(0x04)
	float TotalCraftTime; // 0x2f4(0x04)
	int32_t QueueElement; // 0x2f8(0x04)
	bool FrontOfQueue; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	float SingleCraftTime; // 0x300(0x04)

	void UpdateTrigger(); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.UpdateTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetQueueElement(int32_t Number); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.SetQueueElement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasValidRecipe(bool Valid); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.HasValidRecipe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetRecipe(struct FProcessingItem Recipe); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.GetRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState(bool Selected); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRecipe(struct FProcessingItem ProcessorRecipe); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.UpdateRecipe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Init(); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCraftTime(); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.UpdateCraftTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CraftingQueueElement(int32_t EntryPoint); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.ExecuteUbergraph_UMG_CraftingQueueElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Selected__DelegateSignature(struct UUMG_CraftingQueueElement_C* SelectedRecipe); // Function UMG_CraftingQueueElement.UMG_CraftingQueueElement_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

