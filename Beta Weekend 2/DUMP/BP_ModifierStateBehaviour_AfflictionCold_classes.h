// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C
// Size: 0x330 (Inherited: 0x320)
struct UBP_ModifierStateBehaviour_AfflictionCold_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	float Damage; // 0x328(0x04)
	float DamagePercentage; // 0x32c(0x04)

	float GetPostProcessBlendWeights(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.GetPostProcessBlendWeights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdateBlend(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.UpdateBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartFrostbiteTimer(); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.StartFrostbiteTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

