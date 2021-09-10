// WidgetBlueprintGeneratedClass CF_Base.CF_Base_C
// Size: 0x2d9 (Inherited: 0x2a8)
struct UCF_Base_C : UCheatFunctionBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder; // 0x2b0(0x28)
	bool IsTopFunction; // 0x2d8(0x01)

	void GetIcarusUserInterface(struct UUMG_UserInterface_C* UserInterface); // Function CF_Base.CF_Base_C.GetIcarusUserInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetIcarusPlayerController(struct AIcarusPlayerController* Controller); // Function CF_Base.CF_Base_C.GetIcarusPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FString GetName(); // Function CF_Base.CF_Base_C.GetName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void Set Top Function(bool IsTop); // Function CF_Base.CF_Base_C.Set Top Function // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_Base(int32_t EntryPoint); // Function CF_Base.CF_Base_C.ExecuteUbergraph_CF_Base // (Final|UbergraphFunction) // @ game+0x1a38c80
};

