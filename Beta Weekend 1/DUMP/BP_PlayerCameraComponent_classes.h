// BlueprintGeneratedClass BP_PlayerCameraComponent.BP_PlayerCameraComponent_C
// Size: 0x17c (Inherited: 0xb0)
struct UBP_PlayerCameraComponent_C : UActorComponent {
	float RotationLagSpeed; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerRef; // 0xb8(0x08)
	struct FRotator TargetCameraRotation; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FTransform SmoothedPivotTarget; // 0xd0(0x30)
	struct FVector PivotLagSpeed; // 0x100(0x0c)
	struct FVector PivotLagSpeedCrouched; // 0x10c(0x0c)
	struct FVector PivotOffsetStand; // 0x118(0x0c)
	struct FVector PivotOffsetCrouched; // 0x124(0x0c)
	struct FVector PivotLocation; // 0x130(0x0c)
	struct FVector CameraOffset; // 0x13c(0x0c)
	struct FVector CameraOffsetCrouched; // 0x148(0x0c)
	struct FVector TargetCameraLocation; // 0x154(0x0c)
	struct FVector TargetPivotOffset; // 0x160(0x0c)
	float PivotOffsetSpeed; // 0x16c(0x04)
	struct FVector TargetCameraOffset; // 0x170(0x0c)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.UpdateCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsFirstPerson(bool FirstPerson); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.IsFirstPerson // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetControllerRotation(struct FRotator Rotation); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetControllerRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetPlayer(struct ABP_IcarusPlayerCharacterSurvival_C* Player); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct FVector CalculateAxisIndependentLag(struct FVector CurrentLocation, struct FVector TargetLocation, struct FRotator CameraRotation, struct FVector LagSpeeds, bool ForceUpdate); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.CalculateAxisIndependentLag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
};

