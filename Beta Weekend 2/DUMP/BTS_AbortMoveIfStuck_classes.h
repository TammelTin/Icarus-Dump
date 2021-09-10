// BlueprintGeneratedClass BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C
// Size: 0xd8 (Inherited: 0x98)
struct UBTS_AbortMoveIfStuck_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float TimeoutTime; // 0xa0(0x04)
	float CMPerSecondTimeoutThreshold; // 0xa4(0x04)
	float TimeSpentBelowThreshold; // 0xa8(0x04)
	bool CurrentlyPlayingMontage; // 0xac(0x01)
	bool ShouldClearKeyOnAbort; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	struct FBlackboardKeySelector KeyToClearOnAbort; // 0xb0(0x28)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTS_AbortMoveIfStuck(int32_t EntryPoint); // Function BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C.ExecuteUbergraph_BTS_AbortMoveIfStuck // (Final|UbergraphFunction) // @ game+0x1a38c80
};

