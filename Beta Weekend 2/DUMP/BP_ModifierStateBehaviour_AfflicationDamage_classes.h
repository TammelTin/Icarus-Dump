// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C
// Size: 0x330 (Inherited: 0x320)
struct UBP_ModifierStateBehaviour_AfflicationDamage_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	float Damage; // 0x328(0x04)
	float DamagePercentage; // 0x32c(0x04)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierApplied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage // (Final|UbergraphFunction) // @ game+0x1a38c80
};

