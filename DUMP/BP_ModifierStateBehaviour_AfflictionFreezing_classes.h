// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C
// Size: 0x338 (Inherited: 0x320)
struct UBP_ModifierStateBehaviour_AfflictionFreezing_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	float Damage; // 0x328(0x04)
	float DamagePercentage; // 0x32c(0x04)
	struct FTimerHandle FrostbiteTimer; // 0x330(0x08)

	float GetPostProcessBlendWeights(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.GetPostProcessBlendWeights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool ModifierRemoved(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ModifierApplied(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierApplied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateBlend(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.UpdateBlend // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DealDamage(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.DealDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ModifierTick(float DeltaTime); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void StartFrostbiteTimer(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.StartFrostbiteTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddFrostbiteAffliction(); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.AddFrostbiteAffliction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing(int32_t EntryPoint); // Function BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

