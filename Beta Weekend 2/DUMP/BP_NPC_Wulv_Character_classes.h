// BlueprintGeneratedClass BP_NPC_Wulv_Character.BP_NPC_Wulv_Character_C
// Size: 0x879 (Inherited: 0x868)
struct ABP_NPC_Wulv_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USceneComponent* Alert; // 0x868(0x08)
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; // 0x870(0x08)
	enum class EGOAPProperty FastestActiveState; // 0x878(0x01)

	void GetAlertWidgetLocation(struct FVector Location); // Function BP_NPC_Wulv_Character.BP_NPC_Wulv_Character_C.GetAlertWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindFloorAngle(float Angle); // Function BP_NPC_Wulv_Character.BP_NPC_Wulv_Character_C.FindFloorAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
};

