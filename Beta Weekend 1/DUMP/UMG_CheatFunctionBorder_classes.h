// WidgetBlueprintGeneratedClass UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C
// Size: 0x338 (Inherited: 0x260)
struct UUMG_CheatFunctionBorder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* ContentBox; // 0x268(0x08)
	struct UTextBlock* Description; // 0x270(0x08)
	struct UTextBlock* Title; // 0x278(0x08)
	struct UBorder* TitleBorder; // 0x280(0x08)
	struct UCheatFunctionBase* CheatFunction; // 0x288(0x08)
	struct FText DisplayName; // 0x290(0x18)
	struct TSoftObjectPtr<UUMG_CheatOverlay_C> ParentOverlay; // 0x2a8(0x28)
	struct FLinearColor TitleColor; // 0x2d0(0x10)
	struct FLinearColor AreaColor; // 0x2e0(0x10)
	struct FText CheatDescription; // 0x2f0(0x18)
	struct FLinearColor HighlightColor; // 0x308(0x10)
	struct FLinearColor TitleTextColor; // 0x318(0x10)
	struct FLinearColor TitleDescriptionColor; // 0x328(0x10)

	void UpperChar(struct FString Char, bool IsUpper, struct FString UpperChar); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.UpperChar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GenerateDisplayName(); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.GenerateDisplayName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Set Function(struct UCheatFunctionBase* CheatFunction); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Function // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Top Function(bool IsTop); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Top Function // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CheatFunctionBorder(int32_t EntryPoint); // Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.ExecuteUbergraph_UMG_CheatFunctionBorder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

