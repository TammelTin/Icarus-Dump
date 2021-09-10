// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_ContextMenu_List_Group_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* Divider; // 0x268(0x08)
	struct UImage* GroupIcon; // 0x270(0x08)
	struct UVerticalBox* ItemContainer; // 0x278(0x08)

	void SetGroupInfo(struct FContextMenuGroupType GroupType, bool ShowDivider); // Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.SetGroupInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddItem(struct UUserWidget* ItemWidget); // Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.AddItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ContextMenu_List_Group(int32_t EntryPoint); // Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.ExecuteUbergraph_UMG_ContextMenu_List_Group // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

