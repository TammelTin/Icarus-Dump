// BlueprintGeneratedClass BP_Cement_Mixer.BP_Cement_Mixer_C
// Size: 0x729 (Inherited: 0x6f0)
struct ABP_Cement_Mixer_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input1; // 0x6f8(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input3; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Input2; // 0x708(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output1; // 0x710(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output3; // 0x718(0x08)
	struct UStaticMeshComponent* SM_DEP_Concrete_Mixer_Proxy_Output2; // 0x720(0x08)
	bool ActiveEffects; // 0x728(0x01)

	void OnRep_ActiveEffects(); // Function BP_Cement_Mixer.BP_Cement_Mixer_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_Cement_Mixer.BP_Cement_Mixer_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Cement_Mixer.BP_Cement_Mixer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void CustomEvent_1(bool bIsActive); // Function BP_Cement_Mixer.BP_Cement_Mixer_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Cement_Mixer(int32_t EntryPoint); // Function BP_Cement_Mixer.BP_Cement_Mixer_C.ExecuteUbergraph_BP_Cement_Mixer // (Final|UbergraphFunction) // @ game+0x1a38c80
};

