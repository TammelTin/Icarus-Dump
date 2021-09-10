// WidgetBlueprintGeneratedClass UMG_TeleportCheatWidget.UMG_TeleportCheatWidget_C
// Size: 0x2b8 (Inherited: 0x280)
struct UUMG_TeleportCheatWidget_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UScaleBox* IconScaleBox; // 0x290(0x08)
	struct FVector WorldSpaceCenter; // 0x298(0x0c)
	struct FVector WorldSpaceSize; // 0x2a4(0x0c)
	struct UBP_TeleportCheatComponent_C* TeleportMarker; // 0x2b0(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_TeleportCheatWidget.UMG_TeleportCheatWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_TeleportCheatWidget.UMG_TeleportCheatWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TeleportCheatWidget(int32_t EntryPoint); // Function UMG_TeleportCheatWidget.UMG_TeleportCheatWidget_C.ExecuteUbergraph_UMG_TeleportCheatWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

