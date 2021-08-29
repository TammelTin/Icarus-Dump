// BlueprintGeneratedClass BP_MapFunctionLibrary.BP_MapFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_MapFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetSurfaceHeightAtLocation(struct FVector GridLocation, struct UObject* __WorldContext, struct FVector Location); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GetSurfaceHeightAtLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetUV(struct FVector2D Fractional, struct UObject* __WorldContext, struct FVector2D UV); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GetUV // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void FromUV(struct FVector2D UV, struct UObject* __WorldContext, struct FVector2D Fractional); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.FromUV // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IndexToLocation(struct FIntPoint Index, struct UObject* __WorldContext, struct FVector2D Location); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.IndexToLocation // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void LocationToIndex(struct FVector2D Location, struct UObject* __WorldContext, struct FIntPoint Index); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.LocationToIndex // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetAlphabet(struct UObject* __WorldContext, struct TArray<struct FString> Alphabet); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GetAlphabet // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IndexToGrid(struct FIntPoint Index, struct UObject* __WorldContext, struct FString Grid); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.IndexToGrid // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GridToIndex(struct FString Grid, struct UObject* __WorldContext, struct FIntPoint Index); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GridToIndex // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetZeroIndex(struct UObject* __WorldContext, int32_t Index); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GetZeroIndex // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetGridSize(struct UObject* __WorldContext, float GridSize); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GetGridSize // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void LocationToGrid(struct FVector2D Location, struct UObject* __WorldContext, struct FString Grid, struct FVector2D UV); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.LocationToGrid // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GridToLocation(struct FString Grid, struct FVector2D UV, struct UObject* __WorldContext, struct FVector2D Location); // Function BP_MapFunctionLibrary.BP_MapFunctionLibrary_C.GridToLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
};

