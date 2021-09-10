// BlueprintGeneratedClass BP_Wood_Crate.BP_Wood_Crate_C
// Size: 0x5d0 (Inherited: 0x562)
struct ABP_Wood_Crate_C : ABP_DeployableContainerBase_C {
	char pad_562[0x6]; // 0x562(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x570(0x08)
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; // 0x578(0x08)
	struct TSet<struct AActor*> CurrentInteractors_1; // 0x580(0x50)

	void OnBecomeInteractedWith(); // Function BP_Wood_Crate.BP_Wood_Crate_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnNoLongerInteractedWith(); // Function BP_Wood_Crate.BP_Wood_Crate_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Wood_Crate(int32_t EntryPoint); // Function BP_Wood_Crate.BP_Wood_Crate_C.ExecuteUbergraph_BP_Wood_Crate // (Final|UbergraphFunction) // @ game+0x1a38c80
};

