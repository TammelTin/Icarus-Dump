// BlueprintGeneratedClass RoofSnow.RoofSnow_C
// Size: 0x510 (Inherited: 0x4d0)
struct URoofSnow_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	float XScale; // 0x4d8(0x04)
	float YScale; // 0x4dc(0x04)
	float ZScaleMultiplier; // 0x4e0(0x04)
	float Snow Amount; // 0x4e4(0x04)
	float BuildingAngleClampModifier; // 0x4e8(0x04)
	float MaxFlatRoofSnowAmount; // 0x4ec(0x04)
	bool Destroying; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FTimerHandle SnowDefrostTimer; // 0x4f8(0x08)
	bool RecentlyAdded; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float SnowClearedDelay; // 0x504(0x04)
	struct UFMODEvent* SnowClearSound; // 0x508(0x08)

	void PlaySnowClearAudio(); // Function RoofSnow.RoofSnow_C.PlaySnowClearAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Destroying(); // Function RoofSnow.RoofSnow_C.OnRep_Destroying // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Snow Visualizer(); // Function RoofSnow.RoofSnow_C.Update Snow Visualizer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server Modify Snow Amount(float SnowDelta); // Function RoofSnow.RoofSnow_C.Server Modify Snow Amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Snow Amount(); // Function RoofSnow.RoofSnow_C.OnRep_Snow Amount // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TurnOffSnow(); // Function RoofSnow.RoofSnow_C.TurnOffSnow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MultiClearSnowEffects(); // Function RoofSnow.RoofSnow_C.MultiClearSnowEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerDefrostTimer(); // Function RoofSnow.RoofSnow_C.TriggerDefrostTimer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerClearSnow(); // Function RoofSnow.RoofSnow_C.ServerClearSnow // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Defrost(); // Function RoofSnow.RoofSnow_C.Defrost // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_RoofSnow(int32_t EntryPoint); // Function RoofSnow.RoofSnow_C.ExecuteUbergraph_RoofSnow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

