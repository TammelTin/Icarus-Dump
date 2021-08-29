// WidgetBlueprintGeneratedClass UMG_KeyRebindable.UMG_KeyRebindable_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUMG_KeyRebindable_C : UKeyRebindableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* InteractBorder; // 0x270(0x08)
	struct UWidgetSwitcher* RebindSwitcher; // 0x278(0x08)
	struct UUMG_Keybind_C* UMG_Keybind; // 0x280(0x08)
	struct FKeybindingsRowHandle Key; // 0x288(0x18)
	struct FMulticastInlineDelegate BeginRebindEvent; // 0x2a0(0x10)
	struct FMulticastInlineDelegate EndRebindEvent; // 0x2b0(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool OnKeySet(struct FKey NewKey); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnKeySet // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetRebindIndex(int32_t NewParam); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.GetRebindIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetKeyIndex(int32_t NewParam); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.GetKeyIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Construct(); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Set Key(struct FKeybindingsRowHandle InKey, bool Hold); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.Set Key // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnStartRebind(); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnStartRebind // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnEndRebind(); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnEndRebind // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void UpdateHighlight(); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.UpdateHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_KeyRebindable(int32_t EntryPoint); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.ExecuteUbergraph_UMG_KeyRebindable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void EndRebindEvent__DelegateSignature(); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.EndRebindEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BeginRebindEvent__DelegateSignature(struct UUMG_KeyRebindable_C* KeyWidget); // Function UMG_KeyRebindable.UMG_KeyRebindable_C.BeginRebindEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

