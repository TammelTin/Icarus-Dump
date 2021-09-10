// BlueprintGeneratedClass BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_AudioFunctionLibrary_C : UBlueprintFunctionLibrary {

	void SetFMODAudioComponentEvent(struct UFMODAudioComponent* AudioComponent, struct UFMODEvent* Event, bool SetPlayStatePlaying, struct UObject* __WorldContext); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetFMODAudioComponentEvent // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetFMODAudioComponentPlayState(struct UFMODAudioComponent* FMODAudioComponent, bool ShouldPlay, struct UObject* __WorldContext); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetFMODAudioComponentPlayState // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetPlayerTypeFMODParam(struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext, enum class EPlayerTypeFMODParam PlayerTypeFMODParam); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.GetPlayerTypeFMODParam // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetSurfaceFMODParam(enum class EPhysicalSurface Surface, struct UObject* __WorldContext, enum class ESurfaceFMODParam SurfaceFMODParam); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.GetSurfaceFMODParam // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetPlayerTypeParameter(struct FFMODEventInstance EventInstance, struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetPlayerTypeParameter // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetPlayerTypeParameterAttached(struct UFMODAudioComponent* AudioComponent, struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext); // Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetPlayerTypeParameterAttached // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

