// BlueprintGeneratedClass BP_BatteryOutput.BP_BatteryOutput_C
// Size: 0x570 (Inherited: 0x550)
struct ABP_BatteryOutput_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UEnergyComponent* Energy; // 0x558(0x08)
	struct UHighlightableComponent* Highlightable; // 0x560(0x08)
	struct UInteractableComponent* Interactable; // 0x568(0x08)

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type); // Function BP_BatteryOutput.BP_BatteryOutput_C.ActorCanConnectToNetwork // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_BatteryOutput.BP_BatteryOutput_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_BatteryOutput(int32_t EntryPoint); // Function BP_BatteryOutput.BP_BatteryOutput_C.ExecuteUbergraph_BP_BatteryOutput // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

