// Class ActorLayerUtilities.LayersBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULayersBlueprintLibrary : UBlueprintFunctionLibrary {

	void RemoveActorFromLayer(struct AActor* InActor, struct FActorLayer Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x110f9d0
	struct TArray<struct AActor*> GetActors(struct UObject* WorldContextObject, struct FActorLayer ActorLayer); // Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x110f8b0
	void AddActorToLayer(struct AActor* InActor, struct FActorLayer Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x110f7e0
};

