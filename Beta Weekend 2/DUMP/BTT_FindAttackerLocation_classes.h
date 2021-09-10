// BlueprintGeneratedClass BTT_FindAttackerLocation.BTT_FindAttackerLocation_C
// Size: 0x108 (Inherited: 0xa8)
struct UBTT_FindAttackerLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetLocation; // 0xb0(0x28)
	float FallbackDistance; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FBlackboardKeySelector TargetActor; // 0xe0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_FindAttackerLocation.BTT_FindAttackerLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_FindAttackerLocation(int32_t EntryPoint); // Function BTT_FindAttackerLocation.BTT_FindAttackerLocation_C.ExecuteUbergraph_BTT_FindAttackerLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

