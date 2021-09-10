// WidgetBlueprintGeneratedClass CF_SetCharacterFlag.CF_SetCharacterFlag_C
// Size: 0x310 (Inherited: 0x308)
struct UCF_SetCharacterFlag_C : UCF_BaseComboBoolExec_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)

	void GetAllCharacterFlagRowHandles(struct TArray<struct FCharacterFlagsRowHandle> Rows); // Function CF_SetCharacterFlag.CF_SetCharacterFlag_C.GetAllCharacterFlagRowHandles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_SetCharacterFlag.CF_SetCharacterFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void HandleOnItemSet(struct UUserWidget* Widget); // Function CF_SetCharacterFlag.CF_SetCharacterFlag_C.HandleOnItemSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Execute(); // Function CF_SetCharacterFlag.CF_SetCharacterFlag_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_SetCharacterFlag(int32_t EntryPoint); // Function CF_SetCharacterFlag.CF_SetCharacterFlag_C.ExecuteUbergraph_CF_SetCharacterFlag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

