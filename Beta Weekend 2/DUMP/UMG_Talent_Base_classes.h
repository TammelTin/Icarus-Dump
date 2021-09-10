// WidgetBlueprintGeneratedClass UMG_Talent_Base.UMG_Talent_Base_C
// Size: 0x330 (Inherited: 0x278)
struct UUMG_Talent_Base_C : UTalentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct FTalentViewsRowHandle ViewData; // 0x280(0x18)
	struct FTalentModelData CurrentState; // 0x298(0x10)
	struct UTalentViewInterface* View; // 0x2a8(0x08)
	bool QueueRefresh; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnHover; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x2c8(0x10)
	struct TMap<struct FTalentsRowHandle, struct FSessionFlagsRowHandle> TalentHightlightFlagMap; // 0x2d8(0x50)
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; // 0x328(0x08)

	void GetOverlay(struct UOverlay* Overlay); // Function UMG_Talent_Base.UMG_Talent_Base_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanUnlock(bool Result); // Function UMG_Talent_Base.UMG_Talent_Base_C.CanUnlock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSessionFlagUpdated_CE5F44BD409D6730C0954E81F9367039(struct FSessionFlagsRowHandle Flag, bool State); // Function UMG_Talent_Base.UMG_Talent_Base_C.OnSessionFlagUpdated_CE5F44BD409D6730C0954E81F9367039 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Set View(struct UTalentViewInterface* View); // Function UMG_Talent_Base.UMG_Talent_Base_C.Set View // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Set State(struct FTalentModelData New State); // Function UMG_Talent_Base.UMG_Talent_Base_C.Set State // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnStateChanged(struct FTalentModelData NewState); // Function UMG_Talent_Base.UMG_Talent_Base_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RefreshState(); // Function UMG_Talent_Base.UMG_Talent_Base_C.RefreshState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnTalentSet(); // Function UMG_Talent_Base.UMG_Talent_Base_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Talent_Base(int32_t EntryPoint); // Function UMG_Talent_Base.UMG_Talent_Base_C.ExecuteUbergraph_UMG_Talent_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnUnhover__DelegateSignature(); // Function UMG_Talent_Base.UMG_Talent_Base_C.OnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnHover__DelegateSignature(struct UUMG_Talent_Base_C* Talent); // Function UMG_Talent_Base.UMG_Talent_Base_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

