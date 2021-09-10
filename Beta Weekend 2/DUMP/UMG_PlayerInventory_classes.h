// WidgetBlueprintGeneratedClass UMG_PlayerInventory.UMG_PlayerInventory_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_PlayerInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_Inventory_C* Inventory; // 0x268(0x08)
	struct UUMG_IconTextButton_C* StoreAllButton; // 0x270(0x08)
	struct AActor* LinkedActor; // 0x278(0x08)

	void BndEvt__StoreAllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_PlayerInventory.UMG_PlayerInventory_C.BndEvt__StoreAllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_PlayerInventory.UMG_PlayerInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct AActor* LinkedActor); // Function UMG_PlayerInventory.UMG_PlayerInventory_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_PlayerInventory(int32_t EntryPoint); // Function UMG_PlayerInventory.UMG_PlayerInventory_C.ExecuteUbergraph_UMG_PlayerInventory // (Final|UbergraphFunction) // @ game+0x1a38c80
};

