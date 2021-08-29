// WidgetBlueprintGeneratedClass UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C
// Size: 0x300 (Inherited: 0x260)
struct UUMG_LoadoutEnvirosuit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Empty; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UImage* Image_95; // 0x278(0x08)
	struct FItemData CurrentItem; // 0x280(0x80)

	void Initialise(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateState(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_LoadoutEnvirosuit(int32_t EntryPoint); // Function UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C.ExecuteUbergraph_UMG_LoadoutEnvirosuit // (Final|UbergraphFunction) // @ game+0x1a05090
};

