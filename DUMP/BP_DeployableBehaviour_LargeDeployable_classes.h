// BlueprintGeneratedClass BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C
// Size: 0xfc (Inherited: 0xe0)
struct UBP_DeployableBehaviour_LargeDeployable_C : UDeployableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct AIcarusItem* OriginalDeployable; // 0xe8(0x08)
	struct AIcarusItem* SpawnedDeployable; // 0xf0(0x08)
	float DeployableRadius; // 0xf8(0x04)

	void OnDeploy(struct ADeployable* SpawnedDeployable); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.OnDeploy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnOriginalDeployableDestroy(struct AActor* DestroyedActor); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.OnOriginalDeployableDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnHeldDeployableDestroy(struct AActor* HeldDeployable); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.OnHeldDeployableDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitialiseHeldDeployment(struct ADeployable* OriginalDeployable); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.InitialiseHeldDeployment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DeployableBehaviour_LargeDeployable(int32_t EntryPoint); // Function BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C.ExecuteUbergraph_BP_DeployableBehaviour_LargeDeployable // (Final|UbergraphFunction) // @ game+0x1a05090
};

