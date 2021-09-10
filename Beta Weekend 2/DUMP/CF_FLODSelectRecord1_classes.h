// WidgetBlueprintGeneratedClass CF_FLODSelectRecord1.CF_FLODSelectRecord1_C
// Size: 0x300 (Inherited: 0x2f8)
struct UCF_FLODSelectRecord1_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)

	void HandleArg(int32_t Index, struct FString Arg); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.HandleArg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnHandleExecute(struct UFLODRecordRow_C* Row); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.OnHandleExecute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSelectedRecord(struct UFLODRecord* SelectedRecord); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.GetSelectedRecord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.HandleExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void HandleArgsConstructLol(); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.HandleArgsConstructLol // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SelectedFLODTileChanged_Event_1(); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.SelectedFLODTileChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_FLODSelectRecord1(int32_t EntryPoint); // Function CF_FLODSelectRecord1.CF_FLODSelectRecord1_C.ExecuteUbergraph_CF_FLODSelectRecord1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

