// BlueprintGeneratedClass BTT_IcarusGOAP_Charge.BTT_IcarusGOAP_Charge_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_IcarusGOAP_Charge_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector CurrentTarget; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_Charge.BTT_IcarusGOAP_Charge_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_IcarusGOAP_Charge(int32_t EntryPoint); // Function BTT_IcarusGOAP_Charge.BTT_IcarusGOAP_Charge_C.ExecuteUbergraph_BTT_IcarusGOAP_Charge // (Final|UbergraphFunction) // @ game+0x1a38c80
};

