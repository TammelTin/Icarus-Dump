// BlueprintGeneratedClass BTT_IcarusGOAP_FaceTarget.BTT_IcarusGOAP_FaceTarget_C
// Size: 0xdc (Inherited: 0xa8)
struct UBTT_IcarusGOAP_FaceTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	float AcceptableDotProduct; // 0xd8(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_FaceTarget.BTT_IcarusGOAP_FaceTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_FaceTarget.BTT_IcarusGOAP_FaceTarget_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BTT_IcarusGOAP_FaceTarget(int32_t EntryPoint); // Function BTT_IcarusGOAP_FaceTarget.BTT_IcarusGOAP_FaceTarget_C.ExecuteUbergraph_BTT_IcarusGOAP_FaceTarget // (Final|UbergraphFunction) // @ game+0x1a38c80
};

