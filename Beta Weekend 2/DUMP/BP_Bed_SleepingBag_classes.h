// BlueprintGeneratedClass BP_Bed_SleepingBag.BP_Bed_SleepingBag_C
// Size: 0x578 (Inherited: 0x550)
struct ABP_Bed_SleepingBag_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UBoxComponent* HealingBox; // 0x558(0x08)
	struct UStaticMeshComponent* ReallySoftPillow; // 0x560(0x08)
	int32_t UID; // 0x568(0x04)
	bool IsHealing; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct AIcarusPlayerCharacterSurvival* HealingCharacter; // 0x570(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__HealingBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.BndEvt__HealingBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Bed_SleepingBag(int32_t EntryPoint); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ExecuteUbergraph_BP_Bed_SleepingBag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

