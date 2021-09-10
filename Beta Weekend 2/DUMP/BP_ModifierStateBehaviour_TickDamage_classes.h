// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C
// Size: 0x329 (Inherited: 0x320)
struct UBP_ModifierStateBehaviour_TickDamage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	enum class EIcarusDamageType DamageType; // 0x328(0x01)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C.ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

