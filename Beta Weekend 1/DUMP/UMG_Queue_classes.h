// WidgetBlueprintGeneratedClass UMG_Queue.UMG_Queue_C
// Size: 0x2c8 (Inherited: 0x260)
struct UUMG_Queue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Indicator; // 0x268(0x08)
	struct UBorder* QueueBorder; // 0x270(0x08)
	struct UGridPanel* QueueGrid; // 0x278(0x08)
	struct UUMG_DarkTitlebarShort_C* UMG_DarkTitlebarShort; // 0x280(0x08)
	struct FMulticastInlineDelegate QueueElementClicked; // 0x288(0x10)
	struct TArray<struct UUMG_CraftingQueueElement_C*> QueueElements; // 0x298(0x10)
	struct FMargin Margin; // 0x2a8(0x10)
	struct UUMG_CraftingQueueElement_C* CraftingQueueWidget; // 0x2b8(0x08)
	struct AActor* LinkedActor; // 0x2c0(0x08)

	void CheckForQueueCountChanges(struct TArray<struct FProcessingItem> Queue); // Function UMG_Queue.UMG_Queue_C.CheckForQueueCountChanges // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTrigger(); // Function UMG_Queue.UMG_Queue_C.UpdateTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseQueue(int32_t Count); // Function UMG_Queue.UMG_Queue_C.InitialiseQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetQueueSize(int32_t Size); // Function UMG_Queue.UMG_Queue_C.GetQueueSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RecreateQueue(struct TArray<struct FProcessingItem> Queue); // Function UMG_Queue.UMG_Queue_C.RecreateQueue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ElementClickedHandler(struct UUMG_CraftingQueueElement_C* Element); // Function UMG_Queue.UMG_Queue_C.ElementClickedHandler // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveQueueElement(int32_t Location); // Function UMG_Queue.UMG_Queue_C.RemoveQueueElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddQueueElement(int32_t Location, struct FProcessingItem Recipe); // Function UMG_Queue.UMG_Queue_C.AddQueueElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_Queue.UMG_Queue_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Queue.UMG_Queue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Queue(int32_t EntryPoint); // Function UMG_Queue.UMG_Queue_C.ExecuteUbergraph_UMG_Queue // (Final|UbergraphFunction) // @ game+0x1a05090
	void QueueElementClicked__DelegateSignature(int32_t Location); // Function UMG_Queue.UMG_Queue_C.QueueElementClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

