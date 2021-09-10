// BlueprintGeneratedClass BP_DamageText.BP_DamageText_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_DamageText_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; // 0x228(0x08)
	struct UStaticMeshComponent* Sphere; // 0x230(0x08)
	enum class EIcarusDamageType Damage; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	int32_t Value; // 0x23c(0x04)
	bool CriticalHit; // 0x240(0x01)

	void ReceiveBeginPlay(); // Function BP_DamageText.BP_DamageText_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DamageText(int32_t EntryPoint); // Function BP_DamageText.BP_DamageText_C.ExecuteUbergraph_BP_DamageText // (Final|UbergraphFunction) // @ game+0x1a05090
};

