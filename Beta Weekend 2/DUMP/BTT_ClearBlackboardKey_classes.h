// BlueprintGeneratedClass BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_ClearBlackboardKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector KeyToClear; // 0xb0(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_ClearBlackboardKey(int32_t EntryPoint); // Function BTT_ClearBlackboardKey.BTT_ClearBlackboardKey_C.ExecuteUbergraph_BTT_ClearBlackboardKey // (Final|UbergraphFunction) // @ game+0x1a38c80
};

