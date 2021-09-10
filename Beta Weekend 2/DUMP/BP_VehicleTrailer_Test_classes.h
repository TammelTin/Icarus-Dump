// BlueprintGeneratedClass BP_VehicleTrailer_Test.BP_VehicleTrailer_Test_C
// Size: 0x448 (Inherited: 0x418)
struct ABP_VehicleTrailer_Test_C : ABP_VehicleTrailer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x420(0x08)
	struct UBoxComponent* Hitch; // 0x428(0x08)
	struct UBoxComponent* Legs; // 0x430(0x08)
	struct UBoxComponent* TowbarOverlap; // 0x438(0x08)
	struct UPhysicsConstraintComponent* TowbarConstraint_1; // 0x440(0x08)

	void OnRep_VehicleConstraintAttachments(); // Function BP_VehicleTrailer_Test.BP_VehicleTrailer_Test_C.OnRep_VehicleConstraintAttachments // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleTrailer_Test(int32_t EntryPoint); // Function BP_VehicleTrailer_Test.BP_VehicleTrailer_Test_C.ExecuteUbergraph_BP_VehicleTrailer_Test // (Final|UbergraphFunction) // @ game+0x1a38c80
};

