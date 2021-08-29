// BlueprintGeneratedClass BP_ShelteredComponent.BP_ShelteredComponent_C
// Size: 0x168 (Inherited: 0xd0)
struct UBP_ShelteredComponent_C : UShelteredComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	int32_t PlanarZSteps; // 0xd8(0x04)
	int32_t FirstOffPlaneZResolutionDecrease; // 0xdc(0x04)
	float PlanarTraceDistance; // 0xe0(0x04)
	int32_t TotalFirstBurstFails; // 0xe4(0x04)
	int32_t TotalFirstBurstSuccesses; // 0xe8(0x04)
	int32_t SecondBurstResolutionDivisor; // 0xec(0x04)
	int32_t SecondBurstFails; // 0xf0(0x04)
	int32_t SecondBurstSuccess; // 0xf4(0x04)
	bool FirstBurstConsideredSuccess; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32_t TotalSecondBurstFails; // 0xfc(0x04)
	int32_t TotalSecondBurstSuccess; // 0x100(0x04)
	int32_t SecondOffPlaneZResolutionDecrease; // 0x104(0x04)
	bool RepeatBursting; // 0x108(0x01)
	bool UseThirdBurst; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float RepeatTime; // 0x10c(0x04)
	bool Debug; // 0x110(0x01)
	enum class ShelteredEnum ShelteredEnum; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	int32_t FailedSecondariesRequiredToFailFirstBurst; // 0x114(0x04)
	struct FVector TraceStartWorldOffset; // 0x118(0x0c)
	bool CalculateExposure; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float Exposure; // 0x128(0x04)
	float CalculatedShelterCache; // 0x12c(0x04)
	float BaseSecondsToLoseExposure; // 0x130(0x04)
	float BaseSecondsToRecoverExposure; // 0x134(0x04)
	float CachedExposureMultiplier; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UCurveFloat* ExposureResistCurve; // 0x140(0x08)
	float ExposureLoopTime; // 0x148(0x04)
	bool RestartBurst; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x150(0x08)
	struct FMulticastInlineDelegate OnExposureUpdated; // 0x158(0x10)

	void OnRep_Exposure(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnRep_Exposure // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetExposureRecoveryMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureRecoveryMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetExposureResistanceMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureResistanceMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IsSheltered(bool Sheltered); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.IsSheltered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetShelteredTemperatureEffect(int32_t CurrentExternalTemperature); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetShelteredTemperatureEffect // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetSecondBurstIterationState(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ResetSecondBurstIterationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LongCubeBurst(struct FVector Location, bool Enclosed, struct TArray<struct ABP_Building_Base_C*> HitActors); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.LongCubeBurst // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetTotalBurstVars(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ResetTotalBurstVars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessBurstResults(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ProcessBurstResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void StartTraceBursting(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.StartTraceBursting // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ManuallyFireBurst(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ManuallyFireBurst // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExposureTimer(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExposureTick(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ShelteredComponent(int32_t EntryPoint); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExecuteUbergraph_BP_ShelteredComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnExposureUpdated__DelegateSignature(float NewExposure); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnExposureUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

