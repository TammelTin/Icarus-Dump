// BlueprintGeneratedClass BTT_GetBlockingActor.BTT_GetBlockingActor_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_GetBlockingActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector BlockedTargetKey; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_GetBlockingActor.BTT_GetBlockingActor_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_GetBlockingActor(int32_t EntryPoint); // Function BTT_GetBlockingActor.BTT_GetBlockingActor_C.ExecuteUbergraph_BTT_GetBlockingActor // (Final|UbergraphFunction) // @ game+0x1a38c80
};

