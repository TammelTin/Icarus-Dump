// BlueprintGeneratedClass BP_WorldObject.BP_WorldObject_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct ABP_WorldObject_C : AIcarusActor {
	struct UInteractableComponent* Interactable; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_ObjectMesh; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SK_ObjectMesh; // 0x2b0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)

	void WorldObject_Held_Interact(struct AActor* Instigator); // Function BP_WorldObject.BP_WorldObject_C.WorldObject_Held_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_WorldObject.BP_WorldObject_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

