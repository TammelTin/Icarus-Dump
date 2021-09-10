// BlueprintGeneratedClass BP_Interactable_RadialMenu_CollectionDrone.BP_Interactable_RadialMenu_CollectionDrone_C
// Size: 0x140 (Inherited: 0x120)
struct UBP_Interactable_RadialMenu_CollectionDrone_C : UBP_Interactable_RadialMenu_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct ADeployed_Drone_Base_C* Drone_Pawn; // 0x128(0x08)
	struct AFlyingDrone_BaseAI_C* Drone_Controller; // 0x130(0x08)
	struct AIcarusPlayerCharacter* Character; // 0x138(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_RadialMenu_CollectionDrone.BP_Interactable_RadialMenu_CollectionDrone_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RadialMenuClosed(enum class ERadialOptions Option, struct AIcarusPlayerCharacter* PlayerCharacter); // Function BP_Interactable_RadialMenu_CollectionDrone.BP_Interactable_RadialMenu_CollectionDrone_C.RadialMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_RadialMenu_CollectionDrone.BP_Interactable_RadialMenu_CollectionDrone_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_RadialMenu_CollectionDrone(int32_t EntryPoint); // Function BP_Interactable_RadialMenu_CollectionDrone.BP_Interactable_RadialMenu_CollectionDrone_C.ExecuteUbergraph_BP_Interactable_RadialMenu_CollectionDrone // (Final|UbergraphFunction) // @ game+0x1a05090
};

