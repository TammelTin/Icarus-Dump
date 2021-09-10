// WidgetBlueprintGeneratedClass CF_SetGridLocation.CF_SetGridLocation_C
// Size: 0x318 (Inherited: 0x310)
struct UCF_SetGridLocation_C : UCF_BaseGrid_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void teleport(struct FVector NewWorldLocation); // Function CF_SetGridLocation.CF_SetGridLocation_C.teleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTeleportLocation(struct FVector GridLocation, struct FVector Location); // Function CF_SetGridLocation.CF_SetGridLocation_C.GetTeleportLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetValidProspectStarts(struct TArray<struct FProspectListRowHandle> ProspectRowHandles); // Function CF_SetGridLocation.CF_SetGridLocation_C.GetValidProspectStarts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Handle Execute(struct FString Grid, float UV_x, float UV_y); // Function CF_SetGridLocation.CF_SetGridLocation_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CF_SetGridLocation(int32_t EntryPoint); // Function CF_SetGridLocation.CF_SetGridLocation_C.ExecuteUbergraph_CF_SetGridLocation // (Final|UbergraphFunction) // @ game+0x1a05090
};

