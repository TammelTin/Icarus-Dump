// BlueprintGeneratedClass BP_EquippableModifier.BP_EquippableModifier_C
// Size: 0x100 (Inherited: 0xe0)
struct UBP_EquippableModifier_C : UEquippableModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct FText ItemName; // 0xe8(0x18)

	bool ItemUnequipped(); // Function BP_EquippableModifier.BP_EquippableModifier_C.ItemUnequipped // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ItemEquipped(); // Function BP_EquippableModifier.BP_EquippableModifier_C.ItemEquipped // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_EquippableModifier.BP_EquippableModifier_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_EquippableModifier.BP_EquippableModifier_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_EquippableModifier(int32_t EntryPoint); // Function BP_EquippableModifier.BP_EquippableModifier_C.ExecuteUbergraph_BP_EquippableModifier // (Final|UbergraphFunction) // @ game+0x1a05090
};

