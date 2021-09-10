// WidgetBlueprintGeneratedClass CF_AddStat.CF_AddStat_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_AddStat_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void Construct(); // Function CF_AddStat.CF_AddStat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_AddStat.CF_AddStat_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_AddStat(int32_t EntryPoint); // Function CF_AddStat.CF_AddStat_C.ExecuteUbergraph_CF_AddStat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

