// BlueprintGeneratedClass BP_Bed_SleepingBag.BP_Bed_SleepingBag_C
// Size: 0x588 (Inherited: 0x560)
struct ABP_Bed_SleepingBag_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UBoxComponent* HealingBox; // 0x568(0x08)
	struct UStaticMeshComponent* ReallySoftPillow; // 0x570(0x08)
	int32_t UID; // 0x578(0x04)
	bool IsHealing; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct AIcarusPlayerCharacterSurvival* HealingCharacter; // 0x580(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__HealingBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.BndEvt__HealingBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Bed_SleepingBag(int32_t EntryPoint); // Function BP_Bed_SleepingBag.BP_Bed_SleepingBag_C.ExecuteUbergraph_BP_Bed_SleepingBag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

