// BlueprintGeneratedClass BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_GetFollowerMoveLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector SquadManagerKey; // 0xb0(0x28)
	struct FBlackboardKeySelector ActorMoveTargetKey; // 0xd8(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_GetFollowerMoveLocation(int32_t EntryPoint); // Function BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C.ExecuteUbergraph_BTT_GetFollowerMoveLocation // (Final|UbergraphFunction) // @ game+0x1a38c80
};

