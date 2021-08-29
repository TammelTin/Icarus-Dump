// BlueprintGeneratedClass BP_IcarusTestRail.BP_IcarusTestRail_C
// Size: 0x2fc (Inherited: 0x2d8)
struct ABP_IcarusTestRail_C : AIcarusTestRail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UBillboardComponent* Billboard; // 0x2e0(0x08)
	struct USceneComponent* AttachPoint; // 0x2e8(0x08)
	struct ABP_FunctionalTestSeat_C* TestSeat; // 0x2f0(0x08)
	float SplineDistancePerSecond; // 0x2f8(0x04)

	void TestComplete(); // Function BP_IcarusTestRail.BP_IcarusTestRail_C.TestComplete // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusTestRail.BP_IcarusTestRail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BeginTest(); // Function BP_IcarusTestRail.BP_IcarusTestRail_C.BeginTest // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetupTest(struct ACharacter* InTestCharacter); // Function BP_IcarusTestRail.BP_IcarusTestRail_C.SetupTest // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusTestRail(int32_t EntryPoint); // Function BP_IcarusTestRail.BP_IcarusTestRail_C.ExecuteUbergraph_BP_IcarusTestRail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

