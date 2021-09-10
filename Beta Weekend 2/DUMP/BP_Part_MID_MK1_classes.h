// BlueprintGeneratedClass BP_Part_MID_MK1.BP_Part_MID_MK1_C
// Size: 0x57e (Inherited: 0x422)
struct ABP_Part_MID_MK1_C : ABP_PartBase_C {
	char pad_422[0x6]; // 0x422(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UFMODAudioComponent* DropshipSequenceInternal; // 0x430(0x08)
	struct UFMODAudioComponent* DropshipSequenceExternal; // 0x438(0x08)
	struct UFMODAudioComponent* SFX_Cooling; // 0x440(0x08)
	struct UFMODAudioComponent* WarningLight_Alarm; // 0x448(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer1; // 0x450(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer7; // 0x458(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer6; // 0x460(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer5; // 0x468(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer4; // 0x470(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer3; // 0x478(0x08)
	struct UNiagaraComponent* NS_DropshipHeatStreamer2; // 0x480(0x08)
	struct USceneComponent* FxDropshipHeatCooldown; // 0x488(0x08)
	struct UNiagaraComponent* NS_DropshipMoisture; // 0x490(0x08)
	struct UStaticMeshComponent* SM_SmokeCone; // 0x498(0x08)
	struct UFMODAudioComponent* ComputerSFX; // 0x4a0(0x08)
	struct UBoxComponent* Box; // 0x4a8(0x08)
	struct URectLightComponent* FireLight1; // 0x4b0(0x08)
	struct URectLightComponent* FireLight; // 0x4b8(0x08)
	struct UStaticMeshComponent* SM_ShuttleReEntryCone; // 0x4c0(0x08)
	struct USceneComponent* ConeFX; // 0x4c8(0x08)
	struct USkeletalMeshComponent* FirstPerson; // 0x4d0(0x08)
	struct UPointLightComponent* LampLight; // 0x4d8(0x08)
	struct USpotLightComponent* WarningLight1; // 0x4e0(0x08)
	struct USpotLightComponent* SpotLight2; // 0x4e8(0x08)
	struct USpotLightComponent* SpotLight1; // 0x4f0(0x08)
	struct USkeletalMeshComponent* Interior; // 0x4f8(0x08)
	struct UPointLightComponent* ComputerLightLeft; // 0x500(0x08)
	struct UPointLightComponent* Fill; // 0x508(0x08)
	struct UPointLightComponent* ComputerLightRight; // 0x510(0x08)
	struct USceneComponent* LandingFx; // 0x518(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x520(0x08)
	float FadeOnSmoke_Track_3CAB9504429B86912BB372932AEB654C; // 0x528(0x04)
	enum class ETimelineDirection FadeOnSmoke__Direction_3CAB9504429B86912BB372932AEB654C; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	struct UTimelineComponent* FadeOnSmoke; // 0x530(0x08)
	float FadeSmokeCone_Fade_27A25F714815FB34D673F6B74DD0024F; // 0x538(0x04)
	enum class ETimelineDirection FadeSmokeCone__Direction_27A25F714815FB34D673F6B74DD0024F; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UTimelineComponent* FadeSmokeCone; // 0x540(0x08)
	float Fade_Fade_D32F93AC459FA6EBAA58F4A775A5F3A2; // 0x548(0x04)
	enum class ETimelineDirection Fade__Direction_D32F93AC459FA6EBAA58F4A775A5F3A2; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct UTimelineComponent* Fade; // 0x550(0x08)
	bool Open; // 0x558(0x01)
	bool StartEngine; // 0x559(0x01)
	bool StopEngine; // 0x55a(0x01)
	bool PlayShake; // 0x55b(0x01)
	bool Shake; // 0x55c(0x01)
	bool ShakeStopped; // 0x55d(0x01)
	char pad_55E[0x2]; // 0x55e(0x02)
	struct UFMODAudioComponent* DropShip_Reverb; // 0x560(0x08)
	struct FTimerHandle CameraShakeTimerRef; // 0x568(0x08)
	bool ConeActive; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	int32_t CameraShakeType; // 0x574(0x04)
	bool SonicBoomFX; // 0x578(0x01)
	bool SmokeConeFX; // 0x579(0x01)
	bool GroundDustFX; // 0x57a(0x01)
	bool HeatCooldownFX; // 0x57b(0x01)
	bool HasBeenInDescendingState; // 0x57c(0x01)
	bool CameraShake_TouchDown; // 0x57d(0x01)

	void OnRep_CameraShake_TouchDown(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_CameraShake_TouchDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_HeatCooldownFX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_HeatCooldownFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_GroundDustFX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_GroundDustFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_SmokeConeFX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_SmokeConeFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_SonicBoomFX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_SonicBoomFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Update Fmod Dropship State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ToggleFlightSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ConeActive(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_ConeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AssembledByDatabase(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.AssembledByDatabase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Shake(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_Shake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_StopEngine(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_StopEngine // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_StartEngine(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.OnRep_StartEngine // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TriggerEvent(struct FDropShipActionsEnum Actions); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetMesh(struct UPrimitiveComponent* Mesh); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Fade__FinishedFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Fade__UpdateFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void FadeSmokeCone__FinishedFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeCone__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void FadeSmokeCone__UpdateFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeCone__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void FadeOnSmoke__FinishedFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeOnSmoke__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void FadeOnSmoke__UpdateFunc(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeOnSmoke__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Show_Lights(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Show_Lights // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Hide_Lights(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Hide_Lights // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Fade_Cone_FX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Fade_Cone_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StartCameraShake(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.StartCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CameraShake(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopCameraShake(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.StopCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Show_Cone_FX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Show_Cone_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Hide_Cone_FX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Hide_Cone_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TouchDownCameraShake(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.TouchDownCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Ground_Dust_FX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Ground_Dust_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FadeSmokeOn(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.FadeSmokeOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Heat_Cooldown_FX(); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.Heat_Cooldown_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Part_MID_MK1(int32_t EntryPoint); // Function BP_Part_MID_MK1.BP_Part_MID_MK1_C.ExecuteUbergraph_BP_Part_MID_MK1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

