// BlueprintGeneratedClass ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C
// Size: 0x228 (Inherited: 0x200)
struct UModifierCosmetic_SmokeBoots_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UParticleSystemComponent* ParticleL; // 0x208(0x08)
	struct UAudioComponent* Sound; // 0x210(0x08)
	struct UParticleSystemComponent* ParticleR; // 0x218(0x08)
	struct ACharacter* Owner; // 0x220(0x08)

	void ReceiveBeginPlay(); // Function ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_ModifierCosmetic_SmokeBoots(int32_t EntryPoint); // Function ModifierCosmetic_SmokeBoots.ModifierCosmetic_SmokeBoots_C.ExecuteUbergraph_ModifierCosmetic_SmokeBoots // (Final|UbergraphFunction) // @ game+0x1a05090
};

