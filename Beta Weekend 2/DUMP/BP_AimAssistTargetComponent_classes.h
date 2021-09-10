// BlueprintGeneratedClass BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C
// Size: 0x238 (Inherited: 0x200)
struct UBP_AimAssistTargetComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	float CollisionRadiusScale; // 0x208(0x04)
	float OverrideCollisionRadius; // 0x20c(0x04)
	bool DebugComponent; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct USphereComponent* Collider; // 0x218(0x08)
	float DesiredSize; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct TArray<struct FName> ColliderTags; // 0x228(0x10)

	void ReceiveBeginPlay(); // Function BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_AimAssistTargetComponent(int32_t EntryPoint); // Function BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C.ExecuteUbergraph_BP_AimAssistTargetComponent // (Final|UbergraphFunction) // @ game+0x1a38c80
};

