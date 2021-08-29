// WidgetBlueprintGeneratedClass UMG_PlanetProspectView.UMG_PlanetProspectView_C
// Size: 0x378 (Inherited: 0x260)
struct UUMG_PlanetProspectView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ProspectFadeIn; // 0x268(0x08)
	struct UImage* Landmass_2; // 0x270(0x08)
	struct UImage* Landmass_3; // 0x278(0x08)
	struct UImage* Landmass_4; // 0x280(0x08)
	struct UImage* Landmass_5; // 0x288(0x08)
	struct UImage* Landmass_6; // 0x290(0x08)
	struct UImage* Landmass_7; // 0x298(0x08)
	struct UCanvasPanel* LandMasses; // 0x2a0(0x08)
	struct UBorder* PlanetBackground; // 0x2a8(0x08)
	struct UBorder* PlanetImageBG; // 0x2b0(0x08)
	struct UCanvasPanel* PlanetProspectContainer; // 0x2b8(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin; // 0x2c0(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_4; // 0x2c8(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_5; // 0x2d0(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_6; // 0x2d8(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_7; // 0x2e0(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_8; // 0x2e8(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_9; // 0x2f0(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_10; // 0x2f8(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_11; // 0x300(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_12; // 0x308(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_13; // 0x310(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_14; // 0x318(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_15; // 0x320(0x08)
	struct UUMG_ProspectPin_C* UMG_ProspectPin_16; // 0x328(0x08)
	struct TArray<struct UUMG_ProspectPin_C*> PlanetProspectWidgets; // 0x330(0x10)
	struct TArray<struct FFProspectServerInfo> ProspectList; // 0x340(0x10)
	bool FadedIn; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FMulticastInlineDelegate ProspectSelected; // 0x358(0x10)
	struct FMulticastInlineDelegate ProspectExpired; // 0x368(0x10)

	void RefreshList(struct TArray<struct FFProspectServerInfo> Prospects); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.RefreshList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateLandMassVisuals(bool Enabled, struct UImage* Landmass); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.UpdateLandMassVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ProspectSelectedEvent(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.ProspectSelectedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectExpiredEvent(); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.ProspectExpiredEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PlanetProspectView(int32_t EntryPoint); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.ExecuteUbergraph_UMG_PlanetProspectView // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ProspectExpired__DelegateSignature(); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.ProspectExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // Function UMG_PlanetProspectView.UMG_PlanetProspectView_C.ProspectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

