// BlueprintGeneratedClass BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C
// Size: 0x27b0 (Inherited: 0x27b0)
struct ABP_IcarusPlayerCameraManager_C : APlayerCameraManager {

	void GetCurrentCamera(struct UCameraComponent* CurrentCamera, bool Success); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.GetCurrentCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CalculateRotationLimits(struct AIcarusPlayerCharacter* Player); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.CalculateRotationLimits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetThirdPerson(bool ThirdPerson); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.GetThirdPerson // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CriticalHitActive(bool Active); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.CriticalHitActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetCHComponent(struct UBP_CriticalHitComponent_C* Component); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.GetCHComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector NewCameraLocation, struct FRotator NewCameraRotation, float NewCameraFOV); // Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.BlueprintUpdateCamera // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

