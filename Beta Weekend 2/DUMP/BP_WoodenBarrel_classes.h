// BlueprintGeneratedClass BP_WoodenBarrel.BP_WoodenBarrel_C
// Size: 0x580 (Inherited: 0x570)
struct ABP_WoodenBarrel_C : ABP_LiquidContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UStaticMeshComponent* SM_DEP_Barrel_Wood_SHA; // 0x578(0x08)

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.ActorCanConnectToNetwork // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnWaterDepleted(); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.OnWaterDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_WoodenBarrel(int32_t EntryPoint); // Function BP_WoodenBarrel.BP_WoodenBarrel_C.ExecuteUbergraph_BP_WoodenBarrel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

