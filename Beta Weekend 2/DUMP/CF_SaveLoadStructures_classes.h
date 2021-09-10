// WidgetBlueprintGeneratedClass CF_SaveLoadStructures.CF_SaveLoadStructures_C
// Size: 0x3d0 (Inherited: 0x2d9)
struct UCF_SaveLoadStructures_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UComboBoxString* ComboBoxString_144; // 0x2e8(0x08)
	struct UIcarusButtonTemp_C* DestroyAllBuildings; // 0x2f0(0x08)
	struct UEditableTextBox* EditableTextBox_143; // 0x2f8(0x08)
	struct UTextBlock* FeedbackText; // 0x300(0x08)
	struct UIcarusButtonTemp_C* LoadButton; // 0x308(0x08)
	struct UIcarusButtonTemp_C* SaveButton; // 0x310(0x08)
	struct TMap<struct FString, int32_t> SaveNameToSlotMap; // 0x318(0x50)
	int32_t NextEmptySaveSlot; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FSerializedGrid DontDeleteStructLoading; // 0x370(0x60)

	void SlotsToItemStaticData(struct TArray<struct FInventorySlot> Slots, struct TArray<struct FRowHandle> ItemStaticRowHandle); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.SlotsToItemStaticData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SerializeActorAndInventories(struct AActor* Actor, struct FSerializedActorWithInventories SerializedActorWithInventories); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.SerializeActorAndInventories // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SerializeAllActorsSpawnedViaDeployables(struct UCheatSaveGame_C* Save); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.SerializeAllActorsSpawnedViaDeployables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SerializeGrids(struct UCheatSaveGame_C* Save); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.SerializeGrids // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SaveGameToSlot(struct UCheatSaveGame_C* Save); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.SaveGameToSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RecalcSaves(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.RecalcSaves // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AllowDestructionProcessing(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.AllowDestructionProcessing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void FailedFeedback(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.FailedFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OverwrittenFeedback(int32_t Slot); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.OverwrittenFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NewSaveFeedback(int32_t Slot); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.NewSaveFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadFeedback(int32_t Slot); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.LoadFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FinishThenClearFeedback(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.FinishThenClearFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DestroyBuildingsFeedback(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.DestroyBuildingsFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_SaveLoadStructures(int32_t EntryPoint); // Function CF_SaveLoadStructures.CF_SaveLoadStructures_C.ExecuteUbergraph_CF_SaveLoadStructures // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

