// BlueprintGeneratedClass BP_Window_Base.BP_Window_Base_C
// Size: 0x580 (Inherited: 0x550)
struct ABP_Window_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x558(0x08)
	struct UBP_WeatherAudioComponent_WindowShutter_C* BP_WeatherAudioComponent_WindowShutter; // 0x560(0x08)
	bool Open; // 0x568(0x01)
	bool CanChangeState; // 0x569(0x01)
	char pad_56A[0x6]; // 0x56a(0x06)
	struct FMulticastInlineDelegate OpenStateChanged; // 0x570(0x10)

	float GetOcclusionValue(); // Function BP_Window_Base.BP_Window_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void SetOpenableStateOnFoundationActor(); // Function BP_Window_Base.BP_Window_Base_C.SetOpenableStateOnFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Open(); // Function BP_Window_Base.BP_Window_Base_C.OnRep_Open // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Open Close Window(struct FHitResult Interaction, bool Success); // Function BP_Window_Base.BP_Window_Base_C.Open Close Window // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Window_Base.BP_Window_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Window_Base.BP_Window_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Window_Base(int32_t EntryPoint); // Function BP_Window_Base.BP_Window_Base_C.ExecuteUbergraph_BP_Window_Base // (Final|UbergraphFunction) // @ game+0x1a38c80
	void OpenStateChanged__DelegateSignature(bool Open); // Function BP_Window_Base.BP_Window_Base_C.OpenStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

