// BlueprintGeneratedClass BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_QuestFuncitonLibrary_C : UBlueprintFunctionLibrary {

	struct TSoftClassPtr<UObject> GetDefaultQuestClass(struct FQuestsMultiRowHandle RowHandle, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetDefaultQuestClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct TSoftClassPtr<UObject> GetQuestClass(struct FQuestsMultiRowHandle RowHandle, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetQuestClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct TSoftClassPtr<UObject> GetDefaultQuestModifierClass(struct FQuestModifiersMultiRowHandle RowHandle, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetDefaultQuestModifierClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct TSoftClassPtr<UObject> GetQuestModifierClass(struct FQuestModifiersMultiRowHandle RowHandle, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetQuestModifierClass // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct TArray<struct AQuestMarker*> GetPossibleMarkersFromArray(struct TArray<struct AActor*> MarkerArray, struct AQuestMarker* PreviousMarker, struct FProspectListRowHandle Prospect, struct FQuestRequirements Requirements, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetPossibleMarkersFromArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct AQuestMarker* GetLocationMarkerFromArray(struct TArray<struct AActor*> MarkerArray, struct AQuestMarker* PreviousMarker, struct FProspectListRowHandle Prospect, struct FQuestRequirements Requirements, struct UObject* __WorldContext); // Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetLocationMarkerFromArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

