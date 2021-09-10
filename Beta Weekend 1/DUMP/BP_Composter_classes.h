// BlueprintGeneratedClass BP_Composter.BP_Composter_C
// Size: 0x710 (Inherited: 0x700)
struct ABP_Composter_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x708(0x08)

	bool ActorCanConnectToNetwork(enum class EIcarusResourceType Type); // Function BP_Composter.BP_Composter_C.ActorCanConnectToNetwork // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Composter.BP_Composter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Composter(int32_t EntryPoint); // Function BP_Composter.BP_Composter_C.ExecuteUbergraph_BP_Composter // (Final|UbergraphFunction) // @ game+0x1a05090
};

