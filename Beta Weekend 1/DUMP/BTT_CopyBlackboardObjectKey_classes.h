// BlueprintGeneratedClass BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C
// Size: 0x100 (Inherited: 0xa8)
struct UBTT_CopyBlackboardObjectKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Source; // 0xb0(0x28)
	struct FBlackboardKeySelector Target; // 0xd8(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BTT_CopyBlackboardObjectKey(int32_t EntryPoint); // Function BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C.ExecuteUbergraph_BTT_CopyBlackboardObjectKey // (Final|UbergraphFunction) // @ game+0x1a05090
};

