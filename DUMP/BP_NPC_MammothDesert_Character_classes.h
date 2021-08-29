// BlueprintGeneratedClass BP_NPC_MammothDesert_Character.BP_NPC_MammothDesert_Character_C
// Size: 0x879 (Inherited: 0x858)
struct ABP_NPC_MammothDesert_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UGFurComponent* GFur; // 0x858(0x08)
	struct UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AI; // 0x860(0x08)
	struct USceneComponent* Alert; // 0x868(0x08)
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; // 0x870(0x08)
	enum class EGOAPProperty FastestActiveState; // 0x878(0x01)

	void GetAlertWidgetLocation(struct FVector Location); // Function BP_NPC_MammothDesert_Character.BP_NPC_MammothDesert_Character_C.GetAlertWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindFloorAngle(float Angle); // Function BP_NPC_MammothDesert_Character.BP_NPC_MammothDesert_Character_C.FindFloorAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
};

