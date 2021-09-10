// WidgetBlueprintGeneratedClass UMG_ProcessorBase.UMG_ProcessorBase_C
// Size: 0x2a0 (Inherited: 0x280)
struct UUMG_ProcessorBase_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct ABP_DummyObject_C* DummyObject; // 0x288(0x08)
	struct UBoxComponent* DropCollider; // 0x290(0x08)
	struct ABP_HolographicObject_C* CachedPreview; // 0x298(0x08)

	void UpdateHolographicHover(struct FItemData Item, enum class ProcessorPreview State); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.UpdateHolographicHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply 3DSpace_MouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.3DSpace_MouseButtonUp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply 3DSpace_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.3DSpace_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ProcessorBase(int32_t EntryPoint); // Function UMG_ProcessorBase.UMG_ProcessorBase_C.ExecuteUbergraph_UMG_ProcessorBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

