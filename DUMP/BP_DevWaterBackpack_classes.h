// BlueprintGeneratedClass BP_DevWaterBackpack.BP_DevWaterBackpack_C
// Size: 0x3e8 (Inherited: 0x3d0)
struct ABP_DevWaterBackpack_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x3d8(0x08)
	struct UFillableComponent* Fillable; // 0x3e0(0x08)

	void Interact(struct AActor* Instigator); // Function BP_DevWaterBackpack.BP_DevWaterBackpack_C.Interact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_DevWaterBackpack.BP_DevWaterBackpack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DevWaterBackpack(int32_t EntryPoint); // Function BP_DevWaterBackpack.BP_DevWaterBackpack_C.ExecuteUbergraph_BP_DevWaterBackpack // (Final|UbergraphFunction) // @ game+0x1a05090
};

