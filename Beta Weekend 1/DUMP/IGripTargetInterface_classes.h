// BlueprintGeneratedClass IGripTargetInterface.IGripTargetInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UIGripTargetInterface_C : UInterface {

	void FindBestCharacterUpAxisDirection(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool Success, struct FVector UpAxisDirection); // Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterUpAxisDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindBestCharacterDirection(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool Success, struct FVector BestDirection); // Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindBestCharacterLocation(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool Success, struct FVector BestLocation); // Function IGripTargetInterface.IGripTargetInterface_C.FindBestCharacterLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindBestAnimation(struct FVector TargetLocation, struct FRotator TargetRotation, bool Success, struct UAnimMontage* GripMontage); // Function IGripTargetInterface.IGripTargetInterface_C.FindBestAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindBestGripTransform(bool ForLeftHand, struct FVector TargetLocation, struct FRotator TargetRotation, struct FTransform BestTransform); // Function IGripTargetInterface.IGripTargetInterface_C.FindBestGripTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

