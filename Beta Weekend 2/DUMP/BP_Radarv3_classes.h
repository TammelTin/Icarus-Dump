// BlueprintGeneratedClass BP_Radarv3.BP_Radarv3_C
// Size: 0x5b0 (Inherited: 0x550)
struct ABP_Radarv3_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x558(0x08)
	struct UWidgetComponent* Widget_RadarInterface; // 0x560(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x568(0x08)
	struct UFMODAudioComponent* FMOD_Radar_Audio; // 0x570(0x08)
	bool IsOn; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float Progress; // 0x57c(0x04)
	float SecondsToScan; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct AMapManager_C* MapManager; // 0x588(0x08)
	bool Completed; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float RadarScanDiameterInKm; // 0x594(0x04)
	float RadarScanIntensity; // 0x598(0x04)
	float MinimumDistanceFromOtherScan; // 0x59c(0x04)
	bool CantScan; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct APawn* LastInstigator; // 0x5a8(0x08)

	void RadarV3ArcCalcs(struct TArray<struct FRadarV3ScanData> TempScans1); // Function BP_Radarv3.BP_Radarv3_C.RadarV3ArcCalcs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Progress(); // Function BP_Radarv3.BP_Radarv3_C.OnRep_Progress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConfigureScreenText(); // Function BP_Radarv3.BP_Radarv3_C.ConfigureScreenText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Completed(); // Function BP_Radarv3.BP_Radarv3_C.OnRep_Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CantScan(); // Function BP_Radarv3.BP_Radarv3_C.OnRep_CantScan // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreviousScanProximityCheck(bool bLocked); // Function BP_Radarv3.BP_Radarv3_C.PreviousScanProximityCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Radarv3.BP_Radarv3_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_IsOn(); // Function BP_Radarv3.BP_Radarv3_C.OnRep_IsOn // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Radarv3.BP_Radarv3_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Radarv3.BP_Radarv3_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Activate(struct AActor* Instigator); // Function BP_Radarv3.BP_Radarv3_C.Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Radarv3(int32_t EntryPoint); // Function BP_Radarv3.BP_Radarv3_C.ExecuteUbergraph_BP_Radarv3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

