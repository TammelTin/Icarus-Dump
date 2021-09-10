// WidgetBlueprintGeneratedClass UMG_RadarMainScreen.UMG_RadarMainScreen_C
// Size: 0x668 (Inherited: 0x280)
struct UUMG_RadarMainScreen_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapCombined; // 0x288(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapTopo; // 0x290(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapVisual; // 0x298(0x08)
	struct UUMG_ButtonIcon_C* CenterMapButton; // 0x2a0(0x08)
	struct UCanvasPanel* DepositLocationsPanel; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image_2; // 0x2b8(0x08)
	struct UImage* Image_3; // 0x2c0(0x08)
	struct UImage* Image_4; // 0x2c8(0x08)
	struct UImage* Image_5; // 0x2d0(0x08)
	struct UImage* Image_6; // 0x2d8(0x08)
	struct UImage* Image_7; // 0x2e0(0x08)
	struct UImage* Image_8; // 0x2e8(0x08)
	struct UImage* Image_9; // 0x2f0(0x08)
	struct UImage* Image_10; // 0x2f8(0x08)
	struct UImage* Image_11; // 0x300(0x08)
	struct UImage* Image_12; // 0x308(0x08)
	struct UImage* Image_13; // 0x310(0x08)
	struct UImage* Image_14; // 0x318(0x08)
	struct UImage* Image_547; // 0x320(0x08)
	struct UImage* Image_715; // 0x328(0x08)
	struct UImage* Image_730; // 0x330(0x08)
	struct UHorizontalBox* legendActiveArea; // 0x338(0x08)
	struct UHorizontalBox* legendBuilding; // 0x340(0x08)
	struct UHorizontalBox* LegendCompletedArea; // 0x348(0x08)
	struct UHorizontalBox* legendDropship; // 0x350(0x08)
	struct UHorizontalBox* legendemptytiles; // 0x358(0x08)
	struct UHorizontalBox* legendgoodtiles; // 0x360(0x08)
	struct UImage* LegendGradientShadow; // 0x368(0x08)
	struct UImage* LegendGradientShadow_2; // 0x370(0x08)
	struct UHorizontalBox* legendGrave; // 0x378(0x08)
	struct UHorizontalBox* legendMeta; // 0x380(0x08)
	struct UHorizontalBox* legendplayer; // 0x388(0x08)
	struct UHorizontalBox* legendRadar; // 0x390(0x08)
	struct UCanvasPanel* MapRadarCanvas; // 0x398(0x08)
	struct UCanvasPanel* MapSpaceCanvas_2; // 0x3a0(0x08)
	struct UUniformGridPanel* MapTileUniformGrid_Heightmap; // 0x3a8(0x08)
	struct UUniformGridPanel* MapTileUniformGrid_Visual; // 0x3b0(0x08)
	struct UScaleBox* MapZoomScaleBox; // 0x3b8(0x08)
	struct UImage* OutOfBoundsImage; // 0x3c0(0x08)
	struct UImage* RadarHeatmapImage; // 0x3c8(0x08)
	struct UCanvasPanel* RadarLocationsPanel; // 0x3d0(0x08)
	struct URetainerBox* RetainerBox_191; // 0x3d8(0x08)
	struct UCanvasPanel* TileCanvas; // 0x3e0(0x08)
	struct UUMG_ButtonIcon_C* ToggleRadarButton; // 0x3e8(0x08)
	struct UCanvasPanel* TranslationCanvas; // 0x3f0(0x08)
	struct UImage* TranslationCanvasBackgroundcolor; // 0x3f8(0x08)
	struct UImage* TranslationCanvasBackgroundPattern; // 0x400(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_CenterMap; // 0x408(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Combined; // 0x410(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ToggleRadar; // 0x418(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Topographical; // 0x420(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Visual; // 0x428(0x08)
	struct UUMG_RadarMapGrid_C* UMG_RadarMapGrid; // 0x430(0x08)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> RadarLocationWidgets; // 0x438(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DepositLocationWidgets; // 0x448(0x10)
	struct AMapManager_C* MapManager; // 0x458(0x08)
	struct UUMG_RadarIcon_C* debugmarker; // 0x460(0x08)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> PlayerLocationWidgets; // 0x468(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> UnsortedActorLocationWidgets; // 0x478(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> ScannedRadarTiles; // 0x488(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> RadarRadius; // 0x498(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> OrphanedScannedRadarTiles; // 0x4a8(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DropshipLocationWidgets; // 0x4b8(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GraveLocationWidgets; // 0x4c8(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GridLocationWidgets; // 0x4d8(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> WaypointLocationWidgets; // 0x4e8(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> EquipmentPodLocationsWidgets; // 0x4f8(0x10)
	float MapIconGlobalSizeMultiplier; // 0x508(0x04)
	float MapIconGlobalMinSizeClamp; // 0x50c(0x04)
	float MapIconGlobalMaxSizeClamp; // 0x510(0x04)
	float MapMaxZoomOut; // 0x514(0x04)
	float MapMaxZoomIn; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct FMapIconsStruct> MapIconSettings; // 0x520(0x10)
	float FirstTimeOpenZoom; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UMaterialInstanceDynamic* RadarHeatmapMaskDMI; // 0x538(0x08)
	struct UMaterialInstanceDynamic* RadarHeatmapMetaLayerDMI; // 0x540(0x08)
	bool ShiftIsDown; // 0x548(0x01)
	bool CtrlIsDown; // 0x549(0x01)
	bool AltIsDown; // 0x54a(0x01)
	char pad_54B[0x1]; // 0x54b(0x01)
	int32_t V2ScansProcessed; // 0x54c(0x04)
	bool MapTickedOnce; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	int32_t V3ScansProcessed; // 0x554(0x04)
	struct TArray<struct UUMG_RadarSquare_C*> RadarV3Radius; // 0x558(0x10)
	float MapZoomRateOfChange; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct TMap<struct AQuestBase*, struct UUMG_QuestWidget_C*> QuestWidgetMap; // 0x570(0x50)
	struct FSlateColor Purple; // 0x5c0(0x28)
	struct TMap<struct UBP_TeleportCheatComponent_C*, struct UUMG_TeleportCheatWidget_C*> TeleportWidgetMap; // 0x5e8(0x50)
	struct TArray<struct UBP_TeleportCheatComponent_C*> TeleportMarkersToInit; // 0x638(0x10)
	struct FVector ContextMenuCachedWorldLocation; // 0x648(0x0c)
	struct FVector MouseDownCachedWorldLocation; // 0x654(0x0c)
	bool DragOperationOccurred; // 0x660(0x01)
	char pad_661[0x3]; // 0x661(0x03)
	int32_t TileSize; // 0x664(0x04)

	void InitTileSize(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitTileSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetMouseWorldLocation(struct FVector World Location); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.GetMouseWorldLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarCircleRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarCircleRadiusUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RenderIcon(struct UUMG_IcarusLinkedActorPanel_C* Icon, bool ShouldRotate, float ScaleFactor); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RenderIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanUseTopoMap(bool HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseTopoMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanUseVisualMap(bool HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseVisualMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanUseRadar(bool HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseRadar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanSeeOwnLocation(bool HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanSeeOwnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IconStatCheck(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.IconStatCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RotateMapIcon(struct UUMG_IcarusLinkedActorPanel_C* Icon); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RotateMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MapIconsUpdate(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.MapIconsUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActorToWidgetLinking(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ActorToWidgetLinking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConfigureMapIconSettings(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ConfigureMapIconSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OffsetLabels(struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> LinkedWidgets); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OffsetLabels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Moved Translation Canvas to World Location(struct FVector WorldLocation); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Moved Translation Canvas to World Location // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MapCanvasSpaceToWorldSpace(struct FVector2D MapLocation, struct FVector World Location); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.MapCanvasSpaceToWorldSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadVisualmapsIntoMapTiles(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.LoadVisualmapsIntoMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadHeightmapsIntoMapTiles(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.LoadHeightmapsIntoMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckDynamicActors(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CheckDynamicActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CompletedRadarTileCleanup(struct ABP_Radar_C* CompletedRadar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CompletedRadarTileCleanup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitCompletedRadarSquares(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitCompletedRadarSquares // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarSquareRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarSquareRadiusUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Rotate Player Widgets(struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> Player Icons); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Rotate Player Widgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitScannedRadarSquares(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitScannedRadarSquares // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TileScannedUpdate(int32_t X, int32_t Y, enum class MapTileRadarFlag Flag, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* LinkedRadar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.TileScannedUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddMarkersForAllActorsWithIcon(struct AActor* ActorClass, struct UObject* NewImage, struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> NewWidgets, struct UImage* IconImage); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.AddMarkersForAllActorsWithIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateLinkedActorWidgetsLocations(struct UUMG_IcarusLinkedActorPanel_C* LinkedActorWidget, bool ScaleIcon, float ScaleFactor); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateLinkedActorWidgetsLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ActorToMapSpace(struct AActor* Actor, struct FVector2D MapLocation); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ActorToMapSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnPaint(struct FPaintContext Context); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void WorldSpaceToMapCanvasSpace(struct FVector WorldLocation, struct FVector2D MapLocation); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.WorldSpaceToMapCanvasSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRadarWidgets(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateRadarWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateOreWidgets(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateOreWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2(struct UObject* Loaded); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StatBindings(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.StatBindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StatsUpdated(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Destruct(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReinitMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ReinitMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowVisualMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowVisualMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowHeightmap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowHeightmap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowCombinedMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowCombinedMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleRadarDisplay(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ToggleRadarDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_FocusOnPlayer_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__UMG_BasicButton_FocusOnPlayer_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void HideAllMaps(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.HideAllMaps // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RadarV2MaskReveal(struct FVector WorldLocation, float KMradius, float Intensity); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarV2MaskReveal // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FakeMeta(struct FLinearColor In 2); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.FakeMeta // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NewScanCheck(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.NewScanCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitRadarV2(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitRadarV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitQuests(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitQuests // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnQuestSpawned(struct AQuestBase* Quest); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnQuestSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuestFinished(struct ABP_QuestBase_C* CompletedQuest, enum class EQuestFinishState State); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.QuestFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void AddTeleportMarker(struct UBP_TeleportCheatComponent_C* Marker); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.AddTeleportMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TeleportDestroyed(struct UBP_TeleportCheatComponent_C* TeleportMarker); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.TeleportDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitTeleportMarkers(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitTeleportMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ContextMenuSetGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ContextMenuSetGridLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseOutOfBoundsImage(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitialiseOutOfBoundsImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ContextMenuCopyGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ContextMenuCopyGridLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_RadarMainScreen(int32_t EntryPoint); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ExecuteUbergraph_UMG_RadarMainScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

