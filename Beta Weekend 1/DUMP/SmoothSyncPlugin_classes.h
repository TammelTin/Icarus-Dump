// Class SmoothSyncPlugin.SmoothSync
// Size: 0x370 (Inherited: 0xb0)
struct USmoothSync : UActorComponent {
	char pad_B0[0x58]; // 0xb0(0x58)
	float interpolationBackTime; // 0x108(0x04)
	enum class ExtrapolationMode ExtrapolationMode; // 0x10c(0x01)
	bool useExtrapolationTimeLimit; // 0x10d(0x01)
	char pad_10E[0x2]; // 0x10e(0x02)
	float extrapolationTimeLimit; // 0x110(0x04)
	bool useExtrapolationDistanceLimit; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float extrapolationDistanceLimit; // 0x118(0x04)
	float sendPositionThreshold; // 0x11c(0x04)
	float sendRotationThreshold; // 0x120(0x04)
	float sendScaleThreshold; // 0x124(0x04)
	float sendVelocityThreshold; // 0x128(0x04)
	float sendAngularVelocityThreshold; // 0x12c(0x04)
	float receivedPositionThreshold; // 0x130(0x04)
	float receivedRotationThreshold; // 0x134(0x04)
	float positionSnapThreshold; // 0x138(0x04)
	float rotationSnapThreshold; // 0x13c(0x04)
	float scaleSnapThreshold; // 0x140(0x04)
	float timeSmoothing; // 0x144(0x04)
	float positionLerpSpeed; // 0x148(0x04)
	float rotationLerpSpeed; // 0x14c(0x04)
	float scaleLerpSpeed; // 0x150(0x04)
	enum class SyncMode syncPosition; // 0x154(0x01)
	enum class SyncMode syncRotation; // 0x155(0x01)
	enum class SyncMode syncScale; // 0x156(0x01)
	enum class SyncMode syncVelocity; // 0x157(0x01)
	enum class SyncMode syncAngularVelocity; // 0x158(0x01)
	bool syncMovementMode; // 0x159(0x01)
	bool isPositionCompressed; // 0x15a(0x01)
	bool isRotationCompressed; // 0x15b(0x01)
	bool isScaleCompressed; // 0x15c(0x01)
	bool isVelocityCompressed; // 0x15d(0x01)
	bool isAngularVelocityCompressed; // 0x15e(0x01)
	char pad_15F[0x1]; // 0x15f(0x01)
	float sendRate; // 0x160(0x04)
	bool isUsingOriginRebasing; // 0x164(0x01)
	bool alwaysSendOrigin; // 0x165(0x01)
	bool syncOwnershipChange; // 0x166(0x01)
	char pad_167[0x91]; // 0x167(0x91)
	struct USceneComponent* realComponentToSync; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)
	float InterpolationTime; // 0x218(0x04)
	char pad_21C[0x134]; // 0x21c(0x134)
	float atRestPositionThreshold; // 0x350(0x04)
	float atRestRotationThreshold; // 0x354(0x04)
	char pad_358[0x18]; // 0x358(0x18)

	void teleport(); // Function SmoothSyncPlugin.SmoothSync.teleport // (Final|Native|Public|BlueprintCallable) // @ game+0xf5aaa0
	void SmoothSyncTeleportServerToClients(struct FVector position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate) // @ game+0xf5a750
	void SmoothSyncTeleportClientToServer(struct FVector position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0xf5a560
	void SmoothSyncEnableServerToClients(bool enable); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients // (Net|Native|Event|NetMulticast|Public|NetValidate) // @ game+0xf5a4a0
	void SmoothSyncEnableClientToServer(bool enable); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0xf5a3e0
	void setSceneComponentToSync(struct USceneComponent* theComponent); // Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync // (Final|Native|Public|BlueprintCallable) // @ game+0xf5aa10
	void ServerSendsTransformToEveryone(struct TArray<char> Value); // Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone // (Net|Native|Event|NetMulticast|Public|NetValidate) // @ game+0xf5a320
	void forceStateSendNextFrame(); // Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0xf5a9f0
	void enableSmoothSync(bool enable); // Function SmoothSyncPlugin.SmoothSync.enableSmoothSync // (Final|Native|Public|BlueprintCallable) // @ game+0xf5a960
	void ClientSendsTransformToServer(struct TArray<char> Value); // Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0xf5a260
	void clearBuffer(); // Function SmoothSyncPlugin.SmoothSync.clearBuffer // (Final|Native|Public|BlueprintCallable) // @ game+0xf5a940
};

