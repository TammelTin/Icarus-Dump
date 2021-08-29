// BlueprintGeneratedClass BTT_TransitionStance.BTT_TransitionStance_C
// Size: 0xc8 (Inherited: 0xa8)
struct UBTT_TransitionStance_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class EGOAPCharacterStance TargetStance; // 0xb0(0x01)
	bool IsScared; // 0xb1(0x01)
	enum class EGOAPCharacterStance CurrentStance; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)
	struct UAnimMontage* TransitionMontageToPlay; // 0xb8(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* OwningCharRef; // 0xc0(0x08)

	void OnNotifyEnd_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName); // Function BTT_TransitionStance.BTT_TransitionStance_C.OnNotifyEnd_2F39B60B415EED7B9297DF9280CFD41D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName); // Function BTT_TransitionStance.BTT_TransitionStance_C.OnNotifyBegin_2F39B60B415EED7B9297DF9280CFD41D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName); // Function BTT_TransitionStance.BTT_TransitionStance_C.OnInterrupted_2F39B60B415EED7B9297DF9280CFD41D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName); // Function BTT_TransitionStance.BTT_TransitionStance_C.OnBlendOut_2F39B60B415EED7B9297DF9280CFD41D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName); // Function BTT_TransitionStance.BTT_TransitionStance_C.OnCompleted_2F39B60B415EED7B9297DF9280CFD41D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_TransitionStance.BTT_TransitionStance_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BTT_TransitionStance(int32_t EntryPoint); // Function BTT_TransitionStance.BTT_TransitionStance_C.ExecuteUbergraph_BTT_TransitionStance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

