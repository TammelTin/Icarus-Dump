// BlueprintGeneratedClass BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_CopyBlackboardVectorKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Source; // 0xb0(0x28)
	struct FBlackboardKeySelector Target; // 0xd8(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_CopyBlackboardVectorKey(int32_t EntryPoint); // Function BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C.ExecuteUbergraph_BTT_CopyBlackboardVectorKey // (Final|UbergraphFunction) // @ game+0x1a38c80
};

