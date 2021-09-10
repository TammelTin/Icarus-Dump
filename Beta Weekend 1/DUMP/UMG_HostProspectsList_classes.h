// WidgetBlueprintGeneratedClass UMG_HostProspectsList.UMG_HostProspectsList_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_HostProspectsList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* Claimed; // 0x268(0x08)
	struct UVerticalBox* Joined; // 0x270(0x08)
	struct UOverlay* LoadingScreen; // 0x278(0x08)
	struct UVerticalBox* Multiplayer; // 0x280(0x08)
	struct UVerticalBox* Open; // 0x288(0x08)
	struct UVerticalBox* OtherCharacterClaims; // 0x290(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x298(0x08)
	struct TArray<struct FFProspectServerInfo> ProspectList_New; // 0x2a0(0x10)
	struct FMulticastInlineDelegate SelectProspect; // 0x2b0(0x10)

	void AddWidgetToList(struct UUMG_Prospect_C* ProspectWidget); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.AddWidgetToList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateProspectAndBind(struct FFProspectServerInfo ProspectInfo, struct UUMG_Prospect_C* UMG_Prospect); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.CreateProspectAndBind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetLoading(bool Loading); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.SetLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshList(struct TArray<struct FFProspectServerInfo> Prospects); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.RefreshList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectSelected(struct FFProspectServerInfo ProspectInfo, bool Active); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.ProspectSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_HostProspectsList(int32_t EntryPoint); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.ExecuteUbergraph_UMG_HostProspectsList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SelectProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // Function UMG_HostProspectsList.UMG_HostProspectsList_C.SelectProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

