// BlueprintGeneratedClass BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C
// Size: 0xd9 (Inherited: 0xa8)
struct UBTT_IcarusGOAP_SetBoolean_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector BooleanKey; // 0xb0(0x28)
	bool NewValue; // 0xd8(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_IcarusGOAP_SetBoolean(int32_t EntryPoint); // Function BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C.ExecuteUbergraph_BTT_IcarusGOAP_SetBoolean // (Final|UbergraphFunction) // @ game+0x1a38c80
};

