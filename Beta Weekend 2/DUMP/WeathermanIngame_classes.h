// WidgetBlueprintGeneratedClass WeathermanIngame.WeathermanIngame_C
// Size: 0x340 (Inherited: 0x260)
struct UWeathermanIngame_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UButton* BiomeAC; // 0x270(0x08)
	struct UButton* BiomeCF; // 0x278(0x08)
	struct UButton* BiomeDC; // 0x280(0x08)
	struct UButton* Button_3; // 0x288(0x08)
	struct UTextBlock* CurrentBiome; // 0x290(0x08)
	struct USlider* SliderCloudCoverage; // 0x298(0x08)
	struct USlider* SliderDebris; // 0x2a0(0x08)
	struct USlider* SliderFogDens; // 0x2a8(0x08)
	struct USlider* SliderFogExt; // 0x2b0(0x08)
	struct USlider* SliderRain; // 0x2b8(0x08)
	struct USlider* SliderSandStorm; // 0x2c0(0x08)
	struct USlider* SliderSnow; // 0x2c8(0x08)
	struct USlider* SliderSnowStorm; // 0x2d0(0x08)
	struct USlider* SliderWindSpeed; // 0x2d8(0x08)
	struct USlider* SliderWindStrength; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_CloudPct; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_DebrisPct; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_FogDenPct; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_FogExtPct; // 0x300(0x08)
	struct UTextBlock* TextBlock_RainPct; // 0x308(0x08)
	struct UTextBlock* TextBlock_SandStmPct; // 0x310(0x08)
	struct UTextBlock* TextBlock_SnowPct; // 0x318(0x08)
	struct UTextBlock* TextBlock_SnowStmPct; // 0x320(0x08)
	struct UTextBlock* TextBlock_WindSpdPct; // 0x328(0x08)
	struct UTextBlock* TextBlock_WindStrPct; // 0x330(0x08)
	struct ABP_AtmosphereController_C* CachedAtmosphere; // 0x338(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WeathermanIngame.WeathermanIngame_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WeathermanIngame.WeathermanIngame_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BiomeCF_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WeathermanIngame.WeathermanIngame_C.BndEvt__BiomeCF_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BiomeAC_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WeathermanIngame.WeathermanIngame_C.BndEvt__BiomeAC_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BiomeDC_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WeathermanIngame.WeathermanIngame_C.BndEvt__BiomeDC_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_WeathermanIngame(int32_t EntryPoint); // Function WeathermanIngame.WeathermanIngame_C.ExecuteUbergraph_WeathermanIngame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

