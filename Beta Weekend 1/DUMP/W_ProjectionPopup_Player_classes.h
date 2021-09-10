// WidgetBlueprintGeneratedClass W_ProjectionPopup_Player.W_ProjectionPopup_Player_C
// Size: 0x2d0 (Inherited: 0x2b5)
struct UW_ProjectionPopup_Player_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UImage* Image_116; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UImage* PlayerIcon; // 0x2c8(0x08)

	void UpdateImage(struct UTexture2D* Texture); // Function W_ProjectionPopup_Player.W_ProjectionPopup_Player_C.UpdateImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsAlive(bool Alive); // Function W_ProjectionPopup_Player.W_ProjectionPopup_Player_C.IsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TickEdgeScreen(struct FVector2D DirFromCentre); // Function W_ProjectionPopup_Player.W_ProjectionPopup_Player_C.TickEdgeScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateEdgeScreen(bool AtEdge); // Function W_ProjectionPopup_Player.W_ProjectionPopup_Player_C.UpdateEdgeScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function W_ProjectionPopup_Player.W_ProjectionPopup_Player_C.UpdateVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

