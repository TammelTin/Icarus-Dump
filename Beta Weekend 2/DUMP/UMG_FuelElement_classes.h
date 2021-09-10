// WidgetBlueprintGeneratedClass UMG_FuelElement.UMG_FuelElement_C
// Size: 0x310 (Inherited: 0x260)
struct UUMG_FuelElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* IconImage; // 0x268(0x08)
	struct FMulticastInlineDelegate Selected; // 0x270(0x10)
	struct FItemData Item; // 0x280(0x80)
	bool NewVar_1; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct AActor* NewLinkedActor; // 0x308(0x08)

	void UpdateState(enum class ProcessorPreview Selected); // Function UMG_FuelElement.UMG_FuelElement_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Intialise(struct FItemData NewItem); // Function UMG_FuelElement.UMG_FuelElement_C.Intialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_FuelElement.UMG_FuelElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_FuelElement.UMG_FuelElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_FuelElement(int32_t EntryPoint); // Function UMG_FuelElement.UMG_FuelElement_C.ExecuteUbergraph_UMG_FuelElement // (Final|UbergraphFunction) // @ game+0x1a38c80
	void Selected__DelegateSignature(struct UUMG_RecipeInput_C* SelectedRecipe); // Function UMG_FuelElement.UMG_FuelElement_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

