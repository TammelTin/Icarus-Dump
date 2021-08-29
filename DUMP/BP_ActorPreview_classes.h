// BlueprintGeneratedClass BP_ActorPreview.BP_ActorPreview_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_ActorPreview_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x228(0x08)
	struct UCameraComponent* Camera; // 0x230(0x08)
	struct USceneComponent* CameraRoot; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool PreviewVisible; // 0x248(0x01)
	bool RenderTargetSet; // 0x249(0x01)
	bool UseSceneCapture; // 0x24a(0x01)
	bool UseCameraComponent; // 0x24b(0x01)

	void GetLightComponents(struct TArray<struct ULightComponent*> SceneCaptureLights, struct TArray<struct ULightComponent*> CameraComponentLights); // Function BP_ActorPreview.BP_ActorPreview_C.GetLightComponents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent); // Function BP_ActorPreview.BP_ActorPreview_C.UpdateCaptureMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetShowOnlyComponents(struct TArray<struct UPrimitiveComponent*> OutComponents); // Function BP_ActorPreview.BP_ActorPreview_C.GetShowOnlyComponents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateRenderTarget(int32_t Width, int32_t Height, struct UTextureRenderTarget2D* RenderTarget); // Function BP_ActorPreview.BP_ActorPreview_C.CreateRenderTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResolveVisibility(bool Visible); // Function BP_ActorPreview.BP_ActorPreview_C.ResolveVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdatePreviewVisibility(); // Function BP_ActorPreview.BP_ActorPreview_C.UpdatePreviewVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetPreviewVisibility(bool NewPreviewVisibility); // Function BP_ActorPreview.BP_ActorPreview_C.SetPreviewVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClearCurrentMeshes(); // Function BP_ActorPreview.BP_ActorPreview_C.ClearCurrentMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ConstructPreviewMeshArray(struct TArray<struct USkeletalMesh*> MeshArray); // Function BP_ActorPreview.BP_ActorPreview_C.ConstructPreviewMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActorPreview.BP_ActorPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActorPreview.BP_ActorPreview_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateActorPreview(bool Visible); // Function BP_ActorPreview.BP_ActorPreview_C.UpdateActorPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActorPreview(int32_t EntryPoint); // Function BP_ActorPreview.BP_ActorPreview_C.ExecuteUbergraph_BP_ActorPreview // (Final|UbergraphFunction) // @ game+0x1a05090
};

