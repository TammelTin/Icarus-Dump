// WidgetBlueprintGeneratedClass UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_IcarusLinkedActorPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct AActor* LinkedActor; // 0x268(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* LocalIcarusCharacter; // 0x270(0x08)
	struct ABP_IcarusPlayerControllerSurvival_C* LocalIcarusController; // 0x278(0x08)

	void OnOpened(); // Function UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C.OnOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_IcarusLinkedActorPanel(int32_t EntryPoint); // Function UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C.ExecuteUbergraph_UMG_IcarusLinkedActorPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

