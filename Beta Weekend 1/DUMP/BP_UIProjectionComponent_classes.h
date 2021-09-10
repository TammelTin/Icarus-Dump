// BlueprintGeneratedClass BP_UIProjectionComponent.BP_UIProjectionComponent_C
// Size: 0x104 (Inherited: 0xb0)
struct UBP_UIProjectionComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TSoftClassPtr<UObject> WidgetClass; // 0xb8(0x28)
	struct FMulticastInlineDelegate ProjectionUpdated; // 0xe0(0x10)
	struct UW_ProjectionWidget_C* Widget; // 0xf0(0x08)
	bool Enabled; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float NearbyDistanceStart; // 0xfc(0x04)
	float NearbyDistanceEnd; // 0x100(0x04)

	void RegisterWidget(); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.RegisterWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetWidgetLocation(struct FVector Location); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_D09A340442841CEDB6A7A58D706E1269(struct UObject* Loaded); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnLoaded_D09A340442841CEDB6A7A58D706E1269 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_085089B14AC10467FBC409BEB05D5F01(struct UObject* Loaded); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnLoaded_085089B14AC10467FBC409BEB05D5F01 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetWidget(struct TSoftClassPtr<UObject> Widget); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.SetWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_UIProjectionComponent(int32_t EntryPoint); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ExecuteUbergraph_BP_UIProjectionComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ProjectionUpdated__DelegateSignature(); // Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ProjectionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

