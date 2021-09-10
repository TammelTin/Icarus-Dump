// BlueprintGeneratedClass BP_CardPreview.BP_CardPreview_C
// Size: 0x278 (Inherited: 0x24c)
struct ABP_CardPreview_C : ABP_ActorPreview_C {
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UPointLightComponent* PointLight1; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct UWidgetComponent* Widget; // 0x268(0x08)
	struct UStaticMeshComponent* Card; // 0x270(0x08)

	void SetCardRotation(struct FRotator Rotation); // Function BP_CardPreview.BP_CardPreview_C.SetCardRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCard(struct UMaterialInterface* Material, struct FText Text); // Function BP_CardPreview.BP_CardPreview_C.UpdateCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_CardPreview.BP_CardPreview_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_CardPreview.BP_CardPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_CardPreview(int32_t EntryPoint); // Function BP_CardPreview.BP_CardPreview_C.ExecuteUbergraph_BP_CardPreview // (Final|UbergraphFunction) // @ game+0x1a38c80
};

