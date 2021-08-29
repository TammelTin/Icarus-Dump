// BlueprintGeneratedClass BP_OxiteNode.BP_OxiteNode_C
// Size: 0x3e8 (Inherited: 0x3a8)
struct ABP_OxiteNode_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UStaticMeshComponent* Stone3; // 0x3b0(0x08)
	struct UStaticMeshComponent* Stone2; // 0x3b8(0x08)
	struct UStaticMeshComponent* Stone1; // 0x3c0(0x08)
	struct UStaticMeshComponent* Oxite3; // 0x3c8(0x08)
	struct UStaticMeshComponent* Oxite2; // 0x3d0(0x08)
	struct UStaticMeshComponent* Oxite1; // 0x3d8(0x08)
	struct USceneComponent* Resources; // 0x3e0(0x08)

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // Function BP_OxiteNode.BP_OxiteNode_C.PlayHarvestFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_OxiteNode.BP_OxiteNode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_OxiteNode(int32_t EntryPoint); // Function BP_OxiteNode.BP_OxiteNode_C.ExecuteUbergraph_BP_OxiteNode // (Final|UbergraphFunction) // @ game+0x1a05090
};

