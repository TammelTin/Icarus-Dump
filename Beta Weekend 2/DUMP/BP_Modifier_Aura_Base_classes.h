// BlueprintGeneratedClass BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C
// Size: 0x341 (Inherited: 0x320)
struct UBP_Modifier_Aura_Base_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct TArray<struct FAuraActor> EffectingActors; // 0x328(0x10)
	float DistanceGranted; // 0x338(0x04)
	float DistanceLost; // 0x33c(0x04)
	bool DebugRender; // 0x340(0x01)

	bool ModifierRemoved(); // Function BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C.ModifierRemoved // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ModifierApplied(); // Function BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifierTick(float DeltaTime); // Function BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C.ModifierTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Modifier_Aura_Base(int32_t EntryPoint); // Function BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C.ExecuteUbergraph_BP_Modifier_Aura_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

