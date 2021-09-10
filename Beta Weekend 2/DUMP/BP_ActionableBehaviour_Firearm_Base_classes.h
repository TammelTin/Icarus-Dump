// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
// Size: 0x898 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Firearm_Base_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct AIcarusActor* OwningActor; // 0x2e0(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e8(0x08)
	struct FFirearmData FirearmData; // 0x2f0(0x598)
	struct FTimerHandle LateSetupTimer; // 0x888(0x08)
	struct UBP_FirearmCosmeticController_C* CosmeticController; // 0x890(0x08)

	void SetupCosmeticController(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupCosmeticController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopAllAnimations(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.StopAllAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TickCameraEffects(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RollBoolStat(struct FStatsEnum Stat, bool RollResult); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.RollBoolStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DamageItemDurability(int32_t Amount); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.DamageItemDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetOwnerMeshComponent(struct USkeletalMeshComponent* AsSkeletal Mesh Component, bool Valid); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetOwnerMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFirearmSound(struct FFirearmSoundData FirearmSoundData); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PlayFirearmSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetStat(struct FStatsEnum Stat, bool ErrorIfZero, int32_t Value); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetAimController(struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* AimController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAimController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetFireController(struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* FireController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetFireController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetAmmoController(struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* AmmoController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAmmoController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void LocalOrServer(bool Local, bool Server); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LocalOrServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupFirearmData(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupFirearmData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupPlayer(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupOwner(struct AIcarusActor* Owner); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PreloadAssets(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PreloadAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnStatContainerUpdated(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.OnStatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

