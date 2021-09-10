// BlueprintGeneratedClass BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C
// Size: 0x4a8 (Inherited: 0x422)
struct ABP_Part_MID_RespawnPod_C : ABP_PartBase_C {
	char pad_422[0x6]; // 0x422(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UFMODAudioComponent* DropshipSequenceExternal; // 0x430(0x08)
	struct UFMODAudioComponent* DropshipSequenceInternal; // 0x438(0x08)
	struct UPostProcessComponent* PostProcess; // 0x440(0x08)
	struct UBoxComponent* Box; // 0x448(0x08)
	struct UStaticMeshComponent* SM_Shuttle_ReEntry_Cone; // 0x450(0x08)
	struct USpotLightComponent* WarningLight; // 0x458(0x08)
	struct USceneComponent* LandingFx; // 0x460(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x468(0x08)
	float DoorOpenTimeline_OpenValue_1343C0424A9B1AC4701F10A747F03C3D; // 0x470(0x04)
	enum class ETimelineDirection DoorOpenTimeline__Direction_1343C0424A9B1AC4701F10A747F03C3D; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct UTimelineComponent* DoorOpenTimeline; // 0x478(0x08)
	float Fade_Fade_5E56498346363A547A1A46B094DCCE99; // 0x480(0x04)
	enum class ETimelineDirection Fade__Direction_5E56498346363A547A1A46B094DCCE99; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct UTimelineComponent* Fade; // 0x488(0x08)
	bool Open; // 0x490(0x01)
	bool ReEntry; // 0x491(0x01)
	bool Start; // 0x492(0x01)
	bool Stop; // 0x493(0x01)
	float DoorOpenValue; // 0x494(0x04)
	struct FMulticastInlineDelegate DoorFinishedOpening; // 0x498(0x10)

	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Update Fmod Dropship State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ToggleFlightSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Open(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Open // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Stop(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Start(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_Start // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ReEntry(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.OnRep_ReEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TriggerEvent(struct FDropShipActionsEnum Actions); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetMesh(struct UPrimitiveComponent* Mesh); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Fade__FinishedFunc(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Fade__UpdateFunc(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void DoorOpenTimeline__FinishedFunc(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorOpenTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void DoorOpenTimeline__UpdateFunc(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorOpenTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Show_RespawnPod_FX(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Show_RespawnPod_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Hide_RespawnPod_FX(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Hide_RespawnPod_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Fade_Cone_FX(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.Fade_Cone_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StartOpening(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.StartOpening // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Part_MID_RespawnPod(int32_t EntryPoint); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.ExecuteUbergraph_BP_Part_MID_RespawnPod // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void DoorFinishedOpening__DelegateSignature(); // Function BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C.DoorFinishedOpening__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

