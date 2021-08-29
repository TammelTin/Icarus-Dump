// WidgetBlueprintGeneratedClass W_PostProcessEntry.W_PostProcessEntry_C
// Size: 0x280 (Inherited: 0x260)
struct UW_PostProcessEntry_C : UUserWidget {
	struct FMulticastInlineDelegate EntryChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate EntryFunction; // 0x270(0x10)

	bool IsEntryEnabled(); // Function W_PostProcessEntry.W_PostProcessEntry_C.IsEntryEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void InitFromDefaultValue(); // Function W_PostProcessEntry.W_PostProcessEntry_C.InitFromDefaultValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry.W_PostProcessEntry_C.InitFromSaveGameValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSaveGameValue(struct FFPostProcessSaveData Value); // Function W_PostProcessEntry.W_PostProcessEntry_C.GetSaveGameValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePostProcess(struct FPostProcessSettings Settings); // Function W_PostProcessEntry.W_PostProcessEntry_C.UpdatePostProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EntryFunction__DelegateSignature(struct FString Param); // Function W_PostProcessEntry.W_PostProcessEntry_C.EntryFunction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EntryChanged__DelegateSignature(); // Function W_PostProcessEntry.W_PostProcessEntry_C.EntryChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

