// Enum OculusInput.ESystemGestureBehavior
enum class ESystemGestureBehavior : uint8 {
	None = 0,
	SwapMaterial = 1,
	ESystemGestureBehavior_MAX = 2
};

// Enum OculusInput.EConfidenceBehavior
enum class EConfidenceBehavior : uint8 {
	None = 0,
	HideActor = 1,
	EConfidenceBehavior_MAX = 2
};

// Enum OculusInput.EBone
enum class EBone : uint8 {
	Wrist_Root = 0,
	Hand_Start = 0,
	Forearm_Stub = 1,
	Thumb_1 = 2,
	Thumb_2 = 3,
	Thumb_3 = 4,
	Thumb_4 = 5,
	Index_2 = 6,
	Index_3 = 7,
	Index_4 = 8,
	Middle_2 = 9,
	Middle_3 = 10,
	Middle_4 = 11,
	Ring_2 = 12,
	Ring_3 = 13,
	Ring_4 = 14,
	Pinky_1 = 15,
	Pinky_2 = 16,
	Pinky_3 = 17,
	Pinky_4 = 18,
	Thumb_Tip = 19,
	Max_Skinnable = 19,
	Index_Tip = 20,
	Middle_Tip = 21,
	Ring_Tip = 22,
	Pinky_Tip = 23,
	Hand_End = 24,
	Bone_Max = 24,
	Invalid = 25,
	EBone_MAX = 26
};

// Enum OculusInput.ETrackingConfidence
enum class ETrackingConfidence : uint8 {
	Low = 0,
	High = 1,
	ETrackingConfidence_MAX = 2
};

// Enum OculusInput.EOculusHandType
enum class EOculusHandType : uint8 {
	None = 0,
	HandLeft = 1,
	HandRight = 2,
	EOculusHandType_MAX = 3
};

// ScriptStruct OculusInput.OculusCapsuleCollider
// Size: 0x10 (Inherited: 0x00)
struct FOculusCapsuleCollider {
	struct UCapsuleComponent* Capsule; // 0x00(0x08)
	enum class EBone BoneId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

