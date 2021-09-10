// BlueprintGeneratedClass BTS_CheckBlocked.BTS_CheckBlocked_C
// Size: 0xd9 (Inherited: 0x98)
struct UBTS_CheckBlocked_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector IsBlockedKey; // 0xa0(0x28)
	bool IsBlocked; // 0xc8(0x01)
	bool IsPlayingMontage; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	struct FVector LastUpdateLocation; // 0xcc(0x0c)
	bool IsStationary; // 0xd8(0x01)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_CheckBlocked.BTS_CheckBlocked_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTS_CheckBlocked(int32_t EntryPoint); // Function BTS_CheckBlocked.BTS_CheckBlocked_C.ExecuteUbergraph_BTS_CheckBlocked // (Final|UbergraphFunction) // @ game+0x1a38c80
};

