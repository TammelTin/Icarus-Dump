// WidgetBlueprintGeneratedClass UMG_SettledProspectTracker.UMG_SettledProspectTracker_C
// Size: 0x29b (Inherited: 0x280)
struct UUMG_SettledProspectTracker_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* CurrentProspects; // 0x288(0x08)
	struct UBorder* Title; // 0x290(0x08)
	bool Initialised; // 0x298(0x01)
	bool Update; // 0x299(0x01)
	bool Found; // 0x29a(0x01)

	void UpdateNotifications(); // Function UMG_SettledProspectTracker.UMG_SettledProspectTracker_C.UpdateNotifications // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SettledProspectTracker.UMG_SettledProspectTracker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnNotificationsUpdated(); // Function UMG_SettledProspectTracker.UMG_SettledProspectTracker_C.OnNotificationsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SettledProspectTracker(int32_t EntryPoint); // Function UMG_SettledProspectTracker.UMG_SettledProspectTracker_C.ExecuteUbergraph_UMG_SettledProspectTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

