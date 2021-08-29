// BlueprintGeneratedClass BP_DropshipPreview.BP_DropshipPreview_C
// Size: 0x28c (Inherited: 0x24c)
struct ABP_DropshipPreview_C : ABP_ActorPreview_C {
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UPointLightComponent* PointLight3; // 0x258(0x08)
	struct UPointLightComponent* PointLight2; // 0x260(0x08)
	struct UPointLightComponent* PointLight1; // 0x268(0x08)
	struct UPointLightComponent* PointLight; // 0x270(0x08)
	struct UChildActorComponent* ChildActor; // 0x278(0x08)
	struct UUMG_NewDropshipEditor_C* DropshipEditorWidget; // 0x280(0x08)
	int32_t Current Dropship ID; // 0x288(0x04)

	void SetDropshipEditor(struct UUMG_NewDropshipEditor_C* DropShipEditor); // Function BP_DropshipPreview.BP_DropshipPreview_C.SetDropshipEditor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateDropship(); // Function BP_DropshipPreview.BP_DropshipPreview_C.UpdateDropship // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResolveVisibility(bool Visible); // Function BP_DropshipPreview.BP_DropshipPreview_C.ResolveVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_DropshipPreview.BP_DropshipPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DropshipPreview(int32_t EntryPoint); // Function BP_DropshipPreview.BP_DropshipPreview_C.ExecuteUbergraph_BP_DropshipPreview // (Final|UbergraphFunction) // @ game+0x1a05090
};

