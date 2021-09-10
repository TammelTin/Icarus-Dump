// BlueprintGeneratedClass BP_FunctionalTestSeat.BP_FunctionalTestSeat_C
// Size: 0x380 (Inherited: 0x345)
struct ABP_FunctionalTestSeat_C : ABP_SeatBase_C {
	char pad_345[0x3]; // 0x345(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UTextRenderComponent* TextRender; // 0x350(0x08)
	struct TSoftObjectPtr<AActor> LookAtActor; // 0x358(0x28)

	void AttachPlayer(struct ACharacter* OptionalCharacterOverride); // Function BP_FunctionalTestSeat.BP_FunctionalTestSeat_C.AttachPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_FunctionalTestSeat.BP_FunctionalTestSeat_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FunctionalTestSeat(int32_t EntryPoint); // Function BP_FunctionalTestSeat.BP_FunctionalTestSeat_C.ExecuteUbergraph_BP_FunctionalTestSeat // (Final|UbergraphFunction) // @ game+0x1a05090
};

