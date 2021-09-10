// WidgetBlueprintGeneratedClass CF_AddItem.CF_AddItem_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_AddItem_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void OnConstruction(); // Function CF_AddItem.CF_AddItem_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_AddItem.CF_AddItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_AddItem.CF_AddItem_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_AddItem.CF_AddItem_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_AddItem(int32_t EntryPoint); // Function CF_AddItem.CF_AddItem_C.ExecuteUbergraph_CF_AddItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

