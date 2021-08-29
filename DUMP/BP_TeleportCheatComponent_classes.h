// BlueprintGeneratedClass BP_TeleportCheatComponent.BP_TeleportCheatComponent_C
// Size: 0xe0 (Inherited: 0xb0)
struct UBP_TeleportCheatComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UTexture2D* Texture; // 0xb8(0x08)
	struct FString Name; // 0xc0(0x10)
	struct FMulticastInlineDelegate TeleportDestroyed; // 0xd0(0x10)

	void DestroySelf(); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.DestroySelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerTeleport(); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.TriggerTeleport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_TeleportCheatComponent(int32_t EntryPoint); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.ExecuteUbergraph_BP_TeleportCheatComponent // (Final|UbergraphFunction) // @ game+0x1a05090
	void TeleportDestroyed__DelegateSignature(struct UBP_TeleportCheatComponent_C* TeleportMarker); // Function BP_TeleportCheatComponent.BP_TeleportCheatComponent_C.TeleportDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

