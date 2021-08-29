// BlueprintGeneratedClass ModifierCosmetic_Flaming.ModifierCosmetic_Flaming_C
// Size: 0x228 (Inherited: 0x200)
struct UModifierCosmetic_Flaming_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UParticleSystemComponent* FireParticle; // 0x208(0x08)
	struct UFMODAudioComponent* AudioComponent; // 0x210(0x08)
	struct UFMODEvent* FMODEvent_Player; // 0x218(0x08)
	struct UFMODEvent* FMODEvent_Creature; // 0x220(0x08)

	void ReceiveBeginPlay(); // Function ModifierCosmetic_Flaming.ModifierCosmetic_Flaming_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ModifierCosmetic_Flaming.ModifierCosmetic_Flaming_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_ModifierCosmetic_Flaming(int32_t EntryPoint); // Function ModifierCosmetic_Flaming.ModifierCosmetic_Flaming_C.ExecuteUbergraph_ModifierCosmetic_Flaming // (Final|UbergraphFunction) // @ game+0x1a05090
};

