// WidgetBlueprintGeneratedClass W_SpaceStationMenu.W_SpaceStationMenu_C
// Size: 0x2b8 (Inherited: 0x260)
struct UW_SpaceStationMenu_C : UW_StationInteractionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Craft; // 0x268(0x08)
	struct UButton* Button_Exit; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_58; // 0x280(0x08)
	struct UButton* Weapon1_2; // 0x288(0x08)
	struct UButton* Weapon1_3; // 0x290(0x08)
	struct UButton* Weapon1_4; // 0x298(0x08)
	struct UButton* Weapon2_2; // 0x2a0(0x08)
	struct UButton* Weapon2_3; // 0x2a8(0x08)
	struct UButton* Weapon2_4; // 0x2b0(0x08)

	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_SpaceStationMenu.W_SpaceStationMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_SpaceStationMenu(int32_t EntryPoint); // Function W_SpaceStationMenu.W_SpaceStationMenu_C.ExecuteUbergraph_W_SpaceStationMenu // (Final|UbergraphFunction) // @ game+0x1a38c80
};

