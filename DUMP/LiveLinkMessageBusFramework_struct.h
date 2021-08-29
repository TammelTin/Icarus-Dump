// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// Size: 0x90 (Inherited: 0x00)
struct FLiveLinkSubjectFrameMessage {
	struct FName SubjectName; // 0x00(0x08)
	struct TArray<struct FTransform> Transforms; // 0x08(0x10)
	struct TArray<struct FLiveLinkCurveElement> Curves; // 0x18(0x10)
	struct FLiveLinkMetaData MetaData; // 0x28(0x60)
	double Time; // 0x88(0x08)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// Size: 0x28 (Inherited: 0x00)
struct FLiveLinkSubjectDataMessage {
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x00(0x20)
	struct FName SubjectName; // 0x20(0x08)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// Size: 0x08 (Inherited: 0x00)
struct FLiveLinkClearSubject {
	struct FName SubjectName; // 0x00(0x08)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// Size: 0x01 (Inherited: 0x00)
struct FLiveLinkHeartbeatMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// Size: 0x04 (Inherited: 0x00)
struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; // 0x00(0x04)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// Size: 0x40 (Inherited: 0x00)
struct FLiveLinkPongMessage {
	struct FString ProviderName; // 0x00(0x10)
	struct FString MachineName; // 0x10(0x10)
	struct FGuid PollRequest; // 0x20(0x10)
	int32_t LiveLinkVersion; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	double CreationPlatformTime; // 0x38(0x08)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// Size: 0x14 (Inherited: 0x00)
struct FLiveLinkPingMessage {
	struct FGuid PollRequest; // 0x00(0x10)
	int32_t LiveLinkVersion; // 0x10(0x04)
};

