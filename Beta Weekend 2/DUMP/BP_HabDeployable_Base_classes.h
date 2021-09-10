// BlueprintGeneratedClass BP_HabDeployable_Base.BP_HabDeployable_Base_C
// Size: 0x559 (Inherited: 0x550)
struct ABP_HabDeployable_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	enum class EHabObjectStatus HabObjectState; // 0x558(0x01)

	void ReceiveBeginPlay(); // Function BP_HabDeployable_Base.BP_HabDeployable_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveDestroyed(); // Function BP_HabDeployable_Base.BP_HabDeployable_Base_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_HabDeployable_Base(int32_t EntryPoint); // Function BP_HabDeployable_Base.BP_HabDeployable_Base_C.ExecuteUbergraph_BP_HabDeployable_Base // (Final|UbergraphFunction) // @ game+0x1a38c80
};

