// Class OculusInput.OculusHandComponent
// Size: 0x880 (Inherited: 0x7f0)
struct UOculusHandComponent : UPoseableMeshComponent {
	enum class EOculusHandType SkeletonType; // 0x7e8(0x01)
	enum class EOculusHandType MeshType; // 0x7e9(0x01)
	enum class EConfidenceBehavior ConfidenceBehavior; // 0x7ea(0x01)
	enum class ESystemGestureBehavior SystemGestureBehavior; // 0x7eb(0x01)
	struct UMaterialInterface* SystemGestureMaterial; // 0x7f0(0x08)
	bool bInitializePhysics; // 0x7f8(0x01)
	bool bUpdateHandScale; // 0x7f9(0x01)
	char pad_7FE[0x2]; // 0x7fe(0x02)
	struct UMaterialInterface* MaterialOverride; // 0x800(0x08)
	struct TMap<enum class EBone, struct FName> BoneNameMappings; // 0x808(0x50)
	struct TArray<struct FOculusCapsuleCollider> CollisionCapsules; // 0x858(0x10)
	bool bSkeletalMeshInitialized; // 0x868(0x01)
	char pad_869[0x17]; // 0x869(0x17)
};

// Class OculusInput.OculusInputFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusInputFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsPointerPoseValid(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115bce0
	bool IsHandTrackingEnabled(); // Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115bcb0
	struct TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(enum class EOculusHandType SkeletonType, struct USkinnedMeshComponent* HandComponent, float WorldToMeters); // Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x115bb60
	enum class ETrackingConfidence GetTrackingConfidence(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115ba90
	struct FTransform GetPointerPose(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetPointerPose // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x115b990
	bool GetHandSkeletalMesh(struct USkeletalMesh* HandSkeletalMesh, enum class EOculusHandType SkeletonType, enum class EOculusHandType MeshType, float WorldToMeters); // Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x115b840
	float GetHandScale(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetHandScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115b770
	enum class EOculusHandType GetDominantHand(int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetDominantHand // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115b6e0
	struct FQuat GetBoneRotation(enum class EOculusHandType DeviceHand, enum class EBone BoneId, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x115b5d0
	struct FString GetBoneName(enum class EBone BoneId); // Function OculusInput.OculusInputFunctionLibrary.GetBoneName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x115b500
};

