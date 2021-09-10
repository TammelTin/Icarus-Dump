// BlueprintGeneratedClass BP_GroundSurfaceChecker.BP_GroundSurfaceChecker_C
// Size: 0x20c (Inherited: 0x200)
struct UBP_GroundSurfaceChecker_C : USceneComponent {
	enum class EPhysicalSurface Surface; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float TraceRadius; // 0x204(0x04)
	float SlopeAngle; // 0x208(0x04)

	void GetCurrentSurface(enum class EPhysicalSurface Surface, float WaterDepth, float SlopeAngle); // Function BP_GroundSurfaceChecker.BP_GroundSurfaceChecker_C.GetCurrentSurface // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

