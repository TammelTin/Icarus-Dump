// BlueprintGeneratedClass BP_ShelteredComponent.BP_ShelteredComponent_C
// Size: 0x1a8 (Inherited: 0x120)
struct UBP_ShelteredComponent_C : UShelteredComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	int32_t PlanarZSteps; // 0x128(0x04)
	int32_t FirstOffPlaneZResolutionDecrease; // 0x12c(0x04)
	float PlanarTraceDistance; // 0x130(0x04)
	int32_t SecondBurstResolutionDivisor; // 0x134(0x04)
	int32_t SecondBurstFails; // 0x138(0x04)
	int32_t SecondBurstSuccess; // 0x13c(0x04)
	bool FirstBurstConsideredSuccess; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t SecondOffPlaneZResolutionDecrease; // 0x144(0x04)
	enum class ShelteredEnum ShelteredEnum; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t FailedSecondariesRequiredToFailFirstBurst; // 0x14c(0x04)
	struct FVector TraceStartWorldOffset; // 0x150(0x0c)
	bool CalculateExposure; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float Exposure; // 0x160(0x04)
	float CalculatedShelterCache; // 0x164(0x04)
	float BaseSecondsToLoseExposure; // 0x168(0x04)
	float BaseSecondsToRecoverExposure; // 0x16c(0x04)
	float CachedExposureMultiplier; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UCurveFloat* ExposureResistCurve; // 0x178(0x08)
	float ExposureLoopTime; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x188(0x08)
	struct FMulticastInlineDelegate OnExposureUpdated; // 0x190(0x10)
	struct FDateTime LastTraceResultTime; // 0x1a0(0x08)

	void OnRep_Exposure(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnRep_Exposure // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetExposureRecoveryMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureRecoveryMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	float GetExposureResistanceMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureResistanceMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void IsSheltered(bool Sheltered); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.IsSheltered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetShelteredTemperatureEffect(int32_t CurrentExternalTemperature); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetShelteredTemperatureEffect // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LongCubeBurst(struct FVector Location, bool Enclosed, struct TArray<struct ABP_Building_Base_C*> HitActors); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.LongCubeBurst // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProcessBurstResults(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ProcessBurstResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformShelterTrace(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.PerformShelterTrace // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExposureTimer(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExposureTick(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShelterTraceComplete(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ShelterTraceComplete // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Client_RequestTraceUpdate(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.Client_RequestTraceUpdate // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ShelteredComponent(int32_t EntryPoint); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExecuteUbergraph_BP_ShelteredComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnExposureUpdated__DelegateSignature(float NewExposure); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnExposureUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

