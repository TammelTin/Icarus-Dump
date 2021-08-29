// Class LiveLinkComponents.LiveLinkControllerBase
// Size: 0x30 (Inherited: 0x28)
struct ULiveLinkControllerBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class LiveLinkComponents.LiveLinkCameraController
// Size: 0x30 (Inherited: 0x30)
struct ULiveLinkCameraController : ULiveLinkControllerBase {
};

// Class LiveLinkComponents.LiveLinkComponentController
// Size: 0x158 (Inherited: 0xb0)
struct ULiveLinkComponentController : UActorComponent {
	struct FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xb0(0x10)
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap; // 0xc0(0x50)
	bool bUpdateInEditor; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0x118(0x10)
	struct FComponentReference ComponentToControl; // 0x128(0x28)
	bool bDisableEvaluateLiveLinkWhenSpawnable; // 0x150(0x01)
	bool bEvaluateLiveLink; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
};

// Class LiveLinkComponents.LiveLinkComponentSettings
// Size: 0x78 (Inherited: 0x28)
struct ULiveLinkComponentSettings : UObject {
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> DefaultControllerForRole; // 0x28(0x50)
};

// Class LiveLinkComponents.LiveLinkLightController
// Size: 0x30 (Inherited: 0x30)
struct ULiveLinkLightController : ULiveLinkControllerBase {
};

// Class LiveLinkComponents.LiveLinkTransformController
// Size: 0x38 (Inherited: 0x30)
struct ULiveLinkTransformController : ULiveLinkControllerBase {
	struct FLiveLinkTransformControllerData TransformData; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

