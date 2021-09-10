// WidgetBlueprintGeneratedClass CF_TeleportToProspect.CF_TeleportToProspect_C
// Size: 0x300 (Inherited: 0x2f8)
struct UCF_TeleportToProspect_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)

	void GetTeleportLocation(struct FProspectListRowHandle RowHandle, struct FVector Location, bool FoundValidLocation); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.GetTeleportLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetValidProspectStarts(struct TArray<struct FProspectListRowHandle> ProspectRowHandles); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.GetValidProspectStarts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnConstruction(); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Execute(); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CF_TeleportToProspect(int32_t EntryPoint); // Function CF_TeleportToProspect.CF_TeleportToProspect_C.ExecuteUbergraph_CF_TeleportToProspect // (Final|UbergraphFunction) // @ game+0x1a38c80
};

