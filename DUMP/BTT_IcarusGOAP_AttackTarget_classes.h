// BlueprintGeneratedClass BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C
// Size: 0x134 (Inherited: 0xa8)
struct UBTT_IcarusGOAP_AttackTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector CurrentTarget; // 0xb0(0x28)
	struct AActor* TargetActor; // 0xd8(0x08)
	struct FName MontageSection; // 0xe0(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* OwnerNPC; // 0xe8(0x08)
	struct FName NotifyName; // 0xf0(0x08)
	struct TSoftObjectPtr<UAnimMontage> MontageRef; // 0xf8(0x28)
	struct AAIController* OwnerController; // 0x120(0x08)
	struct APawn* OwnerPawn; // 0x128(0x08)
	float DamageRadius; // 0x130(0x04)

	void PlayHitEffects(struct AActor* HitActor); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.PlayHitEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalcLaunchAmount(struct FVector Dir, struct FVector OutForce); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.CalcLaunchAmount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsTargetRunning(); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.IsTargetRunning // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SeparateAttackSections(struct TArray<struct FName> InSections, struct TArray<struct FName> StationaryAttacks, struct TArray<struct FName> RunningAttacks); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.SeparateAttackSections // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void DoDamage(struct AController* Instigator, struct AActor* Causer, bool LaunchSelf); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.DoDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AnimNotifyFired(struct UAnimMontage* Montage, struct FName NotifyName); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.AnimNotifyFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DoLaunch(bool IncludeSelf); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.DoLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BTT_IcarusGOAP_AttackTarget(int32_t EntryPoint); // Function BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C.ExecuteUbergraph_BTT_IcarusGOAP_AttackTarget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

