// BlueprintGeneratedClass BP_InteractionScene.BP_InteractionScene_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_InteractionScene_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x220(0x08)
	float InteractionBlendSpeed; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FTransform PlayerPosition; // 0x230(0x30)
	bool VisualizePlayer; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct ABP_InteractionWidget_C* InteractionWidget; // 0x268(0x08)

	void UpdateInteractionScreen(bool Interacting); // Function BP_InteractionScene.BP_InteractionScene_C.UpdateInteractionScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_InteractionScene.BP_InteractionScene_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

