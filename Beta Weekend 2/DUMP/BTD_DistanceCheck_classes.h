// BlueprintGeneratedClass BTD_DistanceCheck.BTD_DistanceCheck_C
// Size: 0xd0 (Inherited: 0xa0)
struct UBTD_DistanceCheck_C : UBTDecorator_BlueprintBase {
	float Distance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FBlackboardKeySelector TargetActorOrLocation; // 0xa8(0x28)

	bool PerformConditionCheck(struct AActor* OwnerActor); // Function BTD_DistanceCheck.BTD_DistanceCheck_C.PerformConditionCheck // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

