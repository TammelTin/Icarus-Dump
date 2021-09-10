// BlueprintGeneratedClass BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C
// Size: 0x134 (Inherited: 0x11d)
struct UBP_Flammable_SpontaneouslyCombustStuff_C : UBP_Flammable_Actor_C {
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	bool ActiveCombustCharged; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float InitialCombustStuffDelay; // 0x12c(0x04)
	float ActiveCombustStuffDelay; // 0x130(0x04)

	void SpontaneouslyCombustStuff(bool LitSomething); // Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.SpontaneouslyCombustStuff // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.OnFlammableInstanceState_Combusting_Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff(int32_t EntryPoint); // Function BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C.ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff // (Final|UbergraphFunction) // @ game+0x1a38c80
};

