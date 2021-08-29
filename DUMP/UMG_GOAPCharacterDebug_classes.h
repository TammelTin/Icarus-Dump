// WidgetBlueprintGeneratedClass UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C
// Size: 0x372 (Inherited: 0x260)
struct UUMG_GOAPCharacterDebug_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Expand; // 0x268(0x08)
	struct UVerticalBox* Actions; // 0x270(0x08)
	struct UExpandableArea* ExpandableArea_85; // 0x278(0x08)
	struct UVerticalBox* Goals; // 0x280(0x08)
	struct UVerticalBox* GOAPStateNames; // 0x288(0x08)
	struct UVerticalBox* GOAPStateValues; // 0x290(0x08)
	struct UProgressBar* Health; // 0x298(0x08)
	struct UVerticalBox* MotivationNames; // 0x2a0(0x08)
	struct UVerticalBox* MotivationsValues; // 0x2a8(0x08)
	struct UTextBlock* ObjectName; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_4; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_10; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_13; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_14; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_23; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_236; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_HealthValue_2; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_Level; // 0x2f8(0x08)
	struct ABP_IcarusNPCGOAPController_C* GOAP Controller; // 0x300(0x08)
	struct TArray<struct FGOAPMotivationsRowHandle> MotivationOrder; // 0x308(0x10)
	bool ActionsAndGoals; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FName, int32_t> State; // 0x320(0x50)
	bool IsFocused; // 0x370(0x01)
	bool ForceFocus; // 0x371(0x01)

	struct FText GetLevel(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetDistance(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetHealthValue(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetHealthValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetMovement(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetControllerState(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetControllerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetHealth(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Update Motivation(struct UIcarusGOAPMotivation* Motivation); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.Update Motivation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FText GetName(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetAction(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText GetPlan(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetPlan // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetGoapController(struct ABP_IcarusNPCGOAPController_C* NewController); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.SetGoapController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FText GetGoal(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.GetGoal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_GOAPCharacterDebug(int32_t EntryPoint); // Function UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C.ExecuteUbergraph_UMG_GOAPCharacterDebug // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

