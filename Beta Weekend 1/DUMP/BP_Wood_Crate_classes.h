// BlueprintGeneratedClass BP_Wood_Crate.BP_Wood_Crate_C
// Size: 0x5e0 (Inherited: 0x572)
struct ABP_Wood_Crate_C : ABP_DeployableContainerBase_C {
	char pad_572[0x6]; // 0x572(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x580(0x08)
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; // 0x588(0x08)
	struct TSet<struct AActor*> CurrentInteractors_1; // 0x590(0x50)

	void OnBecomeInteractedWith(); // Function BP_Wood_Crate.BP_Wood_Crate_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNoLongerInteractedWith(); // Function BP_Wood_Crate.BP_Wood_Crate_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Wood_Crate(int32_t EntryPoint); // Function BP_Wood_Crate.BP_Wood_Crate_C.ExecuteUbergraph_BP_Wood_Crate // (Final|UbergraphFunction) // @ game+0x1a05090
};

