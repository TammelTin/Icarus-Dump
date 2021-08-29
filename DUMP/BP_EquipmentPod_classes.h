// BlueprintGeneratedClass BP_EquipmentPod.BP_EquipmentPod_C
// Size: 0x2f0 (Inherited: 0x2d8)
struct ABP_EquipmentPod_C : ABP_ContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0x2e0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2e8(0x08)

	void ReceiveBeginPlay(); // Function BP_EquipmentPod.BP_EquipmentPod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_EquipmentPod(int32_t EntryPoint); // Function BP_EquipmentPod.BP_EquipmentPod_C.ExecuteUbergraph_BP_EquipmentPod // (Final|UbergraphFunction) // @ game+0x1a05090
};

