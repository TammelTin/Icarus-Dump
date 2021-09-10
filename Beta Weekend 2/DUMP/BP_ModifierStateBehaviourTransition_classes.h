// BlueprintGeneratedClass BP_ModifierStateBehaviourTransition.BP_ModifierStateBehaviourTransition_C
// Size: 0x341 (Inherited: 0x320)
struct UBP_ModifierStateBehaviourTransition_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAfflictionChanceRowHandle AfflictionChance; // 0x328(0x18)
	bool ClearExisting; // 0x340(0x01)

	bool ModifierRemoved(); // Function BP_ModifierStateBehaviourTransition.BP_ModifierStateBehaviourTransition_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ModifierApplied(); // Function BP_ModifierStateBehaviourTransition.BP_ModifierStateBehaviourTransition_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviourTransition.BP_ModifierStateBehaviourTransition_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ModifierStateBehaviourTransition(int32_t EntryPoint); // Function BP_ModifierStateBehaviourTransition.BP_ModifierStateBehaviourTransition_C.ExecuteUbergraph_BP_ModifierStateBehaviourTransition // (Final|UbergraphFunction) // @ game+0x1a38c80
};

