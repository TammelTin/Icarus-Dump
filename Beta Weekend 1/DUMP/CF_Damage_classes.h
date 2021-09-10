// WidgetBlueprintGeneratedClass CF_Damage.CF_Damage_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_Damage_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void Construct(); // Function CF_Damage.CF_Damage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_Damage.CF_Damage_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_Damage(int32_t EntryPoint); // Function CF_Damage.CF_Damage_C.ExecuteUbergraph_CF_Damage // (Final|UbergraphFunction) // @ game+0x1a05090
};

