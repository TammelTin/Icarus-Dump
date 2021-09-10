// WidgetBlueprintGeneratedClass CF_DebugArmor.CF_DebugArmor_C
// Size: 0x330 (Inherited: 0x2f0)
struct UCF_DebugArmor_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	bool UseAltDescription; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TArray<struct USkeletalMeshComponent*> Armour Components; // 0x300(0x10)
	struct TArray<struct USkeletalMeshComponent*> Simple TPArmour Components; // 0x310(0x10)
	struct TArray<struct USkeletalMeshComponent*> FPArmour Components; // 0x320(0x10)

	void Execute(); // Function CF_DebugArmor.CF_DebugArmor_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_DebugArmor(int32_t EntryPoint); // Function CF_DebugArmor.CF_DebugArmor_C.ExecuteUbergraph_CF_DebugArmor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

