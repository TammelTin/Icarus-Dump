// BlueprintGeneratedClass BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C
// Size: 0x49c (Inherited: 0x3d0)
struct ABP_SkeletalItem_Ore_Scanner_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UStaticMeshComponent* Pointer; // 0x3d8(0x08)
	struct UWidgetComponent* Widget; // 0x3e0(0x08)
	struct UPointLightComponent* PointLight; // 0x3e8(0x08)
	struct UStaticMeshComponent* LED; // 0x3f0(0x08)
	struct UStaticMeshComponent* Scanner; // 0x3f8(0x08)
	float ScanningRadius; // 0x400(0x04)
	float NearestDepositDistance; // 0x404(0x04)
	float FrequencyAdjuster; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct FItemTemplateRowHandle> ResourcesToScanNow; // 0x410(0x10)
	float PingDelay; // 0x420(0x04)
	bool ShowDebugSpam; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct TArray<struct FItemTemplateRowHandle> ListDetectableResources; // 0x428(0x10)
	int32_t CurrentResourceNr; // 0x438(0x04)
	int32_t NumberOfResourcesAbleToScan; // 0x43c(0x04)
	struct UUMG_Ore_Scanner_Display_C* UMG_Display_Ref; // 0x440(0x08)
	struct FItemTemplateRowHandle ResourceToScanNow; // 0x448(0x18)
	bool CanSelectSpecificResource; // 0x460(0x01)
	bool HasMultiScanMode; // 0x461(0x01)
	bool CanDisplayDistance; // 0x462(0x01)
	bool CanDisplayResourceFound; // 0x463(0x01)
	char pad_464[0x4]; // 0x464(0x04)
	struct ABP_VoxelRock_C* ClosestValidDesposit; // 0x468(0x08)
	struct FRotator PointerOriginalRotation; // 0x470(0x0c)
	bool CanStartStop; // 0x47c(0x01)
	bool IsPaused; // 0x47d(0x01)
	char pad_47E[0x2]; // 0x47e(0x02)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x480(0x08)
	struct FVector PointerOriginalLocation; // 0x488(0x0c)
	bool CalculateDirectionOfDeposit; // 0x494(0x01)
	bool HasPointer; // 0x495(0x01)
	char pad_496[0x2]; // 0x496(0x02)
	float ClosestValidDepositAngle; // 0x498(0x04)

	struct FItemTemplateRowHandle SetResourceToScan(int32_t Index); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.SetResourceToScan // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CycleToNextResource(struct FItemTemplateRowHandle ResourceToScan); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.CycleToNextResource // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void DoAnOreScannerAction(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.DoAnOreScannerAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Ping(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.Ping // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResourceCheck(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.ResourceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AdjustFrequency(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.AdjustFrequency // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CycleResourceToScan(int32_t Index); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.CycleResourceToScan // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetPointer(); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.SetPointer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_Ore_Scanner(int32_t EntryPoint); // Function BP_SkeletalItem_Ore_Scanner.BP_SkeletalItem_Ore_Scanner_C.ExecuteUbergraph_BP_SkeletalItem_Ore_Scanner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

