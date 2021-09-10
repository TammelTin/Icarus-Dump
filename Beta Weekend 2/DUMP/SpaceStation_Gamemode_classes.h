// BlueprintGeneratedClass SpaceStation_Gamemode.SpaceStation_Gamemode_C
// Size: 0x4d8 (Inherited: 0x308)
struct ASpaceStation_Gamemode_C : AIcarusGameModeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	bool InProgress; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FString HostName; // 0x320(0x10)
	struct FString ProspectRow; // 0x330(0x10)
	int32_t EpochTime; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FFProspectServerInfo SessionProspectInfo; // 0x348(0x190)

	void RequestSessionSettings(); // Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.RequestSessionSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateProspectInfo(); // Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.UpdateProspectInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SpaceStation_Gamemode(int32_t EntryPoint); // Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.ExecuteUbergraph_SpaceStation_Gamemode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

