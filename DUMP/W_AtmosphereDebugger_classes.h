// WidgetBlueprintGeneratedClass W_AtmosphereDebugger.W_AtmosphereDebugger_C
// Size: 0x2d8 (Inherited: 0x260)
struct UW_AtmosphereDebugger_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* AutoTransition; // 0x268(0x08)
	struct UTextBlock* BiomeInfluenceAC; // 0x270(0x08)
	struct UTextBlock* BiomeInfluenceCave; // 0x278(0x08)
	struct UTextBlock* BiomeInfluenceCF; // 0x280(0x08)
	struct UTextBlock* BiomeInfluenceDC; // 0x288(0x08)
	struct UTextBlock* BiomeInfluenceLC; // 0x290(0x08)
	struct UTextBlock* BiomeInfluenceWL; // 0x298(0x08)
	struct UTextBlock* CurrentBiome; // 0x2a0(0x08)
	struct UScrollBox* FilteredActionBox; // 0x2a8(0x08)
	struct UTextBlock* NewBiome; // 0x2b0(0x08)
	struct UTextBlock* SplineTransition; // 0x2b8(0x08)
	struct UTextBlock* TransitionValue; // 0x2c0(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_2_C_2; // 0x2c8(0x08)
	struct ABP_AtmosphereController_C* AtmosphereController; // 0x2d0(0x08)

	struct FText Get_SplineTransition_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_SplineTransition_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_TransitionValue_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_TransitionValue_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_NewBiome_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_NewBiome_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_AutoTransition_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_AutoTransition_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceCave_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceCave_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_CurrentBiome_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_CurrentBiome_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceWL_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceWL_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceAC_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceAC_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceDC_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceDC_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceLC_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceLC_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FText Get_BiomeInfluenceCF_Text_1(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Get_BiomeInfluenceCF_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_AtmosphereDebugger(int32_t EntryPoint); // Function W_AtmosphereDebugger.W_AtmosphereDebugger_C.ExecuteUbergraph_W_AtmosphereDebugger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

