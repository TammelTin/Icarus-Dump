// WidgetBlueprintGeneratedClass UMG_DeviceInventory.UMG_DeviceInventory_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_DeviceInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_Inventory_C* Inventory; // 0x268(0x08)
	struct UOverlay* InventoryOverlay; // 0x270(0x08)
	struct UUMG_IconTextButton_C* TakeAllButtonInput; // 0x278(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; // 0x280(0x08)
	struct AActor* LinkedActor; // 0x288(0x08)

	void Initialise(struct AActor* LinkedActor); // Function UMG_DeviceInventory.UMG_DeviceInventory_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_DeviceInventory.UMG_DeviceInventory_C.BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DeviceInventory(int32_t EntryPoint); // Function UMG_DeviceInventory.UMG_DeviceInventory_C.ExecuteUbergraph_UMG_DeviceInventory // (Final|UbergraphFunction) // @ game+0x1a38c80
};

