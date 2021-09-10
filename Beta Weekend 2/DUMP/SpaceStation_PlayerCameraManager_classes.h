// BlueprintGeneratedClass SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C
// Size: 0x2804 (Inherited: 0x27b0)
struct ASpaceStation_PlayerCameraManager_C : APlayerCameraManager {
	float InteractionAlpha; // 0x27b0(0x04)
	char pad_27B4[0x4]; // 0x27b4(0x04)
	struct ABP_InteractionScene_C* CurrentInteraction; // 0x27b8(0x08)
	struct ASpaceStation_PlayerCharacter_C* Player; // 0x27c0(0x08)
	char pad_27C8[0x8]; // 0x27c8(0x08)
	struct FTransform OriginalTransform; // 0x27d0(0x30)
	float InteractionBlendSpeed; // 0x2800(0x04)

	void InteractionChangedCheck(); // Function SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C.InteractionChangedCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector NewCameraLocation, struct FRotator NewCameraRotation, float NewCameraFOV); // Function SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C.BlueprintUpdateCamera // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

