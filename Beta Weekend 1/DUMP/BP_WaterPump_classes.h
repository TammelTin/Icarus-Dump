// BlueprintGeneratedClass BP_WaterPump.BP_WaterPump_C
// Size: 0x590 (Inherited: 0x560)
struct ABP_WaterPump_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UNiagaraComponent* NS_WaterPump; // 0x568(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x570(0x08)
	bool Local; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float Range; // 0x57c(0x04)
	bool PumpActive; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FTimerHandle FillSuitableContainersTimer; // 0x588(0x08)

	void OnRep_PumpActive(); // Function BP_WaterPump.BP_WaterPump_C.OnRep_PumpActive // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FillSuitableContainers(); // Function BP_WaterPump.BP_WaterPump_C.FillSuitableContainers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function BP_WaterPump.BP_WaterPump_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WaterPump.BP_WaterPump_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WaterPump(int32_t EntryPoint); // Function BP_WaterPump.BP_WaterPump_C.ExecuteUbergraph_BP_WaterPump // (Final|UbergraphFunction) // @ game+0x1a05090
};

