// BlueprintGeneratedClass BP_QuestMarker.BP_QuestMarker_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_QuestMarker_C : AQuestMarker {
	struct UStaticMeshComponent* Locator; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct UBillboardComponent* Billboard; // 0x238(0x08)
	struct UBillboardComponent* FailedBillboard; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FGameplayTagContainer ObjectiveTags; // 0x250(0x20)
	bool Failed; // 0x270(0x01)
	bool Debug; // 0x271(0x01)
	bool ShowEditorLocator; // 0x272(0x01)
	char pad_273[0x5]; // 0x273(0x05)
	struct FBiomesEnum Biome; // 0x278(0x10)

	void RefreshBiome(); // Function BP_QuestMarker.BP_QuestMarker_C.RefreshBiome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool GetFlatAreaSize(float Size); // Function BP_QuestMarker.BP_QuestMarker_C.GetFlatAreaSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ValidateFlatArea(); // Function BP_QuestMarker.BP_QuestMarker_C.ValidateFlatArea // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Validate(); // Function BP_QuestMarker.BP_QuestMarker_C.Validate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_QuestMarker.BP_QuestMarker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

