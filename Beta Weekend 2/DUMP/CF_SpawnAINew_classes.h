// WidgetBlueprintGeneratedClass CF_SpawnAINew.CF_SpawnAINew_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_SpawnAINew_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void OnConstruction(); // Function CF_SpawnAINew.CF_SpawnAINew_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_SpawnAINew.CF_SpawnAINew_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_SpawnAINew.CF_SpawnAINew_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_SpawnAINew(int32_t EntryPoint); // Function CF_SpawnAINew.CF_SpawnAINew_C.ExecuteUbergraph_CF_SpawnAINew // (Final|UbergraphFunction) // @ game+0x1a38c80
};

