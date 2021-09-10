// BlueprintGeneratedClass BP_Composter_Wood.BP_Composter_Wood_C
// Size: 0x6f8 (Inherited: 0x6f0)
struct ABP_Composter_Wood_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type); // Function BP_Composter_Wood.BP_Composter_Wood_C.ActorCanConnectToNetwork // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Composter_Wood.BP_Composter_Wood_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnResourceDepleted(); // Function BP_Composter_Wood.BP_Composter_Wood_C.OnResourceDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Composter_Wood(int32_t EntryPoint); // Function BP_Composter_Wood.BP_Composter_Wood_C.ExecuteUbergraph_BP_Composter_Wood // (Final|UbergraphFunction) // @ game+0x1a38c80
};

