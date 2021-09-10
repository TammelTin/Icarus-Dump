// WidgetBlueprintGeneratedClass UMG_HabitatTerminal.UMG_HabitatTerminal_C
// Size: 0x4b0 (Inherited: 0x280)
struct UUMG_HabitatTerminal_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x288(0x08)
	struct UUMG_BasicButton_2_C* FiltersButton_2; // 0x290(0x08)
	struct UBorder* Loading; // 0x298(0x08)
	struct UBorder* PlanetImageBG; // 0x2a0(0x08)
	struct UBorder* PlanetView; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* PlanetViewButton; // 0x2b0(0x08)
	struct UBorder* ProspectSelect; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* Refresh; // 0x2c0(0x08)
	struct UUMG_LoadingIcon_C* RefreshLoading; // 0x2c8(0x08)
	struct UUMG_CloseButton_2_C* SelectedProspectCloseButton; // 0x2d0(0x08)
	struct UBorder* SelectedProspectOverlay; // 0x2d8(0x08)
	struct UUMG_PlanetProspectSelected_C* SelectedProspectScreen; // 0x2e0(0x08)
	struct UUMG_HostProspectsList_C* ServerBrowser; // 0x2e8(0x08)
	struct UUMG_BasicButton_2_C* ServerBrowserButton; // 0x2f0(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2f8(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x300(0x08)
	struct UUMG_PlanetProspectView_C* UMG_PlanetProspectView; // 0x308(0x08)
	struct FMulticastInlineDelegate ProspectsUpdated; // 0x310(0x10)
	struct FFProspectServerInfo Working Prospect Info; // 0x320(0x190)

	void GetSessions(struct TArray<struct FFProspectServerInfo> ServerSessions); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.GetSessions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Log(struct FString Description); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnOpened(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_65B69575433356F9EB6516A9EB699414(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnFailure_65B69575433356F9EB6516A9EB699414 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_65B69575433356F9EB6516A9EB699414(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnSuccess_65B69575433356F9EB6516A9EB699414 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_7BA6E2B44352F7231DA6EC94C46FC2A9(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnFailure_7BA6E2B44352F7231DA6EC94C46FC2A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_7BA6E2B44352F7231DA6EC94C46FC2A9(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnSuccess_7BA6E2B44352F7231DA6EC94C46FC2A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_6EB751E44B6C5667B980FAB7EF2EEE06(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnFailure_6EB751E44B6C5667B980FAB7EF2EEE06 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_6EB751E44B6C5667B980FAB7EF2EEE06(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnSuccess_6EB751E44B6C5667B980FAB7EF2EEE06 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_9EA5E1C040640C3C6B047C9B8DCE6A13(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnFailure_9EA5E1C040640C3C6B047C9B8DCE6A13 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_9EA5E1C040640C3C6B047C9B8DCE6A13(struct FErrorCodesEnum Result); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnSuccess_9EA5E1C040640C3C6B047C9B8DCE6A13 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ClaimProspect(struct FFProspectServerInfo Prospect Info); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ClaimProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SettleProspect(struct FFProspectServerInfo Propsect Info, bool Settle); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SettleProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void LoadProspect(struct FFProspectServerInfo ProspectInfo, struct FOnlineProspectInfo CurrentProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.LoadProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void JoinProspect(struct FFProspectServerInfo ProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.JoinProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectSelected(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectClosed(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Opened(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HostProspect(struct FFProspectServerInfo ProspectInfo); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.HostProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProspectExpired(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OnProspectExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshSessions(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.RefreshSessions // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectListUpdated(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectListUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Resume Session(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Resume Session // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Join Session(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Join Session // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_HabitatTerminal(int32_t EntryPoint); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ExecuteUbergraph_UMG_HabitatTerminal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ProspectsUpdated__DelegateSignature(); // Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

