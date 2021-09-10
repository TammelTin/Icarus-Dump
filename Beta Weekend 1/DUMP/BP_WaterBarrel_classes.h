// BlueprintGeneratedClass BP_WaterBarrel.BP_WaterBarrel_C
// Size: 0x588 (Inherited: 0x580)
struct ABP_WaterBarrel_C : ABP_LiquidContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type); // Function BP_WaterBarrel.BP_WaterBarrel_C.ActorCanConnectToNetwork // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function BP_WaterBarrel.BP_WaterBarrel_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WaterBarrel.BP_WaterBarrel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_WaterBarrel.BP_WaterBarrel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnWaterDepleted(); // Function BP_WaterBarrel.BP_WaterBarrel_C.OnWaterDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WaterBarrel(int32_t EntryPoint); // Function BP_WaterBarrel.BP_WaterBarrel_C.ExecuteUbergraph_BP_WaterBarrel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

