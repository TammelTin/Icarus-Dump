// BlueprintGeneratedClass AITargetNode.AITargetNode_C
// Size: 0x238 (Inherited: 0x220)
struct AAITargetNode_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBillboardComponent* Billboard; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveBeginPlay(); // Function AITargetNode.AITargetNode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void CheckDebugEnabled(); // Function AITargetNode.AITargetNode_C.CheckDebugEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function AITargetNode.AITargetNode_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_AITargetNode(int32_t EntryPoint); // Function AITargetNode.AITargetNode_C.ExecuteUbergraph_AITargetNode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

