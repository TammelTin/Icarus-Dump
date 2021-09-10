// BlueprintGeneratedClass BP_Cave.BP_Cave_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_Cave_C : ACave {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* TriggerVolume; // 0x228(0x08)
	struct UBP_CaveEntranceComponent_C* Entrance; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FName CollisionProfile; // 0x240(0x08)
	int32_t OverlapCount; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UCurveFloat* EntranceDistanceCurve; // 0x250(0x08)
	struct AIcarusPlayerController* Player; // 0x258(0x08)
	float SpelunkingDepth; // 0x260(0x04)
	bool Debug; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; // 0x268(0x10)
	struct TArray<struct FTransform> CachedLocations; // 0x278(0x10)
	struct TArray<struct UPrimitiveComponent*> Colliders; // 0x288(0x10)

	float GetSpelunkingDepth(struct FVector Location); // Function BP_Cave.BP_Cave_C.GetSpelunkingDepth // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_Cave.BP_Cave_C.OnOverlapEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor); // Function BP_Cave.BP_Cave_C.OnOverlapBegin // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh(); // Function BP_Cave.BP_Cave_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_Cave.BP_Cave_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Cave.BP_Cave_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnChildComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Cave.BP_Cave_C.OnChildComponentBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnChildComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Cave.BP_Cave_C.OnChildComponentEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_Cave.BP_Cave_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Cave.BP_Cave_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Cave(int32_t EntryPoint); // Function BP_Cave.BP_Cave_C.ExecuteUbergraph_BP_Cave // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

